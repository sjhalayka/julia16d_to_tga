// Code by: Shawn Halayka -- sjhalayka@gmail.com
// Code is in the public domain


#ifndef MAIN_H
#define MAIN_H


#include "image.h"
#include "tmath.h"

#include <cmath>
#include <complex>
using namespace std;


float iterate_julia(
    vertex<float, 16> Z,
    vertex<float, 16> C,
    const short unsigned int max_iterations,
    const float threshold)
{
    for (short unsigned int i = 0; i < max_iterations; i++)
    {
        vertex<float, 16> Z_base = Z;

        vertex<float, 16> x;
        x.vd[0] = 2.0f;
        //x.vd[1] = 0.1f;
        //x.vd[2] = 0.2f;
        //x.vd[3] = 0.0f;
        //x.vd[4] = 0.5f;

        Z = pow_number_type(Z, x);
        Z = Z + C;




        //Z = pow(Z, 2.0f);





        //Z = traditional_mul(Z, Z_base);
        //Z = traditional_mul(Z, Z_base);
        //Z = traditional_mul(Z, Z_base);
        //Z = traditional_mul(Z, Z_base);
        //Z = traditional_mul(Z, Z_base);
        //Z = Z + C;


       //Z = sin(Z) + mul(C, sin(Z));

        if (Z.magnitude() >= threshold)
            break;
    }

    return Z.magnitude();
}


#endif