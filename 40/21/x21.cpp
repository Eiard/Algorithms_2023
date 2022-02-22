//
// Created by 30671 on 2022/2/19.
//

#include "x21.h"

// 判断是否存在环
LNode *x40_21(LinkList &L) {
    LNode *fast = L, *slow = L;  // 快慢指针
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;  // 慢指针每次走一步
        fast = fast->next->next;  // 快指针每次走两步
        if (slow == fast) break;  // 相遇 地址指针相同
    }
    if (slow == nullptr || fast->next == nullptr) {
        return nullptr;  // 如果其中一个成为了nullptr 则说明没有环
    }
    LNode *p1 = L, *p2 = slow;
    while (p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;  // 返回到入口点
}

void x40_21Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    LNode *l1 = (LNode *) malloc(sizeof(LNode));
    l1->data = 3;
    LNode *l2 = (LNode *) malloc(sizeof(LNode));
    l2->data = 2;
    LNode *l3 = (LNode *) malloc(sizeof(LNode));
    l3->data = 5;
    LNode *l4 = (LNode *) malloc(sizeof(LNode));
    l4->data = 4;

    //模拟成 L -> l1 -> l2 - l3 -> l4 -> l2 形成环
    L->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l2;


    LNode* Tem = x40_21(L);
    if (Tem == nullptr) {
        printf("no loop ");
    } else{
        printf("The Enter point is %d",Tem->data);
    }

}