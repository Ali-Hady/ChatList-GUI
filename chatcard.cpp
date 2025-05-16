#include "chatcard.h"
#include "ui_chatcard.h"
#include "./utilities.h"
#include <QLayout>

chatcard::chatcard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chatcard)
{
    ui->setupUi(this);
    // zero out internals
    if (auto *lyt = this->layout()) {
        lyt->setContentsMargins(10,10,10,10);
        lyt->setSpacing(2);
    }
    setRoundImage(ui->ProfilePic, ":/images/random.jpg");
}

chatcard::~chatcard()
{
    delete ui;
}
