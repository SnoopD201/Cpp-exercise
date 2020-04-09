/*��Ŀ����
����һ�ö����������������ȡ��Ӹ���㵽Ҷ������ξ����Ľ��
��������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�*/

// �ݹ����������һ��
class Solution {
public:
	int TreeDepth(TreeNode* pRoot) {
		return pRoot ? max(TreeDepth(pRoot->left), TreeDepth(pRoot->right)) + 1 : 0;
	}
};

//�����汾
class Solution {
public:
	int TreeDepth(TreeNode* pRoot) {
		if (!pRoot) return 0;
		queue<TreeNode*> que;
		que.push(pRoot); int depth = 0;
		while (!que.empty()) {
			int size = que.size();
			depth++;
			for (int i = 0; i<size; i++) {      //һ�δ���һ�������
				TreeNode *node = que.front();
				que.pop();
				if (node->left) que.push(node->left);
				if (node->right) que.push(node->right);
			}
		}
		return depth;
	}
};