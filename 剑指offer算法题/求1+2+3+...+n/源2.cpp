/*��Ŀ����
��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case��
�ؼ��ּ������ж���䣨A?B:C��*/

class Solution {
public:
	int Sum_Solution(int n) {
		char sum[n][n + 1];
		return sizeof(sum) >> 1;
	}
};

class Solution {                      //�����߼���Ķ�·����ʵ�ֵݹ���ֹ
public:
	int Sum_Solution(int n) {
		int sum = n;
		n && (sum += Sum_Solution(n - 1));
		return sum;
	}
};

/*���üӼ��˳����ӷ�*/
/*��Ŀ����
дһ������������������֮�ͣ�
Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�*/
class Solution {
public:
	int Add(int num1, int num2)
	{
		while (num2 != 0)
		{
			int temp = num1 ^ num2;
			num2 = (num1&num2) << 1;
			num1 = temp;
		}
		return num1;
	}
};