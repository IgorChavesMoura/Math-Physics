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
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QPushButton *txu;
    QPushButton *txd;
    QVBoxLayout *verticalLayout_5;
    QPushButton *tyu;
    QPushButton *tyd;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QPushButton *sxu;
    QPushButton *sxd;
    QVBoxLayout *verticalLayout_7;
    QPushButton *syu;
    QPushButton *syd;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *rl;
    QPushButton *rr;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(844, 464);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openw = new GLWidget(centralWidget);
        openw->setObjectName(QStringLiteral("openw"));
        openw->setGeometry(QRect(10, 10, 531, 441));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(550, 10, 281, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        txu = new QPushButton(verticalLayoutWidget);
        txu->setObjectName(QStringLiteral("txu"));

        verticalLayout_6->addWidget(txu);

        txd = new QPushButton(verticalLayoutWidget);
        txd->setObjectName(QStringLiteral("txd"));

        verticalLayout_6->addWidget(txd);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tyu = new QPushButton(verticalLayoutWidget);
        tyu->setObjectName(QStringLiteral("tyu"));

        verticalLayout_5->addWidget(tyu);

        tyd = new QPushButton(verticalLayoutWidget);
        tyd->setObjectName(QStringLiteral("tyd"));

        verticalLayout_5->addWidget(tyd);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        sxu = new QPushButton(verticalLayoutWidget);
        sxu->setObjectName(QStringLiteral("sxu"));

        verticalLayout_8->addWidget(sxu);

        sxd = new QPushButton(verticalLayoutWidget);
        sxd->setObjectName(QStringLiteral("sxd"));

        verticalLayout_8->addWidget(sxd);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        syu = new QPushButton(verticalLayoutWidget);
        syu->setObjectName(QStringLiteral("syu"));

        verticalLayout_7->addWidget(syu);

        syd = new QPushButton(verticalLayoutWidget);
        syd->setObjectName(QStringLiteral("syd"));

        verticalLayout_7->addWidget(syd);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        rl = new QPushButton(verticalLayoutWidget);
        rl->setObjectName(QStringLiteral("rl"));

        horizontalLayout_6->addWidget(rl);

        rr = new QPushButton(verticalLayoutWidget);
        rr->setObjectName(QStringLiteral("rr"));

        horizontalLayout_6->addWidget(rr);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TransformationMatrix", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Transla\303\247\303\243o", Q_NULLPTR));
        txu->setText(QApplication::translate("MainWindow", "X Up", Q_NULLPTR));
        txd->setText(QApplication::translate("MainWindow", "X Down", Q_NULLPTR));
        tyu->setText(QApplication::translate("MainWindow", "Y Up", Q_NULLPTR));
        tyd->setText(QApplication::translate("MainWindow", "Y Down", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Escala", Q_NULLPTR));
        sxu->setText(QApplication::translate("MainWindow", "X Up", Q_NULLPTR));
        sxd->setText(QApplication::translate("MainWindow", "X Down", Q_NULLPTR));
        syu->setText(QApplication::translate("MainWindow", "Y Up", Q_NULLPTR));
        syd->setText(QApplication::translate("MainWindow", "Y Down", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Rota\303\247\303\243o", Q_NULLPTR));
        rl->setText(QApplication::translate("MainWindow", "Rotate Left", Q_NULLPTR));
        rr->setText(QApplication::translate("MainWindow", "Rotate Right", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
