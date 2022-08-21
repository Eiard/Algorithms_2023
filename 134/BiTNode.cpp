/**
    -*- coding:utf-8 -*-
    @projectName:   DataStructure
    @FileName:      BiTNode
    @author:        30671
    @description:   TODO
    @date:          2022/8/16
    @version:       1.0
*/


#include "BiTNode.h"


/**
 * 用来判断是添加左孩子 还是 右孩子
 */
enum {
    Left,
    Right,
};

bool InitTreeRoot(BiTree &tree, TreeElemType data) {

    tree = createBiTNode(data);

    return true;
}

BiTree createBiTNode(TreeElemType data) {
    // 动态申请一个结点
    BiTNode *p = (BiTNode *) malloc(sizeof(BiTNode));
    if (p == nullptr)
        return nullptr;

    // 存入数据
    p->data = data;

    // 新添加的结点左孩子和有孩子初始化为null
    p->lChild = nullptr;
    p->rChild = nullptr;

    return p;
}

bool addSonBiTNode(BiTNode *father, TreeElemType data, uint8 flag) {
    if (father == nullptr) {
        return false;
    }

    BiTNode *p = createBiTNode(data);
    if (p == nullptr) {
        return false;
    }

    // 按照flag决定是左孩子还是右孩子
    if (flag == Left) {
        father->lChild = p;
    } else if (flag == Right) {
        father->rChild = p;
    } else {
        return false;
    }
    return true;
}

BiTNode *getSonBiTNode(BiTNode *father, int flag) {
    if (father == nullptr) {
        return nullptr;
    }

    if (flag == Left) {
        return father->lChild;
    } else if (flag == Right) {
        return father->rChild;
    } else {
        return nullptr;
    }
}

BiTNode *getFather(BiTree tree, BiTNode *son) {


    return nullptr;
}

void PreOrder(BiTree T) {
    if (T != nullptr) {
        // 1. 先访问根节点
        Visit(T);

        // 2. 递归遍历左子树
        PreOrder(T->lChild);

        // 3. 递归遍历右子树
        PreOrder(T->rChild);
    }
}

void InOrder(BiTree T) {
    if (T != nullptr) {
        // 1. 先递归遍历左子树
        InOrder(T->lChild);

        // 2. 访问根节点
        Visit(T);

        // 3. 递归遍历右子树
        InOrder(T->rChild);
    }
}

void PostOrder(BiTree T) {
    if (T != nullptr) {
        // 1. 先递归遍历左子树
        PostOrder(T->lChild);

        // 2. 递归遍历右子树
        PostOrder(T->rChild);

        // 3. 访问根节点
        Visit(T);
    }
}

void Visit(BiTNode *biTNode) {
    printf("%c ", biTNode->data);
}


void TestBiTNode() {

    //  定义一棵空树
    BiTree root = nullptr;

    // 初始化树根结点
    InitTreeRoot(root, 'a');

    addSonBiTNode(root, 'b', Left);
    addSonBiTNode(root, 'c', Right);

    PreOrder(root);


}
