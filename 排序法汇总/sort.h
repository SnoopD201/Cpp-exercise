#include <Sqlist.h>
class sort
{
public:
	void cinnumber();
	void restore();
	void Bubble();
	void Bubble_optimize1();
	void Bubble_optimize2();
	void Insert();
	void Select();
	void display();
	void swap( int , int );
private:
	SqVector L;      
	SqVector L0;      //�������������ԭʼ���ݣ��Ա�����Ҫʱ�ָ���L
	int countswap=0;      //���ڱ�����ݽ����Ĵ������Ӷ����������㷨�ĺû�
	int countcompare = 0;     //���ڱ�����ݱȽϵĴ������Ӷ����������㷨�ĺû�
};
