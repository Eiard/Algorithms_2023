//
// Created by 30671 on 2022/2/19.
//

#include "x20.h"

D20LinkList x40_20(D20LinkList &L, ElemType x) {
    DL20Node *p = L->next, *q;
    while (p && p->data != x) {
        p = p->next;
    }
    if (!p) {  // 不存在值为x的结点
        exit(0);
    } else {
        p->freq++;
        if (p->pred == L || p->pred->freq > p->freq)
            return p;
        if (p->next != nullptr)p->next->pred = p->pred;
        p->pred->next = p->next;
        q = p->pred;
        while (q != L && q->freq <= p->freq) {
            q = q->pred;
        }
        p->next = q->next;
        if (q->next != nullptr) {
            q->next->pred = p;
        }
        p->pred = q;
        q->next = p;
    }

    return OK;
}

void x40_20Test() {
    D20LinkList D;

    D20LinkList D1 = (D20LinkList) malloc(sizeof(DL20Node));
    D20LinkList D2 = (D20LinkList) malloc(sizeof(DL20Node));
    D20LinkList D3 = (D20LinkList) malloc(sizeof(DL20Node));
    D20LinkList D4 = (D20LinkList) malloc(sizeof(DL20Node));

    D1->data = 1;
    D2->data = 2;
    D3->data = 3;
    D4->data = 4;

    D1->freq = 0;
    D2->freq = 0;
    D3->freq = 0;
    D4->freq = 0;

    D->next = D1;
    D1->pred = D;

    D1->next = D2;
    D2->pred = D1;

    D2->next = D3;
    D3->pred = D2;

    D3->next = D4;
    D4->pred = D3;

    x40_20(D, 1);
}