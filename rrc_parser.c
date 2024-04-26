#include <ProtocolIE-Field.h>
#include <S1AP-PDU.h>
#include <S1SetupRequest.h>
#include <SupportedTAs-Item.h>
#include "conversions.h"
#include "rrc_parser.h"

int rrc_connection_setup_request_deserialize(uint8_t *buffer, size_t buffer_size) {
    S1AP_PDU_t *pdu = NULL;

    asn_dec_rval_t rval;
    rval = asn_decode(NULL, ATS_ALIGNED_CANONICAL_PER, &asn_DEF_S1AP_PDU, (void **)&pdu, buffer, buffer_size);

    if (rval.code != RC_OK) {
        fprintf(stderr, "Decoding failed: %s\n", rval.code == RC_FAIL ? "Failure" : "Incomplete");
        return -1;
    }

    xer_fprint(stdout, &asn_DEF_S1AP_PDU, pdu);

    ASN_STRUCT_FREE(asn_DEF_S1AP_PDU, pdu);

    return 0;
}