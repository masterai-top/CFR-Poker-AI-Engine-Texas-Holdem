#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "RandGen.h"

#ifdef CYGWIN
#define srand48 srand
#endif

void InitRandFixed(void)
{
  srand48(0);
}

void InitRand(void)
{
  srand48(time(0));
}

void SeedRand(int s)
{
  srand48(s);
}

int RandBetween(int lower, int upper)
{
  double frac;

#ifdef CYGWIN
  frac = ((float)RandGen() / ((float)RAND_MAX + 1.0));
#else
  frac = drand48();
#endif
  return lower + (int)(frac * ((double)(upper + 1 - lower)));
}

double RandZeroToOne(void)
{
#ifdef CYGWIN
  return ((float)RandGen() / ((float)RAND_MAX + 1.0));
#else
  return drand48();
#endif
}
