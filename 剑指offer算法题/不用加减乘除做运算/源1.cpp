/*��Ŀ����
дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�*/

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

/*����������൱��ÿһλ��ӣ��������ǽ�λ��
���������룬������һλ���൱����ý�λ��
�����������Ľ�����*/

class Solution {
public:
	int Add(int num1, int num2)
	{
		int n1, n2;
		n1 = (num1&num2) << 1;
		n2 = num1 ^ num2;
		while (n1&n2)
		{
			num1 = n1; num2 = n2;
			n1 = (num1&num2) << 1;
			n2 = num1 ^ num2;
		}
		return n1 | n2;

	}
};