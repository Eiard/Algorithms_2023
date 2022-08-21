/**
    -*- coding:utf-8 -*-
    @projectName:   DataStructure
    @FileName:      TreeNode
    @author:        30671
    @description:   TODO
    @date:          2022/8/17
    @version:       1.0
*/


#ifndef DATASTRUCTURE_TREENODE_H
#define DATASTRUCTURE_TREENODE_H


#include "../Def.h"

#define MaxSizeTree 100

struct TreeNode{
    ElemType value; // 结点中的数据元素
    bool isEmpty;  // 判断结点是否为空
};



/**
 * 齿梳化顺序存储结构的二叉树
 * @param tree
 */
void InitTree(TreeNode tree[]);

/**
 * 功能测试函数
 */
void TestTree();


#endif //DATASTRUCTURE_TREENODE_H
