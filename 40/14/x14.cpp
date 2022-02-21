//
// Created by 30671 on 2022/2/19.
//

#include "x14.h"

ElemType x40_14(LinkList &LA, LinkList &LB, LinkList &LC) {



    return OK;
}

void x40_14Test() {
    LinkList LA;
    Init_Head(LA);  // 初始化链表

    ListInsertPrior_LNode(LA, 1, 3);
    ListInsertPrior_LNode(LA, 1, 2);
    ListInsertPrior_LNode(LA, 1, 1);

    LinkList LB;
    Init_Head(LB);  // 初始化链表

    ListInsertPrior_LNode(LB, 1, 3);
    ListInsertPrior_LNode(LB, 1, 2);
    ListInsertPrior_LNode(LB, 1, 2);


    LinkList LC;
    Init_Head(LC);  // 初始化链表

    printf(" The origin A is ");
    ListTraverse_LNode(LA);
    printf(" The origin B is ");
    ListTraverse_LNode(LB);

    x40_14(LA, LB, LC);

    printf(" The C is ");
    ListTraverse_LNode(LC);
}