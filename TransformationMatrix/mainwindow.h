#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();


    private slots:
        void on_txu_clicked();

        void on_txd_clicked();

        void on_tyu_clicked();

        void on_tyd_clicked();

        void on_sxu_clicked();

        void on_sxd_clicked();

        void on_syu_clicked();

        void on_syd_clicked();

        void on_rl_clicked();

        void on_rr_clicked();

    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
