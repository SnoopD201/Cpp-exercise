/*��Ŀ����
��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� 
��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0*/

//����Ĺؼ����ڴ������ֵ�����int�ܱ�ʾ�ķ�ΧΪ:-2147483648-2147483648.
class Solution {
public:
	int StrToInt(string str) {
		int size = str.size();
		int  value = 0;
		int flag;
		int i = 0;
		int overvalue = 0;
		if (size == 0) return 0;
		if (str[0] == '+') flag = 1, i = 1;
		else if (str[0] == '-') flag = -1, i = 1;
		else flag = 1;
		for (; i<size; ++i)
		{
			if (!('0' <= str[i] && str[i] <= '9')) return 0;
			if (flag>0)
				if ((value>INT_MAX / 10) || (value == INT_MAX / 10 && str[i] - '0'>7))
					return 0;
			if (flag<0)
				if ((value>INT_MAX / 10) || (value == INT_MAX / 10 && str[i] - '0'>8))
					return 0;
			value = 10 * value + str[i] - '0';
		}
		value = value * flag;
		return value;
	}
};