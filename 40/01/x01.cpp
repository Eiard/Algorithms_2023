//
// Created by 30671 on 2022/2/17.
//

#include "x01.h"


// 由于只有第一问是无头结点的单链表
// 直接用几个节点模拟一个单链表

// 递归方式删除为x的节点
ElemType x40_01(LinkList &L, ElemType x) {
    LNode *p;
    if (L == NULL)
        return ERROR;
    if (L->data == x) {
        p = L;
        L = L->next;
        free(p);
        x40_01(L, x);
    } else {  // 没有找到相等的  则递归到后一个点
        x40_01(L->next, x);
    }
    return OK;
}

// 带头结点的遍历
ElemType Traverse(LinkList L) {
    if (L == nullptr) {
        return ERROR;
    }
    while (L) {
        printf("%d", L->data);
        L = L->next;
    }
    return OK;
}

void x40_01Test() {
    // 由于只有第一问是无头结点的单链表
    // 直接用几个节点模拟一个单链表
    LinkList a1 = (LinkList) malloc(sizeof(LNode));  //创建头结点 (也是第一个元素的节点)
    LNode *a2 = (LNode *) malloc(sizeof(LNode));
    LNode *a3 = (LNode *) malloc(sizeof(LNode));
    LNode *a4 = (LNode *) malloc(sizeof(LNode));
    LNode *a5 = (LNode *) malloc(sizeof(LNode));
    a1->data = 1;
    a1->next = a2;
    a2->data = 2;
    a2->next = a3;
    a3->data = 2;
    a3->next = a4;
    a4->data = 4;
    a4->next = a5;
    a5->data = 5;
    a5->next = nullptr;

    x40_01(a1, 2);

    Traverse(a1);
}