#ifndef CIRCLE_H
#define CIRCLE_H

#include "object.h"
#include "collisionshape.h"
#include <GL/glut.h>

class Circle : public Object
{
    public:
        Circle(Vector3 position, float radius, Color color);

        float radius;

        void draw();

        ~Circle();
};

#endif // CIRCLE_H
