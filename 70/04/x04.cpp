//
// Created by 30671 on 2022/2/23.
//

#include "x04.h"

// 利用栈判断是否是对称
ElemType x70_04(LinkList L1, int length) {
    int i;
    char *s = (char *) malloc(sizeof(char) * length / 2);
    LNode *p = L1->next;
    for (i = 0; i < length / 2; ++i) {
        s[i] = p->data;
        p = p->next;
    }
    i--;
    if (length % 2 == 1) {  // 如果元素是奇数个
        p = p->next;
    }
    while (p != nullptr && s[i] == p->data) {
        i--;
        p = p->next;
    }
    if (i == -1) {
        printf("it is");
        return OK;
    } else {
        printf("is not");
        return ERROR;
    }
}

void x70_04Test() {
    LinkList L;
    Init_Head(L);  // 初始化链表

    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    ListInsertPrior_LNode(L, 1, 2);
    printf(" The origin is ");
    ListTraverse_LNode(L);

    x70_04(L, Length_LNode(L));


}