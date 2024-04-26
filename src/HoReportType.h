/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_HoReportType_H_
#define	_HoReportType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HoReportType {
	HoReportType_unnecessaryhotoanotherrat	= 0,
	/*
	 * Enumeration is extensible
	 */
	HoReportType_earlyirathandover	= 1
} e_HoReportType;

/* HoReportType */
typedef long	 HoReportType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HoReportType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HoReportType;
extern const asn_INTEGER_specifics_t asn_SPC_HoReportType_specs_1;
asn_struct_free_f HoReportType_free;
asn_struct_print_f HoReportType_print;
asn_constr_check_f HoReportType_constraint;
ber_type_decoder_f HoReportType_decode_ber;
der_type_encoder_f HoReportType_encode_der;
xer_type_decoder_f HoReportType_decode_xer;
xer_type_encoder_f HoReportType_encode_xer;
per_type_decoder_f HoReportType_decode_uper;
per_type_encoder_f HoReportType_encode_uper;
per_type_decoder_f HoReportType_decode_aper;
per_type_encoder_f HoReportType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HoReportType_H_ */
#include <asn_internal.h>