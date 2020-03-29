#include <sort.h>
void sort::Bubble()
{  
	countswap = 0;
	countcompare = 0;
	for(int i=1;i<L->length;i++)
		for (int j = L->length - 1; j >= i; j--)
		{
			if (L->number[j] > L->number[j + 1])
			{
				swap(j, j + 1);
				countswap++;
			}
			countcompare++;
		}
}

void sort::Bubble_optimize1()
{
	bool statu=true;
	countswap = 0;
	countcompare = 0;
	for (int i = 1; i < L->length&&statu; i++)     //��ֹ�Ѿ��ź���˳�򻹼�����iѭ��
	{
		statu = false;                   
		for (int j = L->length - 1; j >= i; j--)
		{
			if (L->number[j] > L->number[j + 1])
			{
				swap(j, j + 1);
				statu = true;
				countswap++;
			}
			countcompare++;
		}
	}
}

void sort::Bubble_optimize2()
{
	countswap = 0;
	countcompare = 0;
	int lastswap= L->length - 1;
	for (int i = 1; i < L->length;i= ++lastswap)     
	{
		for (int j = L->length - 1; j >= i; j--)               //j�Ƚϵ���һ�����һ�ν���λ�õ�ǰһ��
		{
			if (L->number[j] > L->number[j + 1])
			{
				swap(j, j + 1);
				lastswap = j;
				countswap++;
			}
			countcompare++;
		}
	}
}

/*ԭʼð������Ƚϴ����̶�Ϊn*(n-1)/2�Σ������Ż��������Լ��ٱȽϵĴ�����
��������ٽ����Ĵ���������һ�����飬����ð�������㷨�Ľ����������ǹ̶���*/