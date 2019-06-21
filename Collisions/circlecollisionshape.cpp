#include "collisionshape.h"

CircleCollisionShape::CircleCollisionShape(Vector3 position, float radius){

    this->position = position;
    this->radius = radius;

}

bool CircleCollisionShape::checkCollision(CollisionShape& cs){

    CS_TYPE csType = this->checkCSType(cs);

    switch(csType){

        case AABB:

            return this->checkCollisionAABB(dynamic_cast<AABBCollisionShape*>(&cs));

            break;

        case CIRCLE:

            return this->checkCollisionCircle(dynamic_cast<CircleCollisionShape*>(&cs));

            break;

    }

    return false;

}

bool CircleCollisionShape::checkCollisionAABB(AABBCollisionShape* abcs){

    Vector3 center = this->position;

    Vector3 aabbHalfExtents = Vector3(abcs->size.x/2,abcs->size.y/2,0.0);
    Vector3 aabbCenter = abcs->position + aabbHalfExtents;

    Vector3 diff = center - aabbCenter;

    Vector3 aabbHaflExtentsNeg = aabbHalfExtents.times(-1.0);

    Vector3 clamped = Vector3::clamp2D(diff,aabbHaflExtentsNeg,aabbHalfExtents);

    Vector3 closest = aabbCenter + clamped;

    Vector3 newDiff = closest - center;

    return newDiff.norm() < this->radius;

}

bool CircleCollisionShape::checkCollisionCircle(CircleCollisionShape* ccs){

    return (std::pow((ccs->position.x - this->position.x),2.0) + std::pow((this->position.y - ccs->position.y),2.0)) <= (std::pow((this->radius + ccs->radius),2.0));

}

CircleCollisionShape::~CircleCollisionShape(){

}
