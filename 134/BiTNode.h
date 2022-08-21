/**
    -*- coding:utf-8 -*-
    @projectName:   DataStructure
    @FileName:      BiTNode
    @author:        30671
    @description:   TODO
    @date:          2022/8/16
    @version:       1.0
*/


#ifndef DATASTRUCTURE_BITNODE_H
#define DATASTRUCTURE_BITNODE_H

#include "../Def.h"

typedef char TreeElemType;

typedef struct BiTNode {
    TreeElemType data; // 数据域
    struct BiTNode *lChild, *rChild; // 左 右 孩子指针
} BiTNode, *BiTree;

/**
 * 初始化根节点
 *      树根
 * @param tree
 * @return
 */
bool InitTreeRoot(BiTree *tree, TreeElemType data);

/**
 * 创建一个新的结点
 *      存入对应数据
 * @param data
 * @return
 */
BiTree createBiTNode(TreeElemType data);

/**
 * 给结点添加左右孩子
 * @param father
 * @param data
 * @param flag
 * @return
 */
bool addSonBiTNode(BiTNode *father, TreeElemType data, uint8 flag);

/**
 * 获取左右孩子
 * @param father
 * @param flag
 * @return
 */
BiTNode *getSonBiTNode(BiTNode *father, uint8 flag);


/**
 * 查询结点的父亲节点
 *      从树根开始,挨个查询 哪个结点的->lchild 或者 ->rchild 的结点是son
 * @param tree
 * @param son
 * @return
 */
BiTNode *getFather(BiTree tree, BiTNode *son);

/**
 * 先序遍历
 *      先根遍历
 *          根 左 右
 * @param T
 */
void PreOrder(BiTree T);

/**
 * 中序遍历
 *      中根遍历
 *          左 根 右
 * @param T
 */
void InOrder(BiTree T);

/**
 * 后序遍历
 *      后根遍历
 *          左 右 根
 * @param T
 */
void PostOrder(BiTree T);

/**
 * 访问结点数据
 * @param biTNode
 */
void Visit(BiTNode *biTNode);

/**
 * 功能测试函数
 */
void TestBiTNode();


#endif //DATASTRUCTURE_BITNODE_H
