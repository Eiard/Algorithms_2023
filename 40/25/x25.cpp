//
// Created by 30671 on 2022/2/19.
//

#include "x25.h"
// 实现尽可能高效的算法 实现原先L a1 a2 a3 .. an  ---> a1,an,a2,an-1,a3,an-2....

// 时间复杂度O(n) 空间复杂度O(1)
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
    q = p->next;  //p为工作指针
    p->next = nullptr;  // 后半段逆置  把p后面直接断开
    // p后面直接为空
    // 然后q q1 q2 q3 q4

    while (q) {
        // p p1 p2
        // q q1 q2

        //将q1先记录在r中
        r = q->next;  // 记录下一个结点的指针

        // 采用对于p结点后的尾插法
        // 让q->next 先指向p->next


        // q->next 先记录p->next 避免p->next结点丢失
        q->next = p->next;
        // p->next 就可以直接指向q
        p->next = q;
        // 将存储的临时工作结点更新到q中
        q = r;
    }


    // 从头开始
    s = L->next;
    // 从中点开始
    q = p->next;

    // a1 a2 a3 a4 a5 a6  逆置后
    // a1 a2 a3 a6 a5 a4

    // a6尾插法插入到a1后
    // s: a1 a2 a3
    // q: a6 a5 a4

    // a5尾插法插入到a2后
    // s: a1 a6 a2 a3
    // q: a5 a4

    // a4尾插法插入到a3后
    // s: a1 a6 a2 a5 a3
    // q: a4

    // s: a1 a6 a2 a5 a3 a4




    p->next = nullptr;

    while (q) {  // 还是尾插法
        r = q->next;  // 临时保存下一个工作结点
        q->next = s->next;  // 先保存s->next的值 存储到q->next  因为q->next 已经临时存储到r中
        s->next = q;  // 将s->next 直接指向q结点 相当于插入
        s = q->next;  //
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