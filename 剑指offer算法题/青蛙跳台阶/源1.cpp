/*��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2����
�����������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ����*/

class Solution {                           //쳲�������������
public:
	int jumpFloor(int number) {
		int result, fn1 = 1, fn2 = 2;
		if (number == 1) result = 1;
		else if (number == 2) result = 2;
		for (int i = 3; i <= number; i++)
		{
			result = fn1 + fn2;
			fn1 = fn2;
			fn2 = result;
		}
		return result;
	}
};

/*��Ŀ����
һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
�����������һ��n����̨���ܹ��ж���������*/

class Solution {
public:
	int jumpFloorII(int number) {                //�������׵�֪f(n)=2*f(n-1),n>=2
		int target = 1;
		if (number<1) return -1;
		if (number == 1) return 1;
		for (int i = 2; i <= number; i++)
			target *= 2;
		return target;
	}
};