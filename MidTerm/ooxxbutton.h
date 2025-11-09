#ifndef OOXXBUTTON_H
#define OOXXBUTTON_H

#include <QPushButton>
#include <QMouseEvent>

class OOXXButton : public QPushButton
{
    Q_OBJECT

public:
    explicit OOXXButton(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // OOXXBUTTON_H
