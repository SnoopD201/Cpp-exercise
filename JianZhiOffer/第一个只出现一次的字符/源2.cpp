/*��Ŀ����
��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)
���ҵ���һ��ֻ����һ�ε��ַ�,����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��*/

//���Ļ���hash������ÿ����ĸ��ASCII����hash����Ϊ�����index
class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		map<char, int> res;
		for (int i = 0; i<str.size(); i++) res[str[i]]++;
		for (int i = 0; i<str.size(); i++)
		{
			if (res[str[i]] == 1)
				return i;
		}
		return -1;
	}
};

class Solution {
public:
	int FirstNotRepeatingChar(string str) {
		int* res = new int[58];
		for (int i = 0; i<str.size(); i++)
			res[str[i] - 65]++;
		for (int i = 0; i<str.size(); i++)
		{
			if (res[str[i] - 65] == 1)
				return i;
		}
		return -1;
	}
};