/*��Ŀ����
��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�
ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�*/

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

//�ݹ�棺���ڵ��Լ���������������������������������������������ͬ��
// ��������������������������������ͬ���ɡ�
//�������Ƿ�Գƣ�ֻҪ����ǰ�����򡢺��򡢲�α������κ�һ�ֱ���������
//��Ϊ������Һ����Һ������ַ�����ֻҪ���ν����Ⱦ�˵���������һ�ŶԳƶ�������
class Solution {             
public:
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (!pRoot) return true;
		return  isSymmetricalHelper(pRoot->left, pRoot->right);
	}

	bool isSymmetricalHelper(TreeNode* left, TreeNode* right)
	{
		if (left == NULL && right == NULL) return true;
		if (left == NULL || right == NULL) return false;
		return
			left->val == right->val&&
			isSymmetricalHelper(left->left, right->right) &&
			isSymmetricalHelper(left->right, right->left);
	}

};

class Solution {             //�����棺�����������н��в������
public:
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (!pRoot) return true;
		queue<TreeNode*> q1, q2;
		TreeNode* left, *right;
		q1.push(pRoot->left);
		q2.push(pRoot->right);

		while (!q1.empty() && !q2.empty())
		{
			left = q1.front();
			q1.pop();
			right = q2.front();
			q2.pop();
			if (left == NULL && right == NULL) continue;
			if (left == NULL || right == NULL) return false;
			if (left->val != right->val) return false;
			q1.push(left->left);
			q1.push(left->right);
			q2.push(right->right);
			q2.push(right->left);
		}
		return true;
	}
};