//
// Created by 30671 on 2022/2/14.
//

#include "x07.h"

ElemType x18_07(Sqlist &T, Sqlist &T1) {
    int length = T.length + T1.length;
    // 创建一个连续的动态数组
    ElemType *a = (int *) malloc(length * sizeof(ElemType));

    int i = 0, j = 0;
    int Tag = 0;
    for (; (i < T.length) && (j < T1.length);Tag++) {
        if(T.data[i]>T1.data[j]){
            a[Tag] = T1.data[j];
            j++;
        }else{
            a[Tag] = T.data[i];
            i++;
        }
    }

    while(i<T.length){
        a[Tag++] = T.data[i++];
    }

    while(j<T1.length){
        a[Tag++] = T1.data[j++];
    }

    T.data = a;
    T.length = length;


    return OK;
}


void x18_07Test() {
    ElemType T[10] = {1, 2, 2, 5, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    ElemType t[11] = {1, 3, 3, 4, 4, 6, 7, 9, 9, 11, 13};
    Sqlist Sq1;
    Sq1.data = t;
    Sq1.length = sizeof(t) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    printf("\nThe origin is ");
    for (int i = 0; i < Sq1.length; i++) {
        printf("%d ", Sq1.data[i]);
    }

    x18_07(Sq, Sq1);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}