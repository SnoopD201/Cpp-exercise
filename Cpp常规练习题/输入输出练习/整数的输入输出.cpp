1.���ܶ�cin >> a���ֽ��б��ʽ���粻��if(cin >> a == 0)
2.cin >> a >> b; >>�����ж�ȡ����ʱ���Զ������������еĿո�Tab�������з��Ϳհ��ַ�
  cin>>�޷���ȡ�ո񣬿�����getchar,cin.get����ȡ�ո�
  ����ֱ��cin>>string�������ܶ�ȡ���еĿո�
3.����Ŀ��û���ἰ�����ķ�Χ��ֱ����long����long long

/*��������:
�����������������a,b(1 <= a, b <= 10^9),�������ݰ������顣*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
		cout << a + b << endl;
	return 0;
}


/*
��������:
�����һ�а���һ����������t(1 <= t <= 100)
������ÿ�а�������������a,b(1 <= a, b <= 10^9)*/
#include <iostream>
using namespace std;
int main()
{
	int num, a, b;
	cin >> num;
	for (int i = 0; i<num; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}


/*
��������:
�������ݰ������顣
ÿ������һ��,ÿ�еĵ�һ������Ϊ�����ĸ���n(1 <= n <= 100), nΪ0��ʱ��������롣
������n��������,����Ҫ��͵�ÿ����������*/
#include<iostream>
using namespace std;
int main()
{
	int num, temp;
	while (cin >> num)
	{
		if (num == 0) break;
		else
		{
			int sum = 0;
			for (int i = 0; i<num; i++)
			{
				cin >> temp;
				sum += temp;
			}
			cout << sum << endl;
		}
	}
	return 0;
}



/*�������� :
���������ж���, ÿ�б�ʾһ���������ݡ�

ÿ�в�����n���������ո������(1 <= n <= 100)��
ʾ��1
����
1 2 3
4 5
0 0 0 0 0
���
6
9
0*/
#include<iostream>
using namespace std;
int main()
{
	int tmp, sum = 0;
	while (cin >> tmp)
	{
		sum += tmp;
		if (cin.get() == '\n')   //����������ж�ȡ�����з���ʹcin����һ�п�ʼ��
		{
			cout << sum << endl;
			sum = 0;
		}
	}
	return 0;
}