//
// Created by 30671 on 2022/2/19.
//

#include "x05.h"

// 就地逆置
ElemType x40_05(LinkList &L) {
    if (L == nullptr && L->next == nullptr) {
        return ERROR;
    }
    if (L->next->next == nullptr) {  // 只有一个元素  直接返回
        return OK;
    }
    LNode *p = L->next->next;  // 指向第二个有效元素
    LNode *q;
    L->next->next = nullptr;  //第一个元素作为转置后的结尾,所以next为nullptr
    // 从第二个结点开始头插法
    while (p) {
        q = p;  // 保留要移动的结点
        p = p->next;
        q->next = L->next;
        L->next = q;
    }

    return OK;
}

void x40_05Test() {
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

    x40_05(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}