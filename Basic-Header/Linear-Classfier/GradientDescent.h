#ifndef LRC_H_INCLUDED
#define LRC_H_INCLUDED

#include "matrix.h"

// "Linear Reg"
vecd GradientDescent(mat A,mat b,mat x,int n){
    b=Trans(b);x=Trans(x);
    while(n--){
        mat r=Subtract(b,Product(A,x));
        mat rT=Trans(r);
        double gamma=Product(r,rT)[0][0]/Product(rT,Product(A,r))[0][0];
        x=Sum(x,ScharProduct(gamma,r));
    }
    return Trans(x)[0];
}

#endif // LRC_H_INCLUDED
