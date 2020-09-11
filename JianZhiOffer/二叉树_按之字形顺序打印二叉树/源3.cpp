/*��Ŀ����
��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
�ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�*/

/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
*/


/*˼·��������ջʵ�֣�ջ1���������У�ջ2����ż����*/
class Solution {   
public:
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int> > result;
		if (!pRoot) return result;
		stack<TreeNode*> stack1, stack2;
		stack1.push(pRoot);
		while (!stack1.empty() || !stack2.empty())
		{
			vector<int> tmp1, tmp2;
			TreeNode* cur = NULL;
			while (!stack1.empty())
			{
				cur = stack1.top();
				if (cur->left != NULL)
					stack2.push(cur->left);
				if (cur->right != NULL)
					stack2.push(cur->right);
				tmp1.push_back(cur->val);
				stack1.pop();
			}
			if (!tmp1.empty())
				result.push_back(tmp1);

			while (!stack2.empty())
			{
				cur = stack2.top();
				if (cur->right != NULL)
					stack1.push(cur->right);
				if (cur->left != NULL)
					stack1.push(cur->left);
				tmp2.push_back(cur->val);
				stack2.pop();
			}
			if (!tmp2.empty())
				result.push_back(tmp2);
		}

		return result;
	}

};