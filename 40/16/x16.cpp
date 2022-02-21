//
// Created by 30671 on 2022/2/19.
//

#include "x16.h"

ElemType x40_16(LinkList &LA, LinkList &LB) {
    LNode*p = LA->next;  //p为A链表的工作指针
    LNode*pre = p;  // pre为每趟比较中A链表的开始结点
    LNode*q = LB->next;
    
    while (p&&q){
        if (p->data == q->data){  // 如果一直相等,直到B链表结束,则说明后面都相等
            p = p->next;
            q = q->next;
        }
        else{
            pre = pre->next;
            p = pre;
            q = LB->next;  // 如果有一个不相等则说明这一段链不是A的子链
        }
    }

    // 只有当q 为空时 才说明B中所有都找到相等的且连续的
    if(q == nullptr){
        return OK;
    }else{
        return ERROR;
    }

    return OK;
}

void x40_16Test() {
    LinkList LA;
    Init_Head(LA);  // 初始化链表

    ListInsertPrior_LNode(LA, 1, 1);
    ListInsertPrior_LNode(LA, 1, 2);
    ListInsertPrior_LNode(LA, 1, 2);
    ListInsertPrior_LNode(LA, 1, 3);
    ListInsertPrior_LNode(LA, 1, 1);
    ListInsertPrior_LNode(LA, 1, 2);

    LinkList LB;
    Init_Head(LB);  // 初始化链表

    ListInsertPrior_LNode(LB, 1, 3);
    ListInsertPrior_LNode(LB, 1, 1);

    printf(" The origin LA is ");
    ListTraverse_LNode(LA);
    printf(" The origin LB is ");
    ListTraverse_LNode(LB);

    if (x40_16(LA, LB) == OK) {
        printf("The B is part of A");
    }else{
        printf("The B is not part of A");
    }

}