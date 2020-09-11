/*��Ŀ����
����һ�ö��������жϸö������Ƿ���ƽ�������*/

//�������ϱ��������������ƽ����������򷵻������ĸ߶ȣ�
//���������������ƽ�����������ֱ��ֹͣ��������������ֻ��ÿ��������һ��

class Solution {
public:
	bool IsBalanced(TreeNode* p, int &dep)
	{
		if (p == NULL) return true;
		int left = 0, right = 0;
		if (IsBalanced(p->left, left) && IsBalanced(p->right, right))
		{
			int dif = left - right;
			if (dif>1 || dif<-1) return false;
			dep = (left>right ? left : right) + 1;
			return true;
		}
		return false;
	}

	bool IsBalanced_Solution(TreeNode* pRoot) {
		int dep = 0;
		return IsBalanced(pRoot, dep);
	}
};