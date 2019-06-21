#include "glwidget.h"

using namespace std;

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent){}

void GLWidget::randomize_vectors(){

    cout << "Randomized order:" << endl;

    std::random_shuffle(this->vsIndex.begin(),this->vsIndex.end());

    for(vector<int>::iterator i = vsIndex.begin(); i != vsIndex.end(); ++i){

        cout << ' ' << *i;
    }

    cout << endl;

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

    glClear(GL_COLOR_BUFFER_BIT);

    for(vector<int>::iterator i = vsIndex.begin(); i != vsIndex.end(); ++i){

        Vector3 v = vs[*i];


        if(*i > 0){



            Vector3 prev = vs[*std::prev(i)];

            glBegin(GL_LINE_STRIP);
                glColor3f(c1.r,c1.g,c1.b);
                glVertex3f(prev.x,prev.y,prev.z);
                glVertex3f(v.x,v.y,v.z);
            glEnd();

        }

    }

    for(vector<int>::iterator i = vsIndex.begin(); i != vsIndex.end(); ++i){

        Vector3 v = vs[*i];

        glBegin(GL_POINTS);
            glColor3f(c2.r,c2.g,c2.b);
            glVertex3f(v.x,v.y,v.z);
        glEnd();
    }

    if(vs.size() > 2){



        int firstIndex = *vsIndex.begin();
        int lastIndex = *prev(vsIndex.end());

        Vector3 first = vs[firstIndex];
        Vector3 last = vs[lastIndex];

        cout << "É pra desenha a soma de " << firstIndex << " para " << lastIndex << endl;

        glBegin(GL_LINE_STRIP);
            glColor3f(c4.r,c4.g,c4.b);
            glVertex3f(first.x,first.y,first.z);
            glVertex3f(last.x,last.y,last.z);
        glEnd();

    }

    glFlush();

}
void GLWidget::resizeGL(int w, int h){

    //    glViewport(0,0,w,h);
    //    glMatrixMode(GL_PROJECTION);
    //    glLoadIdentity();
    //    gluPerspective(45.0,  (float)w/h,  0.01, 100.0);

    //    update();

}


void GLWidget::mousePressEvent(QMouseEvent* event){

}

void GLWidget::mouseReleaseEvent(QMouseEvent* event){

    int x = event->x();
    int y = event->y();

    cout << "x: " << x << "   y: " << y << endl;

    float vx = (2*(x/((float)WIDTH)) - 1);
    float vy = -(2*(y/((float)HEIGHT)) - 1);

    Vector3 newVec = Vector3(vx,vy,0.0);

    cout << "New vector: ";

    newVec.print();

    vs.push_back(newVec);
    vsIndex.push_back(vs.size() - 1);

    cout << "vsIndex:";

    for(vector<int>::iterator i = vsIndex.begin(); i != vsIndex.end(); ++i){

        cout << ' ' << *i;
    }

    cout << endl;

    update();

}
