/*��Ŀ����
����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
���������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
��������:
����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ��*/

class Solution {                     //�����ַ���ȫ���У��ݹ鷨
public:
	vector<string> Permutation(string str) {
		vector<string> target;
		if (str.empty()) return target;
		PermutationHelp(str, target, 0);
		sort(target.begin(), target.end());
		return target;
	}

	void PermutationHelp(string str, vector<string> &target, int begin)
	{
		if (begin == str.size() - 1)
		{
			if (find(target.begin(), target.end(), str) == target.end())
				target.push_back(str);
		}
		else
		{
			for (int i = begin; i<str.size(); ++i)
			{
				swap(str[begin], str[i]);
				PermutationHelp(str, target, begin + 1);
				swap(str[begin], str[i]);
			}
		}
	}

	void swap(char &a, char &b)
	{
		char tmp = a;
		a = b;
		b = tmp;
	}
};