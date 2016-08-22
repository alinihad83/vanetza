/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/home/rieblr/work/car2x/vanetza/vanetza/asn1/cdd_ts102894-2v1.2.1.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_HardShoulderStatus_H_
#define	_HardShoulderStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HardShoulderStatus {
	HardShoulderStatus_availableForStopping	= 0,
	HardShoulderStatus_closed	= 1,
	HardShoulderStatus_availableForDriving	= 2
} e_HardShoulderStatus;

/* HardShoulderStatus */
typedef long	 HardShoulderStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HardShoulderStatus;
asn_struct_free_f HardShoulderStatus_free;
asn_struct_print_f HardShoulderStatus_print;
asn_constr_check_f HardShoulderStatus_constraint;
ber_type_decoder_f HardShoulderStatus_decode_ber;
der_type_encoder_f HardShoulderStatus_encode_der;
xer_type_decoder_f HardShoulderStatus_decode_xer;
xer_type_encoder_f HardShoulderStatus_encode_xer;
per_type_decoder_f HardShoulderStatus_decode_uper;
per_type_encoder_f HardShoulderStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HardShoulderStatus_H_ */
#include <asn_internal.h>
