//
// Created by 30671 on 2022/2/19.
//

#include "x15.h"

ElemType x40_15(LinkList &LA, LinkList &LB) {


    return OK;
}

void x40_15Test() {
    LinkList LA;
    Init_Head(LA);  // 初始化链表
    LinkList LB;
    Init_Head(LB);  // 初始化链表
    ListInsertPrior_LNode(LA, 1, 4);
    ListInsertPrior_LNode(LA, 1, 3);
    ListInsertPrior_LNode(LA, 1, 1);
    ListInsertPrior_LNode(LB, 1, 6);
    ListInsertPrior_LNode(LB, 1, 5);
    ListInsertPrior_LNode(LB, 1, 2);
    printf(" The origin LA is ");
    ListTraverse_LNode(LA);
    printf(" The origin LB is ");
    ListTraverse_LNode(LB);

    x40_15(LA, LB);

    printf(" After change LA is ");
    ListTraverse_LNode(LA);
}