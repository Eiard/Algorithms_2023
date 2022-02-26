//
// Created by 30671 on 2022/2/23.
//

#include "Test70.h"


void Test70(){
    printf("Please enter Question number\n");
    printf("---->");

    int Enter;
    scanf("%d", &Enter);

    if (Enter == 3) {
        // 判断是否合法
        x70_03Test();
    } else if (Enter == 4) {
        // 利用栈判断链表是否对称
        x70_04Test();
    } else if (Enter == 5) {
        // 创建一个共享栈
        x70_05Test();
    }
}