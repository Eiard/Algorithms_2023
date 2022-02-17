//
// Created by 30671 on 2022/2/14.
//

#include "x11.h"

ElemType x18_11(Sqlist &T, Sqlist &T1) {
    int i = 0, j = 0;
    int mid = 0;
    for (; (i + j) < (T.length + T1.length) / 2;) {  //因为已经有序,找到中位数只需找到对应总排序后的L/2的那个数输出即可
        if (T.data[i] > T1.data[j]) {
            mid = T1.data[j];
            j++;
        } else {
            mid = T.data[i];
            i++;
        }
    }

    printf("\nthe mid numb is %d", mid);

    return OK;
}

void x18_11Test() {
    // 升序 length/2 为中位数
    ElemType T[5] = {11, 13, 15, 17, 19};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    // 升序 length/2 为中位数
    ElemType t[5] = {2, 4, 6, 12, 20};
    Sqlist Sq1;
    Sq1.data = t;
    Sq1.length = sizeof(t) / sizeof(ElemType);

    x18_11(Sq, Sq1);
}