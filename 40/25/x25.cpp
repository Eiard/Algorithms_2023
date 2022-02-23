//
// Created by 30671 on 2022/2/19.
//

#include "x25.h"
// 实现尽可能高效的算法 实现原先L a1 a2 a3 .. an  ---> a1,an,a2,an-1,a3,an-2....
// a1 a2 a3 a4 a5 a6  2<->6
// a1 a6 a3 a5 a4 a2  4<->5
// a1 a6 a2 a4 a5 a3  6<->4
// a1 a6 a2 a5 a4 a3

//

// a1 a6 a2 a5 a3 a4
ElemType x40_25(LinkList &L) {
    // 将链表后半段原地逆置
    LNode *p, *q, *r, *s;
    p = q = L;
    // q走两步 p走一步 就说明最终当q走到链表尾部时,p刚好就是中点
    while (q->next) {
        p = p->next;  // p走一步
        q = q->next;
        if (q->next != nullptr)q = q->next;  //q走两步
    }

    // 此时p为链表中点
    q = p->next;
    p->next = nullptr;  // 后半段逆置
    while (q) {
        // p q q->next
        // p p->next q r
        //往后每一个结点都插入到p后面
        r = q->next;  // 临时存储往后的结点
        q->next = p->next;
        // p r
        //
        p->next = q;
        q = r;
    }

    s = L->next;
    q = p->next;
    p->next = nullptr;
    while (q) {
        r = q->next;
        q->next = s->next;
        s->next = q;
        s = q->next;
        q = r;
    }

    return OK;
}

void x40_25Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 6);
    ListInsertPrior_LNode(L, 1, 5);
    ListInsertPrior_LNode(L, 1, 4);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 1);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x40_25(L);

    printf(" After change is ");
    ListTraverse_LNode(L);
}