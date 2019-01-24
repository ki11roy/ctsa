#pragma once

#include "secant.h"

double brent_zero(custom_funcuni* funcuni, double a, double b, double tol, double eps);

double brent_local_min(custom_funcuni* funcuni, double a, double b, double t, double eps, double* x);
