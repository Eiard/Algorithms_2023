//
// Created by 30671 on 2022/2/19.
//

#include "x06.h"

// 让元素递增有序
ElemType x40_06(LinkList &L){


    return OK;
}

void x40_06Test(){
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

    x40_06(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}