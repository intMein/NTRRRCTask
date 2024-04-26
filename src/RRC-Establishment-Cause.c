/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRC-Establishment-Cause.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RRC_Establishment_Cause_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_Establishment_Cause_value2enum_1[] = {
	{ 0,	9,	"emergency" },
	{ 1,	18,	"highPriorityAccess" },
	{ 2,	9,	"mt-Access" },
	{ 3,	13,	"mo-Signalling" },
	{ 4,	7,	"mo-Data" },
	{ 5,	20,	"delay-TolerantAccess" },
	{ 6,	12,	"mo-VoiceCall" },
	{ 7,	16,	"mo-ExceptionData" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RRC_Establishment_Cause_enum2value_1[] = {
	5,	/* delay-TolerantAccess(5) */
	0,	/* emergency(0) */
	1,	/* highPriorityAccess(1) */
	4,	/* mo-Data(4) */
	7,	/* mo-ExceptionData(7) */
	3,	/* mo-Signalling(3) */
	6,	/* mo-VoiceCall(6) */
	2	/* mt-Access(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RRC_Establishment_Cause_specs_1 = {
	asn_MAP_RRC_Establishment_Cause_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_Establishment_Cause_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_Establishment_Cause_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RRC_Establishment_Cause = {
	"RRC-Establishment-Cause",
	"RRC-Establishment-Cause",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_Establishment_Cause_tags_1,
	sizeof(asn_DEF_RRC_Establishment_Cause_tags_1)
		/sizeof(asn_DEF_RRC_Establishment_Cause_tags_1[0]), /* 1 */
	asn_DEF_RRC_Establishment_Cause_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_Establishment_Cause_tags_1)
		/sizeof(asn_DEF_RRC_Establishment_Cause_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RRC_Establishment_Cause_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_Establishment_Cause_specs_1	/* Additional specs */
};
