/*��Ŀ����
����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ��
���磬�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ������6���������ڣ�
���ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}�Ļ�������������6����
{[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}�� {2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��*/


/*˼·:
��һ��˫�˶��У����е�һ��λ�ñ��浱ǰ���ڵ����ֵ�������ڻ���һ��
1.�жϵ�ǰ���ֵ�Ƿ����
2.�����ӵ�ֵ�Ӷ�β��ʼ�Ƚϣ������б���С��ֵ����
*/
class Solution {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		vector<int> res;
		if (size<1) return res;
		deque<int> deq;
		for (int i = 0; i<num.size(); i++)
		{
			while (!deq.empty() && num[deq.back()] <= num[i])
				deq.pop_back();
			if (!deq.empty() && i - deq.front() + 1>size)
				deq.pop_front();
			deq.push_back(i);
			if (i + 1 >= size)
				res.push_back(num[deq.front()]);
		}
		return res;
	}
};