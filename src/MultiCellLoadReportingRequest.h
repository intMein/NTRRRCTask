/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MultiCellLoadReportingRequest_H_
#define	_MultiCellLoadReportingRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RequestedCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MultiCellLoadReportingRequest */
typedef struct MultiCellLoadReportingRequest {
	RequestedCellList_t	 requestedCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiCellLoadReportingRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiCellLoadReportingRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_MultiCellLoadReportingRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiCellLoadReportingRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MultiCellLoadReportingRequest_H_ */
#include <asn_internal.h>