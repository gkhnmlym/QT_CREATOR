/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QLineEdit *lndisplay;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btndivide;
    QPushButton *btnmemadd;
    QPushButton *btnmultiply;
    QPushButton *btnmemclear;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnadd;
    QPushButton *btnmemget;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnsubract;
    QPushButton *btnequals;
    QPushButton *pushButton_18;
    QPushButton *btn0;
    QPushButton *pushButton_20;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(370, 410);
        Calculator->setMinimumSize(QSize(370, 410));
        Calculator->setMaximumSize(QSize(370, 410));
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lndisplay = new QLineEdit(centralWidget);
        lndisplay->setObjectName(QStringLiteral("lndisplay"));
        lndisplay->setGeometry(QRect(10, 14, 351, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lndisplay->sizePolicy().hasHeightForWidth());
        lndisplay->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(25);
        lndisplay->setFont(font);
        lndisplay->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: 	gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        lndisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(20, 100, 50, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy1);
        btn7->setMinimumSize(QSize(50, 50));
        btn7->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        btn7->setFont(font1);
        btn7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(90, 100, 50, 50));
        sizePolicy1.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy1);
        btn8->setMinimumSize(QSize(50, 50));
        btn8->setMaximumSize(QSize(50, 50));
        btn8->setFont(font1);
        btn8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(160, 100, 50, 50));
        sizePolicy1.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy1);
        btn9->setMinimumSize(QSize(50, 50));
        btn9->setMaximumSize(QSize(50, 50));
        btn9->setFont(font1);
        btn9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btndivide = new QPushButton(centralWidget);
        btndivide->setObjectName(QStringLiteral("btndivide"));
        btndivide->setGeometry(QRect(230, 100, 50, 50));
        sizePolicy1.setHeightForWidth(btndivide->sizePolicy().hasHeightForWidth());
        btndivide->setSizePolicy(sizePolicy1);
        btndivide->setMinimumSize(QSize(50, 50));
        btndivide->setMaximumSize(QSize(50, 50));
        btndivide->setFont(font1);
        btndivide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnmemadd = new QPushButton(centralWidget);
        btnmemadd->setObjectName(QStringLiteral("btnmemadd"));
        btnmemadd->setGeometry(QRect(300, 100, 50, 50));
        sizePolicy1.setHeightForWidth(btnmemadd->sizePolicy().hasHeightForWidth());
        btnmemadd->setSizePolicy(sizePolicy1);
        btnmemadd->setMinimumSize(QSize(50, 50));
        btnmemadd->setMaximumSize(QSize(50, 50));
        btnmemadd->setFont(font1);
        btnmemadd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnmultiply = new QPushButton(centralWidget);
        btnmultiply->setObjectName(QStringLiteral("btnmultiply"));
        btnmultiply->setGeometry(QRect(230, 170, 50, 50));
        sizePolicy1.setHeightForWidth(btnmultiply->sizePolicy().hasHeightForWidth());
        btnmultiply->setSizePolicy(sizePolicy1);
        btnmultiply->setMinimumSize(QSize(50, 50));
        btnmultiply->setMaximumSize(QSize(50, 50));
        btnmultiply->setFont(font1);
        btnmultiply->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnmemclear = new QPushButton(centralWidget);
        btnmemclear->setObjectName(QStringLiteral("btnmemclear"));
        btnmemclear->setGeometry(QRect(300, 170, 50, 50));
        sizePolicy1.setHeightForWidth(btnmemclear->sizePolicy().hasHeightForWidth());
        btnmemclear->setSizePolicy(sizePolicy1);
        btnmemclear->setMinimumSize(QSize(50, 50));
        btnmemclear->setMaximumSize(QSize(50, 50));
        btnmemclear->setFont(font1);
        btnmemclear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(20, 170, 50, 50));
        sizePolicy1.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy1);
        btn4->setMinimumSize(QSize(50, 50));
        btn4->setMaximumSize(QSize(50, 50));
        btn4->setFont(font1);
        btn4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(90, 170, 50, 50));
        sizePolicy1.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy1);
        btn5->setMinimumSize(QSize(50, 50));
        btn5->setMaximumSize(QSize(50, 50));
        btn5->setFont(font1);
        btn5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(160, 170, 50, 50));
        sizePolicy1.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy1);
        btn6->setMinimumSize(QSize(50, 50));
        btn6->setMaximumSize(QSize(50, 50));
        btn6->setFont(font1);
        btn6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnadd = new QPushButton(centralWidget);
        btnadd->setObjectName(QStringLiteral("btnadd"));
        btnadd->setGeometry(QRect(230, 240, 50, 50));
        sizePolicy1.setHeightForWidth(btnadd->sizePolicy().hasHeightForWidth());
        btnadd->setSizePolicy(sizePolicy1);
        btnadd->setMinimumSize(QSize(50, 50));
        btnadd->setMaximumSize(QSize(50, 50));
        btnadd->setFont(font1);
        btnadd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnmemget = new QPushButton(centralWidget);
        btnmemget->setObjectName(QStringLiteral("btnmemget"));
        btnmemget->setGeometry(QRect(300, 240, 50, 50));
        sizePolicy1.setHeightForWidth(btnmemget->sizePolicy().hasHeightForWidth());
        btnmemget->setSizePolicy(sizePolicy1);
        btnmemget->setMinimumSize(QSize(50, 50));
        btnmemget->setMaximumSize(QSize(50, 50));
        btnmemget->setFont(font1);
        btnmemget->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(20, 240, 50, 50));
        sizePolicy1.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy1);
        btn1->setMinimumSize(QSize(50, 50));
        btn1->setMaximumSize(QSize(50, 50));
        btn1->setFont(font1);
        btn1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(90, 240, 50, 50));
        sizePolicy1.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy1);
        btn2->setMinimumSize(QSize(50, 50));
        btn2->setMaximumSize(QSize(50, 50));
        btn2->setFont(font1);
        btn2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(160, 240, 50, 50));
        sizePolicy1.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy1);
        btn3->setMinimumSize(QSize(50, 50));
        btn3->setMaximumSize(QSize(50, 50));
        btn3->setFont(font1);
        btn3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnsubract = new QPushButton(centralWidget);
        btnsubract->setObjectName(QStringLiteral("btnsubract"));
        btnsubract->setGeometry(QRect(230, 310, 50, 50));
        sizePolicy1.setHeightForWidth(btnsubract->sizePolicy().hasHeightForWidth());
        btnsubract->setSizePolicy(sizePolicy1);
        btnsubract->setMinimumSize(QSize(50, 50));
        btnsubract->setMaximumSize(QSize(50, 50));
        btnsubract->setFont(font1);
        btnsubract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btnequals = new QPushButton(centralWidget);
        btnequals->setObjectName(QStringLiteral("btnequals"));
        btnequals->setGeometry(QRect(300, 310, 50, 50));
        sizePolicy1.setHeightForWidth(btnequals->sizePolicy().hasHeightForWidth());
        btnequals->setSizePolicy(sizePolicy1);
        btnequals->setMinimumSize(QSize(50, 50));
        btnequals->setMaximumSize(QSize(50, 50));
        btnequals->setFont(font1);
        btnequals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#E52B50;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(20, 310, 50, 50));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setMinimumSize(QSize(50, 50));
        pushButton_18->setMaximumSize(QSize(50, 50));
        pushButton_18->setFont(font1);
        pushButton_18->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(90, 310, 50, 50));
        sizePolicy1.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy1);
        btn0->setMinimumSize(QSize(50, 50));
        btn0->setMaximumSize(QSize(50, 50));
        btn0->setFont(font1);
        btn0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(160, 310, 50, 50));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(50, 50));
        pushButton_20->setMaximumSize(QSize(50, 50));
        pushButton_20->setFont(font1);
        pushButton_20->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 370, 22));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        lndisplay->setText(QApplication::translate("Calculator", "0.0", Q_NULLPTR));
        btn7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        btn8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        btn9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        btndivide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        btnmemadd->setText(QApplication::translate("Calculator", "M+", Q_NULLPTR));
        btnmultiply->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        btnmemclear->setText(QApplication::translate("Calculator", "M-", Q_NULLPTR));
        btn4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        btn6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        btnadd->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        btnmemget->setText(QApplication::translate("Calculator", "M", Q_NULLPTR));
        btn1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        btn2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        btnsubract->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        btnequals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("Calculator", "AC", Q_NULLPTR));
        btn0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("Calculator", "+/-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
