/*
 * em_inflate.h - fast in-memory inflate (gzip/zlib decompressor) definitions
 *
 * Copyright (C) 2019 Emmanuel Marty
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * CHANGELOG
 *
 *    2024-05-19 Finwo
 *      - Move source files from lib/ to src/
 *      - Auto-formatting of source files
 *      - Using dynamic buffer as decompression target
 */

#ifndef _EM_INFLATE_H
#define _EM_INFLATE_H

#include <sys/types.h>
#include <stdlib.h>

#include "tidwall/buf.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Inflate gzip or zlib data
 *
 * @param compressed  pointer to a buffer containing the compressed data
 *
 * @return pointer to a buffer containing the decompressed data, or NULL in case of an error
 */
struct buf * em_inflate(const struct buf *compressed);

#ifdef __cplusplus
}
#endif

#endif /* _EM_INFLATE_H */
