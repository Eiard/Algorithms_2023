//
// Created by 30671 on 2022/2/19.
//

#include "x16.h"

ElemType x40_16(LinkList &LA, LinkList &LB) {

    return OK;
}

void x40_16Test() {
    LinkList LA;
    Init_Head(LA);  // 初始化链表

    ListInsertPrior_LNode(LA, 1, 1);
    ListInsertPrior_LNode(LA, 1, 2);
    ListInsertPrior_LNode(LA, 1, 2);
    ListInsertPrior_LNode(LA, 1, 3);
    ListInsertPrior_LNode(LA, 1, 1);
    ListInsertPrior_LNode(LA, 1, 2);

    LinkList LB;
    Init_Head(LB);  // 初始化链表

    ListInsertPrior_LNode(LB, 1, 3);
    ListInsertPrior_LNode(LB, 1, 1);

    printf(" The origin LA is ");
    ListTraverse_LNode(LA);

    if (x40_16(LA, LB)) {
        printf("The B is part of A");
    }else{
        printf("The B is not part of A");
    }

}