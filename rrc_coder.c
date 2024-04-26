#include <ProtocolIE-Field.h>
#include <S1AP-PDU.h>
#include <S1SetupRequest.h>
#include <S1SetupResponse.h>
#include <InitialUEMessage.h>
#include <SupportedTAs-Item.h>
#include "conversions.h"

#define PAYLOAD_MAX 100

#define asn1cSeqAdd(VaR, PtR) \
    if (asn_sequence_add(VaR, PtR) != 0) assert(0)

ssize_t rrc_connection_setup_request_serialize(uint8_t **buffer)
{
    S1AP_PDU_t pdu;
    S1SetupRequest_t *out = NULL;
    S1SetupRequestIEs_t *ie = NULL;
    SupportedTAs_Item_t *ta = NULL;
    PLMNidentity_t *plmn = NULL;

    int mcc = 320;
    int mnc = 230;
    int mnc_digit_length = 3;
    int tac = 5;
    int eNB_id = 1;
    long default_drx = 1;

    // Define the S1AP message to encode
    memset(&pdu, 0, sizeof(pdu));
    pdu.present = S1AP_PDU_PR_initiatingMessage;
    pdu.choice.initiatingMessage.procedureCode = ProcedureCode_id_S1Setup;
    pdu.choice.initiatingMessage.criticality = Criticality_reject;
    pdu.choice.initiatingMessage.value.present = InitiatingMessage__value_PR_S1SetupRequest;
    out = &pdu.choice.initiatingMessage.value.choice.S1SetupRequest;

    /* optional */
    const char *eNB_name = "TEST_ENB";
    if (eNB_name) {
        ie = (S1SetupRequestIEs_t *)calloc(1, sizeof(S1SetupRequestIEs_t));
        ie->id = ProtocolIE_ID_id_eNBname;
        ie->criticality = Criticality_ignore;
        ie->value.present = S1SetupRequestIEs__value_PR_ENBname;
        OCTET_STRING_fromBuf(&ie->value.choice.ENBname, eNB_name,
                             strlen(eNB_name));
        asn1cSeqAdd(&out->protocolIEs.list, ie);
    }

    // mandatory
    ie = (S1SetupRequestIEs_t *)calloc(1, sizeof(S1SetupRequestIEs_t));
    ie->id = ProtocolIE_ID_id_Global_ENB_ID;
    ie->criticality = Criticality_reject;
    ie->value.present = S1SetupRequestIEs__value_PR_Global_ENB_ID;

    MCC_MNC_TO_PLMNID(mcc, mnc, mnc_digit_length, &ie->value.choice.Global_ENB_ID.pLMNidentity);
    ie->value.choice.Global_ENB_ID.eNB_ID.present = ENB_ID_PR_macroENB_ID;
    MACRO_ENB_ID_TO_BIT_STRING(eNB_id,
                               &ie->value.choice.Global_ENB_ID.eNB_ID.choice.macroENB_ID);
    asn1cSeqAdd(&out->protocolIEs.list, ie);

    /* mandatory */
    ie = (S1SetupRequestIEs_t *)calloc(1, sizeof(S1SetupRequestIEs_t));
    ie->id = ProtocolIE_ID_id_SupportedTAs;
    ie->criticality = Criticality_reject;
    ie->value.present = S1SetupRequestIEs__value_PR_SupportedTAs;
    {
        ta = (SupportedTAs_Item_t *)calloc(1, sizeof(SupportedTAs_Item_t));
        INT16_TO_OCTET_STRING(tac, &ta->tAC);
        {
            for (int i = 0; i < 1; ++i) {
                plmn = (PLMNidentity_t *)calloc(1, sizeof(PLMNidentity_t));
                MCC_MNC_TO_TBCD(mcc, mnc, mnc_digit_length, plmn);
                asn1cSeqAdd(&ta->broadcastPLMNs.list, plmn);
            }
        }
        asn1cSeqAdd(&ie->value.choice.SupportedTAs.list, ta);
    }
    asn1cSeqAdd(&out->protocolIEs.list, ie);

    /* mandatory */
    ie = (S1SetupRequestIEs_t *)calloc(1, sizeof(S1SetupRequestIEs_t));
    ie->id = ProtocolIE_ID_id_DefaultPagingDRX;
    ie->criticality = Criticality_ignore;
    ie->value.present = S1SetupRequestIEs__value_PR_PagingDRX;
    ie->value.choice.PagingDRX = default_drx;
    asn1cSeqAdd(&out->protocolIEs.list, ie);

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_S1AP_PDU, &pdu);
    free(res.buffer);
    memset(&res, 0, sizeof(res));
    res = asn_encode_to_new_buffer(NULL, ATS_ALIGNED_CANONICAL_PER, &asn_DEF_S1AP_PDU, &pdu);
    *buffer = res.buffer;
    ssize_t len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing s1ap pdu\n");
        exit(1);
    }

    //xer_fprint(stdout, &asn_DEF_S1AP_PDU, &pdu);

    return len;
}