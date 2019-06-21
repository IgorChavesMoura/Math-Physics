#include "glwidget.h"

using namespace std;

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent){

    Vector3 null = {0.0,0.0,0.0};
    Vector3 ones = {1.0,1.0,1.0};
    Vector3 j = Vector3::K();

    this->t = null;
    this->s = ones;
    this->r = j;

    this->angle = 0.0;

    this->object.push_back({-0.5,-0.5,0.0});
    this->object.push_back({0.5,-0.5,0.0});
    this->object.push_back({0.5,0.5,0.0});
    this->object.push_back({-0.5,0.5,0.0});

}

void GLWidget::updatePos(){

    cout << "T: " << this->t;

    for(int i = 0; i < this->object.size(); i++){

        Vector3 v = this->object[i];

        Matrix::translateVector(v,this->t);

        this->object[i] = v;

    }

    update();

}

void GLWidget::updateScale(){

    cout << "S: " << this->s;

    for(int i = 0; i < this->object.size(); i++){

        Vector3 v = this->object[i];

        Matrix::scaleVector(v,this->s);

        this->object[i] = v;

    }

    update();

}

void GLWidget::updateRotation(){

    cout << "R: " << this->r;

    for(int i = 0; i < this->object.size(); i++){

        Vector3 v = this->object[i];

        Matrix::rotateVector(v,this->r,this->angle);

        this->object[i] = v;

    }

    update();

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

    for(Vector3 v : object){

        cout << v;

    }

   cout << endl << endl;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
        glColor3f(c1.r,c1.g,c1.b);
        glVertex3f(object[0].x,object[0].y,object[0].z);
        glColor3f(c2.r,c2.g,c2.b);
        glVertex3f(object[1].x,object[1].y,object[1].z);
        glColor3f(c3.r,c3.g,c3.b);
        glVertex3f(object[2].x,object[2].y,object[2].z);
        glColor3f(c4.r,c4.g,c4.b);
        glVertex3f(object[3].x,object[3].y,object[3].z);
    glEnd();

    glFlush();

}
void GLWidget::resizeGL(int w, int h){

    //    glViewport(0,0,w,h);
    //    glMatrixMode(GL_PROJECTION);
    //    glLoadIdentity();
    //    gluPerspective(45.0,  (float)w/h,  0.01, 100.0);

    //    update();

}


