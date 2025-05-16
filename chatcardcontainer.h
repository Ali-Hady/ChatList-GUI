#ifndef CHATCARDCONTAINER_H
#define CHATCARDCONTAINER_H

#include <QWidget>

namespace Ui {
class ChatCardContainer;
}

class ChatCardContainer : public QWidget
{
    Q_OBJECT

public:
    explicit ChatCardContainer(QWidget *parent = nullptr);
    ~ChatCardContainer();

private:
    Ui::ChatCardContainer *ui;
};

#endif // CHATCARDCONTAINER_H
