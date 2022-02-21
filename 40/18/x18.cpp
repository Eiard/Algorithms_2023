//
// Created by 30671 on 2022/2/19.
//

#include "x18.h"

ElemType x40_18(LinkList &L1,LinkList &L2){
    LNode *p = L1;
    LNode *q = L2;

    // 找到L1的末尾
    while (p->next!=L1){
        p= p->next;
    }
    // 找到L2的末尾
    while (q->next!=L2){
        q= q->next;
    }

    // 连接  相当于 L1   p --> L2   q --> L1
    p->next = L2;
    q->next = L1;

    // 遍历一边查看
    LNode *u = L1;
    while (u->next!= L1){
        printf("%d ",u->data);
        u = u->next;
    }

    return OK;
}

void x40_18Test(){
    // 无头结点
    LinkList L = (LNode*)malloc(sizeof (LNode));
    L->data = 1;
    LinkList L1 = (LNode*)malloc(sizeof (LNode));
    L->data = 2;
    LinkList L2 = (LNode*)malloc(sizeof (LNode));
    L->data = 3;
    LinkList L3 = (LNode*)malloc(sizeof (LNode));
    L->data = 4;

    // 形成循环单链表
    L->next = L1;
    L1->next = L2;
    L2->next = L3;
    L3->next = L;

    // 无头结点
    LinkList D = (LNode*)malloc(sizeof (LNode));
    L->data = 5;
    LinkList D1 = (LNode*)malloc(sizeof (LNode));
    L->data = 6;
    LinkList D2 = (LNode*)malloc(sizeof (LNode));
    L->data = 7;
    LinkList D3 = (LNode*)malloc(sizeof (LNode));
    L->data = 8;

    // 形成循环单链表
    D->next = D1;
    D1->next = D2;
    D2->next = D3;
    D3->next = D;

    x40_18(L,D);
}