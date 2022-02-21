//
// Created by 30671 on 2022/2/19.
//

#include "x17.h"

// 无头结点 循环双向链表
ElemType x40_17(DLinkList &L){
    DLNode*p = L,*q = L->pre;

    while (p!=q&&p->next!=q){
        if (p->data==q->data){
            p = p->next;
            q= q->pre;
        } else{
            return ERROR;
        }
    }

    return OK;
}

void x40_17Test(){
    DLinkList DL;
    DL = (DLinkList)malloc(sizeof (DLNode));
    DL->data = 7;
    DLinkList DL1;
    DL1 = (DLinkList)malloc(sizeof (DLNode));
    DL1->data = 2;
    DLinkList DL2;
    DL2= (DLinkList)malloc(sizeof (DLNode));
    DL2->data = 2;
    DLinkList DL3;
    DL3= (DLinkList)malloc(sizeof (DLNode));
    DL3->data = 7;

    // DL <--> DL1 <--> DL2 <--> DL3 <--> DL

    DL->next = DL1;
    DL->pre = DL3;
    DL1->next = DL2;
    DL1->pre = DL;
    DL2->next = DL3;
    DL2->pre = DL1;
    DL3->next = DL;
    DL3->pre = DL2;

    // 传入头结点
    if (x40_17(DL)  == OK){
        printf("yes");
    }else{
        printf("no");
    }


}