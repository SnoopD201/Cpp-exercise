/*��Ŀ����
����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��*/
class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		int flag = 1;
		while (flag != 0)
		{
			if ((n&flag) != 0) count++;
			flag = flag << 1;
		}
		return count;
	}
};


/*�����ж�n�ǲ��Ǹ�������nΪ������ʱ��ֱ���ú����whileѭ���ᵼ����ѭ������Ϊ����
������λ�Ļ����λ��1 �� �����Ҫһ���������������Խ����λ�ķ���λ1���0��Ҳ��
��n & 0x7FFFFFFF�������ͰѸ���ת���������ˣ�Ψһ���������λ��1���0����Ϊ����
һ��1������count��1��֮���ٰ���whileѭ���ﴦ�������ķ����������Ϳ�����*/
class Solution {
public:
	int  NumberOf1(int n) {
		int count = 0;
		if (n < 0) {
			n = n & 0x7FFFFFFF;
				++count;
		}
		while (n != 0) {
			count += n & 1;
			n = n >> 1;
		}
		return count;
	}
};

//--------------------���Ž�----------------------------
class Solution {
public :
	static int NumberOf1(int n) {
		int count = 0;
		while (n != 0) {
			++count;
			n = (n - 1) & n;
		}
		return count;
	}
};