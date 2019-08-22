//#pragma once
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//
//#include  <iostream>
//using namespace std;
//class Solution {
//public:
//	bool dfs(TreeNode* root, int &depth)
//	{
//		if (!root)
//		{
//			depth = 0;
//			return true;
//		}
//		int left = 0, right = 0;
//		if (dfs(root->left, left) && dfs(root->right, right))
//		{
//			if (abs(left - right) <= 1)
//			{
//				depth = max(left, right) + 1;
//				return true;
//			}
//		}
//		return false;
//	}
//	bool isBalanced(TreeNode* root) {
//		int depth = 0;
//		return dfs(root, depth);
//	}
//};


void printArray(int a[], int size) {
	for (int i = 0; 0;);                   
}
