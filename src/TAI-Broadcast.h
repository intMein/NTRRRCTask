/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TAI_Broadcast_H_
#define	_TAI_Broadcast_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TAI_Broadcast_Item;

/* TAI-Broadcast */
typedef struct TAI_Broadcast {
	A_SEQUENCE_OF(struct TAI_Broadcast_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAI_Broadcast_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAI_Broadcast;
extern asn_SET_OF_specifics_t asn_SPC_TAI_Broadcast_specs_1;
extern asn_TYPE_member_t asn_MBR_TAI_Broadcast_1[1];
extern asn_per_constraints_t asn_PER_type_TAI_Broadcast_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TAI_Broadcast_H_ */
#include <asn_internal.h>