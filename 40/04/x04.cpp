//
// Created by 30671 on 2022/2/19.
//

#include "x04.h"


// 删除一个最小值结点的高效算法
ElemType x40_04(LinkList &L) {
    if (L->next == nullptr) {
        return ERROR;
    }
    LNode *min, *prior_min, *p, *q;
    min = L->next;
    prior_min = L;
    p = L->next;
    q = L;  //p的前驱
    while (p) {
        if (p->data < min->data) {
            min = p;  //  最小结点指针更新
            prior_min = q;  //  前驱更新
        }
        p = p->next;
        q = q->next;
    }

    //  找到最小值的点和其前驱 min prior_min
    prior_min->next = min->next;
    int minis = min->data;
    free(min);
    return minis;
}

void x40_04Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    printf("The min is  %d",x40_04(L));

    printf(" After change is ");
    ListTraverse_LNode(L);
}