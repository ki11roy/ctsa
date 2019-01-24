/*
 * real.h
 *
 *  Created on: Apr 20, 2013
 *      Author: Rafat Hussain
 */

#pragma once

#include "hsfft.h"

typedef struct fft_real_set* fft_real_object;

fft_real_object fft_real_init(int N, int sgn);

struct fft_real_set {
    fft_object cobj;
    fft_data twiddle2[1];
};

void fft_r2c_exec(fft_real_object obj, fft_type* inp, fft_data* oup);

void fft_c2r_exec(fft_real_object obj, fft_data* inp, fft_type* oup);

void free_real_fft(fft_real_object object);
