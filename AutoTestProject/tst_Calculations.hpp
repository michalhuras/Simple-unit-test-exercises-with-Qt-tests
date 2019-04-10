#ifndef TST_CALCULATIONS_HPP
#define TST_CALCULATIONS_HPP

#include <QtTest>

class TestCalculations : public QObject
{
	Q_OBJECT

public:
	TestCalculations();
	~TestCalculations();

private slots:
	void test_Division_FirstCase();
	void test_Division_SecondCase();
	void test_Division_ThirdCase();
};

#endif // TST_CALCULATIONS_HPP
