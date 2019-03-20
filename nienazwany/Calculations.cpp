#include "Calculations.hpp"

TestedClass::TestedClass() :
		mParameters(new Parameters())
{
}

int TestedClass::Addition(int aAddendA, int aAddendb)
{
	// Addition
	return aAddendA + aAddendb;
}

unsigned TestedClass::AdditionWithNotNegativeResalt(int aAddendA, int aAddendb)
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

double TestedClass::Division(int aDividend , int aDivisor)
{
	// Division with checking denominator
	return aDividend/aDivisor;
}

int TestedClass::ProtectedFunction_1(int a)
{
	return a * a;
}

int TestedClass::ProtectedFunction_2(int a)
{
	// Exponentiation
	// a - exponent(power)
	return mParameters->ExponentiationBase ^ a;
}

int TestedClass::ProtectedFunction_3(int a)
{
	// Exponentiation
	// a - exponent(power)
	return mParameters->CountExponentionBase() ^ a;
}
