/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SONtransferCause_H_
#define	_SONtransferCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellLoadReportingCause.h"
#include "HOReportingCause.h"
#include "CellActivationCause.h"
#include "CellStateIndicationCause.h"
#include "FailureEventReportingCause.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SONtransferCause_PR {
	SONtransferCause_PR_NOTHING,	/* No components present */
	SONtransferCause_PR_cellLoadReporting,
	/* Extensions may appear below */
	SONtransferCause_PR_multiCellLoadReporting,
	SONtransferCause_PR_eventTriggeredCellLoadReporting,
	SONtransferCause_PR_hOReporting,
	SONtransferCause_PR_eutranCellActivation,
	SONtransferCause_PR_energySavingsIndication,
	SONtransferCause_PR_failureEventReporting
} SONtransferCause_PR;

/* SONtransferCause */
typedef struct SONtransferCause {
	SONtransferCause_PR present;
	union SONtransferCause_u {
		CellLoadReportingCause_t	 cellLoadReporting;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		CellLoadReportingCause_t	 multiCellLoadReporting;
		CellLoadReportingCause_t	 eventTriggeredCellLoadReporting;
		HOReportingCause_t	 hOReporting;
		CellActivationCause_t	 eutranCellActivation;
		CellStateIndicationCause_t	 energySavingsIndication;
		FailureEventReportingCause_t	 failureEventReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SONtransferCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SONtransferCause;

#ifdef __cplusplus
}
#endif

#endif	/* _SONtransferCause_H_ */
#include <asn_internal.h>