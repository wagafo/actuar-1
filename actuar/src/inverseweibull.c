/*  ===== actuar: an R package for Actuarial Science =====
 *
 *  Fonctions to compute density, cumulative distribution and quantile
 *  fonctions of the Pareto distribution, and to simulate random
 *  variates. See ../R/pareto.R for details.
 *
 *  AUTHORS: Mathieu Pigeon and Vincent Goulet <vincent.goulet@act.ulaval.ca>
 */

#include <R.h>
#include <Rmath.h>
#include "locale.h"

double rinverseweibull(double scale, double tau)
{
    if (!R_FINITE(scale) ||
	!R_FINITE(tau) ||
	scale <= 0.0 ||
	tau <= 0.0)
	error("invalid arguments");

    return tau * scale / log(1.0 / unif_rand());
}