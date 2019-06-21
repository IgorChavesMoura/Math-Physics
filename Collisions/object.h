#ifndef OBJECT_H
#define OBJECT_H

#include "collisionshape.h"
#include "vector3.h"
#include "color.h"

class Object {
    public:
        Object();

        CollisionShape* cs;

        Vector3 position;
        Color color;

        virtual void draw() = 0;

        virtual ~Object();

};

#endif // OBJECT_H
