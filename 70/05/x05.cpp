//
// Created by 30671 on 2022/2/23.
//

#include "x05.h"

stk s;  // 全局变量

int push(int i, ElemType x) {  // i表示 栈号 0为左边 1为右边
    if (i < 0 || i > 1) {
        printf("is not");
        exit(0);
    }
    if (s.top[1] - s.top[0] == 1) {
        printf("is full");
        return ERROR;
    }
    switch (i) {
        case 0:  // 左边
            s.stack[++s.top[0]] = x;
            return OK;
        case 1:  // 右边
            s.stack[--s.top[1]] = x;
            return OK;
    }
    return ERROR;
}

ElemType pop(int i) {
    if (i < 0 || i > 1) {
        printf("it not");
        exit(0);
    }
    switch (i) {
        case 0:
            if (s.top[0] == -1) {
                printf("栈空\n");
                return ERROR;
            } else {
                return s.stack[s.top[0]--];
            }
        case 1:
            if (s.top[1] == maxsize) {
                printf("is null");
                return ERROR;
            } else {
                return s.stack[s.top[1]++];
            }
    }
    return ERROR;
}


ElemType x70_05() {


    return OK;
}

void x70_05Test() {

}