/*
 * lls.h
 *
 *  Created on: Apr 14, 2014
 *      Author: HOME
 */

#pragma once

#include "neldermead.h"

int lls_normal(double* A, double* b, int M, int N, double* x);

int lls_qr(double* A, double* b, int M, int N, double* xo);

void bidiag(double* A, int M, int N);

void bidiag_orth(double* A, int M, int N, double* U, double* V);

int svd_gr(double* A, int M, int N, double* U, double* V, double* q);

int svd_gr2(double* A, int M, int N, double* U, double* V, double* q);

int minfit(double* AB, int M, int N, int P, double* q);

int lls_svd(double* Ai, double* bi, int M, int N, double* xo);

int lls_svd2(double* Ai, double* bi, int M, int N, double* xo);
