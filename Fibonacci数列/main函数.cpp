/*
��������������һ������������fibonacci���еĵ�n��
*/

#include <iostream>
using namespace std;
int main()
{
	long recur(int);   //�ⲿ���õݹ�ĺ���ԭ������
	long array(int);   //�ⲿ��������ĺ���ԭ������
	int n;
	cout << "Please inout the number:";
	cin >> n;
	if (n <= 0)
	{
		cout << "Error! fault input!" << endl << "Please input a positive number:" << endl;
		cin >> n;
	}
	cout << "The nth of Fibonacci array is:" << recur(n)<<endl;
	cout << "The nth of Fibonacci array is:" << array(n) << endl;
	return 0;
}
