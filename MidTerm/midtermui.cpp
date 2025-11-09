#include "midtermui.h"
#include "ui_midtermui.h"
#include "ooxxbutton.h"
#include <QGridLayout>

MidTermUI::MidTermUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MidTermUI)
{
    ui->setupUi(this);
    
    // Replace all buttons with OOXXButton and clear their text
    QGridLayout *gridLayout = ui->gridLayout;
    
    // Remove existing buttons and replace with OOXXButton
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            QLayoutItem *item = gridLayout->itemAtPosition(i, j);
            if (item && item->widget()) {
                QWidget *oldWidget = item->widget();
                gridLayout->removeWidget(oldWidget);
                delete oldWidget;
                
                OOXXButton *button = new OOXXButton(this);
                button->setText("");
                gridLayout->addWidget(button, i, j);
            }
        }
    }
}

MidTermUI::~MidTermUI()
{
    delete ui;
}
