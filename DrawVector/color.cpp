#include "color.h"

Color::Color() {

    this->r = 0.0f;
    this->g = 0.0f;
    this->b = 0.0f;

}

Color::Color(float r, float g, float b){

    this->r = r;
    this->g = g;
    this->b = b;

}

Color Color::Red(){

    return Color(1.0f,0.0f,0.0f);

}

Color Color::Green(){

    return Color(0.0f,1.0f,0.0f);

}

Color Color::Blue(){

    return Color(0.0f,0.0f,1.0f);

}

Color::~Color() {}
