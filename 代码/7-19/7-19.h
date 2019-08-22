#pragma once

typedef char BTDataType;

typedef struct BTNode
{
	struct BTNode* _pLeft;
	struct BTNode* _pRight;
	BTDataType _data;
}BTNode;



// 1. ���������� 
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

// ���������� 
BTNode* CopyBinTree(BTNode* pRoot);


// ���ٶ����� 
void DestroyBinTree(BTNode** pRoot);
// �����������ֱ�����ʽ 
//ǰ��
void PreOrder(BTNode* pRoot);
void PreOrderNor(BTNode* pRoot); {


if (root == NULL) {
	return;
	PreOrder(root->left);
	PreOrder(root->right);
} 
} 
//����
void InOrder(BTNode* pRoot);
void InOrderNor(BTNode* pRoot); {
	if (root == NULL) {
		return;
		InOrder(root->left);
		InOrder(root->right);
	}
}
//����
void PostOrder(BTNode* pRoot);
void PostOrderNor(BTNode* pRoot);

//����
void LevelOrder(BTNode* pRoot);

// ��ȡ�������нڵ�ĸ��� 
int GetNodeCount(BTNode* pRoot);

// ��������ĸ߶� 
int Height(BTNode* pRoot);


// ���������Ƿ�ƽ��O(N^2) 
int IsBalanceTree(BTNode* pRoot);
// ���������Ƿ�ƽ��O(N) 
int IsBalanceTree_P(BTNode* pRoot, int* height);

// ��ȡ��������Ҷ�ӽڵ�ĸ��� 
int GetLeafNodeCount(BTNode* pRoot);

// ��ȡ��������K��ڵ�ĸ��� 
int GetKLevelNodeCount(BTNode* pRoot, int K);

// ��ȡ��������ĳ���ڵ��˫�׽ڵ� 
BTNode* GetNodeParent(BTNode* pRoot, BTNode* pNode);


// ��������ľ��� 
void Mirror(BTNode* pRoot);

8. ��ɶ��������ֵ�����OJ��Ŀ

