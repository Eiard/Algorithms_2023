//
// Created by 30671 on 2022/2/19.
//

#include "x18.h"

ElemType x40_18(LinkList &L1, LinkList &L2) {
    LNode *p = L1;
    LNode *q = L2;

    // 找到L1的末尾
    while (p->next != L1) {
        p = p->next;
    }
    // 找到L2的末尾
    while (q->next != L2) {
        q = q->next;
    }

    //      1 2 3 4     5 6 7 8
    // 连接  相当于 L1   p --> L2   q --> L1
    p->next = L2;
    q->next = L1;



    return OK;
}

void x40_18Test() {
    // 无头结点
    LinkList L = (LNode *) malloc(sizeof(LNode));
    L->data = 1;
    LNode *L1 = (LNode *) malloc(sizeof(LNode));
    L1->data = 2;
    LNode * L2 = (LNode *) malloc(sizeof(LNode));
    L2->data = 3;
    LNode * L3 = (LNode *) malloc(sizeof(LNode));
    L3->data = 4;

    // 形成循环单链表
    L->next = L1;
    L1->next = L2;
    L2->next = L3;
    L3->next = L;

    // 无头结点
    LinkList D = (LNode *) malloc(sizeof(LNode));
    D->data = 5;
    LNode * D1 = (LNode *) malloc(sizeof(LNode));
    D1->data = 6;
    LNode * D2 = (LNode *) malloc(sizeof(LNode));
    D2->data = 7;
    LNode * D3 = (LNode *) malloc(sizeof(LNode));
    D3->data = 8;

    // 形成循环单链表
    D->next = D1;
    D1->next = D2;
    D2->next = D3;
    D3->next = D;

    x40_18(L, D);

    // 遍历一边查看
    LNode *u = L;


    while (u->next != L) {
        printf("%d ", u->data);
        u = u->next;
    }
    printf("%d ",u->data);
}