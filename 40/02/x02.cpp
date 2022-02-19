//
// Created by 30671 on 2022/2/17.
//

#include "x02.h"

// 删除所有值为x的节点 (带头结点)
ElemType x40_02(LinkList &L, ElemType x) {
    if (L == nullptr) {
        return ERROR;
    }
    LNode *p, *q;
    p = L->next;  // 从第一个数据结点开始删除
    q = L;  //  q始终在p的前一个结点
    while (p) {
        if (p->data == x) {  // 删除这个结点
            q->next = p->next;
            free(p);
            p = q->next;
        } else {
            q = q->next;
            p = p->next;
        }
    }

    return OK;

}

void x40_02Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    int x;
    printf("Please enter the delete number ->");
    scanf("%d", &x);
    x40_02(L, x);

    printf(" After change is ");
    ListTraverse_LNode(L);

}