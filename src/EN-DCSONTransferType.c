/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "EN-DCSONTransferType.h"

asn_per_constraints_t asn_PER_type_EN_DCSONTransferType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EN_DCSONTransferType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EN_DCSONTransferType, choice.request),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DCTransferTypeRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"request"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EN_DCSONTransferType, choice.reply),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DCTransferTypeReply,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reply"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_EN_DCSONTransferType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* request */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reply */
};
asn_CHOICE_specifics_t asn_SPC_EN_DCSONTransferType_specs_1 = {
	sizeof(struct EN_DCSONTransferType),
	offsetof(struct EN_DCSONTransferType, _asn_ctx),
	offsetof(struct EN_DCSONTransferType, present),
	sizeof(((struct EN_DCSONTransferType *)0)->present),
	asn_MAP_EN_DCSONTransferType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EN_DCSONTransferType = {
	"EN-DCSONTransferType",
	"EN-DCSONTransferType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_EN_DCSONTransferType_constr_1, CHOICE_constraint },
	asn_MBR_EN_DCSONTransferType_1,
	2,	/* Elements count */
	&asn_SPC_EN_DCSONTransferType_specs_1	/* Additional specs */
};
