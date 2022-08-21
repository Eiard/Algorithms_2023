/**
    -*- coding:utf-8 -*-
    @projectName:   Algorithms 
    @FileName:      x05
    @author:        30671
    @description:   TODO 
    @date:          2022/8/21
    @version:       1.0
*/


#include "x05.h"


// 找出结点i 和 结点j 的最近父节点
TreeElemType Comm_Ancestor(TreeNode T[], int i, int j) {
    if (!T[i].isEmpty) { // 结点存在

        while (i != j) {
            if (i > j) {
                i = i / 2; // i向上找祖先
            } else {
                j = j / 2; // j向上找祖先
            }
        }
        return T[i].value;
    }
}

void x134_05Test() {

}
