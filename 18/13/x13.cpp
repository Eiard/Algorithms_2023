//
// Created by 30671 on 2022/2/14.
//

#include "x13.h"


// 时间复杂度O(n^2)  空间复杂度O(1)
ElemType x18_13(Sqlist &T) {
    int i, j;
    for (i = 1; i < T.length + 1; i++) {  //假如数组长度为n 则输出的正整数范围为1 ~ n+1
        for (j = 0; j < T.length; j++) {
            if (T.data[j] == i) {  //找到了直接结束for j 的循环
                break;
            }
        }
        if (j == T.length) { //
            break;
        }

    }

    printf("\nThe numb is  %d",i);


    return OK;
}

// 时间复杂度O(n)  空间复杂度O(n)
ElemType x18_13_max(Sqlist &T) {

    ElemType i,*B;
    B = (ElemType *)malloc(sizeof(int)*T.length);
    memset(B,0,sizeof (int)*T.length);
    _for( i,0,T.length, Asc){
        if(T.data[i]>0 && T.data[i]<=T.length)
            B[T.data[i]-1] = 1;
    }
    _for(i,0,T.length,Asc){
        if(B[i] == 0) break;
    }

    printf("\nThe numb is  %d",i + 1);

    return OK;
}

void x18_13Test() {
    ElemType T[8] = {-2, 1, 2, 3, 4, 6, 5, 9};
    Sqlist Sq;
    Sq.data = T;
    Sq.length = sizeof(T) / sizeof(ElemType);

    x18_13(Sq);
    x18_13_max(Sq);

}