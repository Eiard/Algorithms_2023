//
// Created by 30671 on 2022/2/19.
//

#include "x08.h"

// 找出两个链表的公共结点  即类似字母Y  最终汇聚
LinkList x40_08(LinkList &L1, LinkList &L2) {
    int len1 = Length_LNode(L1), len2 = Length_LNode(L2);
    LinkList longList, shortList;
    int dist;  // 两表长之差
    if (len1 > len2) {
        longList = L1->next;
        shortList = L2->next;
        dist = len1 - len2;
    } else {
        longList = L2->next;
        shortList = L1->next;
        dist = len2 - len1;
    }
    while (dist--) {  // 先遍历到第dist个结点,然后同步
        longList = longList->next;
    }
    while (longList != NULL) {
        if(longList == shortList){
            return longList;
        }else{
            longList = longList->next;
            shortList = shortList->next;
        }
    }
    return NULL;
}

void x40_08Test() {
    LinkList L1;
    Init_Head(L1);  // 初始化链表
    LinkList L2;
    Init_Head(L2);  // 初始化链表
    // 公共结点1
    LNode *TogLNode1 = (LNode *) malloc(sizeof(LNode));
    TogLNode1->data = 4;
    printf("1 %d\n",&L1);
    // 公共结点2
    LNode *TogLNode2 = (LNode *) malloc(sizeof(LNode));
    TogLNode2->data = 5;
    printf("2 %d",&L2);
    //  2 ---> 1
    TogLNode2->next = TogLNode1;
    TogLNode1->next = nullptr;
    L1->next = TogLNode2;
    L2->next = TogLNode2;


    ListInsertPrior_LNode(L1, 3, 1);

    ListInsertPrior_LNode(L2, 3, 1);


    printf("The Co Address is %d",x40_08(L1,L2));


}