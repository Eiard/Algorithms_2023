//
// Created by 30671 on 2022/2/14.
//

#include "x09.h"

ElemType x09(Sqlist &T, int x) {
    int low = 0, high = T.length - 1, mid;
    while (low <= high) {  // 二分查找
        mid = (low + high) / 2;
        if (T.data[mid] == x) break;  // 找到x
        else if (T.data[mid] < x) low = mid + 1;  // x范围在右半边
        else high = mid - 1;  // x范围在左半边
    }
    if (T.data[mid] == x && mid != T.length - 1){  // 找到相等的 并且不是最后一个元素  则与后一个元素交换
        Swap(T.data[mid], T.data[mid + 1]);
    }
    int i;
    if (low > high) {  // 从后往前移动元素,最后将x放入对应位置中
        for (i = T.length - 1; i > high; i--)T.data[i + 1] = T.data[i];
        T.data[i + 1] = x;
    }

    return OK;
}

void x09Test() {
    ElemType T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    printf("The origin is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

    ElemType x;
    printf("\nPlease Enter the x = ");
    scanf("%d", &x);

    x09(Sq, x);

    printf("\nAfter change is ");
    for (int i = 0; i < Sq.length; i++) {
        printf("%d ", Sq.data[i]);
    }

}