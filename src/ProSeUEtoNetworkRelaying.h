/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ProSeUEtoNetworkRelaying_H_
#define	_ProSeUEtoNetworkRelaying_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProSeUEtoNetworkRelaying {
	ProSeUEtoNetworkRelaying_authorized	= 0,
	ProSeUEtoNetworkRelaying_not_authorized	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ProSeUEtoNetworkRelaying;

/* ProSeUEtoNetworkRelaying */
typedef long	 ProSeUEtoNetworkRelaying_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProSeUEtoNetworkRelaying_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProSeUEtoNetworkRelaying;
extern const asn_INTEGER_specifics_t asn_SPC_ProSeUEtoNetworkRelaying_specs_1;
asn_struct_free_f ProSeUEtoNetworkRelaying_free;
asn_struct_print_f ProSeUEtoNetworkRelaying_print;
asn_constr_check_f ProSeUEtoNetworkRelaying_constraint;
ber_type_decoder_f ProSeUEtoNetworkRelaying_decode_ber;
der_type_encoder_f ProSeUEtoNetworkRelaying_encode_der;
xer_type_decoder_f ProSeUEtoNetworkRelaying_decode_xer;
xer_type_encoder_f ProSeUEtoNetworkRelaying_encode_xer;
per_type_decoder_f ProSeUEtoNetworkRelaying_decode_uper;
per_type_encoder_f ProSeUEtoNetworkRelaying_encode_uper;
per_type_decoder_f ProSeUEtoNetworkRelaying_decode_aper;
per_type_encoder_f ProSeUEtoNetworkRelaying_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProSeUEtoNetworkRelaying_H_ */
#include <asn_internal.h>