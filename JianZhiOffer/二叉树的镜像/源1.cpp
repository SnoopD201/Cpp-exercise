/*��Ŀ�������������Ķ�����������任ΪԴ�������ľ���*/

/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL) return;
		if (!pRoot->left && !pRoot->right) return;
		TreeNode *temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;
		if (pRoot->left)
			Mirror(pRoot->left);
		if (pRoot->right)
			Mirror(pRoot->right);
	}
};