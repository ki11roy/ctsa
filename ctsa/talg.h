/*
 * talg.h
 *
 *  Created on: Jul 31, 2013
 *      Author: Rafat Hussain
 */

#pragma once

#include "conv.h"
#include "filter.h"
#include "polyroot.h"
#include "regression.h"

extern "C" {

void detrend_ma(double* sig, int N, int window, double* oup);

int poly(double* A, double* B, double* C, int lA, int lB);

int upsample(double* x, int lenx, int M, double* y);

int downsample(double* x, int lenx, int M, double* y);

void deld(int d, double* oup);

void delds(int D, int s, double* C);

int diff(double* sig, int N, int del, double* oup);

int diffs(double* sig, int N, int D, int s, double* oup);

void deseason_ma(double* sig, int N, int s, double* oup);

void psiweight(double* phi, double* theta, double* psi, int p, int q, int j);

void piweight(double* phi, double* theta, double* piw, int p, int q, int j);

void arma_autocovar(double* phi, double* theta, int p, int q, double var, double* acov, int lag);

int twacf(double* P, int MP, double* Q, int MQ, double* ACF, int MA, double* CVLI, int MXPQ1, double* ALPHA, int MXPQ);

void artrans(int p, double* oldv, double* newv);

void arinvtrans(int p, double* oldv, double* newv);

void transall(int p, int q, int P, int Q, double* oldv, double* newv);

void invtransall(int p, int q, int P, int Q, double* oldv, double* newv);

int invertroot(int q, double* ma);
}
