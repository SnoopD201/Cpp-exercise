#include <sort.h>
void sort::HeapAdjust(int s, int m)   //��֪L->number[s->m]�г���L->number[s]�������㶼����󶥶Ѷ���
{	                                                       //�ú������ڵ���L->number[s],ʹL->number[s->m]��Ϊ�󶥶�
	double temp = L->number[s];     
	for (int j = 2 * s; j <= m; j*=2)
	{
		if (j<m&&L->number[j] < L->number[j + 1])  { countcompare ++; j++; }
		if (temp >= L->number[j])  { countcompare ++; break; }
		L->number[s] = L->number[j]; 
		s = j;
	}
	L->number[s] = temp; 
}

void sort::Heap()
{
	countswap = 0;
	countcompare = 0;
	int i;
	for (i = L->length / 2; i >=1; i--)   //��ʼ����
		HeapAdjust(i, L->length);
	for (i = L->length;i>1; i--)
	{
		swap(1, i);
		countswap++;
		HeapAdjust(1, i - 1);
	}
}