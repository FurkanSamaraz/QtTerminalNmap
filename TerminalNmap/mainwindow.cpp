#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScrollBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setMaximumWidth(maximumHeight());
    QPalette p = palette();
    p.setColor(QPalette::Base, Qt::black);
    p.setColor(QPalette::Text, Qt::green);
    setPalette(p);
}


MainWindow::~MainWindow()
{
    delete ui;
}

