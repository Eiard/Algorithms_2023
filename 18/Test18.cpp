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
        x09Test();
    }
    else if(Enter == 10){
        x10Test();
    }
    else if(Enter == 11){
        x11Test();
    }
    else if(Enter == 12){
        x12Test();
    }
    else if(Enter == 13){
        x13Test();
    }
    else if(Enter == 14){
        x14Test();
    }


}