#include "collisionshape.h"

AABBCollisionShape::AABBCollisionShape(Vector3 position, Vector3 size){

    this->position = position;
    this->size = size;

}

bool AABBCollisionShape::checkCollision(CollisionShape& cs){

    CS_TYPE csType = this->checkCSType(cs);

    switch(csType){

        case AABB:

            return this->checkCollisionAABB(dynamic_cast<AABBCollisionShape*>(&cs));

            break;

        case CIRCLE:

            return (dynamic_cast<CircleCollisionShape*>(&cs)->checkCollisionAABB(this));

            break;

    }

    return false;

}

bool AABBCollisionShape::checkCollisionAABB(AABBCollisionShape* abcs){

    bool collisionX = ((this->position.x + this->size.x) >= abcs->position.x) && ((abcs->position.x + abcs->size.x) >= this->position.x);

    bool collisionY = ((this->position.y + this->size.y) >= abcs->position.y) && ((abcs->position.y + abcs->size.y) >= this->position.y);

    return collisionX && collisionY;

}


AABBCollisionShape::~AABBCollisionShape(){

}


