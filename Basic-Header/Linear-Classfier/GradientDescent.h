#ifndef LRC_H_INCLUDED
#define LRC_H_INCLUDED

// last update 2023-05-26
// Written by Sora-Sugiyama

#include "matrix.h"
#include <iostream>
#include <cmath>

mat GradientDescent(mat w,mat b,mat x,int n){
    mat r,rT;
    while(n--){
        r=Subtract(Product(x,w),b);rT=Trans(r);
        alpha=0.0001;
        w=Subtract(w,ScharProduct(2*alpha,Product(Trans(x),r)));
    }
    cout<<"Loss : "<<Product(rT,r)[0][0]<<"\n";
    return w;
}

#endif // LRC_H_INCLUDED
