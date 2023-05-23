#include "Drawer.h"
#include <QGroupBox>
#include <QHBoxLayout>

Drawer::Drawer(QWidget* parent)
{
    setWindowTitle(QStringLiteral("TT"));
    tool_bt1 = new QToolButton;
    //qDebug() << tool_bt1->size();
    tool_bt1->setText(QStringLiteral("��"));
    tool_bt1->setIcon(QPixmap("image1 (1).png"));
    tool_bt1->setIconSize(QSize(100, 100));
    tool_bt1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    tool_bt2 = new QToolButton;
    //qDebug() << tool_bt1->size();
    tool_bt2->setText(QStringLiteral("��"));
    tool_bt2->setIcon(QPixmap("image1 (2).png"));
    tool_bt2->setIconSize(QSize(100, 100));
    tool_bt2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    tool_bt3 = new QToolButton;
    //qDebug() << tool_bt1->size();
    tool_bt3->setText(QStringLiteral("��"));
    tool_bt3->setIcon(QPixmap("image1 (3).png"));
    tool_bt3->setIconSize(QSize(100, 100));
    tool_bt3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    tool_bt4 = new QToolButton;
    //qDebug() << tool_bt1->size();
    tool_bt4->setText(QStringLiteral("��"));
    tool_bt4->setIcon(QPixmap("image1 (4).png"));
    tool_bt4->setIconSize(QSize(100, 100));
    tool_bt4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    tool_bt5 = new QToolButton;
    //qDebug() << tool_bt1->size();
    tool_bt5->setText(QStringLiteral("��"));
    tool_bt5->setIcon(QPixmap("image1 (5).png"));
    tool_bt5->setIconSize(QSize(100, 100));
    tool_bt5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    // ���������䴰��

    QGroupBox* groupbox1 = new QGroupBox();

    QVBoxLayout* layout1 = new QVBoxLayout(groupbox1); // ���ø�����
    layout1->setMargin(15);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(tool_bt1);
    layout1->addWidget(tool_bt2);
    layout1->addWidget(tool_bt3);
    layout1->addWidget(tool_bt4);
    layout1->addWidget(tool_bt5);
    layout1->addStretch();

    QGroupBox* groupbox2 = new QGroupBox();
    QGroupBox* groupbox3 = new QGroupBox();

    this->addItem(groupbox1, QStringLiteral("�ҵĺ���"));
    this->addItem(groupbox2, QStringLiteral("İ����"));
    this->addItem(groupbox3, QStringLiteral("������"));
}
