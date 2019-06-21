#ifndef COLLISIONSHAPE_H
#define COLLISIONSHAPE_H

#define AABB 1
#define CIRCLE 2

#include "vector3.h"

typedef int CS_TYPE;

class CollisionShape {

    public:
        CollisionShape();

        Vector3 position;

        virtual ~CollisionShape();

        virtual bool checkCollision(CollisionShape& cs) = 0;

        CS_TYPE checkCSType(CollisionShape& cs);


};

class AABBCollisionShape : public CollisionShape {

    public:

        AABBCollisionShape(Vector3 position, Vector3 size);
        AABBCollisionShape(float px, float py, float sx, float sy);

        bool checkCollision(CollisionShape& cs);
        bool checkCollisionAABB(AABBCollisionShape* abcs);

        Vector3 size;

        ~AABBCollisionShape();

};

class CircleCollisionShape : public CollisionShape {


    public:

        CircleCollisionShape(Vector3 position, float radius);
        CircleCollisionShape(float px, float py, float radius);

        bool checkCollision(CollisionShape& cs);
        bool checkCollisionAABB(AABBCollisionShape* abcs);
        bool checkCollisionCircle(CircleCollisionShape* ccs);

        float radius;


        ~CircleCollisionShape();


};

#endif // COLLISIONSHAPE_H
