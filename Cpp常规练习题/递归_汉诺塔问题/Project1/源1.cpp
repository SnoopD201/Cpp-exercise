#include <iostream>
using namespace std;
int main()
{
	void hanoi(int n, char one , char two, char three);  //Ҫ�ƶ���λ��Ϊone,Ŀ��λ��Ϊthree,����λ��Ϊtwo��ʵ��ֵ��̬�仯��
	int n;
	cout << "please input the number of disks:";
	cin >> n;
	if (n <= 0)  cout << "Error! fault input" << endl;
	else
	{
		cout << "the steps of the moving " << n << " disks:" << endl;
		hanoi(n, 'A', 'B', 'C');
	}
	//system("pause");
	return 0;
}

void hanoi(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n==1) move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

void move(char x, char y)
{
	cout << x << "����>" << y << endl;
}