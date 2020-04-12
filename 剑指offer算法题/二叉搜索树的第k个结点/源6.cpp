/*��Ŀ����
����һ�ö��������������ҳ����еĵ�kС�Ľ�㡣���磬 
��5��3��7��2��4��6��8��    �У��������ֵ��С˳�����С����ֵΪ4*/

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

//˼·�������������������������˳���ӡ�������þ�������õ�˳��
//     ���ԣ������������˳���ҵ���k�������ǽ����
class Solution {
public:
	TreeNode * KthNode(TreeNode* pRoot, int k)
	{
		if (!pRoot || k<1) return nullptr;
		vector<TreeNode*> vec;
		KthNodeHelper(pRoot, vec);
		if (k>vec.size()) return nullptr;
		return vec[k - 1];
	}

	void KthNodeHelper(TreeNode* p, vector<TreeNode*> &vec)
	{
		if (p == NULL) return;
		KthNodeHelper(p->left, vec);
		vec.push_back(p);
		KthNodeHelper(p->right, vec);
	}
};

//��һ�㾫��Ĵ���
class Solution {
	int count = 0;
public:
	TreeNode * KthNode(TreeNode* pRoot, unsigned int k)
	{
		if (pRoot) {
			TreeNode *ret = KthNode(pRoot->left, k);
			if (ret) return ret;   //ֻ�иýڵ�ΪҪ�ҵĽڵ�ʱ��ret�Ų�Ϊnull������Ŀ��ڵ���㷵��
			if (++count == k) return pRoot;
			ret = KthNode(pRoot->right, k);
			if (ret) return ret;
		}
		return nullptr;
	}
};