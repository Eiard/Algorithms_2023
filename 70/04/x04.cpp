//
// Created by 30671 on 2022/2/23.
//

#include "x04.h"

// 利用栈判断是否是对称
ElemType x70_04(LinkList L1,int length) {


    return OK;
}

void x70_04Test() {
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

    x70_04(L,Length_LNode(L));



}