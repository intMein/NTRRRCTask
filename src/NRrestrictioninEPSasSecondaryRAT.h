/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NRrestrictioninEPSasSecondaryRAT_H_
#define	_NRrestrictioninEPSasSecondaryRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRrestrictioninEPSasSecondaryRAT {
	NRrestrictioninEPSasSecondaryRAT_nRrestrictedinEPSasSecondaryRAT	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NRrestrictioninEPSasSecondaryRAT;

/* NRrestrictioninEPSasSecondaryRAT */
typedef long	 NRrestrictioninEPSasSecondaryRAT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRrestrictioninEPSasSecondaryRAT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRrestrictioninEPSasSecondaryRAT;
extern const asn_INTEGER_specifics_t asn_SPC_NRrestrictioninEPSasSecondaryRAT_specs_1;
asn_struct_free_f NRrestrictioninEPSasSecondaryRAT_free;
asn_struct_print_f NRrestrictioninEPSasSecondaryRAT_print;
asn_constr_check_f NRrestrictioninEPSasSecondaryRAT_constraint;
ber_type_decoder_f NRrestrictioninEPSasSecondaryRAT_decode_ber;
der_type_encoder_f NRrestrictioninEPSasSecondaryRAT_encode_der;
xer_type_decoder_f NRrestrictioninEPSasSecondaryRAT_decode_xer;
xer_type_encoder_f NRrestrictioninEPSasSecondaryRAT_encode_xer;
per_type_decoder_f NRrestrictioninEPSasSecondaryRAT_decode_uper;
per_type_encoder_f NRrestrictioninEPSasSecondaryRAT_encode_uper;
per_type_decoder_f NRrestrictioninEPSasSecondaryRAT_decode_aper;
per_type_encoder_f NRrestrictioninEPSasSecondaryRAT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRrestrictioninEPSasSecondaryRAT_H_ */
#include <asn_internal.h>
