//
// Created by 30671 on 2022/2/19.
//

#include "x24.h"

// 删除绝对值相同的点,且只保存第一个点\
// 时间复杂度O(n^2) 空间复杂度O(1)
ElemType x40_24(LinkList &L) {
    LNode *p = L->next;  // 用于第一个点的临时存储
    LNode *u, *pre;  // 用于删除结点和其前驱

    while (p) {
        pre = p;
        u = pre->next;
        while (u) {
            // 情况 pre u
            if (abs(u->data) == abs(p->data)) {  // 删除u
                pre->next = u->next;
                free(u);
                u = pre->next;
            } else {
                pre = pre->next;
                u = u->next;
            }
        }
        p = p->next;
    }

    return OK;
}

void x40_24Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, -1);
    ListInsertPrior_LNode(L, 1, -2);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_24(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}