#include "rectangle.h"

Rectangle::Rectangle(Vector3 position, Vector3 size, Color color){

    this->position = position;
    this->size = size;
    this->color = color;

    this->cs = new AABBCollisionShape(this->position,this->size);

}

void Rectangle::draw(){

    glBegin(GL_QUADS);
    glColor3f(this->color.r,this->color.g,this->color.b);
    glVertex3f(this->position.x,this->position.y,this->position.z);
    glVertex3f(this->position.x + this->size.x,this->position.y,this->position.z);
    glVertex3f(this->position.x + this->size.x,this->position.y + this->size.y,this->position.z);
    glVertex3f(this->position.x,this->position.y + this->size.y,this->position.z);
    glEnd();

}

Rectangle::~Rectangle(){

}
