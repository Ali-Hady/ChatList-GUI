#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "chatcard.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    ui->CardContainer->layout()->setSpacing(0);       // Vertical gap between cards
    ui->CardContainer->layout()->setContentsMargins(0, 0, 0, 0);
    ui->CardContainer->setAlignment(Qt::AlignTop);

    for (int i = 0; i < 20; ++i) {
        ui->CardContainer->addWidget(new chatcard(this));
        //ui->CardContainer->addWidget(new chatcard(this));
    }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}
