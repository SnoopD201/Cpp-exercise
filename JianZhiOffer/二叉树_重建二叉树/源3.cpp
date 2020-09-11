/*��Ŀ����
����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�*/

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	TreeNode * reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		if (vin.size() == 0) return nullptr;
		vector<int> pre_left, pre_right, vin_left, vin_right;
		TreeNode* root = new  TreeNode(pre[0]);
		int mid = 0;
		for (int i = 0; i<vin.size(); i++)
		{
			if (pre[0] == vin[i])
			{
				mid = i;
				break;
			}
		}
		for (int i = 0; i<mid; i++)
		{
			vin_left.push_back(vin[i]);
			pre_left.push_back(pre[i + 1]);
		}
		for (int i = mid + 1; i<vin.size(); i++)
		{
			vin_right.push_back(vin[i]);
			pre_right.push_back(pre[i]);
		}
		root->left = reConstructBinaryTree(pre_left, vin_left);
		root->right = reConstructBinaryTree(pre_right, vin_right);
		return root;
	}
};

/*˼·��
���������е�һ��pre[0]�������������ҵ����ڵ�λ��gen
��genΪ���ı���
0~gen������
���������У�0~gen - 1������vin_left[]
���������У�1~gen����pre_left[]�� + 1���Կ�ͼ����Ϊͷ���и��ڵ�
gen + 1~vinlenΪ������
���������У�gen + 1 ~vinlen - 1����vin_right[]
���������У�gen + 1 ~vinlen - 1����pre_right[]
����������pre[0]�������ڵ�
���������������������������еݹ飨pre_left[]��vin_left[]��
���������������������������еݹ飨pre_right[]��vin_right[]��
���ظ��ڵ�*/