#include "ooxxbutton.h"

OOXXButton::OOXXButton(QWidget *parent)
    : QPushButton(parent)
{
}

void OOXXButton::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        setText("O");
    } else if (event->button() == Qt::RightButton) {
        setText("X");
    }
    
    QPushButton::mousePressEvent(event);
}
