#include "Calculations.hpp"

Calculations::Calculations() :
		mParameters(new Parameters())
{
}

int Calculations::Addition(int aAddendA, int aAddendb)
{
	// Addition
	return aAddendA + aAddendb;
}

unsigned Calculations::AdditionWithNotNegativeResalt(int aAddendA, int aAddendb)
{
	// Addition with not negative result
	int vResult = aAddendA + aAddendb;
	if (vResult >= 0)
	{
		return static_cast<unsigned>(vResult);
	}
	else
	{
		return 0;
	}
}

double Calculations::Division(int aDividend , int aDivisor)
{
	// Division with checking denominator
	return aDividend/aDivisor;
}

int Calculations::ProtectedFunction_1(int a)
{
	return a * a;
}

int Calculations::ProtectedFunction_2(int a)
{
	// Exponentiation
	// a - exponent(power)
	return mParameters->ExponentiationBase ^ a;
}

int Calculations::ProtectedFunction_3(int a)
{
	// Exponentiation
	// a - exponent(power)
	return mParameters->CountExponentionBase() ^ a;
}
