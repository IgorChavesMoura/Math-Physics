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
#include "matrix.h"
#include "color.h"

class GLWidget : public QOpenGLWidget
{
    public:
        explicit GLWidget(QWidget *parent = 0);

        std::vector<Vector3> object;

        Vector3 t,s,r;

        float angle;

        void updatePos();
        void updateScale();
        void updateRotation();

        void initializeGL();
        void paintGL();
        void resizeGL(int w, int h);


};

#endif // GLWIDGET_H
