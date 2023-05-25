#ifndef LRC_H_INCLUDED
#define LRC_H_INCLUDED

// last update 2023-05-25
// Written by Sora-Sugiyama

#include "matrix.h"

mat GradientDescent(mat w,mat b,mat x,int n){
    mat r,rT;
    while(n--){
        r=Subtract(Product(x,w),b);rT=Trans(r);
        double alpha=0.00003;
        w=Subtract(w,ScharProduct(2*alpha,Product(Trans(x),r)));
        if(Product(r,rT)[0][0]<1)break;
    }
    return w;
}

#endif // LRC_H_INCLUDED
