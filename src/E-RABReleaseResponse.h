/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_E_RABReleaseResponse_H_
#define	_E_RABReleaseResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-RABReleaseResponse */
typedef struct E_RABReleaseResponse {
	ProtocolIE_Container_7276P17_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABReleaseResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABReleaseResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABReleaseResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABReleaseResponse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABReleaseResponse_H_ */
#include <asn_internal.h>