#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDoubleValidator>
#include <QIntValidator>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QValidator>
#include <QWidget>

#include "creditcalc.h"
#include "graph.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "../../Smart_calc_v1.h"

#ifdef __cplusplus
}
#endif

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  struct dot_checker {
    /*условие на то что точка поставлена*/
    int dot_pointer;
    /*условие на то что был пставлен знак*/
    int sim_pointer;
    /*условие на то что после точки должна быть цыфра*/
    int after_dot_pointer;
    /*условие на то что нельзя ставить знак*/
    int double_sim_pointer;
    /*счетчик "(" левых*/
    int bracketL_pointer;
    /*счетчик ")" правых*/
    int bracketR_pointer;
    /*условие на то что поставлена функция*/
    int func_pointer;
    /*поинтер на то что стоит цыфра*/
    int num_pointer;
    /*начальное состояние калькулятора*/
    int start_pointer;
    /*поинт на унарные +/-*/
    int unari_point;
  };
  dot_checker *point = new dot_checker;
 private slots:
  void clicked_nums();
  void on_pushButton_dot_clicked();
  void on_pushButton_AC_clicked();
  void clear_pointer();
  void on_pushButton_rm_clicked();
  void funcs_pointers(QString input_text);
  void simbols_pointers(QString input_text);
  void nums_pointers(QString input_text);
  int find_funcs(QString input_text);
  int find_sim(QString input_text);
  int find_nums(QString input_text);
  void check_lastIndex();
  void on_pushButton_equally_clicked();
  void on_pushButton_credit_clicked();

  void on_pushButton_GRAPH_clicked();

  void on_pushButton_min_or_plas_clicked();

 private:
  Ui::MainWindow *ui;
  CreditCalc *tWindow;
  Graph *sWindow;
};

#endif  // MAINWINDOW_H
