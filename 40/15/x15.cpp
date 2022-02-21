//
// Created by 30671 on 2022/2/19.
//

#include "x15.h"

ElemType x40_15(LinkList &LA, LinkList &LB) {
    LNode *pa = LA->next;
    LNode *pb = LB->next;
    LNode *pc = LA;
    LNode *u;
    while (pa && pb) {
        if (pa->data == pb->data) {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
            u = pb;
            pb = pb->next;
            free(u);
        } else if (pa ->data <pb->data){
            u = pa;
            pa = pa->next;
            free(u);
        }
    }
    while (pa){
        u = pa;
        pa = pa->next;
        free(u);
    }
    while (pb){
        u = pb;
        pb=pb->next;
        free(u);
    }
    pc->next = nullptr;
    free(LB);

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
    ListInsertPrior_LNode(LB, 1, 3);
    ListInsertPrior_LNode(LB, 1, 1);
    printf(" The origin LA is ");
    ListTraverse_LNode(LA);
    printf(" The origin LB is ");
    ListTraverse_LNode(LB);

    x40_15(LA, LB);

    printf(" After change LA is ");
    ListTraverse_LNode(LA);
}