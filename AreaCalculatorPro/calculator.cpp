/*****************************************************************//**
 * @file   calculator.cpp
 * @brief  通用面积计算器窗口显示及计算内核函数
 * @version   1.0
 * @author 所以爱会消失对不队
 * @date   August 2021
 *********************************************************************/
#include "calculator.h"
#include "ui_calculator.h"
#include <cmath>
#include <QMessageBox>

/// <summary>
/// 整型全局变量
/// 标志待计算图形类型
/// </summary>
extern int graphicsFlag=1;

/// <summary>
/// 整型全局变量
/// 标志输入单位类型
/// </summary>
extern int inputUnitFlag=1;

/// <summary>
/// 整型全局变量
/// 标志输出单位类型
/// </summary>
extern int outputUnitFlag=1;

/**
 * @brief 构造函数
 * @details 初始化、信号与槽的连接
 */
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    resize(300,400);
    hide();

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
/// <summary>
/// @brief 正方形界面显示函数
/// @details 显示计算正方形面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 圆形界面显示函数
/// @details 显示计算圆形面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 长方形界面显示函数
/// @details 显示计算长方形面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 三角形界面显示函数
/// @details 显示计算三角形面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 平行四边形界面显示函数
/// @details 显示计算平行四边形面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 椭圆界面显示函数
/// @details 显示计算椭圆面积的GUI界面
/// </summary>
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

/// <summary>
/// @brief 界面初始化函数
/// @details 初始化计算窗口，隐藏所有用于计算图形面积的控件
/// </summary>
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

/// <summary>
/// @brief 图形面积计算函数
/// @details 在不考虑输入输出单位的情况下计算不同图形的图形面积
/// @param graphicsFlag 待计算图形类型
/// @param value1 由输入框获取的第一个双精度浮点型数据
/// @param value2 由输入框获取的第一个双精度浮点型数据
/// @return 返回图形面积
/// </summary>
double Calculator::resultCalculator(int graphicsFlag, double value1, double value2)
{
    switch (graphicsFlag)
    {
    case 1:
        return value1 * value1;
    case 2:
        return 3.1415926535 * value1 * value1;
    case 3:
        return value1 * value2;
    case 4:
        return 0.5 * value1 * value2;
    case 5:
        return value1 * value2;
    case 6:
        return 3.1415926535 * value1 * value2;
    }
}

/// <summary>
/// @brief 单位转换函数
/// @details 根据输入和输出单位进行转换以获得正确结果
/// @param inputUnitFlag 输入单位类型
/// @param outputUnitFlag 输出单位类型
/// @param calculator 图形面积计算函数返回的计算结果
/// @return 返回正确的图形面积
/// </summary>
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

/// <summary>
/// @brief 析构函数
/// @details 释放类的对象
/// </summary>
Calculator::~Calculator()
{
    delete ui;
}

