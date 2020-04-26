/*��Ŀ����
��ʵ�������������ֱ��������л��ͷ����л�������
�����������л���ָ����һ�ö���������ĳ�ֱ�����ʽ�Ľ����ĳ�ָ�ʽ����Ϊ�ַ�����
�Ӷ�ʹ���ڴ��н��������Ķ��������Գ־ñ��档���л����Ի����������򡢺��򡢲����
������������ʽ�������޸ģ����л��Ľ����һ���ַ��������л�ʱͨ�� ĳ�ַ��ű�ʾ�սڵ㣨#��
���� �� ��ʾһ�����ֵ�Ľ�����value!����
�������ķ����л���ָ������ĳ�ֱ���˳��õ������л��ַ������str���ع���������*/

/*
1. �������л���ʹ��ǰ��������ݹ�Ľ���������ֵת��Ϊ�ַ���������ÿ�ζ������Ľ��
��Ϊ��ʱ����ת��val���õ��ַ�֮�����һ��' �� '��Ϊ�ָ���ڿսڵ����� '#' ���档
2. ���ڷ����л�������ǰ��˳�򣬵ݹ��ʹ���ַ����е��ַ�����һ��������(�ر�ע�⣺
�ڵݹ�ʱ���ݹ麯���Ĳ���һ��Ҫ��char ** ���������ܱ�֤ÿ�εݹ��ָ���ַ�����ָ���
���ŵݹ�Ľ��ж��ƶ�������)
*/

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
class Solution {
public:
	char* Serialize(TreeNode *root) {
		if (root == NULL) return NULL;
		string str;
		Serialize(root, str);
		char* res = new char[str.length()];
		int i = 0;
		for (i = 0; i<str.length(); i++)
		{
			res[i] = str[i];
		}
		res[i] = '\0';
		return res;
	}
	void Serialize(TreeNode *root, string &str)
	{
		if (root == NULL)
		{
			str += '#';
			return;
		}
		string r = to_string(root->val);
		str += r;
		str += ',';
		Serialize(root->left, str);
		Serialize(root->right, str);
	}

	TreeNode* Deserialize(char *str) {
		if (str == NULL) return NULL;
		TreeNode* res = Deserialize(&str);
		return res;
	}
	TreeNode* Deserialize(char **str)
	{
		if (**str == '#')
		{
			(*str)++; return NULL;
		}
		int num = 0;
		while (**str != ','&&**str != '\0')
		{
			num = 10 * num + (**str - '0');
			(*str)++;
		}
		TreeNode* cur = new TreeNode(num);
		if (**str == '\0')
			return cur;
		else
			(*str)++;
		cur->left = Deserialize(str);
		cur->right = Deserialize(str);
		return cur;
	}
};