#pragma once
#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void spk_begin(void);
void spk_play (int16_t *src, size_t len_samples);

#ifdef __cplusplus
}
#endif