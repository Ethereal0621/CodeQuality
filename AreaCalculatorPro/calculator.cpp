#include "calculator.h"
#include "ui_calculator.h"
#include <cmath>
#include <QMessageBox>

extern int graphicsFlag=1;
extern int inputUnitFlag=1;
extern int outputUnitFlag=1;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    resize(300,400);

    hide();
  /**
   * 设置六个case中的参数对应六种图形.
   */
    connect(ui->square,&QAction::triggered,this,[=]()
        {
            hide();
            squareShow();
            graphicsFlag=1;
        });

    connect(ui->circle,&QAction::triggered,this,[=]()
        {
            hide();
            circleShow();
            graphicsFlag=2;
        });

    connect(ui->rectangle,&QAction::triggered,this,[=]()
        {
            hide();
            rectangleShow();
            graphicsFlag=3;
        });

    connect(ui->triangle,&QAction::triggered,this,[=]()
        {
            hide();
            triangleShow();
            graphicsFlag=4;
        });

    connect(ui->parallelogram,&QAction::triggered,this,[=]()
        {
            hide();
            parallelogramShow();
            graphicsFlag=5;
        });

    connect(ui->ellipse,&QAction::triggered,this,[=]()
        {
            hide();
            ellipseShow();
            graphicsFlag=6;
        });
    /**
     * 设置单位选择参数.
     */
    connect(ui->icm,&QAction::triggered,this,[=]()
        {
            inputUnitFlag=1;
            ui->icm->setText("厘米√");
            ui->iinches->setText("英寸");
        });

    connect(ui->iinches,&QAction::triggered,this,[=]()
        {
            inputUnitFlag=2;
            ui->icm->setText("厘米");
            ui->iinches->setText("英寸√");
        });

    connect(ui->ocm,&QAction::triggered,this,[=]()
        {
            outputUnitFlag=1;
            ui->ocm->setText("厘米√");
            ui->oinches->setText("英寸");
            ui->result->setPlaceholderText("图形面积(cm^2)");
        });

    connect(ui->oinches,&QAction::triggered,this,[=]()
        {
            outputUnitFlag=2;
            ui->ocm->setText("厘米");
            ui->oinches->setText("英寸√");
            ui->result->setPlaceholderText("图形面积(inches^2)");
        });

    connect(ui->information,&QAction::triggered,this,[=]()
        {
            QMessageBox::about(this,"信息","这里什么都没有噢？！");
        });

    connect(ui->term,&QAction::triggered,this,[=]()
        {
            QMessageBox::about(this,"团队","所以爱会消失对不队");
        });

    connect(ui->version,&QAction::triggered,this,[=]()
        {
            QMessageBox::about(this,"版本","v1.0");
        });

    connect(ui->state,&QAction::triggered,this,[=]()
        {
            QMessageBox::about(this,"说明","输入输出单位可不统一");
        });

    connect(ui->calculator, &QPushButton::clicked, this, [=]()
        {
            QString str1 = ui->value1->text();
            double vvalue1 = str1.toDouble();

            QString str2 = ui->value2->text();
            double vvalue2 = str2.toDouble();

            ui->result->setText(QString::number(resultUnitTransform(inputUnitFlag, outputUnitFlag, resultCalculator(graphicsFlag, vvalue1, vvalue2)),'f',3));
        });

}
/**
 * 正方形显示函数.
 */
void Calculator::squareShow()
{
    ui->label->setText("正方形");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入边长");
    ui->value1->show();

    ui->value2->setPlaceholderText("当前状态下禁用");
    ui->value2->setEnabled(false);
    ui->value2->show();

    if(outputUnitFlag==1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}
/**
 * 圆形显示函数.
 */
void Calculator::circleShow()
{
    ui->label->setText("圆形");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入半径");
    ui->value1->show();

    ui->value2->setPlaceholderText("当前状态下禁用");
    ui->value2->setEnabled(false);
    ui->value2->show();

    if (outputUnitFlag == 1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}
/**
 * 长方形显示函数.
 */
void Calculator::rectangleShow()
{
    ui->label->setText("长方形");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入长");
    ui->value1->show();

    ui->value2->setPlaceholderText("此处输入宽");
    ui->value2->setEnabled(true);
    ui->value2->show();

    if(outputUnitFlag==1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}
/**
 * 三角形显示函数.
 */
void Calculator::triangleShow()
{
    ui->label->setText("三角形");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入底");
    ui->value1->show();

    ui->value2->setPlaceholderText("此处输入高");
    ui->value2->setEnabled(true);
    ui->value2->show();

    if(outputUnitFlag==1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}
/**
 * 平行四边形显示函数.
 */
void Calculator::parallelogramShow()
{
    ui->label->setText("平行四边形");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入底");
    ui->value1->show();

    ui->value2->setPlaceholderText("此处输入高");
    ui->value2->setEnabled(true);
    ui->value2->show();

    if(outputUnitFlag==1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}
/**
 * 椭圆显示函数.
 */
void Calculator::ellipseShow()
{
    ui->label->setText("椭圆");
    ui->label->show();

    ui->value1->setPlaceholderText("此处输入短轴");
    ui->value1->show();

    ui->value2->setPlaceholderText("此处输入长轴");
    ui->value2->setEnabled(true);
    ui->value2->show();

    if(outputUnitFlag==1)
        ui->result->setPlaceholderText("图形面积(cm^2)");
    else
        ui->result->setPlaceholderText("图形面积(inches^2)");

    ui->result->show();

    ui->calculator->show();
}

void Calculator::hide()
{
    ui->label->hide();

    ui->value1->hide();
    ui->value1->clear();

    ui->value2->hide();
    ui->value2->clear();

    ui->result->hide();
    ui->result->clear();

    ui->calculator->hide();
}

double Calculator::resultCalculator(int graphicsFlag, double value1, double value2)
{
    switch (graphicsFlag)
    {
        /**
         * 正方形面积.
         */
    case 1:
        return value1 * value1;
        /**
         * 圆面积.
         */
    case 2:
        return 3.1415926535 * value1 * value1;
        /**
         * 长方形面积.
         */
    case 3:
        return value1 * value2;
        /**
         * 三角形面积.
         */
    case 4:
        return 0.5 * value1 * value2;
        /**
         * 平行四边形面积.
         */
    case 5:
        return value1 * value2;
        /**
         * 椭圆面积.
         */
    case 6:
        return 3.1415926535 * value1 * value2;
    }
}
/**
 * 单位转化.
 */
double Calculator::resultUnitTransform(int inputUnitFlag, int outputUnitFlag, double calculator)
{
    if (inputUnitFlag == 1 && outputUnitFlag == 1)
        return calculator;

    else if (inputUnitFlag == 1 && outputUnitFlag == 2)
        return calculator / 2.54 / 2.54;

    else if (inputUnitFlag == 2 && outputUnitFlag == 1)
        return calculator * 2.54 * 2.54;

    else if (inputUnitFlag == 2 && outputUnitFlag == 2)
        return calculator;
}

Calculator::~Calculator()
{
    delete ui;
}

