//
// Created by 30671 on 2022/2/23.
//

#include "x03.h"

// 判定输出序列是否合法 只有 0 和 1 组成的序列
// 1 0 1 1 0 1 0 0 合法
// 1 0 0 0 1 1 1 0 不合法
ElemType x70_03(char A[]) {
    // 判断是否是合法序列
    int i = 0;
    int j = 0, k = 0;
    while (A[i] != '\0') {
        switch (A[i]) {
            // I出现的次数必须比O要多(一直都要)
            case 'I':
                j++;
                break;
            case 'O':k++;
                if (k>j){
                    printf("is not");
                    exit(0);
                }
        }
        i++;
    }
    if (j!=k){
        printf("is not");
        return ERROR;
    } else{
        printf("is it");
        return OK;
    }
}

void x70_03Test() {
    char A[] = {'I','O','I','O','I','O'};
    char B[] = {'O','O','O','O','I','O'};

    printf("A ");
    x70_03(A);

    printf("\nB ");
    x70_03(B);
}