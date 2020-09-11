/*��Ŀ����
�������е��������֣����ǰ��һ�����ִ��ں�������֣����������������һ������ԡ�
����һ������,�����������е�����Ե�����P������P��1000000007ȡģ�Ľ������� 
�����P%1000000007*/

class Solution {
public:
	int InversePairs(vector<int> data) {
		if (data.empty()) return 0;
		vector<int> tmp(data);
		long long count = InversePairsCount(tmp, data, 0, data.size() - 1);
		return count % 1000000007;
	}

	long long InversePairsCount(vector<int> &tmp, vector<int> &data, int start, int end)
	{

		if (start == end)  return 0;
		int mid = (start + end) / 2;
		long long left = InversePairsCount(data, tmp, start, mid);
		long long right = InversePairsCount(data, tmp, mid + 1, end);
		int i = mid, j = end;
		int k = end;
		long long count = 0;
		while (i >= start && j >= mid + 1)
		{
			if (data[i] > data[j])
			{
				tmp[k--] = data[i--];
				count += j - mid;
			}
			else
				tmp[k--] = data[j--];
		}
		while (i >= start)
			tmp[k--] = data[i--];
		while (j >= mid + 1)
			tmp[k--] = data[j--];
		return left + right + count;
	}
};

/*�ҵĴ��룬��ʱ
class Solution {
public:
	int InversePairs(vector<int> data) {
		if (data.empty()) return 0;
		long long count = InversePairsCount(data, 0, data.size() - 1);
		return count % 1000000007;
	}

	long long InversePairsCount(vector<int> &data, int first, int last)
	{
		if (first<last)
		{
			int mid = (last + first) / 2;
			return InversePairsCount(data, first, mid) + InversePairsCount(data, mid + 1, last) + MergeAdjust(data, first, mid, last);
		}
		else return 0;
	}

	long long MergeAdjust(vector<int> &data, int first, int mid, int last)
	{
		int i = mid, j = last;
		int k = last;
		long long count = 0;
		vector<int> tmp(data);
		while (i >= first && j >= mid + 1)
		{
			if (data[i] > data[j])
			{
				tmp[k--] = data[i--];
				count += j - mid;
			}
			else
				tmp[k--] = data[j--];
		}
		while (i >= first)
			tmp[k--] = data[i--];
		while (j >= mid + 1)
			tmp[k--] = data[j--];
		for (i = first; i <= last; i++)
			data[i] = tmp[i];
		return count;
	}
};