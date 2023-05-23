#pragma once
#include <qtoolbox.h>
#include <QToolBox>
#include <QToolButton>
class Drawer :
    public QToolBox
{
    Q_OBJECT

public:
    Drawer(QWidget* parent = nullptr);
private:
    QToolButton* tool_bt1;
    QToolButton* tool_bt2;
    QToolButton* tool_bt3;
    QToolButton* tool_bt4;
    QToolButton* tool_bt5;
    QToolButton* tool_bt6;
    QToolButton* tool_bt7;
    QToolButton* tool_bt8;
    QToolButton* tool_bt9;
};

