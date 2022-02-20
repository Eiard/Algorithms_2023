//
// Created by 30671 on 2022/2/19.
//

#include "x09.h"

// 按递增次序输出链表的值,并且释放每个结点,不能使用数组作为辅助空间
ElemType x40_09(LinkList &L) {
    while (L->next != NULL) {
        LNode *pre = L;  // 最小结点的前驱结点的指针
        LNode *p = pre->next;  // p为工作指针
        while (p->next != NULL) {
            if (p->next->data < pre->next->data)
                pre = p;  // 记住当前最小值结点的前驱
            p = p->next;
        }
        printf("%d", pre->next->data);
        LNode *u = pre->next;
        pre->next = u->next;
        free(u);
    }
    free(L);

    return OK;
}

void x40_09Test() {
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

    x40_09(L);

}