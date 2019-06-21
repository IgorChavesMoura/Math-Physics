#include "collisionshape.h"

CollisionShape::CollisionShape(){

}

CollisionShape::~CollisionShape(){

}

CS_TYPE CollisionShape::checkCSType(CollisionShape& cs){

    if(dynamic_cast<AABBCollisionShape*>(&cs)){

        return AABB;

    } else if(dynamic_cast<CircleCollisionShape*>(&cs)){

        return CIRCLE;

    }

    return 0;

}
