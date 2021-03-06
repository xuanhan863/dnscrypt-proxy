
#ifndef __ALT_ARC4RANDOM_H__
#define __ALT_ARC4RANDOM_H__ 1

#include <stdint.h>
#include <stdlib.h>

#ifdef __OpenBSD__

#define alt_arc4random() arc4random()
#define alt_arc4random_stir() arc4random_stir()
#define alt_arc4random_addrandom(A, B) arc4random_addrandom(A, B)
#define alt_arc4random_uniform(A) arc4random_uniform(A)
#define alt_arc4random_buf(A, B) arc4random_buf(A, B)

#else

uint32_t  alt_arc4random(void);
void      alt_arc4random_stir(void);
void      alt_arc4random_addrandom(unsigned char *, int);
uint32_t  alt_arc4random_uniform(uint32_t);
void      alt_arc4random_buf(void *, size_t);

#endif

int       alt_arc4random_close(void);

#endif
