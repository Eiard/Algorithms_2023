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
        x01Test();
    }
    else if(Enter == 2){
        // 高效算法 将顺序表逆置  空间复杂度O(1)
        x02Test();
    }
    else if(Enter == 3){
        // 时间复杂度O(n) 空间复杂度O(1)
        x03Test();
    }
    else if(Enter == 4){
        // 删除 s 与 t之间的值
        x04Test();
    }
    else if(Enter == 5){
        // 删除 s 与 t之间的值 (包含s和t)
        x05Test();
    }
    else if(Enter == 6){
        // 删除重复的元素
        x06Test();
    }
    else if(Enter == 7){
        // 两个有序表的合并
        x07Test();
    }
    else if(Enter == 8){
        // 将A[m+n]中 a1.a2...am 和 b1.b2.bn 互换
        x08Test();
    }
    else if(Enter == 9){
        // 有序表递增尽快查找x(二分查找) 没有则插入x,有则将x与后一个元素对换
        x09Test();
    }
    else if(Enter == 10){
        // 一维数组R中元素循环左移p个位置 即原先顺序为X0 X1 .... Xn-1  变换为 Xp Xp+1 .... Xn-1 X0 X1 ... Xp-1
        x10Test();
    }
    else if(Enter == 11){
        // 找两序列综合后的中位数 时间复杂度O(n) 空间复杂度O(1)
        x11Test();
    }
    else if(Enter == 12){
        // 找出主元素,出现次数最多,且出现次数超过总元素个数的一半
        x12Test();
    }
    else if(Enter == 13){
        // 找出最小正整数
        x13Test();
    }
    else if(Enter == 14){
        x14Test();
    }


}