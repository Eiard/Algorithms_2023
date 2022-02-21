//
// Created by 30671 on 2022/2/19.
//

#include "x19.h"

ElemType x40_19(LinkList &L) {
    LNode *p,*pre,*minp,*minpre;
    while (L->next != L){  //表不为空
        p = L->next;  // p相当于工作指针
        pre = L;
        minp = p;
        minpre = pre;
        while (p!=L){
            if (p->data <minp->data){
                minp = p;
                minpre = pre;
            }
            pre = p;
            p = p->next;
        }
        printf("%d ",minp->data);
        minpre->next = minp->next;
        free(minp);
    }


    return OK;
}

void x40_19Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表
    LNode *Lmo = (LNode *) malloc(sizeof(LNode));
    Lmo->data = 9;
    L->next = Lmo;
    Lmo->next = L;  // 构成环
    ListInsertPrior_LNode(L, 1, 1);
    ListInsertPrior_LNode(L, 1, 7);
    ListInsertPrior_LNode(L, 1, 3);
    ListInsertPrior_LNode(L, 1, 6);
    ListInsertPrior_LNode(L, 1, 5);
    ListInsertPrior_LNode(L, 1, 2);

    x40_19(L);

}