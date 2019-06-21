/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1130, 675);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openw = new GLWidget(centralWidget);
        openw->setObjectName(QStringLiteral("openw"));
        openw->setGeometry(QRect(10, 10, 821, 661));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(839, 9, 281, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        paabb = new QPushButton(verticalLayoutWidget);
        paabb->setObjectName(QStringLiteral("paabb"));

        horizontalLayout->addWidget(paabb);

        pcircle = new QPushButton(verticalLayoutWidget);
        pcircle->setObjectName(QStringLiteral("pcircle"));

        horizontalLayout->addWidget(pcircle);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        taabb = new QPushButton(verticalLayoutWidget);
        taabb->setObjectName(QStringLiteral("taabb"));

        horizontalLayout_2->addWidget(taabb);

        tcircle = new QPushButton(verticalLayoutWidget);
        tcircle->setObjectName(QStringLiteral("tcircle"));

        horizontalLayout_2->addWidget(tcircle);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(860, 420, 67, 17));
        has_collision = new QLabel(centralWidget);
        has_collision->setObjectName(QStringLiteral("has_collision"));
        has_collision->setGeometry(QRect(930, 420, 161, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(860, 510, 131, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(860, 540, 181, 17));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Collisions", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Player", Q_NULLPTR));
        paabb->setText(QApplication::translate("MainWindow", "AABB", Q_NULLPTR));
        pcircle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Target", Q_NULLPTR));
        taabb->setText(QApplication::translate("MainWindow", "AABB", Q_NULLPTR));
        tcircle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Collision:", Q_NULLPTR));
        has_collision->setText(QApplication::translate("MainWindow", "No collisions", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Use WSAD to move", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Try to hit the blue object", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
