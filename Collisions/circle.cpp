#include "circle.h"

#define PI 3.141592653589793238463

Circle::Circle(Vector3 position, float radius, Color color){

    this->position = position;
    this->radius = radius;
    this->color = color;

    this->cs = new CircleCollisionShape(this->position,this->radius);


}


void Circle::draw(){

    glBegin(GL_POLYGON);
    glColor3f(this->color.r,this->color.g,this->color.b);
    for(double i = 0.0; i < 2*PI; i += PI/60){

        float x = (std::cos(i) * radius) + this->position.x;
        float y = (std::sin(i) * radius) + this->position.y;

        glVertex3f(x, y, 0.0);
    }
    glEnd();

}

Circle::~Circle() {

}
