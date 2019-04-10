#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	Object(new Calculations)
{
	ui->setupUi(this);

	ui->addend1A->setMinimum(-100);
	ui->addend1B->setMinimum(-100);
	ui->addend2A->setMinimum(-100);
	ui->addend2B->setMinimum(-100);
	ui->addend1A->setMaximum(100);
	ui->addend1B->setMaximum(100);
	ui->addend2A->setMaximum(100);
	ui->addend2B->setMaximum(100);
	ui->divident->setMinimum(-100);
	ui->divident->setMaximum(100);
	ui->divisor->setMinimum(-100);
	ui->divisor->setMaximum(100);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
	int vAddend1A = ui->addend1A->text().toInt();
	int vAddend1B= ui->addend1B->text().toInt();
	int vAddend2A= ui->addend2A->text().toInt();
	int vAddend2B= ui->addend2B->text().toInt();
	int vDividend= ui->divident->text().toInt();
	int vDivisor= ui->divisor->text().toInt();

	int vSum1 = Object->Addition(vAddend1A, vAddend1B);
	int vSum2 = Object->AdditionWithNotNegativeResalt(vAddend2A, vAddend2B);
	int vQuotient = Object->Division(vDividend, vDivisor);

	ui->Result1->setText(QString::number(vSum1));
	ui->Result2->setText(QString::number(vSum2));
	ui->Result3->setText(QString::number(vQuotient));
}
