//
// Created by 30671 on 2022/2/13.
//

#include "Test18.h"



void Test18(){
    printf("Please enter Question number\n");
    printf("---->");

    int Enter;
    scanf("%d",&Enter);

    if(Enter == 1){
        // 删除最小值的元素并且用最后一个元素填补
        x18_01Test();
    }
    else if(Enter == 2){
        // 高效算法 将顺序表逆置  空间复杂度O(1)
        x18_02Test();
    }
    else if(Enter == 3){
        // 时间复杂度O(n) 空间复杂度O(1)
        x18_03Test();
    }
    else if(Enter == 4){
        // 删除 s 与 t之间的值
        x18_04Test();
    }
    else if(Enter == 5){
        // 删除 s 与 t之间的值 (包含s和t)
        x18_05Test();
    }
    else if(Enter == 6){
        // 删除重复的元素
        x18_06Test();
    }
    else if(Enter == 7){
        // 两个有序表的合并
        x18_07Test();
    }
    else if(Enter == 8){
        // 将A[m+n]中 a1.a2...am 和 b1.b2.bn 互换
        x18_08Test();
    }
    else if(Enter == 9){
        // 有序表递增尽快查找x(二分查找) 没有则插入x,有则将x与后一个元素对换
        x18_09Test();
    }
    else if(Enter == 10){
        // 一维数组R中元素循环左移p个位置 即原先顺序为X0 X1 .... Xn-1  变换为 Xp Xp+1 .... Xn-1 X0 X1 ... Xp-1
        x18_10Test();
    }
    else if(Enter == 11){
        // 找两序列综合后的中位数 时间复杂度O(n) 空间复杂度O(1)
        x18_11Test();
    }
    else if(Enter == 12){
        // 找出主元素,出现次数最多,且出现次数超过总元素个数的一半
        x18_12Test();
    }
    else if(Enter == 13){
        // 找出最小正整数 1 2 03 5  则输出 4
        x18_13Test();
    }
    else if(Enter == 14){
        // 计算三个数组中 每个数组拿一个 , 计算|a-b|+|b-c|+|c-a| 的最小值
        x18_14Test();
    }


}