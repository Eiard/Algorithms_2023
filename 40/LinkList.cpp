//
// Created by 30671 on 2022/2/17.
//

#include "LinkList.h"

// 链表创建(带头结点)
ElemType Init_Head(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));  //头结点地址(地址)
    if (L == nullptr) return ERROR;
    L->next = nullptr;
    return OK;
}

// 链表的赋值(带头结点)
ElemType CreateList_LNode(LinkList &L, int n) {
    for (int i = n; i > 0; --i) {
        LNode *p = (LNode *) malloc(sizeof(LNode));  //区块地址(指针)
        scanf("%d", &p->data);
        //插入到表头
        p->next = L->next;
        L->next = p;
    }
    return OK;
}

// 插入到第i个节点(带头结点)
ElemType ListInsertPrior_LNode(LinkList &L, int i, ElemType e) {
    if (i < 1) {
        return ERROR;
    }
    LNode *p = L;  //指针p指向当前扫描到的节点(临时指针)  开头指头结点
    int j = 0;  //当前p指向的是第几个节点
    while (p != NULL && j < i - 1) {  //j<i-1: 先找第i-1个节点是否存在
        p = p->next;
        j++;
    }

    if (p == NULL) {  //如果第i-1个节点 p == NULL 则说明 i-1个节点不存在
        return ERROR;
    }
    //如果第i-1个节点存在 p! = NULL
    LNode *s = (LNode *) malloc(sizeof(LNode));  //创建新区块
    if (s == NULL) {  //内存分配失败
        return ERROR;
    }
    s->data = e;  //填入数据
    s->next = p->next;  //让此时新区块 指向 p原先的下一个区块地址
    p->next = s;  //让原先的p 指向 新区块
    return OK;
}

// 插入到第i个节点(带头结点)
ElemType ListInsertPrior_LNode_Pointer(LinkList &L, int i, LNode* e) {
    if (i < 1) {
        return ERROR;
    }
    LNode *p = L;  //指针p指向当前扫描到的节点(临时指针)  开头指头结点
    int j = 0;  //当前p指向的是第几个节点
    while (p != NULL && j < i - 1) {  //j<i-1: 先找第i-1个节点是否存在
        p = p->next;
        j++;
    }

    if (p == NULL) {  //如果第i-1个节点 p == NULL 则说明 i-1个节点不存在
        return ERROR;
    }
    //如果第i-1个节点存在 p! = NULL

    if (e == NULL) {  //内存分配失败
        return ERROR;
    }
    e->next = p->next;  //让此时新区块 指向 p原先的下一个区块地址
    p->next = e;  //让原先的p 指向 新区块
    return OK;
}

// 删除第i个节点(带头结点)
ElemType ListDelete_LNode(LinkList &L, int i, ElemType &e) {
    LNode *p = L;
    int j = 0;
    while (p->next && j < i - 1) {
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i - 1) return ERROR;
    LNode *q = p->next;
    p->next = q->next;
    e = q->data;
    free(q);
    return OK;
}

// 获取第i个节点的值(带头结点)
ElemType GetElem_LNode(LinkList L, int i, ElemType &e) {
    LNode *p = L->next;
    int j = 1;  //LNode是下一个区块地址
    while (p && j < i) {  //通过下标定位元素
        p = p->next;
        j++;
    }
    if (!p || j > i) return ERROR;
    e = p->data;
    return OK;
}

// 遍历链表(带头结点)
ElemType ListTraverse_LNode(LinkList &L) {
    if (L == nullptr)return ERROR;
    LinkList P = L->next;
    while (P) {
        printf("%d ", P->data);
        P = P->next;
    }
    printf("\n");
    return OK;
}

// 遍历链表(带头结点)
ElemType Length_LNode(LinkList L) {
    if (L == NULL)return ERROR;
    int i = 0;
    LinkList P = L->next;
    while (P) {
        i++;
        P = P->next;
    }
    printf("\n");
    return i;
}

