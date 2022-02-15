//
// Created by 30671 on 2022/2/14.
//

#include "x02.h"

// 转置
ElemType x02(Sqlist &T) {
    // 两边实现对换
    for (int i = 0; i < T.length / 2; i++) {
        Swap(T.data[i], T.data[T.length - i - 1]);
    }
    return OK;
}

void x02Test() {
    ElemType T[10] = {5, 9, 2, 3, 4, 19, 1, 12, 14, 13};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T)/sizeof(ElemType);
    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    x02(Sq);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }
}