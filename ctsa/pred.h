/*
 * pred.h
 *
 *  Created on: Jul 14, 2014
 *      Author: Rafat Hussaint
 */

#pragma once

#include "initest.h"

void predictarima(double* zt, int lenzt, int p, int d, int q, double* phi, double* theta,
    double constant, int forlength, double* oup);
