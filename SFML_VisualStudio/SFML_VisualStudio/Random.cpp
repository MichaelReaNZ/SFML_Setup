#include <cstdlib>

#include "random.h"

// Returns a random number in r.
int Random(const TRange& _r)
{
   return (_r.iLow + rand() % ((_r.iHigh + 1) - _r.iLow));
}

// Returns a random number in [low, high].
int Random(int _iLow, int _iHigh)
{
   return (_iLow + rand() % ((_iHigh + 1) - _iLow));
}