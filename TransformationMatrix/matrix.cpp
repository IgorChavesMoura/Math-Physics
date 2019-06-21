#include "matrix.h"

Matrix::Matrix(){

}


Vector3 Matrix::multMatrixVector(float M[][4], Vector3& v){

    int i, j;
    float* u = new float[4];

    //cout << v[0];

    for( i=0; i<4; i++ ){
        u[i] = 0;
        for( j=0; j<4; j++ )
            u[i] = u[i] + M[i][j]*v[j];
        //cout << A[i][j] << endl;
    }

    //cout << endl << u[0] << endl;

    Vector3 result = u;

    return u;

}

void Matrix::translateVector(Vector3& v, Vector3& delta){

    float M[][4] = {{1.0, 0.0, 0.0, delta.x},
                    {0.0, 1.0, 0.0, delta.y},
                    {0.0, 0.0, 1.0, delta.z},
                    {0.0, 0.0, 0.0, 1.0}};

    Vector3 res = multMatrixVector(M,v);

    v = res;

}

void Matrix::scaleVector(Vector3& v, Vector3& delta){

    float M[][4] = {{delta.x, 0.0, 0.0, 0.0},
                    {0.0, delta.y, 0.0, 0.0},
                    {0.0, 0.0, delta.z, 0.0},
                    {0.0, 0.0, 0.0,     1.0}};

    Vector3 res = multMatrixVector(M,v);

    v = res;

}

void Matrix::rotateVector(Vector3& v, Vector3& axis, float angle){

    float w = cos(angle/2);
    float s = sin(angle/2);

    float x1 = axis.x*s, y1 = axis.y*s, z1 = axis.z*s;

    float A[4][4] = {{w*w + x1*x1 - y1*y1 - z1*z1, 2*x1*y1 - 2*w*z1, 2*x1*z1 + 2*w*y1, 0},
                     {2*x1*y1 + 2*w*z1, w*w - x1*x1 + y1*y1 - z1*z1, 2*z1*y1 - 2*w*x1, 0},
                     {2*x1*z1 - 2*w*y1, 2*z1*y1 + 2*w*z1, w*w - x1*x1 - y1*y1 + z1*z1, 0},
                     {0, 0, 0, w*w + x1*x1 + y1*y1 + z1*z1}};

    Vector3 res = multMatrixVector(A, v);

    v = res;

}

