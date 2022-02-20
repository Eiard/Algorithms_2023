//
// Created by 30671 on 2022/2/19.
//

#include "x10.h"

// 将L分解为LA(存放奇数下标) LB(存放偶数下标)
ElemType x40_10(LinkList &L, LinkList &LA, LinkList &LB) {
    int i = 0;
    LNode *p = L->next;
    LNode *q;

    while (p) {
        q = p;
        p = p->next;
        if ((i + 1) % 2 == 1) {
            ListInsertPrior_LNode_Pointer(LA, i / 2 + 1, q);
        } else {
            ListInsertPrior_LNode_Pointer(LB, i / 2 + 1, q);
        }
        i++;
    }
    L->next = NULL;

    return OK;
}

void x40_10Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表
    LinkList LA, LB;
    Init_Head(LA);  // 初始化链表
    Init_Head(LB);  // 初始化链表
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_10(L, LA, LB);

    printf(" The a is ");
    ListTraverse_LNode(LA);

    printf(" The b is ");
    ListTraverse_LNode(LB);
}