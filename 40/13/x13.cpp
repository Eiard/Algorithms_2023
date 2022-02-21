//
// Created by 30671 on 2022/2/19.
//

#include "x13.h"

// LA 和 LB 为单调递增的单链表  合并为 LC单调递减
ElemType x40_13(LinkList &LA, LinkList &LB, LinkList &LC) {
    // p赋值为LA初始值 q赋值为LB初始值
    LNode *pa = LA->next, *pb = LB->next, *r;
    LNode *Temp;

    while (pa && pb) {  // 看哪边值小 先插入值小的
        if (pa->data <= pb->data) {  // 头插法
            Temp = (LNode *) malloc(sizeof(LNode));
            Temp->data = pa->data;

            Temp->next = LC->next;
            LC->next = Temp;

            pa = pa->next;
        } else {  // 链表LB小 头插法
            Temp = (LNode *) malloc(sizeof(LNode));
            Temp->data = pb->data;

            Temp->next = LC->next;
            LC->next = Temp;
            pb = pb->next;
        }
    }
    if (pa) {  // 最终一定会留一个链表  如果pa不为空则说明
        pb = pa;
    }

    while (pb) {  //将后续结点直接插入到后续
        Temp = (LNode *) malloc(sizeof(LNode));
        Temp->data = pb->data;

        Temp->next = LC->next;
        LC->next = Temp;
        pb = pb->next;
    }

    return OK;
}

void x40_13Test() {
    LinkList LA;
    Init_Head(LA);  // 初始化链表
    ListInsertPrior_LNode(LA, 1, 6);
    ListInsertPrior_LNode(LA, 1, 4);
    ListInsertPrior_LNode(LA, 1, 1);

    LinkList LB;
    Init_Head(LB);  // 初始化链表
    ListInsertPrior_LNode(LB, 1, 7);
    ListInsertPrior_LNode(LB, 1, 5);
    ListInsertPrior_LNode(LB, 1, 2);

    LinkList LC;
    Init_Head(LC);  // 初始化链表
    printf(" The origin A is ");
    ListTraverse_LNode(LA);
    printf(" The origin B is ");
    ListTraverse_LNode(LB);

    x40_13(LA, LB, LC);

    printf(" After change is ");
    ListTraverse_LNode(LC);
}