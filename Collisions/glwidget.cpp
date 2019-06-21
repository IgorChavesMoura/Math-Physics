#include "glwidget.h"

using namespace std;

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent){

    //this->player = new Rectangle({-0.75,0.75,0.0},{0.2,0.2,0.0},Color::Red());
    this->player = new Circle({-0.75,0.75,0.0},0.1,Color::Red());
    //this->target = new Rectangle({0.0,0.0,0.0},{0.4,0.4,0.0},Color::Blue());
    this->target = new Circle({0.0,0.0,0.0},0.2,Color::Blue());
    this->collided = false;

}

bool GLWidget::checkCollisions(){

    bool collided = this->player->cs->checkCollision(*this->target->cs);

    cout << "Collided: " << collided << endl;

    this->collided = collided;

    return collided;

}


void GLWidget::initializeGL(){

    glClearColor(0.2,0.2,0.2,1);


}
void GLWidget::paintGL(){

    Color c1 = Color::Blue();
    Color c2 = Color::Red();
    Color c3 = Color::Green();
    Color c4 = Color(0.0,1.0,1.0);


   cout << endl << endl;

    glClear(GL_COLOR_BUFFER_BIT);

    this->target->draw();
    this->player->draw();

    glFlush();

}
void GLWidget::resizeGL(int w, int h){

    //    glViewport(0,0,w,h);
    //    glMatrixMode(GL_PROJECTION);
    //    glLoadIdentity();
    //    gluPerspective(45.0,  (float)w/h,  0.01, 100.0);

    //    update();

}


