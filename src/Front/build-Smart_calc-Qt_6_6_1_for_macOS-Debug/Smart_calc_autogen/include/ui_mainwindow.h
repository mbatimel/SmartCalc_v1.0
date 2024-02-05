/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_log;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_depos;
    QPushButton *pushButton_GRAPH;
    QGroupBox *groupBox;
    QPushButton *pushButton_Bracket_Left;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_min;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_Bracket_Right;
    QPushButton *pushButton_dev;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_min_or_plas;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_rm;
    QPushButton *pushButton_x;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equally;
    QPushButton *pushButton_2;
    QLineEdit *result_show;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(692, 633);
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(300, 350, 371, 271));
        groupBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 100, 100);\n"
"  border: 1px solid black\n"
";\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_cos = new QPushButton(groupBox_2);
        pushButton_cos->setObjectName("pushButton_cos");
        pushButton_cos->setGeometry(QRect(10, 30, 80, 80));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 100, 100);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_log = new QPushButton(groupBox_2);
        pushButton_log->setObjectName("pushButton_log");
        pushButton_log->setGeometry(QRect(280, 30, 80, 80));
        pushButton_tan = new QPushButton(groupBox_2);
        pushButton_tan->setObjectName("pushButton_tan");
        pushButton_tan->setGeometry(QRect(190, 30, 80, 80));
        pushButton_sin = new QPushButton(groupBox_2);
        pushButton_sin->setObjectName("pushButton_sin");
        pushButton_sin->setGeometry(QRect(100, 30, 80, 80));
        pushButton_atan = new QPushButton(groupBox_2);
        pushButton_atan->setObjectName("pushButton_atan");
        pushButton_atan->setGeometry(QRect(190, 110, 80, 80));
        pushButton_asin = new QPushButton(groupBox_2);
        pushButton_asin->setObjectName("pushButton_asin");
        pushButton_asin->setGeometry(QRect(100, 110, 80, 80));
        pushButton_sqrt = new QPushButton(groupBox_2);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        pushButton_sqrt->setGeometry(QRect(10, 190, 80, 80));
        pushButton_acos = new QPushButton(groupBox_2);
        pushButton_acos->setObjectName("pushButton_acos");
        pushButton_acos->setGeometry(QRect(10, 110, 80, 80));
        pushButton_ln = new QPushButton(groupBox_2);
        pushButton_ln->setObjectName("pushButton_ln");
        pushButton_ln->setGeometry(QRect(280, 110, 80, 80));
        pushButton_credit = new QPushButton(groupBox_2);
        pushButton_credit->setObjectName("pushButton_credit");
        pushButton_credit->setGeometry(QRect(100, 190, 80, 80));
        pushButton_depos = new QPushButton(groupBox_2);
        pushButton_depos->setObjectName("pushButton_depos");
        pushButton_depos->setGeometry(QRect(190, 190, 80, 80));
        pushButton_GRAPH = new QPushButton(groupBox_2);
        pushButton_GRAPH->setObjectName("pushButton_GRAPH");
        pushButton_GRAPH->setGeometry(QRect(280, 190, 80, 80));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(300, 90, 381, 261));
        groupBox->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(200, 100, 100);\n"
"	color: white;\n"
"	border: 2px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Bracket_Left = new QPushButton(groupBox);
        pushButton_Bracket_Left->setObjectName("pushButton_Bracket_Left");
        pushButton_Bracket_Left->setGeometry(QRect(0, 180, 80, 80));
        pushButton_mul = new QPushButton(groupBox);
        pushButton_mul->setObjectName("pushButton_mul");
        pushButton_mul->setGeometry(QRect(200, 20, 80, 80));
        pushButton_min = new QPushButton(groupBox);
        pushButton_min->setObjectName("pushButton_min");
        pushButton_min->setGeometry(QRect(0, 100, 80, 80));
        pushButton_exp = new QPushButton(groupBox);
        pushButton_exp->setObjectName("pushButton_exp");
        pushButton_exp->setGeometry(QRect(100, 20, 80, 80));
        pushButton_Bracket_Right = new QPushButton(groupBox);
        pushButton_Bracket_Right->setObjectName("pushButton_Bracket_Right");
        pushButton_Bracket_Right->setGeometry(QRect(100, 180, 80, 80));
        pushButton_dev = new QPushButton(groupBox);
        pushButton_dev->setObjectName("pushButton_dev");
        pushButton_dev->setGeometry(QRect(200, 100, 80, 80));
        pushButton_mod = new QPushButton(groupBox);
        pushButton_mod->setObjectName("pushButton_mod");
        pushButton_mod->setGeometry(QRect(100, 100, 80, 80));
        pushButton_sum = new QPushButton(groupBox);
        pushButton_sum->setObjectName("pushButton_sum");
        pushButton_sum->setGeometry(QRect(0, 20, 80, 80));
        pushButton_min_or_plas = new QPushButton(groupBox);
        pushButton_min_or_plas->setObjectName("pushButton_min_or_plas");
        pushButton_min_or_plas->setGeometry(QRect(300, 20, 80, 80));
        pushButton_dot = new QPushButton(groupBox);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(300, 100, 80, 80));
        pushButton_rm = new QPushButton(groupBox);
        pushButton_rm->setObjectName("pushButton_rm");
        pushButton_rm->setGeometry(QRect(200, 180, 80, 80));
        pushButton_x = new QPushButton(groupBox);
        pushButton_x->setObjectName("pushButton_x");
        pushButton_x->setGeometry(QRect(300, 180, 80, 80));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 100, 271, 341));
        groupBox_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_AC = new QPushButton(groupBox_3);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setGeometry(QRect(180, 260, 80, 80));
        pushButton_AC->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(groupBox_3);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 180, 80, 80));
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(180, 20, 80, 80));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(90, 20, 80, 80));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(180, 100, 80, 80));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 100, 80, 80));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(180, 180, 80, 80));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 100, 80, 80));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 20, 80, 80));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(groupBox_3);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(90, 260, 80, 80));
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equally = new QPushButton(groupBox_3);
        pushButton_equally->setObjectName("pushButton_equally");
        pushButton_equally->setGeometry(QRect(0, 260, 80, 80));
        pushButton_equally->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_equally->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 180, 80, 80));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient ( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        result_show = new QLineEdit(centralwidget);
        result_show->setObjectName("result_show");
        result_show->setGeometry(QRect(10, 0, 671, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font1.setPointSize(40);
        result_show->setFont(font1);
        result_show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_show->setDragEnabled(false);
        result_show->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Funcs", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_credit->setText(QCoreApplication::translate("MainWindow", "credit", nullptr));
        pushButton_depos->setText(QCoreApplication::translate("MainWindow", "depos", nullptr));
        pushButton_GRAPH->setText(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Arifmetic", nullptr));
        pushButton_Bracket_Left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_Bracket_Right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_dev->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_min_or_plas->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_rm->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Numbers", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equally->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
