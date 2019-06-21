/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    GLWidget *openw;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *paabb;
    QPushButton *pcircle;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *taabb;
    QPushButton *tcircle;
    QLabel *label_3;
    QLabel *has_collision;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1130, 675);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openw = new GLWidget(centralWidget);
        openw->setObjectName(QString::fromUtf8("openw"));
        openw->setGeometry(QRect(10, 10, 821, 661));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(839, 9, 281, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        paabb = new QPushButton(verticalLayoutWidget);
        paabb->setObjectName(QString::fromUtf8("paabb"));

        horizontalLayout->addWidget(paabb);

        pcircle = new QPushButton(verticalLayoutWidget);
        pcircle->setObjectName(QString::fromUtf8("pcircle"));

        horizontalLayout->addWidget(pcircle);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        taabb = new QPushButton(verticalLayoutWidget);
        taabb->setObjectName(QString::fromUtf8("taabb"));

        horizontalLayout_2->addWidget(taabb);

        tcircle = new QPushButton(verticalLayoutWidget);
        tcircle->setObjectName(QString::fromUtf8("tcircle"));

        horizontalLayout_2->addWidget(tcircle);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(860, 420, 67, 17));
        has_collision = new QLabel(centralWidget);
        has_collision->setObjectName(QString::fromUtf8("has_collision"));
        has_collision->setGeometry(QRect(930, 420, 161, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(860, 510, 131, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(860, 540, 181, 17));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Collisions", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Player", nullptr));
        paabb->setText(QApplication::translate("MainWindow", "AABB", nullptr));
        pcircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
        label->setText(QApplication::translate("MainWindow", "Target", nullptr));
        taabb->setText(QApplication::translate("MainWindow", "AABB", nullptr));
        tcircle->setText(QApplication::translate("MainWindow", "Circle", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Collision:", nullptr));
        has_collision->setText(QApplication::translate("MainWindow", "No collisions", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Use WSAD to move", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Try to hit the blue object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
