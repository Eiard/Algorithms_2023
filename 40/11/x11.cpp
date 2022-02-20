//
// Created by 30671 on 2022/2/19.
//

#include "x11.h"

ElemType x40_11(LinkList &L, LinkList &LA, LinkList &LB) {

    return OK;
}

void x40_11Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表
    LinkList LA;
    Init_Head(LA);  // 初始化链表
    LinkList LB;
    Init_Head(LB);  // 初始化链表

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