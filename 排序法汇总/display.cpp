#include <iostream>
using namespace std;
#include <sort.h>
void sort::display()
{
	cout << "���кõ�����Ϊ:"<<" ";
	for (int i = 1; i <= max; i++)
		cout << L->number[i]<<"  ";
	cout << "�������򷨹��Ƚ���" << countcompare << "��" << "  ��������"<<countswap<<"��"<<endl;
}