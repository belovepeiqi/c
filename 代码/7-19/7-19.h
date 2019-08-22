#pragma once

typedef char BTDataType;

typedef struct BTNode
{
	struct BTNode* _pLeft;
	struct BTNode* _pRight;
	BTDataType _data;
}BTNode;



// 1. 创建二叉树 
BTNode* CreateBinTree(BTDataType* array, int size){
	Node *p;
	BTDataType ch;
	cin >> ch;
	if (ch == 0) {
		p = NULL;
	}
	else {
		p = (Node *)malloc(sizeof(Node));
		p->data = ch;
		p->left = CreateBinTree();
		p->right = CreateBinTree();
	}
	return p;
}

// 拷贝二叉树 
BTNode* CopyBinTree(BTNode* pRoot);


// 销毁二叉树 
void DestroyBinTree(BTNode** pRoot);
// 二叉树的三种遍历方式 
//前序
void PreOrder(BTNode* pRoot);
void PreOrderNor(BTNode* pRoot); {


if (root == NULL) {
	return;
	PreOrder(root->left);
	PreOrder(root->right);
} 
} 
//中序
void InOrder(BTNode* pRoot);
void InOrderNor(BTNode* pRoot); {
	if (root == NULL) {
		return;
		InOrder(root->left);
		InOrder(root->right);
	}
}
//后序
void PostOrder(BTNode* pRoot);
void PostOrderNor(BTNode* pRoot);

//层序
void LevelOrder(BTNode* pRoot);

// 获取二叉树中节点的个数 
int GetNodeCount(BTNode* pRoot);

// 求二叉树的高度 
int Height(BTNode* pRoot);


// 检测二叉树是否平衡O(N^2) 
int IsBalanceTree(BTNode* pRoot);
// 检测二叉树是否平衡O(N) 
int IsBalanceTree_P(BTNode* pRoot, int* height);

// 获取二叉数中叶子节点的个数 
int GetLeafNodeCount(BTNode* pRoot);

// 获取二叉树第K层节点的个数 
int GetKLevelNodeCount(BTNode* pRoot, int K);

// 获取二叉树中某个节点的双亲节点 
BTNode* GetNodeParent(BTNode* pRoot, BTNode* pNode);


// 求二叉树的镜像 
void Mirror(BTNode* pRoot);

8. 完成二叉树部分的在线OJ题目

