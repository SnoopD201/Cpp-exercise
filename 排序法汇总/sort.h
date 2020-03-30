#include <Sqlist.h>
class sort
{
public:
	void cinnumber();
	void restore();
	//ð������
	void Bubble();
	void Bubble_optimize1();
	void Bubble_optimize2();
	//ֱ�Ӳ�������
	void Insert();
	//ѡ������
	void Select();
	//ϣ������
	void Shell();
	//������
	void Heap();
	void HeapAdjust(int s, int m);
	//�鲢����
	void MSort(int first, int last);
	void MergeAdjust(int first, int mid, int last);
	void Merge();
	void MergePass(int increment, int last);
	void Merge_optimize();
	//��������
	int    QuikPartition(int first, int last);
	int    QuikPartition_optimize1(int first, int last);
	int    QuikPartition_optimize2(int first, int last);
	void QSort(int first, int last);
	void QSort_optimize1(int first, int last);
	void QSort_optimize2(int first, int last);
	void Quik();

	void display();
	void swap( int , int );
private:
	SqVector L;      
	SqVector L0;      //�������������ԭʼ���ݣ��Ա�����Ҫʱ�ָ���L
	int countswap=0;      //���ڱ�����ݽ����Ĵ������Ӷ����������㷨�ĺû�
	int countcompare = 0;     //���ڱ�����ݱȽϵĴ������Ӷ����������㷨�ĺû�
};
