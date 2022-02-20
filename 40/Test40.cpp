//
// Created by 30671 on 2022/2/17.
//

#include "Test40.h"

void Test40(){
    printf("Please enter Question number\n");
    printf("---->");

    int Enter;
    scanf("%d",&Enter);

    if(Enter == 1){
        // 不带头结点的递归删除
        x40_01Test();
    }
    else if(Enter == 2){
        // 删除所有值为x的结点(带头结点)
        x40_02Test();
    }
    else if(Enter == 3){
        // 链表倒序输出
        x40_03Test();
    }
    else if(Enter == 4){
        // 删除最小值
        x40_04Test();
    }
    else if(Enter == 5){
        // 就地逆置
        x40_05Test();
    }
    else if(Enter == 6){
        // 链表元素排序
        x40_06Test();
    }
    else if(Enter == 7){
        // 所有结点无序,且删除两个值之间的数(若存在)
        x40_07Test();
    }
    else if(Enter == 8){
        // 所有结点无序,且删除两个值之间的数(若存在)
        x40_08Test();
    }
    else if(Enter == 9){
        // 所有结点无序,且删除两个值之间的数(若存在)
        x40_09Test();
    }
    else if(Enter == 10){
        // 所有结点无序,且删除两个值之间的数(若存在)
        x40_010Test();
    }
    else if(Enter == 11){


    }
    else if(Enter == 12){


    }
    else if(Enter == 13){


    }
    else if(Enter == 14){


    }


}