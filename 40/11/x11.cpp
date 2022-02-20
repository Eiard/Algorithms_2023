//
// Created by 30671 on 2022/2/19.
//

#include "x11.h"

// L a1,b1,a2,b2,a3,b3 ....
// 拆分为 LA a1,a2,a3,a4 ...  LB b1,b2,b3,b4
ElemType x40_11(LinkList &L) {
    int Length = Length_LNode(L);  // 统计链表长度

    ElemType *a, *b;

    a = (ElemType *) malloc(sizeof(ElemType) * Length / 2);
    b = (ElemType *) malloc(sizeof(ElemType) * Length / 2);

    return OK;
}

void x40_11Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表


    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_11(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}