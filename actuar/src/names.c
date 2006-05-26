/*  ===== actuar: an R package for Actuarial Science =====
 *
 *  Table of functions internal to the package. First element is an
 *  argument to one of do_math or do_random, functions callable from
 *  .External(); second element is the C function actually called;
 *  third element is a code used in the latter.
 *
 *  Idea taken from R sources (see .../src/main/names.c).
 *
 *  AUTHOR: Vincent Goulet <vincent.goulet@act.ulaval.ca>
 */

#include <Rinternals.h>
#include "actuar.h"

FUNTAB fun_tab[] = { 
    /* DENSITY, CUMULATIVE PROBABILITY AND QUANTILE FUNCTIONS */
    /* One parameter distributions */
    {"dinvexp",		do_dpq1,	1},
    /* Two parameter distributions */
    {"dinvparalogis",	do_dpq2,	1},
    {"dinvpareto",	do_dpq2,	4},
    {"dinvweibull",	do_dpq2,	7},
    {"dllogis",		do_dpq2,	10},
    {"dparalogis",	do_dpq2,	13},
    {"dpareto",		do_dpq2,	16},
    {"ppareto",		do_dpq2,	17},
    {"qpareto",		do_dpq2,	18},
    {"dpareto1",	do_dpq2,	19},
    {"ppareto1",	do_dpq2,	20},
    {"qpareto1",	do_dpq2,	21},
    /* Three parameter distributions */
    {"dburr",	        do_dpq3,	1},
    {"pburr",	        do_dpq3,	2},
    {"qburr",	        do_dpq3,	3},
    {"dgenpareto",	do_dpq3,	4},
    {"pgenpareto",	do_dpq3,	5},
    {"qgenpareto",	do_dpq3,	6},
    {"dinvburr",	do_dpq3,	7},
    /* Four parameter distributions */
    {"dtrbeta",		do_dpq4,	1},
    {"ptrbeta",		do_dpq4,	2},
    {"qtrbeta",		do_dpq4,	3},
	
    /* RANDOM NUMBERS FUNCTIONS */
    /* One parameter distributions */
    {"rinvexp", 	do_random1,	1},
    /* Two parameter distributions */
    {"rinvparalogis", 	do_random2,	1},
    {"rinvpareto", 	do_random2,	2},
    {"rinvweibull",	do_random2,	3},               
    {"rllogis", 	do_random2,	4},
    {"rparalogis", 	do_random2,	5},
    {"rpareto", 	do_random2,	6},
    {"rpareto1", 	do_random2,	7},
    /* Three parameter distributions */
    {"rburr", 		do_random3,	1},
    {"rgenpareto", 	do_random3,	2},
    {"rinvburr", 	do_random3,	3},
    /* Four parameter distributions */
    {"rtrbeta", 	do_random4,	1},
    {0, 0, 0}
};
