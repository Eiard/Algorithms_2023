//
// Created by 30671 on 2022/2/14.
//

#include "x10.h"

// 实现转置功能
ElemType x10(Sqlist &T, int min, int max) {
    if (min >= max) {
        return ERROR;
    }

    for (int i = 0; i < (max-min + 1) / 2; i++) {
        Swap(T.data[min + i], T.data[max - i]);
    }
    return OK;
}

void x10Test() {
    ElemType T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    ElemType p;
    printf("\nPlease Enter the p = ");
    scanf("%d", &p);

    x10(Sq, 0, Sq.length - 1);
    x10(Sq, 0, Sq.length - p - 1);  // 前半部分转置
    x10(Sq, Sq.length - p, Sq.length - 1);  // 后半部分转置


    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }


}