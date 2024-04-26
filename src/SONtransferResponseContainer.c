/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "s1ap.asn1"
 * 	`asn1c -D src -pdu=S1SetupRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SONtransferResponseContainer.h"

static asn_per_constraints_t asn_PER_type_SONtransferResponseContainer_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SONtransferResponseContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.cellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellLoadReportingResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.multiCellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiCellLoadReportingResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiCellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.eventTriggeredCellLoadReporting),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTriggeredCellLoadReportingResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventTriggeredCellLoadReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.hOReporting),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hOReporting"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.eutranCellActivation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellActivationResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutranCellActivation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.energySavingsIndication),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"energySavingsIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONtransferResponseContainer, choice.failureEventReporting),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureEventReporting"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SONtransferResponseContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiCellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventTriggeredCellLoadReporting */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hOReporting */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eutranCellActivation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* energySavingsIndication */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* failureEventReporting */
};
static asn_CHOICE_specifics_t asn_SPC_SONtransferResponseContainer_specs_1 = {
	sizeof(struct SONtransferResponseContainer),
	offsetof(struct SONtransferResponseContainer, _asn_ctx),
	offsetof(struct SONtransferResponseContainer, present),
	sizeof(((struct SONtransferResponseContainer *)0)->present),
	asn_MAP_SONtransferResponseContainer_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SONtransferResponseContainer = {
	"SONtransferResponseContainer",
	"SONtransferResponseContainer",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SONtransferResponseContainer_constr_1, CHOICE_constraint },
	asn_MBR_SONtransferResponseContainer_1,
	7,	/* Elements count */
	&asn_SPC_SONtransferResponseContainer_specs_1	/* Additional specs */
};
