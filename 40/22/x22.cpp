//
// Created by 30671 on 2022/2/19.
//

#include "x22.h"

// 查找链表倒数 k 个元素的值,查找成功 输出data的值 返回OK 未找到返回ERROR
ElemType x40_22(LinkList &L, int k) {
    LNode *p = L->next, *q = L->next;
    int count = 0;
    while (p != nullptr) {
        if (count < k)count++;
        else q = q->next;  // q只有当和p差距有k个元素时,q指针才开始移动
        p = p->next;  // p始终都在移动
    }
    if (count < k) {
        return ERROR;  // 未找到
    } else {
        printf("%d", q->data);  // q是p的前面的相对k个
        return OK;
    }
}

void x40_22Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 5);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 2);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_22(L, 3);

}