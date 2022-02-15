//
// Created by 30671 on 2022/2/14.
//

#include "x13.h"

ElemType x13(Sqlist &T){




}

void x13Test(){
    ElemType T[8] = {-2, 1, 2, 3, 5, 6, -5, 9};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    x13(Sq);

}