#include<sort.h>
int    sort::QuikPartition(int first, int last)      //�е�����ͷ�������ֵ������
{
	double pivotkey = L->number[first];
	while (first < last)
	{
		while (first < last&&L->number[last]>=pivotkey) last--;
		swap(first, last);
		while (first < last&&L->number[first] <=pivotkey) first++;
		swap(first, last);
	}
	return first;
}

void sort::QSort(int first, int last)
{
	int pivot;
	if (first < last)
	{
		pivot = QuikPartition(first, last);
		QSort(first, pivot-1);
		QSort(pivot+1, last);
	}
}

void sort::Quik()
{
	QSort(1, L->length);
}


/*�Ż�ѡȡ����
pivotkey = L->number[first]��һ��Ǳ�ڵ�����ƿ������Խ�ӽ������е��м䣬�����о�Խ���Ϊ��Ϊ�������С�
���Բ�������ȡ�з��������������м�ֵ��Ϊ���ᣬ��������ȡ���������еļ�ֵ��*/
int    sort::QuikPartition_optimize1(int first, int last)      //�е�����ͷ�������ֵ������
{
	double pivotkey;
	int mid = first + (last - first) / 2;
	if (L->number[first]>L->number[mid])  swap(first, mid);           //��֤��˽�С
	if (L->number[mid] > L->number[last])   swap(mid, last);       //��֤�м��С
	if (L->number[first] < L->number[mid])     swap(first, mid);   //��֤���Ϊ�м�ֵ
	pivotkey = L->number[first];
	while (first < last)
	{
		while (first < last&&L->number[last] >= pivotkey) last--;
		swap(first, last);
		while (first < last&&L->number[first] <= pivotkey) first++;
		swap(first, last);
	}
	return first;
}

/*�Ż�����Ҫ�Ľ���
�������ʽ�����ǽ������������Լ��ٶ�ν������ݵĲ������Ӷ���������*/
int    sort::QuikPartition_optimize2(int first, int last)      //�е�����ͷ�������ֵ������
{
	double pivotkey;
	int mid = first + (last - first) / 2;
	if (L->number[first]>L->number[mid])  swap(first, mid);           //��֤��˽�С
	if (L->number[mid] > L->number[last])   swap(mid, last);       //��֤�м��С
	if (L->number[first] < L->number[mid])     swap(first, mid);   //��֤���Ϊ�м�ֵ
	pivotkey = L->number[first];
	L->number[0] = pivotkey;
	while (first < last)
	{
		while (first < last&&L->number[last] >= pivotkey) last--;
		L->number[first] = L->number[last];
		while (first < last&&L->number[first] <= pivotkey) first++;
		L->number[last] = L->number[first];
	}
	L->number[first] = L->number[0];
	return first;
}

/*�Ż�С��������򷽰�
*/
void sort::QSort_optimize1(int first, int last)
{
	int pivot;
	if ((last - first) > 7)             //������̫Сʱ������ֱ���ò�������
	{
		pivot = QuikPartition(first, last);
		QSort_optimize1(first, pivot - 1);
		QSort_optimize1(pivot + 1, last);
	}
	else
		Insert();
}

/*�Ż��ݹ����
���õ��������ǵݹ�ķ�������������ջ��ȣ����Ϳռ临�Ӷȣ��Ӷ�������������
*/
void sort::QSort_optimize2(int first, int last)
{
	int pivot;
	if ((last - first) > 7)             //������̫Сʱ������ֱ���ò�������
	{
		while (first < last)
		{
			pivot = QuikPartition(first, last);
			QSort_optimize2(first, pivot - 1);
			first = pivot + 1;
		}
	}
	else
		Insert();
}