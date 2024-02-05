/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditCalc
{
public:
    QPushButton *pushButton_back;
    QPushButton *pushButton_calc;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QRadioButton *ann_checkbox;
    QRadioButton *diff_checkbox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLineEdit *line_time;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_year;
    QRadioButton *radioButto_mounth;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_4;
    QLineEdit *line_per;
    QLabel *label_5;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_5;
    QLineEdit *line_sum;
    QLabel *label;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_6;
    QLabel *month_pay_label;
    QLabel *label_9;
    QLabel *proc_label;
    QLabel *label_11;
    QLabel *pay_label;
    QLabel *label_12;

    void setupUi(QWidget *CreditCalc)
    {
        if (CreditCalc->objectName().isEmpty())
            CreditCalc->setObjectName("CreditCalc");
        CreditCalc->resize(512, 280);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreditCalc->sizePolicy().hasHeightForWidth());
        CreditCalc->setSizePolicy(sizePolicy);
        CreditCalc->setMinimumSize(QSize(512, 280));
        CreditCalc->setMaximumSize(QSize(512, 280));
        pushButton_back = new QPushButton(CreditCalc);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(8, 240, 491, 23));
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  border-radius: 10px;\n"
"  background-color: rgb(55, 55, 255);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_calc = new QPushButton(CreditCalc);
        pushButton_calc->setObjectName("pushButton_calc");
        pushButton_calc->setGeometry(QRect(8, 137, 491, 21));
        QFont font;
        font.setBold(true);
        pushButton_calc->setFont(font);
        label_10 = new QLabel(CreditCalc);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(8, 212, 111, 16));
        label_7 = new QLabel(CreditCalc);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(8, 170, 140, 16));
        label_8 = new QLabel(CreditCalc);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(8, 191, 152, 16));
        label_2 = new QLabel(CreditCalc);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(8, 18, 98, 16));
        label_6 = new QLabel(CreditCalc);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(8, 106, 182, 16));
        label_3 = new QLabel(CreditCalc);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(8, 47, 87, 16));
        label_3->setMinimumSize(QSize(46, 0));
        label_4 = new QLabel(CreditCalc);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(8, 77, 124, 16));
        layoutWidget = new QWidget(CreditCalc);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(205, 103, 293, 23));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        ann_checkbox = new QRadioButton(layoutWidget);
        ann_checkbox->setObjectName("ann_checkbox");

        gridLayout_2->addWidget(ann_checkbox, 0, 0, 1, 1);

        diff_checkbox = new QRadioButton(layoutWidget);
        diff_checkbox->setObjectName("diff_checkbox");

        gridLayout_2->addWidget(diff_checkbox, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(CreditCalc);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(117, 44, 263, 25));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        line_time = new QLineEdit(layoutWidget1);
        line_time->setObjectName("line_time");

        gridLayout_3->addWidget(line_time, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        radioButton_year = new QRadioButton(layoutWidget1);
        radioButton_year->setObjectName("radioButton_year");

        gridLayout->addWidget(radioButton_year, 0, 1, 1, 1);

        radioButto_mounth = new QRadioButton(layoutWidget1);
        radioButto_mounth->setObjectName("radioButto_mounth");

        gridLayout->addWidget(radioButto_mounth, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(CreditCalc);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(145, 73, 145, 25));
        gridLayout_4 = new QGridLayout(layoutWidget2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        line_per = new QLineEdit(layoutWidget2);
        line_per->setObjectName("line_per");

        gridLayout_4->addWidget(line_per, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(CreditCalc);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(117, 15, 261, 25));
        gridLayout_5 = new QGridLayout(layoutWidget3);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        line_sum = new QLineEdit(layoutWidget3);
        line_sum->setObjectName("line_sum");

        gridLayout_5->addWidget(line_sum, 0, 0, 1, 1);

        label = new QLabel(layoutWidget3);
        label->setObjectName("label");

        gridLayout_5->addWidget(label, 0, 1, 1, 1);

        layoutWidget4 = new QWidget(CreditCalc);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(170, 170, 301, 66));
        gridLayout_6 = new QGridLayout(layoutWidget4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        month_pay_label = new QLabel(layoutWidget4);
        month_pay_label->setObjectName("month_pay_label");
        month_pay_label->setMinimumSize(QSize(100, 0));
        month_pay_label->setMaximumSize(QSize(291, 16777215));

        gridLayout_6->addWidget(month_pay_label, 0, 0, 1, 1);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_9, 0, 1, 1, 1);

        proc_label = new QLabel(layoutWidget4);
        proc_label->setObjectName("proc_label");
        proc_label->setMaximumSize(QSize(291, 16777215));

        gridLayout_6->addWidget(proc_label, 1, 0, 1, 1);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_11, 1, 1, 1, 1);

        pay_label = new QLabel(layoutWidget4);
        pay_label->setObjectName("pay_label");
        pay_label->setMaximumSize(QSize(291, 16777215));

        gridLayout_6->addWidget(pay_label, 2, 0, 1, 1);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(label_12, 2, 1, 1, 1);


        retranslateUi(CreditCalc);

        QMetaObject::connectSlotsByName(CreditCalc);
    } // setupUi

    void retranslateUi(QWidget *CreditCalc)
    {
        CreditCalc->setWindowTitle(QCoreApplication::translate("CreditCalc", "CreditCalc", nullptr));
        pushButton_back->setText(QCoreApplication::translate("CreditCalc", "Back to calculator", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("CreditCalc", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("CreditCalc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_8->setText(QCoreApplication::translate("CreditCalc", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("CreditCalc", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_3->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        ann_checkbox->setText(QCoreApplication::translate("CreditCalc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        diff_checkbox->setText(QCoreApplication::translate("CreditCalc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 ", nullptr));
        radioButton_year->setText(QCoreApplication::translate("CreditCalc", "\320\223\320\276\320\264", nullptr));
        radioButto_mounth->setText(QCoreApplication::translate("CreditCalc", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        label_5->setText(QCoreApplication::translate("CreditCalc", "%", nullptr));
        label->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        month_pay_label->setText(QString());
        label_9->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        proc_label->setText(QString());
        label_11->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        pay_label->setText(QString());
        label_12->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditCalc: public Ui_CreditCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H
