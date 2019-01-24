/*
* polyroot.h
*
*  Created on: August 21, 2014
*      Author: Rafat Hussain
*/

#pragma once

#include <cfloat>

#include "matrix.h"
#include "stats.h"

int cpoly(double* OPR, double* OPI, int DEGREE, double* ZEROR, double* ZEROI);

int polyroot(double* coeff, int DEGREE, double* ZEROR, double* ZEROI); // Find roots of a real polynomial

int cpolyroot(double* rcoeff, double* icoeff, int DEGREE, double* ZEROR, double* ZEROI); // Find roots of a complex polynomial
