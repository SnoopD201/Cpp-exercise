/*��Ŀ����
���ϵ��°����ӡ��������ͬһ����������������ÿһ�����һ�С�*/

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

//˼·��������������������棬��ÿ�㵥������һ��ʸ����������п�����ʵ��
class Solution {
public:
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int> > res;
		if (!pRoot) return res;
		queue<TreeNode*> que;
		que.push(pRoot);
		TreeNode* cur = NULL;
		while (!que.empty())
		{
			vector<int> tmp;
			int size = que.size();
			for (int i = 0; i<size; i++)
			{
				cur = que.front();
				if (cur->left) que.push(cur->left);
				if (cur->right) que.push(cur->right);
				tmp.push_back(cur->val);
				que.pop();
			}
			if (!tmp.empty())
				res.push_back(tmp);
		}
		return res;
	}

};