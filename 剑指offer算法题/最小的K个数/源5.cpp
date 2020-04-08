/*��Ŀ����
����n���������ҳ�������С��K������
��������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,*/

class Solution {                //���ÿ��Ž���ȫ����ʱ�临�Ӷ�O��nlogn��
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector<int> tmp;
		if (input.empty() || k>input.size()) return tmp;
		sort(input.begin(), input.end());
		for (int i = 0; i<k; i++)
			tmp.push_back(input[i]);
		return tmp;
	}
};

class Solution {           //�����ѱ�����k������ÿ��ֻ�ͶѶ��ȣ�����ȶѶ�С��ɾ���Ѷ���������ѡ� 
public:                         //ʱ�临�Ӷ�O��nlogk��
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		int len = input.size();
		if (len <= 0 || k>len || k <= 0) return vector<int>();
		vector<int> res(input.begin(), input.begin() + k);
		//����
		make_heap(res.begin(), res.end());

		for (int i = k; i<len; i++)
		{
			if (input[i]<res[0])
			{
				res[0] = input[i];
				make_heap(res.begin(), res.end());
			}
		}
		//ʹ���С�������
		sort_heap(res.begin(), res.end());

		return res;
	}
};