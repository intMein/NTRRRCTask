/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UL_CP_SecurityInformation_H_
#define	_UL_CP_SecurityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-NAS-MAC.h"
#include "UL-NAS-Count.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UL-CP-SecurityInformation */
typedef struct UL_CP_SecurityInformation {
	UL_NAS_MAC_t	 ul_NAS_MAC;
	UL_NAS_Count_t	 ul_NAS_Count;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CP_SecurityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CP_SecurityInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_CP_SecurityInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_CP_SecurityInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CP_SecurityInformation_H_ */
#include <asn_internal.h>
