/*��Ŀ����
�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵�����
�������ַ���ģ�����ָ���������������һ���������ַ�����S��
�������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,
Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����*/

class Solution {             //����substr�����Ȳ�����
public:
	string LeftRotateString(string str, int n) {
		int length = str.length();
		if (length == 0) return "";
		//n = n % str.length();
		str += str;
		return str.substr(n, length);
	}
};


// ���ս�ָoffer���ϵķ��������η�ת�ַ�����
class Solution {
public:
	string LeftRotateString(string str, int n) {
		reverse(str.begin(), str.end());
		reverse(str.begin(), str.begin() + str.size() - n);
		reverse(str.begin() + str.size() - n, str.end());
		return str;
	}
};


//����⿼�ĺ�����ӦƸ���ǲ��ǿ�����������ַ�����ת�������ַ���abcdef��n = 3��
//��X = abc��Y = def�������ַ������Ա�ʾ��XY������ɣ���������YX��
//����X�ķ�תΪXT��XT = cba��ͬ��YT = fed����ôYX = (XTYT)T�����η�ת��ɵý����
class Solution {
public:
	string LeftRotateString(string str, int n)
	{
		int len = str.size();
		if (len == 0) return str;
		n %= len;
		for (int i = 0, j = n - 1; i < j; ++i, --j) swap(str[i], str[j]);
		for (int i = n, j = len - 1; i < j; ++i, --j) swap(str[i], str[j]);
		for (int i = 0, j = len - 1; i < j; ++i, --j) swap(str[i], str[j]);
		return str;
	}
};
