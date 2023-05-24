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
    QLineEdit *Display;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Divide;
    QPushButton *MemAdd;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Add;
    QPushButton *MemGet;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Subract;
    QPushButton *Equals;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *ChangeSign;
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
        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        Display->setGeometry(QRect(10, 14, 351, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(25);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: 	gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setGeometry(QRect(20, 100, 50, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setMinimumSize(QSize(50, 50));
        Button7->setMaximumSize(QSize(50, 50));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        Button7->setFont(font1);
        Button7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setGeometry(QRect(90, 100, 50, 50));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setMinimumSize(QSize(50, 50));
        Button8->setMaximumSize(QSize(50, 50));
        Button8->setFont(font1);
        Button8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setGeometry(QRect(160, 100, 50, 50));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setMinimumSize(QSize(50, 50));
        Button9->setMaximumSize(QSize(50, 50));
        Button9->setFont(font1);
        Button9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        Divide->setGeometry(QRect(230, 100, 50, 50));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setMinimumSize(QSize(50, 50));
        Divide->setMaximumSize(QSize(50, 50));
        Divide->setFont(font1);
        Divide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        MemAdd->setGeometry(QRect(300, 100, 50, 50));
        sizePolicy1.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy1);
        MemAdd->setMinimumSize(QSize(50, 50));
        MemAdd->setMaximumSize(QSize(50, 50));
        MemAdd->setFont(font1);
        MemAdd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        Multiply->setGeometry(QRect(230, 170, 50, 50));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setMinimumSize(QSize(50, 50));
        Multiply->setMaximumSize(QSize(50, 50));
        Multiply->setFont(font1);
        Multiply->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        MemClear->setGeometry(QRect(300, 170, 50, 50));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setMinimumSize(QSize(50, 50));
        MemClear->setMaximumSize(QSize(50, 50));
        MemClear->setFont(font1);
        MemClear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(20, 170, 50, 50));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setMinimumSize(QSize(50, 50));
        Button4->setMaximumSize(QSize(50, 50));
        Button4->setFont(font1);
        Button4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(90, 170, 50, 50));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setMinimumSize(QSize(50, 50));
        Button5->setMaximumSize(QSize(50, 50));
        Button5->setFont(font1);
        Button5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setGeometry(QRect(160, 170, 50, 50));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setMinimumSize(QSize(50, 50));
        Button6->setMaximumSize(QSize(50, 50));
        Button6->setFont(font1);
        Button6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(230, 240, 50, 50));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setMinimumSize(QSize(50, 50));
        Add->setMaximumSize(QSize(50, 50));
        Add->setFont(font1);
        Add->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        MemGet->setGeometry(QRect(300, 240, 50, 50));
        sizePolicy1.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy1);
        MemGet->setMinimumSize(QSize(50, 50));
        MemGet->setMaximumSize(QSize(50, 50));
        MemGet->setFont(font1);
        MemGet->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(20, 240, 50, 50));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setMinimumSize(QSize(50, 50));
        Button1->setMaximumSize(QSize(50, 50));
        Button1->setFont(font1);
        Button1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(90, 240, 50, 50));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setMinimumSize(QSize(50, 50));
        Button2->setMaximumSize(QSize(50, 50));
        Button2->setFont(font1);
        Button2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(160, 240, 50, 50));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setMinimumSize(QSize(50, 50));
        Button3->setMaximumSize(QSize(50, 50));
        Button3->setFont(font1);
        Button3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Subract = new QPushButton(centralWidget);
        Subract->setObjectName(QStringLiteral("Subract"));
        Subract->setGeometry(QRect(230, 310, 50, 50));
        sizePolicy1.setHeightForWidth(Subract->sizePolicy().hasHeightForWidth());
        Subract->setSizePolicy(sizePolicy1);
        Subract->setMinimumSize(QSize(50, 50));
        Subract->setMaximumSize(QSize(50, 50));
        Subract->setFont(font1);
        Subract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        Equals->setGeometry(QRect(300, 310, 50, 50));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setMinimumSize(QSize(50, 50));
        Equals->setMaximumSize(QSize(50, 50));
        Equals->setFont(font1);
        Equals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#41729F;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(20, 310, 50, 50));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setMinimumSize(QSize(50, 50));
        Clear->setMaximumSize(QSize(50, 50));
        Clear->setFont(font1);
        Clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setGeometry(QRect(90, 310, 50, 50));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setMinimumSize(QSize(50, 50));
        Button0->setMaximumSize(QSize(50, 50));
        Button0->setFont(font1);
        Button0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: 	#800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton: pressed{\n"
"	background-color: #465945;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        ChangeSign->setGeometry(QRect(160, 310, 50, 50));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setMinimumSize(QSize(50, 50));
        ChangeSign->setMaximumSize(QSize(50, 50));
        ChangeSign->setFont(font1);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton{\n"
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
        Display->setText(QApplication::translate("Calculator", "0.0", Q_NULLPTR));
        Button7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        Button8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        Button9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        Divide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        MemAdd->setText(QApplication::translate("Calculator", "M+", Q_NULLPTR));
        Multiply->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        MemClear->setText(QApplication::translate("Calculator", "M-", Q_NULLPTR));
        Button4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        Button5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        Button6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        Add->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        MemGet->setText(QApplication::translate("Calculator", "M", Q_NULLPTR));
        Button1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        Button2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        Button3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        Subract->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        Equals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        Clear->setText(QApplication::translate("Calculator", "AC", Q_NULLPTR));
        Button0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        ChangeSign->setText(QApplication::translate("Calculator", "+/-", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
