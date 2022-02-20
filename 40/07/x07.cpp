//
// Created by 30671 on 2022/2/19.
//

#include "x07.h"

ElemType x40_07(LinkList &L, ElemType min, ElemType max) {
    LNode *p = L->next;
    LNode *q = L;  // L的前驱
    while (p){
        if (p->data > min && p->data < max){  // 删除p
            q->next = p->next;
            free(p);

        }

    }

    return OK;
}

void x40_07Test() {
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

    ElemType min, max;
    printf("\nPlease Enter the min->");
    scanf("%d", &min);

    printf("\nPlease Enter the max->");
    scanf("%d", &max);

    x40_07(L,min,max);

    printf(" After change is ");
    ListTraverse_LNode(L);
}