//
// Created by 30671 on 2022/2/13.
//

#include "x01.h"

// 删除最小元素并且将最后一个元素替换
ElemType x01(Sqlist &T) {
    if (T.data == NULL) {
        return ERROR;
    } else {
        ElemType min = T.data[0];
        int Tag = 0;
        // 元素总个数
        for (int i = 1; i < T.length; i++) {
            if (min > T.data[i]) {
                min = T.data[i];
                Tag = i;
            }
        }
        T.data[Tag] = T.data[T.length - 1];
        T.length--;

        printf("\nAfter change is ");
        for (int i = 0; i < T.length; i++) {
            printf("%d ", T.data[i]);
        }

        //Return Min
        return min;
    }
}

void x01Test() {
    ElemType T[10] = {5, 9, 2, 3, 4, 19, 1, 12, 14, 13};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T)/sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", T[i]);
    }

    int min = x01(Sq);

    if (min == ERROR) {
        printf("\nArray is NULL!");
    } else {
        printf("\nThe min is %d", min);
    }
}