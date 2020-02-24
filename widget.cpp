#include "widget.hpp"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_factorButton_clicked()
{
    ui->result->check(ui->input->toPlainText());
}

void Widget::on_quitButton_clicked()
{
    close();
}
