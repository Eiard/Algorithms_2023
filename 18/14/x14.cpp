//
// Created by 30671 on 2022/2/14.
//

#include "x14.h"

// 绝对值宏  在Def.h中


// 计算距离
ElemType Distance(ElemType a, ElemType b, ElemType c) {
    // abs绝对值函数
    return ((abs(a - b)) + (abs(b - c)) + (abs(c - a)));
}

bool xls_min(int a, int b, int c) {  // 判断a是否是三者中最小的
    if (a <= b && a <= c) return true;
    return false;
}

// 时间复杂度O(n)  空间复杂度O(1)
ElemType x18_14(Sqlist &T1, Sqlist &T2, Sqlist &T3) {
    int i = 0, j = 0, k = 0, Distance_Min = 0x7fffff, D;

    while (i < T1.length && j < T2.length && k < T3.length && Distance_Min > 0) {
        D = Distance(T1.data[i], T2.data[j], T3.data[k]);
        if (D < Distance_Min) Distance_Min = D;  //更新最低值
        if (xls_min(T1.data[i], T2.data[j], T3.data[k])) i++;  // 如果T1[i] 是最小的 则对应下标++
        else if (xls_min(T2.data[j], T3.data[k], T1.data[i])) j++;  // 如果T2[j] 是最小的 则对应下标
        else k++;
    }

    printf("         %d ", Distance_Min);
    return OK;
}

void x18_14Test() {
    // a S1
    ElemType T1[3] = {-1, 0, 9};
    Sqlist Sq1;
    Sq1.data = T1;
    Sq1.length = sizeof(T1) / sizeof(ElemType);

    // b S2
    ElemType T2[4] = {-25, -10, 10, 11};
    Sqlist Sq2;
    Sq2.data = T2;
    Sq2.length = sizeof(T2) / sizeof(ElemType);

    // c S3
    ElemType T3[5] = {2, 9, 17, 30, 41};
    Sqlist Sq3;
    Sq3.data = T3;
    Sq3.length = sizeof(T3) / sizeof(ElemType);

    x18_14(Sq1, Sq2, Sq3);

}