/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Global_RAN_NODE_ID_H_
#define	_Global_RAN_NODE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GNB.h"
#include "NG-eNB.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Global_RAN_NODE_ID_PR {
	Global_RAN_NODE_ID_PR_NOTHING,	/* No components present */
	Global_RAN_NODE_ID_PR_gNB,
	Global_RAN_NODE_ID_PR_ng_eNB
	/* Extensions may appear below */
	
} Global_RAN_NODE_ID_PR;

/* Global-RAN-NODE-ID */
typedef struct Global_RAN_NODE_ID {
	Global_RAN_NODE_ID_PR present;
	union Global_RAN_NODE_ID_u {
		GNB_t	 gNB;
		NG_eNB_t	 ng_eNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Global_RAN_NODE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Global_RAN_NODE_ID;
extern asn_CHOICE_specifics_t asn_SPC_Global_RAN_NODE_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Global_RAN_NODE_ID_1[2];
extern asn_per_constraints_t asn_PER_type_Global_RAN_NODE_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Global_RAN_NODE_ID_H_ */
#include <asn_internal.h>