//
// Created by 30671 on 2022/2/19.
//

#include "x04.h"


ElemType x40_04(LinkList &L){

    return OK;
}

void x40_04Test(){
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_04(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}