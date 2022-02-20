//
// Created by 30671 on 2022/2/19.
//

#include "x10.h"

ElemType x40_10(LinkList &L){

    return OK;
}

void x40_10Test(){
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



    printf(" After change is ");
    ListTraverse_LNode(L);
}