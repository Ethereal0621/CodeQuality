/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:

    QMenuBar* menubar;     ///<指向窗口菜单栏的指针
    QMenu* graphics;       ///<指向菜单项-图形的指针
    QMenu* inputunit;      ///<指向菜单项-输入单位的指针
    QMenu* outputunit;     ///<指向菜单项-输出单位的指针
    QMenu* menu;           ///<指向菜单项-关于的指针

    QStatusBar* statusbar; ///<指向窗口状态栏的指针

    QAction *square;       ///<指向"图形-正方形"菜单子项的指针   
    QAction *circle;       ///<指向"图形-圆形"菜单子项的指针
    QAction *rectangle;    ///<指向"图形-长方形"菜单子项的指针
    QAction *triangle;     ///<指向"图形-三角形"菜单子项的指针
    QAction* parallelogram;///<指向"图形-平行四边形"菜单子项的指针
    QAction* ellipse;      ///<指向"图形-椭圆"菜单子项的指针

    QAction* actioncfx;    ///<界面控件-"分隔线"

    QAction *icm;          ///<指向"输入单位-厘米"菜单子项的指针
    QAction *iinches;      ///<指向"输入单位-英寸"菜单子项的指针
    QAction* ocm;          ///<指向"输出单位-厘米"菜单子项的指针
    QAction* oinches;      ///<指向"输出单位-英寸"菜单子项的指针

    QAction *information;  ///<指向"关于-信息"菜单子项的指针      
    QAction *version;      ///<指向"关于-版本"菜单子项的指针
    QAction *term;         ///<指向"关于-团队"菜单子项的指针
    QAction *state;        ///<指向"关于-说明"菜单子项的指针

    QLabel* label;         ///<指向图形标签的指针

    QLineEdit* value1;     ///<指向第一个数值输入框的指针
    QLineEdit* value2;     ///<指向第二个数值输入框的指针
    QLineEdit* result;     ///<指向结果输出框的指针

    QPushButton* calculator;         ///<指向计算结果按钮的指针 
    
    QWidget *centralwidget;          ///<窗口布局控件，仅在ui界面中使用
    QHBoxLayout *horizontalLayout;   ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *horizontalSpacer;   ///<窗口布局控件，仅在ui界面中使用
    QVBoxLayout *verticalLayout_2;   ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *verticalSpacer_7;   ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *verticalSpacer_4;   ///<窗口布局控件，仅在ui界面中使用
    QVBoxLayout *verticalLayout;     ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *verticalSpacer_3;   ///<窗口布局控件，仅在ui界面中使用 
    QSpacerItem *verticalSpacer_5;   ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *verticalSpacer_6;   ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *verticalSpacer;     ///<窗口布局控件，仅在ui界面中使用
    QSpacerItem *horizontalSpacer_2; ///<窗口布局控件，仅在ui界面中使用
    

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(296, 509);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(0, 0));
        Calculator->setMaximumSize(QSize(10000, 10000));
        QIcon icon;
        icon.addFile(QString::fromUtf8("calculator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        square = new QAction(Calculator);
        square->setObjectName(QString::fromUtf8("square"));
        actioncfx = new QAction(Calculator);
        actioncfx->setObjectName(QString::fromUtf8("actioncfx"));
        circle = new QAction(Calculator);
        circle->setObjectName(QString::fromUtf8("circle"));
        rectangle = new QAction(Calculator);
        rectangle->setObjectName(QString::fromUtf8("rectangle"));
        triangle = new QAction(Calculator);
        triangle->setObjectName(QString::fromUtf8("triangle"));
        icm = new QAction(Calculator);
        icm->setObjectName(QString::fromUtf8("icm"));
        iinches = new QAction(Calculator);
        iinches->setObjectName(QString::fromUtf8("iinches"));
        information = new QAction(Calculator);
        information->setObjectName(QString::fromUtf8("information"));
        parallelogram = new QAction(Calculator);
        parallelogram->setObjectName(QString::fromUtf8("parallelogram"));
        ocm = new QAction(Calculator);
        ocm->setObjectName(QString::fromUtf8("ocm"));
        oinches = new QAction(Calculator);
        oinches->setObjectName(QString::fromUtf8("oinches"));
        version = new QAction(Calculator);
        version->setObjectName(QString::fromUtf8("version"));
        term = new QAction(Calculator);
        term->setObjectName(QString::fromUtf8("term"));
        state = new QAction(Calculator);
        state->setObjectName(QString::fromUtf8("state"));
        ellipse = new QAction(Calculator);
        ellipse->setObjectName(QString::fromUtf8("ellipse"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(10000, 10000));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        value1 = new QLineEdit(centralwidget);
        value1->setObjectName(QString::fromUtf8("value1"));
        value1->setMinimumSize(QSize(0, 0));
        value1->setMaximumSize(QSize(10000, 10000));

        verticalLayout->addWidget(value1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        value2 = new QLineEdit(centralwidget);
        value2->setObjectName(QString::fromUtf8("value2"));
        value2->setEnabled(true);
        value2->setMouseTracking(true);
        value2->setTabletTracking(false);
        value2->setAcceptDrops(true);
        value2->setAutoFillBackground(false);
        value2->setDragEnabled(false);
        value2->setReadOnly(false);
        value2->setClearButtonEnabled(false);

        verticalLayout->addWidget(value2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setMinimumSize(QSize(0, 0));
        result->setMaximumSize(QSize(1000, 1000));

        verticalLayout->addWidget(result);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        verticalLayout_2->addLayout(verticalLayout);

        calculator = new QPushButton(centralwidget);
        calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->setMinimumSize(QSize(0, 0));
        calculator->setMaximumSize(QSize(1000, 1000));

        verticalLayout_2->addWidget(calculator, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 296, 22));
        graphics = new QMenu(menubar);
        graphics->setObjectName(QString::fromUtf8("graphics"));
        inputunit = new QMenu(menubar);
        inputunit->setObjectName(QString::fromUtf8("inputunit"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        outputunit = new QMenu(menubar);
        outputunit->setObjectName(QString::fromUtf8("outputunit"));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        menubar->addAction(graphics->menuAction());
        menubar->addAction(inputunit->menuAction());
        menubar->addAction(outputunit->menuAction());
        menubar->addAction(menu->menuAction());
        graphics->addAction(square);
        graphics->addSeparator();
        graphics->addAction(circle);
        graphics->addSeparator();
        graphics->addAction(ellipse);
        graphics->addSeparator();
        graphics->addAction(rectangle);
        graphics->addSeparator();
        graphics->addAction(triangle);
        graphics->addSeparator();
        graphics->addAction(parallelogram);
        inputunit->addAction(icm);
        inputunit->addSeparator();
        inputunit->addAction(iinches);
        menu->addAction(information);
        menu->addSeparator();
        menu->addAction(version);
        menu->addSeparator();
        menu->addAction(term);
        menu->addSeparator();
        menu->addAction(state);
        outputunit->addAction(ocm);
        outputunit->addSeparator();
        outputunit->addAction(oinches);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "\351\200\232\347\224\250\351\235\242\347\247\257\350\256\241\347\256\227\345\231\250", nullptr));
        square->setText(QCoreApplication::translate("Calculator", "\346\255\243\346\226\271\345\275\242", nullptr));
        actioncfx->setText(QCoreApplication::translate("Calculator", "cfx", nullptr));
        circle->setText(QCoreApplication::translate("Calculator", "\345\234\206\345\275\242", nullptr));
        rectangle->setText(QCoreApplication::translate("Calculator", "\351\225\277\346\226\271\345\275\242", nullptr));
        triangle->setText(QCoreApplication::translate("Calculator", "\344\270\211\350\247\222\345\275\242", nullptr));
        icm->setText(QCoreApplication::translate("Calculator", "\345\216\230\347\261\263\342\210\232", nullptr));
        iinches->setText(QCoreApplication::translate("Calculator", "\350\213\261\345\257\270", nullptr));
        information->setText(QCoreApplication::translate("Calculator", "\344\277\241\346\201\257", nullptr));
        parallelogram->setText(QCoreApplication::translate("Calculator", "\345\271\263\350\241\214\345\233\233\350\276\271\345\275\242", nullptr));
        ocm->setText(QCoreApplication::translate("Calculator", "\345\216\230\347\261\263\342\210\232", nullptr));
        oinches->setText(QCoreApplication::translate("Calculator", "\350\213\261\345\257\270", nullptr));
        version->setText(QCoreApplication::translate("Calculator", "\347\211\210\346\234\254", nullptr));
        term->setText(QCoreApplication::translate("Calculator", "\345\233\242\351\230\237", nullptr));
        state->setText(QCoreApplication::translate("Calculator", "\350\257\264\346\230\216", nullptr));
        ellipse->setText(QCoreApplication::translate("Calculator", "\346\244\255\345\234\206", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "\346\255\243\346\226\271\345\275\242", nullptr));
        value1->setPlaceholderText(QString());
        result->setText(QString());
        result->setPlaceholderText(QCoreApplication::translate("Calculator", "\346\255\244\345\244\204\350\276\223\345\207\272\347\273\223\346\236\234\357\274\210cm^2)", nullptr));
        calculator->setText(QCoreApplication::translate("Calculator", "\350\256\241\347\256\227", nullptr));
        graphics->setTitle(QCoreApplication::translate("Calculator", "\345\233\276\345\275\242", nullptr));
        inputunit->setTitle(QCoreApplication::translate("Calculator", "\350\276\223\345\205\245\345\215\225\344\275\215", nullptr));
        menu->setTitle(QCoreApplication::translate("Calculator", "\345\205\263\344\272\216", nullptr));
        outputunit->setTitle(QCoreApplication::translate("Calculator", "\350\276\223\345\207\272\345\215\225\344\275\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
