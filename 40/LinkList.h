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

typedef struct DLNode {
    ElemType data;
    struct DLNode *next;  //后驱
    struct DLNode *pre;  // 前驱
} DLNode, *DLinkList;  //LinkList常代表单链表的头指针  LNode常代表区块

// 带头结点的链表创建
ElemType Init_Head(DLinkList &L);

// P40 20 题 非循环双向链表 访问频度域
typedef struct DL20Node {
    ElemType data;
    struct DL20Node *next;  //后驱
    struct DL20Node *pred;  // 前驱
    int freq;
} DL20Node, *D20LinkList;  //LinkList常代表单链表的头指针  LNode常代表区块


#endif //ALGORITHMS_LINKLIST_H

