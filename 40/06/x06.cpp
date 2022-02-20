//
// Created by 30671 on 2022/2/19.
//

#include "x06.h"

// 让元素递增有序
ElemType x40_06(LinkList &L) {
    LNode *p = L->next, *pre;
    LNode *r = p->next;
    p->next = nullptr;
    p = r;
    while (p) {  // 相当于插入排序
        r = p->next;  // 保存p的后继结点
        pre = L;  //  从头开始  结点p的值与链表的每个数想比,大于就指针后移
        while (pre->next != NULL && pre->next->data < p->data){
            pre = pre->next;
        }
        // 小于时就得到了需要前插的位置

        // pre  p  pre->next

        p->next = pre->next;
        pre->next = p;
        p = r;
    }


    return OK;
}

void x40_06Test() {
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

    x40_06(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}