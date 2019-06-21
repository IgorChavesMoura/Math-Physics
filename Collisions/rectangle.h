#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "object.h"
#include "collisionshape.h"
#include <GL/glut.h>

class Rectangle : public Object {

    public:
        Rectangle(Vector3 position, Vector3 size, Color color);

        Vector3 size;

        void draw();

        ~Rectangle();

};

#endif // RECTANGLE_H
