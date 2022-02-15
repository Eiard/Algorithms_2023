//
// Created by 30671 on 2022/2/14.
//

#include "x03.h"


ElemType x03(Sqlist &T, ElemType Del) {
    int j = 0;
    for (int i = 0; i < T.length; i++) {
        // 碰到相等的跳过,碰到不相等的就把它放到新的a[j]数组中
        if (T.data[i] == Del) {
        } else {
            T.data[j] = T.data[i];
            j++;
        }
    }
    T.length = j;

    return OK;
}

void x03Test() {
    ElemType T[10] = {5, 9, 2, 3, 4, 19, 3, 12, 14, 3};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    x03(Sq, 3);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}