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

Color::Color(float* rgb){

    this->r = rgb[0];
    this->g = rgb[1];
    this->b = rgb[2];

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
