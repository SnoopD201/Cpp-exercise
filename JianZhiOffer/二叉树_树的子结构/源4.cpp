/*��Ŀ����
�������ö�����A��B���ж�B�ǲ���A���ӽṹ��
��ps������Լ��������������һ�������ӽṹ��*/
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
	bool judgesub(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == NULL) return true;
		else if (pRoot1 == NULL) return false;
		if (pRoot1->val != pRoot2->val)
			return judgesub(pRoot1->left,pRoot2)||judgesub(pRoot1->right,pRoot2);
			//return false;               //�����ж��Ƿ�Ϊ��������Ӧ��ֱ�ӷ���false
		else return judgesub(pRoot1->left, pRoot2->left) &&
			judgesub(pRoot1->right, pRoot2->right);
	}

	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == NULL || pRoot2 == NULL) return false;
		return judgesub(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2)
			|| HasSubtree(pRoot1->right, pRoot2);
	}


};