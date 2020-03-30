#include <sort.h>
void sort::MergeAdjust(int first, int mid, int last)
{
	SqVector temp = new Sqlist;
	int i = first, j = mid + 1;
	int k=0;
	while (i <= mid && j <= last)
	{
		if (L->number[i] < L->number[j])
			temp->number[k++] = L->number[i++];
		else
			temp->number[k++] = L->number[j++];
	}
	while (i <= mid)
		temp->number[k++] = L->number[i++];
	while (j <= last)
		temp->number[k++] = L->number[j++];
	for (i = 0; i < k; i++)
		L->number[first + i] = temp->number[i];   //�ϲ������ʱ�������ź���Ĳ���д��ԭ����
}

void sort::MSort(int first,int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		MSort(first, mid);          //�ݹ�ʹ�������
		MSort(mid + 1, last);   //�ݹ�ʹ�ұ�����
		MergeAdjust(first, mid, last);  //�������������кϲ�
	}
}

void sort::Merge()
{
	MSort(1, L->length);  //Ϊ��ʹMerge�����ββ�����L->length,��Ҫ���·�װһ������
}


/*�鲢������������˵ݹ飬���ܴ����ϱȽ�����������⣬��������ʱ��Ϳռ��ϵ��˷ѡ�
�����Ż��������Խ��ݹ�ת��Ϊ������ֱ�Ӵ�ͷ��ʼ��ʹ���ܽ�һ�����*/
void sort::MergePass(int increment,int last)
{
	int i = 1;
	while (i <= last - 2 * increment + 1)
	{
		MergeAdjust(i, i + increment - 1, i + 2*increment - 1);
		i += 2 * increment;
	}
	if (i < last - increment + 1)
		MergeAdjust(i, i + increment - 1, last);
}

void sort::Merge_optimize()
{
	for (int i = 1; i <= L->length; i *= 2)
	{
		MergePass(i, L->length);
	}
}