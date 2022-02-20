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
ElemType Init_Head(LinkList &L);

ElemType ListInsertPrior_LNode(LinkList &L, int i, ElemType e);  // 将数插入到第i个结点

ElemType ListDelete_LNode(LinkList &L, int i, ElemType &e);  // 删除第i个结点

ElemType GetElem_LNode(LinkList L, int i, ElemType &e);  // 获取第i个的值

ElemType ListTraverse_LNode(LinkList &L);  // 遍历

ElemType Length_LNode(LinkList L);

ElemType ListInsertPrior_LNode_Pointer(LinkList &L, int i, LNode* e);

#endif //ALGORITHMS_LINKLIST_H
