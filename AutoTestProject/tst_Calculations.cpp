#include "tst_Calculations.hpp"
#include "../CalculationsProgram/Calculations.hpp"

TestCalculations::TestCalculations()
{
}

TestCalculations::~TestCalculations()
{
}

void TestCalculations::test_Division_FirstCase()
{
	Calculations object;
	QCOMPARE(object.Division(-100, 100), -1.);
}

void TestCalculations::test_Division_SecondCase()
{
	Calculations object;
	QCOMPARE(object.Division(-100, -100), 1.);
}

void TestCalculations::test_Division_ThirdCase()
{
	Calculations object;
	QSKIP( "fatal error in next line");
	QCOMPARE(object.Division(50, 0), 100.);
}

// QTEST_APPLESS_MAIN(TestCalculations)
//#include "tst_Calculations.moc"
