#include "chatcardcontainer.h"
#include "ui_chatcardcontainer.h"

ChatCardContainer::ChatCardContainer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatCardContainer)
{
    ui->setupUi(this);
}

ChatCardContainer::~ChatCardContainer()
{
    delete ui;
}
