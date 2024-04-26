/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SONInformation_H_
#define	_SONInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SONInformationRequest.h"
#include "SONInformationReply.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SONInformation_PR {
	SONInformation_PR_NOTHING,	/* No components present */
	SONInformation_PR_sONInformationRequest,
	SONInformation_PR_sONInformationReply
	/* Extensions may appear below */
	
} SONInformation_PR;

/* SONInformation */
typedef struct SONInformation {
	SONInformation_PR present;
	union SONInformation_u {
		SONInformationRequest_t	 sONInformationRequest;
		SONInformationReply_t	 sONInformationReply;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SONInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SONInformation;
extern asn_CHOICE_specifics_t asn_SPC_SONInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SONInformation_1[2];
extern asn_per_constraints_t asn_PER_type_SONInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SONInformation_H_ */
#include <asn_internal.h>