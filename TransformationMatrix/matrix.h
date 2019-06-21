#ifndef MATRIX_H
#define MATRIX_H

#include "vector3.h"

class Matrix {

    public:
        Matrix();



        static Vector3 multMatrixVector(float M[][4], Vector3& v);

        static void translateVector(Vector3& v, Vector3& delta);
        static void scaleVector(Vector3& v, Vector3& delta);
        static void rotateVector(Vector3& v, Vector3& axis, float angle);



};

#endif // MATRIX_H
