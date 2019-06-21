#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>
#include <iostream>
#include <algorithm> 

class Vector3 {
    public:

        Vector3();
        Vector3(float x, float y, float z);

        static Vector3* I();
        static Vector3* J();
        static Vector3* K();



        Vector3* add(Vector3* v);
        Vector3* sub(Vector3* v);
        Vector3* times(float f);

        Vector3* add2D(Vector3* v);
        Vector3* sub2D(Vector3* v);

        static Vector3* clamp2D(Vector3* v, Vector3* min, Vector3* max);

        float dot(Vector3* v);
        Vector3* vectProd(Vector3* v);

        float mag();

        float angle(Vector3* v);

        float norm();

        void normalize();

        void print();

        virtual ~Vector3();

        float x;
        float y;
        float z;

    

    protected:

    private:


};

#endif // VECTOR3_H
