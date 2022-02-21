//
// Created by 30671 on 2022/2/19.
//

#include "x12.h"


ElemType x40_12(LinkList &L) {
    if (L->next == nullptr) {
        return ERROR;
    }
    if (L->next->next == nullptr) {
        return OK;
    }
    LNode *p, *q;
    p = L->next->next;
    q = L->next;  // p的前驱结点

    while (p) {
        if (p->data == q->data) {  // 值相同则删除后面一个结点 q p
            q->next = p->next;
            free(p);
            p = q->next;
        } else {
            p = p->next;
            q = q->next;
        }
    }

    return OK;
}

void x40_12Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 1);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_12(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}