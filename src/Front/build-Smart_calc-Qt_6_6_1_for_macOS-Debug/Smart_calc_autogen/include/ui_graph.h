/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *new_graph;
    QPushButton *pushButton_2;
    QLineEdit *line_xMin;
    QPushButton *pushButton_3;
    QLineEdit *line_xMax;
    QPushButton *pushButton_back;
    QPushButton *pushButton_4;
    QLineEdit *line_yMin;
    QPushButton *pushButton_5;
    QLineEdit *line_yMax;
    QCustomPlot *widget;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName("Graph");
        Graph->resize(667, 410);
        gridLayout_2 = new QGridLayout(Graph);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(Graph);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 2);

        new_graph = new QLineEdit(Graph);
        new_graph->setObjectName("new_graph");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(new_graph->sizePolicy().hasHeightForWidth());
        new_graph->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(new_graph, 0, 2, 1, 4);

        pushButton_2 = new QPushButton(Graph);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        line_xMin = new QLineEdit(Graph);
        line_xMin->setObjectName("line_xMin");
        sizePolicy2.setHeightForWidth(line_xMin->sizePolicy().hasHeightForWidth());
        line_xMin->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(line_xMin, 1, 1, 1, 2);

        pushButton_3 = new QPushButton(Graph);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 1);

        line_xMax = new QLineEdit(Graph);
        line_xMax->setObjectName("line_xMax");
        sizePolicy2.setHeightForWidth(line_xMax->sizePolicy().hasHeightForWidth());
        line_xMax->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(line_xMax, 1, 4, 1, 1);

        pushButton_back = new QPushButton(Graph);
        pushButton_back->setObjectName("pushButton_back");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy3);
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  border-radius: 10px;\n"
"  background-color: rgb(255, 51, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_back, 1, 5, 2, 1);

        pushButton_4 = new QPushButton(Graph);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        line_yMin = new QLineEdit(Graph);
        line_yMin->setObjectName("line_yMin");
        sizePolicy2.setHeightForWidth(line_yMin->sizePolicy().hasHeightForWidth());
        line_yMin->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(line_yMin, 2, 1, 1, 2);

        pushButton_5 = new QPushButton(Graph);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_5, 2, 3, 1, 1);

        line_yMax = new QLineEdit(Graph);
        line_yMax->setObjectName("line_yMax");
        sizePolicy2.setHeightForWidth(line_yMax->sizePolicy().hasHeightForWidth());
        line_yMax->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(line_yMax, 2, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        widget = new QCustomPlot(Graph);
        widget->setObjectName("widget");

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        pushButton->setText(QCoreApplication::translate("Graph", "Creat new graph", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Graph", "xMin:", nullptr));
        line_xMin->setText(QCoreApplication::translate("Graph", "-10", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Graph", "xMax:", nullptr));
        line_xMax->setText(QCoreApplication::translate("Graph", "10", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Graph", "back to calculator", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Graph", "yMin:", nullptr));
        line_yMin->setText(QCoreApplication::translate("Graph", "-3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Graph", "yMax:", nullptr));
        line_yMax->setText(QCoreApplication::translate("Graph", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
