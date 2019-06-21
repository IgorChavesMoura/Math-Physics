#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){

    delete ui->openw->player;
    delete ui->openw->target;
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent* event){

    switch(event->key()){

//        case Qt::Key_Up:

//            this->ui->openw->player->position.y += 0.01;
//            this->ui->openw->player->cs->position.y += 0.01;

//            break;

//        case Qt::Key_Down:

//            this->ui->openw->player->position.y -= 0.01;
//            this->ui->openw->player->cs->position.y -= 0.01;

//            break;

//        case Qt::Key_Left:

//            this->ui->openw->player->position.x -= 0.01;
//            this->ui->openw->player->cs->position.x -= 0.01;

//            break;

//        case Qt::Key_Right:

//            this->ui->openw->player->position.x += 0.01;
//            this->ui->openw->player->cs->position.x += 0.01;

//            break;

        case Qt::Key_W:

            this->ui->openw->player->position.y += 0.01;
            this->ui->openw->player->cs->position.y += 0.01;

            break;

        case Qt::Key_S:

            this->ui->openw->player->position.y -= 0.01;
            this->ui->openw->player->cs->position.y -= 0.01;

            break;

        case Qt::Key_A:

            this->ui->openw->player->position.x -= 0.01;
            this->ui->openw->player->cs->position.x -= 0.01;

            break;

        case Qt::Key_D:

            this->ui->openw->player->position.x += 0.01;
            this->ui->openw->player->cs->position.x += 0.01;

            break;

    }

    this->ui->openw->update();
    bool collided = this->ui->openw->checkCollisions();

    if(collided){

        this->ui->has_collision->setText("Collision detected!");

    } else {

        this->ui->has_collision->setText("No collisions");

    }



}

void MainWindow::on_paabb_clicked(){

    this->ui->openw->player = new Rectangle({-0.75,0.75,0.0},{0.2,0.2,0.0},Color::Red());

    this->ui->openw->update();

}


void MainWindow::on_pcircle_clicked(){

    this->ui->openw->player = new Circle({-0.75,0.75,0.0},0.1,Color::Red());

    this->ui->openw->update();

}

void MainWindow::on_taabb_clicked(){

    this->ui->openw->target = new Rectangle({0.0,0.0,0.0},{0.4,0.4,0.0},Color::Blue());

    this->ui->openw->update();

}

void MainWindow::on_tcircle_clicked(){

    this->ui->openw->target = new Circle({0.0,0.0,0.0},0.2,Color::Blue());

    this->ui->openw->update();

}
