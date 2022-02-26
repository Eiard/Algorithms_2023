//
// Created by 30671 on 2022/2/23.
//

#ifndef ALGORITHMS_X05_H
#define ALGORITHMS_X05_H

#include "../Stack.h"

// 共享栈实现
#define maxsize 100

typedef struct {
    ElemType stack[maxsize];
    int top[2];  // 两个栈的头指针
}stk;

ElemType x70_05();

int push(int i,ElemType x);

ElemType pop(int i);

void x70_05Test();

#endif //ALGORITHMS_X05_H
