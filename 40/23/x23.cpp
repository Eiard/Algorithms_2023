//
// Created by 30671 on 2022/2/19.
//

#include "x23.h"

// 找公共后缀
LNode *x40_23(LinkList &L1, LinkList &L2) {
    int L1_length, L2_length;
    LNode *p, *q;
    L1_length = Length_LNode(L1);
    L2_length = Length_LNode(L2);

    for (p = L1; L1_length > L2_length; L1_length--) {  // 若m>n使p指向链表中的第m-n+1个结点
        p = p->next;
    }
    for (q = L2; L1_length < L2_length; L2_length--) {  // 若m<n使p指向链表中的第m-n+1个结点
        q = q->next;
    }

    // 最后p 和 q 的 指针分别指向两者最小长度的第倒数某个点 如果m>n则 p移动到L1的倒数第n个点 如果m<n则 q移动到L2的倒数m个点

    while (p->next != nullptr && p->next != q->next) {  // 在相同长度的点进行比较平移 如果下一条不相等则说明还未找到第一个公共点
        p = p->next;
        q = q->next;
    }
    return p->next;
}

void x40_23Test() {
    LinkList L1;
    Init_Head(L1);  // 初始化链表
    LinkList L2;
    Init_Head(L2);  // 初始化链表

    LNode *p1 = (LNode *) malloc(sizeof(LNode));
    p1->data = 10;
    p1->next = nullptr;
    LNode *p2 = (LNode *) malloc(sizeof(LNode));
    p2->data = 20;
    p2->next = p1;
    LNode *p3 = (LNode *) malloc(sizeof(LNode));
    p3->data = 30;
    p3->next = p2;
    LNode *p4 = (LNode *) malloc(sizeof(LNode));
    p4->data = 40;
    p4->next = p3;

    L1->next = p4;
    L2->next = p4;

    // 初始都变为 L1 p4 p3 p2 p1
    // 初始都变为 L2 p4 p3 p2 p1

    // 都采用头插法插入不同的值

    ListInsertPrior_LNode(L1, 1, 1);
    ListInsertPrior_LNode(L1, 1, 2);
    ListInsertPrior_LNode(L1, 1, 3);
    ListInsertPrior_LNode(L2, 1, 4);
    ListInsertPrior_LNode(L2, 1, 5);


    printf(" The origin L1 is ");
    ListTraverse_LNode(L1);
    printf(" The origin L2 is ");
    ListTraverse_LNode(L2);

    printf("The common dot is %d", x40_23(L1, L2)->data);


}