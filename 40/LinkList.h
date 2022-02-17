//
// Created by 30671 on 2022/2/17.
//

#ifndef ALGORITHMS_LINKLIST_H
#define ALGORITHMS_LINKLIST_H

#include "../Def.h"

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;  //LinkList常代表单链表的头指针  LNode常代表区块

// 带头结点的链表创建
void Init_Head(LinkList L);



#endif //ALGORITHMS_LINKLIST_H
