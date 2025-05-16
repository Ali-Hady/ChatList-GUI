#ifndef CHATCARD_H
#define CHATCARD_H

#include <QWidget>

namespace Ui {
class chatcard;
}

class chatcard : public QWidget
{
    Q_OBJECT

public:
    explicit chatcard(QWidget *parent = nullptr);
    ~chatcard();

private:
    Ui::chatcard *ui;
};

#endif // CHATCARD_H
