#include "vector3.h"

Vector3::Vector3(){

    this->x = 0.0f;
    this->y = 0.0f;
    this->z = 0.0f;

}

Vector3::Vector3(float x, float y, float z){

    this->x = x;
    this->y = y;
    this->z = z;

}

Vector3::Vector3(float* coords){

    this->x = coords[0];
    this->y = coords[1];
    this->z = coords[2];

}

Vector3 Vector3::I(){

    return Vector3(1.0f,0.0f,0.0f);

}

Vector3 Vector3::J(){

    return Vector3(0.0f,1.0f,0.0f);

}

Vector3 Vector3::K(){

    return Vector3(0.0f,0.0f,1.0f);

}

std::ostream& operator<<(std::ostream& out, const Vector3& v){

    out << "{ x:" << v.x << " y:" << v.y << " z:" << v.z << " }" << std::endl;


    return out;
}

Vector3 Vector3::operator+(Vector3& v){

    return this->add(v);

}

Vector3 Vector3::operator-(Vector3& v){

    return this->sub(v);
}

Vector3 Vector3::operator*(float& f){

    return this->times(f);

}

void Vector3::operator=(Vector3& v){

    this->x = v.x;
    this->y = v.y;
    this->z = v.z;

}

void Vector3::operator=(float* coords){

    this->x = coords[0];
    this->y = coords[1];
    this->z = coords[2];


}

float Vector3::operator[](int& index){

    switch (index) {

        case 0:

            return this->x;


        case 1:

            return this->y;


        case 2:

            return this->z;

        case 3:

            return 1.0f; //w coordinate


    }

    return 0.0f;

}

Vector3 Vector3::add(Vector3& v){

    return Vector3(this->x + v.x,this->y + v.y, this->z + v.z);

}

Vector3 Vector3::sub(Vector3& v){

    return Vector3(this->x - v.x,this->y - v.y, this->z - v.z);

}

Vector3 Vector3::times(float f){

    return Vector3(this->x*f,this->y*f, this->z*f);

}

Vector3 Vector3::add2D(Vector3& v){

    return Vector3(this->x + v.x,this->y + v.y, this->z);

}

Vector3 Vector3::sub2D(Vector3& v){

    return Vector3(this->x - v.x,this->y - v.y, this->z);

}

Vector3 Vector3::clamp2D(Vector3& v, Vector3& min, Vector3& max){

    float cx = std::max(min.x,std::min(max.x,v.x));
    float cy = std::max(min.y,std::min(max.y,v.y));

    return Vector3(cx,cy,0.0f);

}

float Vector3::dot(Vector3& v){


    float ret = 0.0f;

    ret += this->x * v.x;
    ret += this->y * v.y;
    ret += this->z * v.z;

    return ret;
}

Vector3 Vector3::vectProd(Vector3& v){

    return Vector3( this->y*v.z - this->z*v.y, this->z*v.x - this->x*v.z, this->x*v.y - this->y*v.x);

}

float Vector3::mag(){

    return std::sqrt(this->x*this->x + this->y*this->y + this->z*this->z);

}

float Vector3::angle(Vector3& v){

    return std::acos(this->dot(v)/(this->mag()*v.mag()));

}

float Vector3::norm(){

    return std::sqrt(this->dot(*this));

}

void Vector3::normalize(){

    float norm = this->norm();

    this->x = this->x / norm;
    this->y = this->y / norm;
    this->z = this->z / norm;

}

void Vector3::print(){

    std::cout << "{ x:" << this->x << " y:" << this->y << " z:" << this->z << " }" << std::endl;

}

Vector3::~Vector3() {}
