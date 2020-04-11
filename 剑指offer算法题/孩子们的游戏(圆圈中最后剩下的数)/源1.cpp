/*��Ŀ����
ÿ����һ��ͯ��,ţ�Ͷ���׼��һЩС����ȥ�����¶�Ժ��С����,����������ˡ�
HF��Ϊţ�͵�����Ԫ��,��ȻҲ׼����һЩС��Ϸ������,�и���Ϸ��������:
����,��С������Χ��һ����Ȧ��Ȼ��,�����ָ��һ����m,�ñ��Ϊ0��С���ѿ�ʼ������
ÿ�κ���m-1���Ǹ�С����Ҫ���г��׸�,Ȼ���������Ʒ�����������ѡ����,���Ҳ��ٻص�Ȧ��,
��������һ��С���ѿ�ʼ,����0...m-1����....������ȥ....ֱ��ʣ�����һ��С����,���Բ��ñ���,
�����õ�ţ������ġ�����̽���ϡ���ذ�(��������Ŷ!!^_^)��
������������,�ĸ�С���ѻ�õ������Ʒ�أ�(ע��С���ѵı���Ǵ�0��n-1)
���û��С���ѣ��뷵��-1*/


//Լɪ������ĸı࣬��������⹫ʽ����������ѭ��������

class Solution {          //��ѧ���ɣ��ݹ鷨��ʱ�临�Ӷȣ�O(n���ռ临�Ӷȣ�O(1)
public:
	int LastRemaining_Solution(int n, int m)
	{
		if (n == 0) return -1;
		else if (n == 1) return 0;
		else
			return (LastRemaining_Solution(n - 1, m) + m) % n;
	}
};

class Solution {                 //��������
public:
	int LastRemaining_Solution(int n, int m) {
		if (n < 1 || m < 1) {//
			return -1;
		}
		int last = 0;
		for (int i = 2; i <= n; i++) {
			last = (last + m) % i;
		}
		return last;
	}
}
/*
�ŵ���
���ֻ�����һ������ʤ���ߵĻ������ǿ�������ѧ���ɷ���������⣬Ϊ����      �۷��㣬�Ȱ�������΢�ı�һ�£�����Ӱ��ԭ�⣺

 ����������n���ˣ����0~(n-1))����0��ʼ����������(m-1)���˳���ʣ�µ��� ������0��ʼ��������ʤ���ߵı�š�

 ����֪����һ����(���һ����m%n-1) ����֮��ʣ�µ�n-1���������һ����      ��Լɪ�򻷣��Ա��Ϊk=m%n���˿�ʼ��:

        k  k+1  k+2  ... n-2, n-1, 0, 1, 2, ... k-2���Ҵ�k��ʼ��0��

�������ǰ����ǵı����һ��ת����

k     --> 0

k+1   --> 1

k+2   --> 2
...

k-2   --> n-2

k-1   --> n-1

�任�������ȫȫ��Ϊ��(n-1)���˱����������⣬��������֪�����������Ľ⣺ ����x�����յ�ʤ���ߣ���ô�����������������x���ȥ���պþ���n������ ���Ľ��𣿣������ȥ�Ĺ�ʽ�ܼ򵥣����Ŵ�Ҷ������Ƴ�����x'=(x+k)%n��

��f[i]��ʾi��������Ϸ��m�˳����ʤ���ߵı�ţ����Ľ����Ȼ��f[n]��

���ƹ�ʽ

f[1]=0;

f[i]=(f[i-1]+m)%i;  (i>1)

���������ʽ������Ҫ���ľ��Ǵ�1-n˳�����f[i]����ֵ���������f[n]�� ��Ϊʵ�������б�����Ǵ�1��ʼ���������f[n]+1��*/



//��������ģ��ѭ�����̣����Ǹ��Ӷ�̫�ߣ�ʱ�临�Ӷ�O(nm)���ռ临�Ӷ�O(n)��
class Solution {   
public:
	int LastRemaining_Solution(int n, int m)
	{
		if (n<1 || m<1) return -1;
		int child[n];
		int i = -1, step = 0, count = n;
		while (count>0)
		{
			i++;
			if (i == n) i = 0;
			if (child[i] == -1) continue;
			step++;
			if (step == m)
			{
				step = 0;
				child[i] = -1;
				count--;
			}
		}
		return i;

	}
};


class Solution {  //������ѧ���Ʒ�������ѭ��������ѭ��m��ɾȥ�ڵ㣬ֱ��������ֻʣһ���ڵ�Ϊֹ
public:
	struct node
	{
		int no;
		node* next;
		//node(int n):no(n),next(NULL){}
	};

	int LastRemaining_Solution(int n, int m)
	{
		if (n<1 || m<1) return -1;  //�����쳣����

		node* head = new node;     //����ѭ������
		head->no = 0;
		node* tail = head;
		for (int i = 1; i<n; i++)
		{
			node* tmp = new node;
			tmp->no = i;
			tail->next = tmp;
			tail = tmp;
		}
		tail->next = head;

		node* pre = tail;
		while (head->next != head)    //ģ��Լɪ�򱭵�ѭ������
		{
			node* cur = head;
			for (int i = 0; i<m - 1; i++)
			{
				cur = cur->next;
				pre = pre->next;
			}
			pre->next = cur->next;
			head = cur->next;
			delete cur;
		}

		return head->no;
	}
};