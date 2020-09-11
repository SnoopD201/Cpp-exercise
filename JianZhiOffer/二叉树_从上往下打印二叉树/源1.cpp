/*��Ŀ����
�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ*/

/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {           //���������Ĳ������������һ�����м���ʵ��
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> res;
		if (root == NULL) return res;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			res.push_back(q.front()->val);
			if (q.front()->left) q.push(q.front()->left);
			if (q.front()->right) q.push(q.front()->right);
			q.pop();
		}
		return res;
	}
};