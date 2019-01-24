/*
 * neldormead.h
 *
 *  Created on: Jan 5, 2014
 *      Author: HOME
 */

#pragma once

#include "brent.h"

int nel_min(custom_function* funcpt, double* xc, int N, double* dx, double fsval, int MAXITER, int* niter,
    double eps, double* xf);
