//
// Created by 30671 on 2022/2/14.
//

#include "x08.h"

ElemType x18_08(Sqlist &T, int m) {
    if (m >= T.length) {
        return ERROR;
    }
    ElemType *a = (ElemType *) malloc(T.length * sizeof(ElemType));

    // 后面n个先放在前面n个
    for (int i = 0; i < (T.length - m); i++) {
        a[i] = T.data[m + i];
    }
    // 前面m个放在后面m个
    for (int j = 0; j < m; j++) {
        a[T.length - m + j] = T.data[j];
    }
    T.data = a;

    return OK;
}


void x18_08Test() {
    ElemType T[10] = {1, 2, 2, 5, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    int m;
    printf("\n Enter prior m = ");
    scanf("%d", &m);

    x18_08(Sq, m);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}