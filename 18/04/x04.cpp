//
// Created by 30671 on 2022/2/14.
//

#include "x04.h"

ElemType x04(Sqlist &T, int s, int t) {
    if (s >= t) {
        printf("s is not lower then t !\n");
        return ERROR;
    }
    if (T.data == NULL || T.length == 0) {
        printf("Array is NULL! \n");
        return ERROR;
    }
    int i, j;
    // 先找到大于s的第一个数的下标
    for (i = 0; i < T.length && T.data[i] <= s; i++);
    if (i >= T.length) {
        return ERROR;
    }
    // 找到小于t的最后一个数的下标
    for (j = i; j < T.length && T.data[j] < t; j++);

    // 将小于t的最后一个数的后面的数向前平移 j-i个单位
    for (; j < T.length; i++, j++) {
        T.data[i] = T.data[j];
    }
    T.length = i;
    printf("Delete the numb between %d and %d", s, t);

    return OK;
}


void x04Test() {
    ElemType T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    int s, t;
    printf("\nEnter s and t --> ");
    scanf("%d %d", &s, &t);

    x04(Sq, s, t);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}