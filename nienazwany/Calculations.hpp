#ifndef TESTEDCLASS_HPP
#define TESTEDCLASS_HPP

#include <QString>
#include "Parameters.hpp"

class TestedClass
{
public:
	TestedClass();

	int Addition(int aAddendA, int aAddendb);
	unsigned AdditionWithNotNegativeResalt(int aAddendA, int aAddendb);
	double Division(int aDividend , int aDivisor);

protected:
	int ProtectedFunction_1(int a);
	int ProtectedFunction_2(int a);
	int ProtectedFunction_3(int a);

	Parameters *mParameters;
};

#endif // TESTEDCLASS_HPP
