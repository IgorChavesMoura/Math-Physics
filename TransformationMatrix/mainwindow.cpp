#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_txu_clicked(){

    ui->openw->t.x = 0.2;

    ui->openw->updatePos();

    ui->openw->t.x = 0.0;

}

void MainWindow::on_txd_clicked(){

    ui->openw->t.x = -0.2;

    ui->openw->updatePos();

    ui->openw->t.x = 0.0;


}

void MainWindow::on_tyu_clicked(){

    ui->openw->t.y = 0.2;

    ui->openw->updatePos();

    ui->openw->t.y = 0.0;


}

void MainWindow::on_tyd_clicked(){

    ui->openw->t.y = -0.2;

    ui->openw->updatePos();

    ui->openw->t.y = 0.0;
}

void MainWindow::on_sxu_clicked(){

    ui->openw->s.x = 1.1;

    ui->openw->updateScale();

    ui->openw->s.x = 1.0;

}

void MainWindow::on_sxd_clicked(){

    ui->openw->s.x = 0.9;

    ui->openw->updateScale();

    ui->openw->s.x = 1.0;

}

void MainWindow::on_syu_clicked(){

    ui->openw->s.y = 1.1;

    ui->openw->updateScale();

    ui->openw->s.y = 1.0;

}

void MainWindow::on_syd_clicked(){

    ui->openw->s.y = 0.9;

    ui->openw->updateScale();

    ui->openw->s.y = 1.0;

}

void MainWindow::on_rl_clicked(){

    ui->openw->angle = 0.5;

    ui->openw->updateRotation();

    ui->openw->angle = 0.0;

}

void MainWindow::on_rr_clicked(){

    ui->openw->angle = -0.5;

    ui->openw->updateRotation();

    ui->openw->angle = 0.0;

}
