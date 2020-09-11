/*��Ŀ����
��εõ�һ���������е���λ����������������ж�����������ֵ����ô��λ������������ֵ����֮��λ���м����ֵ��
������������ж���ż������ֵ����ô��λ������������ֵ����֮���м���������ƽ��ֵ������ʹ��Insert()������ȡ��������ʹ��GetMedian()������ȡ��ǰ��ȡ���ݵ���λ����*/

//˼·����һ���󶥶Ѻ�һ��С���ѣ�ά�ִ󶥶ѵ�����С�ڵ���С���ѵ����������ߵĸ�����Ȼ��1��
//ƽ�������������Ѷ�����֮�С�
class Solution {
public:       
	priority_queue<int, vector<int>, less<int> > p;//С����
	priority_queue<int, vector<int>, greater<int> > q;//�󶥶�
	void Insert(int num)
	{
		if (p.empty() || num<p.top())  p.push(num);
		else q.push(num);
		if (p.size() == q.size() + 2)
			q.push(p.top()), p.pop();
		if (p.size() == q.size() - 1)
			p.push(q.top()), q.pop();
	}

	double GetMedian()
	{
		return p.size() == q.size() ? (p.top() + q.top()) / 2.0 : p.top();
	}

};