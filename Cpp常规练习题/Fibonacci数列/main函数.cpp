/*
��������������һ������������fibonacci���еĵ�n��
*/

#include <iostream>
using namespace std;
int main()
{
	long recur(int);         //���õݹ鷨
	long array(int);         //�������鷨
	long iteration(int);   //���õ�����
	long dynamic(int);   //��̬�滮
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
	cout << "The nth of Fibonacci array is:" << iteration(n) << endl;
	cout << "The nth of Fibonacci array is:" << dynamic(n) << endl;
	return 0;
}
