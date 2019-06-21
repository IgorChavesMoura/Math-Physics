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

        void keyPressEvent (QKeyEvent* event);

        void on_paabb_clicked();

        void on_pcircle_clicked();

        void on_taabb_clicked();

        void on_tcircle_clicked();

    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
