#ifndef GLWIDGET_H
#define GLWIDGET_H

#define PI 3.141592653589793238463

#define WIDTH  800
#define HEIGHT  800


#include <QOpenGLWidget>
#include <QMouseEvent>
#include <GL/glut.h>

#include <vector>
#include <iostream>
#include <algorithm>

#include "vector3.h"
#include "color.h"
#include "collisionshape.h"
#include "object.h"
#include "rectangle.h"
#include "circle.h"

class GLWidget : public QOpenGLWidget {

    public:
        explicit GLWidget(QWidget *parent = 0);

        Object* player;
        Object* target;

        bool collided;

        bool checkCollisions();

        void initializeGL();
        void paintGL();
        void resizeGL(int w, int h);


};

#endif // GLWIDGET_H
