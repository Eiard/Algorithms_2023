//
// Created by 30671 on 2022/2/19.
//

#include "x03.h"


// 反向输出
ElemType x40_03(LinkList &L) {
    // 从第一个有效元素开始
    LNode *p = L->next;

    int i = 0;
    ElemType a[200];

    while (p) {
        a[i++] = p->data;
        p = p->next;
    }

    for (int j = i - 1; j >= 0; (j Dsc)) {
        printf(" %d", a[j]);  // 倒序输出
    }


    return OK;
}

void x40_03Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 3);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    printf(" After change is ");
    x40_03(L);


}