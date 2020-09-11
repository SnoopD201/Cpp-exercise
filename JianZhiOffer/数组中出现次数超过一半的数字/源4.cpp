/*��Ŀ����
��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��*/

/*˼·һ�����������������������������ڣ���һ���������м��Ǹ�����
���ַ�����Ȼ������⣬�������漰������sort����ʱ�临�Ӷ�ΪO(NlogN)�������ţ�*/
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()) return 0;
		sort(numbers.begin(), numbers.end());
		int target = numbers[numbers.size() / 2];
		int count = 0;
		for (int i = 0; i<numbers.size(); ++i)
			if (numbers[i] == target) count++;
		return count>numbers.size() / 2 ? target : 0;
	}
};

/*
˼·��������з������������֣��������ֵĴ����������������ֳ��ֵĴ����ͻ�Ҫ�ࡣ
�ڱ�������ʱ��������ֵ��һ��������һ�����֣�һ�Ǵ�����
������һ������ʱ��������֮ǰ�����������ͬ���������1�����������1��
������Ϊ0���򱣴���һ�����֣�����������Ϊ1����������������������ּ�Ϊ����
Ȼ�����ж����Ƿ�����������ɡ�ʱ�临�Ӷ�ΪO(NlogN)*/
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()) return 0;
		int tmp[2] = { numbers[0],1 };
		for (int i = 1; i<numbers.size(); i++)
		{
			if (tmp[1] == 0)
			{
				tmp[0] = numbers[i];
				tmp[1] = 1;
			}
			else if (tmp[0] == numbers[i]) tmp[1]++;
			else tmp[1]--;
		}
		int count = 0;
		for (int i = 0; i<numbers.size(); i++)
		{
			if (tmp[0] == numbers[i])
				count++;
		}
		return count>numbers.size() / 2 ? tmp[0] : 0;
	}
};