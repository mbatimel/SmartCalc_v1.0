#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  sWindow = new Graph();
  connect(sWindow, &Graph::firstWindow, this, &MainWindow::show);
  tWindow = new CreditCalc();
  connect(tWindow, &CreditCalc::firstWindow, this, &MainWindow::show);

  clear_pointer();

  /*NUMBERS*/
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  /*ARIFMETIC_FUNCS*/
  connect(ui->pushButton_sum, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_exp, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_min, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_dev, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_Bracket_Left, SIGNAL(clicked()), this,
          SLOT(clicked_nums()));
  connect(ui->pushButton_Bracket_Right, SIGNAL(clicked()), this,
          SLOT(clicked_nums()));

  /*FUNCS*/
  // connect(ui->pushButton_min_or_plas, SIGNAL(clicked()), this,
  // SLOT(clicked_nums()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(clicked_nums()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(clicked_nums()));
}

MainWindow::~MainWindow() {
  delete tWindow;
  delete sWindow;
  delete ui;
}

void MainWindow::clicked_nums() {
  QPushButton *button = (QPushButton *)sender();
  QString input_text = button->text();
  if (ui->result_show->text() == '0' && button->text() != "0" &&
      button->text() != '.') {
    ui->result_show->setText("");
  }

  if (find_funcs(input_text) == 1) {
    funcs_pointers(input_text);
  }
  if (find_sim(input_text) == 1) {
    simbols_pointers(input_text);
  }
  if (find_nums(input_text) == 1) {
    nums_pointers(input_text);
  }
  if (find_sim(input_text) == 1 && point->start_pointer == 1) {
    ui->result_show->setText("0");
  }

  if ((input_text == "(" || input_text == ")")) {
    ui->result_show->setText(ui->result_show->text() + input_text);
    if (input_text == "(") {
      point->bracketL_pointer += 1;
    }
    if (input_text == ")") {
      point->bracketR_pointer += 1;
    }
  }
}

int MainWindow::find_sim(QString input_text) {
  int res = 0;
  if (input_text == "+" || input_text == "-" || input_text == "/" ||
      input_text == "*" || input_text == "mod" || input_text == "^") {
    res = 1;
  }
  return res;
}
int MainWindow::find_nums(QString input_text) {
  int res = 0;
  if (input_text == "0" || input_text == "1" || input_text == "2" ||
      input_text == "4" || input_text == "3" || input_text == "5" ||
      input_text == "6" || input_text == "7" || input_text == "8" ||
      input_text == "9" || input_text == "x") {
    res = 1;
  }
  return res;
}
int MainWindow::find_funcs(QString input_text) {
  int res = 0;
  if (input_text == "sqrt" || input_text == "cos" || input_text == "sin" ||
      input_text == "tan" || input_text == "acos" || input_text == "asin" ||
      input_text == "atan" || input_text == "log" || input_text == "ln") {
    res = 1;
  }
  return res;
}
void MainWindow::funcs_pointers(QString input_text) {
  if (point->after_dot_pointer == 0 && point->num_pointer == 0) {
    ui->result_show->setText(ui->result_show->text() + input_text + "(");
    point->dot_pointer = 0;
    point->bracketL_pointer += 1;
    point->start_pointer = 0;
    point->func_pointer = 1;
    point->double_sim_pointer = 0;
    point->func_pointer = 1;
  }
}
void MainWindow::simbols_pointers(QString input_text) {
  if (point->after_dot_pointer == 0 && point->start_pointer == 0 &&
      point->double_sim_pointer == 0 && point->func_pointer == 0) {
    ui->result_show->setText(ui->result_show->text() + input_text);
    point->dot_pointer = 0;
    point->sim_pointer = 1;
    point->double_sim_pointer = 1;
    point->num_pointer = 0;
  }
}
void MainWindow::nums_pointers(QString input_text) {
  ui->result_show->setText(ui->result_show->text() + input_text);
  point->after_dot_pointer = 0;
  point->start_pointer = 0;
  point->sim_pointer = 0;
  point->func_pointer = 0;
  point->double_sim_pointer = 0;
  point->func_pointer = 0;
  point->num_pointer = 1;
}
void MainWindow::on_pushButton_dot_clicked() {
  if (point->dot_pointer != 1 && point->sim_pointer != 1 &&
      point->func_pointer != 1) {
    ui->result_show->setText(ui->result_show->text() + ".");
    point->dot_pointer = 1;
    point->after_dot_pointer = 1;
  }
}

void MainWindow::on_pushButton_AC_clicked() {
  clear_pointer();
  ui->result_show->setText("0");
}

void MainWindow::on_pushButton_rm_clicked() {
  check_lastIndex();
  ui->result_show->backspace();
  if (ui->result_show->text() == "") {
    ui->result_show->setText("0");
    clear_pointer();
  }
}
void MainWindow::check_lastIndex() {
  QString text = ui->result_show->text();
  int lastIndex = text.length() - 1;
  if (text.length() == 0) {
    if (text.at(lastIndex) == '(') {
      point->bracketL_pointer -= 1;
    }
    if (text.at(lastIndex) == ')') {
      point->bracketR_pointer -= 1;
    }
    if (find_nums(text.at(lastIndex)) == 1) {
      point->num_pointer = 0;
    }
    if (text.at(lastIndex) == '.') {
      point->dot_pointer = 0;
    }
    if (text.at(lastIndex) == 'd') {
      point->sim_pointer = 0;
    }
    if (find_sim(text.at(lastIndex)) == 1) {
      point->sim_pointer = 0;
    }
    if (text.at(lastIndex + 1) == 's' || text.at(lastIndex) == 'a' ||
        text.at(lastIndex) == 'c' || text.at(lastIndex) == 't' ||
        text.at(lastIndex) == 'l') {
      point->func_pointer = 0;
    }
  }
}

void MainWindow::clear_pointer() {
  point->dot_pointer = 0;
  point->sim_pointer = 0;
  point->after_dot_pointer = 0;
  point->double_sim_pointer = 0;
  point->bracketL_pointer = 0;
  point->bracketR_pointer = 0;
  point->func_pointer = 0;
  point->num_pointer = 0;
  point->start_pointer = 1;
  point->unari_point = 0;
}
void MainWindow::on_pushButton_equally_clicked() {
  if (point->bracketL_pointer == point->bracketR_pointer) {
    int err = 0;
    double result = 0.0;
    QString result_string;
    QString screen_result = ui->result_show->text();
    QByteArray mass_chars = screen_result.toLocal8Bit();
    char *ptr_mass_chars = mass_chars.data();

    err = qt_calculator(ptr_mass_chars, 0, &result);
    if (err == 0) {
      QString result_string = QString::number(result, 'g', 15);
      ui->result_show->setText(result_string);
    } else {
      ui->result_show->setText("ERROR");
    }
    clear_pointer();
  }
}

void MainWindow::on_pushButton_GRAPH_clicked() {
  sWindow->show();
  this->close();
}

void MainWindow::on_pushButton_credit_clicked() {
  tWindow->show();
  this->close();
}

void MainWindow::on_pushButton_min_or_plas_clicked() {
  if (point->unari_point == 0) {
    QString screen_result = ui->result_show->text();
    screen_result.remove("+");
    ui->result_show->setText("-" + screen_result);
    point->unari_point = 1;
  } else if (point->unari_point == 1) {
    QString screen_result = ui->result_show->text();
    screen_result.remove("-");
    ui->result_show->setText("+" + screen_result);
    point->unari_point = 0;
  }
}
