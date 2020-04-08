/*��Ŀ����
����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��*/

/*
struct TreeNode {                  //�ݹ��
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {
public:
	void convert(TreeNode* p, TreeNode* &pre)
	{
		if (!p) return;
		convert(p->left, pre);
		p->left = pre;
		if (pre) pre->right = p;
		pre = p;
		convert(p->right, pre);
	}
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		if (!pRootOfTree) return nullptr;
		TreeNode* pre = nullptr;
		convert(pRootOfTree, pre);
		TreeNode* target = pRootOfTree;
		while (target->left)
			target = target->left;
		return target;
	}
};

class Solution {                   //�ǵݹ�汾
public:
	TreeNode * Convert(TreeNode* pRootOfTree)
	{
		if (!pRootOfTree) return nullptr;
		TreeNode* pre = nullptr;
		TreeNode* p = pRootOfTree;
		vector< TreeNode*> stack;
		while (p != NULL || !stack.empty())
		{
			while (p)
			{
				stack.push_back(p);
				p = p->left;
			}
			p = stack.back();
			stack.pop_back();
			if (pre == nullptr)
			{
				pRootOfTree = p; pre = p;
			}
			else
			{
				p->left = pre;
				pre->right = p;
				pre = p;
			}
			p = p->right;
		}
		return pRootOfTree;
	}
};