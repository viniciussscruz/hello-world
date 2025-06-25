#pragma once
#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {           /* <-- faz o linker C++ “falar” C */
#endif

void  mic_begin   (void);
size_t mic_record (int16_t *dst, size_t len_samples);

#ifdef __cplusplus
}
#endif