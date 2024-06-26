/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Cdma2000HORequiredIndication_H_
#define	_Cdma2000HORequiredIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Cdma2000HORequiredIndication {
	Cdma2000HORequiredIndication_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Cdma2000HORequiredIndication;

/* Cdma2000HORequiredIndication */
typedef long	 Cdma2000HORequiredIndication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Cdma2000HORequiredIndication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Cdma2000HORequiredIndication;
extern const asn_INTEGER_specifics_t asn_SPC_Cdma2000HORequiredIndication_specs_1;
asn_struct_free_f Cdma2000HORequiredIndication_free;
asn_struct_print_f Cdma2000HORequiredIndication_print;
asn_constr_check_f Cdma2000HORequiredIndication_constraint;
ber_type_decoder_f Cdma2000HORequiredIndication_decode_ber;
der_type_encoder_f Cdma2000HORequiredIndication_encode_der;
xer_type_decoder_f Cdma2000HORequiredIndication_decode_xer;
xer_type_encoder_f Cdma2000HORequiredIndication_encode_xer;
per_type_decoder_f Cdma2000HORequiredIndication_decode_uper;
per_type_encoder_f Cdma2000HORequiredIndication_encode_uper;
per_type_decoder_f Cdma2000HORequiredIndication_decode_aper;
per_type_encoder_f Cdma2000HORequiredIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Cdma2000HORequiredIndication_H_ */
#include <asn_internal.h>
