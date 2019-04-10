#include <QtTest>

#include "tst_Calculations.hpp"
#include "tst_OtherCalculations.hpp"

int main(int argc, char** argv)
{
	int status = 0;

	status |= QTest::qExec(new TestCalculations(), argc, argv);
	status |= QTest::qExec(new TestOtherCalculations(), argc, argv);

	return status;
}
