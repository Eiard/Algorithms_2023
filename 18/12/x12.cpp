//
// Created by 30671 on 2022/2/14.
//

#include "x12.h"

ElemType x12(Sqlist &T) {
    int Count = 0;
    int i, c;
    c = T.data[0];

    // 算法解题技巧

    // 类似于消消乐 相当于某个数只能与其他数进行抵消 即Count--(相当于消除) 该数不能和自己的抵消

    for (i = 1; i < T.length; i++) {
        if (T.data[i] == c)  // 找到候选主元素相等的  计数器++
            Count++;
        else {
            if (Count > 0) // 如果前面
                Count--;
            else {
                c = T.data[i];  //更换候选元素
                Count = 1;  // 重新计数为1
            }
        }
    }
    // 说明主元素抵消了其他元素后仍有剩余
    // 现在已经知道主元素是c,则直接遍历查找主元素的个数
    if (Count > 0) {
        for (i = Count = 0; i < T.length; i++) {
            if (T.data[i] == c)
                Count++;
        }
    }
    if (Count > T.length / 2) return c;
    else return ERROR;
}

void x12Test() {
    ElemType T[8] = {5, 3, 3, 3, 5, 5, 5, 5};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    x12(Sq);

    printf("\nThe main numb is %d",x12(Sq));

}