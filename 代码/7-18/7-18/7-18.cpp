

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

/*
//ƽ�������
#include  <iostream>
using namespace std;

class Solution {
public:
	bool isBalanced(TreeNode* root) {
		if (!root) return true;

		int d = abs(depth(root->left) - depth(root->right)); //��ǰ�ڵ�����������ĸ߶Ȳ�

		return (d <= 1) && (isBalanced(root->left)) && (isBalanced(root->right));
	}

	// �����������
	int depth(TreeNode* node)
	{
		if (node == NULL) return 0;
		return max(depth(node->left), depth(node->right)) + 1;
	}

};
*/


 