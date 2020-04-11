/*��Ŀ����
����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S��
����ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
�������:
��Ӧÿ�����԰����������������С���������*/

class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> res;
		int size = array.size();
		int i = 0, j = size - 1;
		while (i<j)
		{
			if (array[i] + array[j] == sum)
			{
				res.push_back(array[i]);
				res.push_back(array[j]);
				break;
			}
			else if (array[i] + array[j]>sum) j--;
			else i++;
		}
		return res;
	}
};

/*
�������������������ͷβ����ָ��i��j��
��ai + aj == sum�����Ǵ𰸣����ԽԶ�˻�ԽС��
��ai + aj > sum��aj�϶����Ǵ�֮һ��ǰ���ѵó� i ǰ��������ǲ����ܣ���j -= 1
��ai + aj < sum��ai�϶����Ǵ�֮һ��ǰ���ѵó� j ����������ǲ����ܣ���i += 1
O(n)*/