/*��Ŀ����
����һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)*/

/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {                              //�����Ϊ��������������ȱ���
	vector<vector<int>> res;
	vector<int> tmp;
public:
	void dfs(TreeNode* root, int e)
	{
		tmp.push_back(root->val);
		if (root->val == e && !root->left && !root->right)
			res.push_back(tmp);
		else
		{
			if (root->left) dfs(root->left, e - root->val);
			if (root->right) dfs(root->right, e - root->val);
		}
		tmp.pop_back();
	}
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		if (root) dfs(root, expectNumber);
		return res;
	}
};