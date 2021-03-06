//
// Created by 30671 on 2022/2/17.
//

#include "Test40.h"

void Test40() {
    printf("Please enter Question number\n");
    printf("---->");

    int Enter;
    scanf("%d", &Enter);

    if (Enter == 1) {
        // 不带头结点的递归删除
        x40_01Test();
    } else if (Enter == 2) {
        // 删除所有值为x的结点(带头结点)
        x40_02Test();
    } else if (Enter == 3) {
        // 链表倒序输出
        x40_03Test();
    } else if (Enter == 4) {
        // 删除最小值
        x40_04Test();
    } else if (Enter == 5) {
        // 就地逆置
        x40_05Test();
    } else if (Enter == 6) {
        // 链表元素排序
        x40_06Test();
    } else if (Enter == 7) {
        // 所有结点无序,且删除两个值之间的数(若存在)
        x40_07Test();
    } else if (Enter == 8) {
        // 找出公共结点
        x40_08Test();
    } else if (Enter == 9) {
        // 递增输出,不利用数组作为辅助空间
        x40_09Test();
    } else if (Enter == 10) {
        // 将一个链表拆分为A和B,A中为下标为奇数的元素,B中为下表为偶数的元素 且相对位置不发生改变
        x40_10Test();
    } else if (Enter == 11) {
        // 将C = a1,b1,a2,b2 ... an,bn 拆分为A a1 a2 a3 a4 ... B b1 b2 b3 b4 ...
        x40_11Test();
    } else if (Enter == 12) {
        // 在有序表中 删除相同的元素
        x40_12Test();
    } else if (Enter == 13) {
        // 两个递增有序链表LA,LB 合并成递减的单链表LC
        x40_13Test();
    } else if (Enter == 14) {
        // 利用LA和LB的公共元素产生链表LC
        x40_14Test();
    } else if (Enter == 15) {
        // 链表A与B为两个集合,编制函数求A与B的交集并存放于A中
        x40_15Test();
    } else if (Enter == 16) {
        // 判断B是否是A的子序列
        x40_16Test();
    } else if (Enter == 17) {
        // 无头结点 循环双向链表
        x40_17Test();
    } else if (Enter == 18) {
        // 两循环链表连接
        x40_18Test();
    } else if (Enter == 19) {
        // 循环单链表,每次循环查找一个最小结点,删除并输出,最后释放
        x40_19Test();
    } else if (Enter == 20) {
        // Locate(L,x)
        x40_20Test();
    } else if (Enter == 21) {
        // 判断是否有环
        x40_21Test();
    } else if (Enter == 22) {
        // 2009统考真题
        x40_22Test();
    } else if (Enter == 23) {
        //
        x40_23Test();
    } else if (Enter == 24) {
        //
        x40_24Test();
    } else if (Enter == 25) {
        //
        x40_25Test();
    }

}