/*
��Ŀ���� 
��������ַ���������������
��������:
���������У���һ��n
�ڶ�����n���ո�������ַ���
�������:
���һ���������ַ������ո�������޽�β�ո�*/
#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int n;
	cin >> n;
	vector<string> res;
	string tmp;
	for (int i = 0; i<n; i++)
	{
		cin >> tmp;
		res.push_back(tmp);
	}
	sort(res.begin(), res.end());
	for (auto x : res) cout << x << " ";
	return 0;
}


/*
��������:
�������������ÿ����������һ�С�

ÿ��ͨ���ո��������n���ַ���n��100
�������:
����ÿ��������������һ����������ַ�����ÿ���ַ���ͨ���ո����*/
#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	string tmp;
	vector<string> res;
	while (cin >> tmp)             //�����������Զ�����ѭ��
	{
		res.push_back(tmp);
		if (cin.get() == '\n')
		{
			sort(res.begin(), res.end());
			for (auto x : res) cout << x << " ";
			cout << endl;
			res.clear();
		}
	}
	return 0;
}


/*
��Ŀ���� 
��������ַ���������������
��������:
�������������ÿ����������һ�С�
ÿ��ͨ��,��������n���ַ���n��100
�������:
����ÿ���������һ���������ַ�������','�������޽�β�ո�
ʾ��1
����
a,c,bb
f,dddd
nowcoder
���
a,bb,c
dddd,f
nowcoder*/
#include<iostream>
using namespace std;
#include<algorithm>
#include <sstream>
int main()
{
	string tmp;
	while (getline(cin, tmp))
	{
		stringstream ss;
		ss << tmp;
		string tmp2;
		vector<string> res;
		while (getline(ss, tmp2, ','))
			res.push_back(tmp2);
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size() - 1; i++)
			cout << res[i] << ',';
		cout << res[res.size() - 1] << endl;
	}
	return 0;
}