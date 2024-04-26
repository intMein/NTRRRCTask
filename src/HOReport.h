/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_HOReport_H_
#define	_HOReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HoType.h"
#include "HoReportType.h"
#include "IRAT-Cell-ID.h"
#include "CandidateCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CandidatePCIList;

/* HOReport */
typedef struct HOReport {
	HoType_t	 hoType;
	HoReportType_t	 hoReportType;
	IRAT_Cell_ID_t	 hosourceID;
	IRAT_Cell_ID_t	 hoTargetID;
	CandidateCellList_t	 candidateCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CandidatePCIList	*candidatePCIList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HOReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HOReport;
extern asn_SEQUENCE_specifics_t asn_SPC_HOReport_specs_1;
extern asn_TYPE_member_t asn_MBR_HOReport_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _HOReport_H_ */
#include <asn_internal.h>