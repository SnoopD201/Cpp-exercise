/*��Ŀ����
��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������*/

class Solution {                      //������ⷨ
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		for (int i = 0; i<array.size(); i++)
		{
			if (array[i].empty())
				continue;
			if (target >= array[i][0] && target <= array[i][array[i].size() - 1])
				for (int j = 0; j<array[i].size(); j++)
				{
					if (target == array[i][j]) return true;
					else if (target<array[i][j]) break;
				}
		}
		return false;
	}
};

/* ˼·
* ����������ģ������½��������������ֵݼ����������ֵ�����
* ��˴����½ǿ�ʼ���ң���Ҫ�������ֱ����½����ִ�ʱ������
* Ҫ�������ֱ����½�����Сʱ������
*/
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		int i = array.size() - 1; int j = 0;
		while (i >= 0 && j<array[0].size())
		{
			if (target == array[i][j]) return true;
			else if (target>array[i][j])  j++;
			else  i--;
		}
		return false;
	}
};