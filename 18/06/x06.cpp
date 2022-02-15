//
// Created by 30671 on 2022/2/14.
//

#include "x06.h"

ElemType x06(Sqlist &T) {
    int j = 0;
    for (int i = 0; i < T.length; i++) {
        // 与后一个相同则跳过
        if(T.data[i] == T.data[i+1]){
        }else{
            // 不相同则转移
            T.data[j] = T.data[i];
            j++;
        }
    }
    T.length = j;
    return OK;
}


void x06Test() {
    ElemType T[10] = {1, 2, 2, 5, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    x06(Sq);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}