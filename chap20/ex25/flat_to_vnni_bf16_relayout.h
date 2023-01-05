/*
 * Copyright (C) 2022 by Intel Corporation
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef FLAT_TO_VNNI_BF16_RELAYOUT_H
#define FLAT_TO_VNNI_BF16_RELAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef uint16_t bfloat_16;

#ifdef __cplusplus
extern "C" {
#endif
void flat_to_vnni_bf16_relayout(const bfloat_16 *input, bfloat_16 *output);
bool flat_to_vnni_bf16_relayout_check(const bfloat_16 *input,
				      bfloat_16 *output);
#ifdef __cplusplus
}
#endif

#endif
