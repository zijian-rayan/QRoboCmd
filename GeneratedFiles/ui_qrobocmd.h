/********************************************************************************
** Form generated from reading UI file 'qrobocmd.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QROBOCMD_H
#define UI_QROBOCMD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QRoboCmdClass
{
public:
    QPushButton *m_act1;
    QPushButton *m_act2;
    QPushButton *m_act3;
    QPushButton *m_act4;
    QPushButton *m_quit;
    QListWidget *m_msg;

    void setupUi(QDialog *QRoboCmdClass)
    {
        if (QRoboCmdClass->objectName().isEmpty())
            QRoboCmdClass->setObjectName(QString::fromUtf8("QRoboCmdClass"));
        QRoboCmdClass->resize(599, 187);
        m_act1 = new QPushButton(QRoboCmdClass);
        m_act1->setObjectName(QString::fromUtf8("m_act1"));
        m_act1->setGeometry(QRect(30, 30, 75, 23));
        m_act1->setAutoDefault(true);
        m_act2 = new QPushButton(QRoboCmdClass);
        m_act2->setObjectName(QString::fromUtf8("m_act2"));
        m_act2->setGeometry(QRect(140, 30, 75, 23));
        m_act3 = new QPushButton(QRoboCmdClass);
        m_act3->setObjectName(QString::fromUtf8("m_act3"));
        m_act3->setGeometry(QRect(260, 30, 75, 23));
        m_act4 = new QPushButton(QRoboCmdClass);
        m_act4->setObjectName(QString::fromUtf8("m_act4"));
        m_act4->setGeometry(QRect(370, 30, 75, 23));
        m_quit = new QPushButton(QRoboCmdClass);
        m_quit->setObjectName(QString::fromUtf8("m_quit"));
        m_quit->setGeometry(QRect(480, 30, 75, 23));
        m_quit->setAutoDefault(false);
        m_quit->setDefault(true);
        m_msg = new QListWidget(QRoboCmdClass);
        m_msg->setObjectName(QString::fromUtf8("m_msg"));
        m_msg->setGeometry(QRect(30, 80, 521, 71));
        m_msg->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        m_msg->setSelectionMode(QAbstractItemView::NoSelection);

        retranslateUi(QRoboCmdClass);
        QObject::connect(m_quit, SIGNAL(released()), QRoboCmdClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(QRoboCmdClass);
    } // setupUi

    void retranslateUi(QDialog *QRoboCmdClass)
    {
        QRoboCmdClass->setWindowTitle(QApplication::translate("QRoboCmdClass", "Qt Robot Commander", 0, QApplication::UnicodeUTF8));
        m_act1->setText(QApplication::translate("QRoboCmdClass", "Action 1", 0, QApplication::UnicodeUTF8));
        m_act2->setText(QApplication::translate("QRoboCmdClass", "Stop 1", 0, QApplication::UnicodeUTF8));
        m_act3->setText(QApplication::translate("QRoboCmdClass", "Action 3", 0, QApplication::UnicodeUTF8));
        m_act4->setText(QApplication::translate("QRoboCmdClass", "Stop 3", 0, QApplication::UnicodeUTF8));
        m_quit->setText(QApplication::translate("QRoboCmdClass", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QRoboCmdClass: public Ui_QRoboCmdClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QROBOCMD_H
