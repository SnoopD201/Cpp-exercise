/*��Ŀ����
����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��*/

class Solution {
public:
	static bool cmp(int a, int b)
	{
		string s1 = to_string(a) + to_string(b);
		string s2 = to_string(b) + to_string(a);
		return s1<s2;
	}
	string PrintMinNumber(vector<int> numbers) {
		string target = "";
		sort(numbers.begin(), numbers.end(), cmp);
		for (int i = 0; i<numbers.size(); i++)
			target += to_string(numbers[i]);
		return target;
	}
};

/* ����˼·��
* �Ƚ���������ת����String���飬Ȼ��String������������ź�����ַ�������ƴ�ӳ������ؼ������ƶ��������
* ����������£�
* ��ab > ba �� a > b��
* ��ab < ba �� a < b��
* ��ab = ba �� a = b��
* ����˵����
* ���� "3" < "31"���� "331" > "313"������Ҫ������ƴ���������бȽ�*/