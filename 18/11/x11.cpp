//
// Created by 30671 on 2022/2/14.
//

#include "x11.h"

ElemType x11(Sqlist &T){

    return OK;
}

void x11Test(){
    ElemType T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }


}