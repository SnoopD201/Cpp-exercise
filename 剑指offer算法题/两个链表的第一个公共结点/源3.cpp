/*��Ŀ����
�������������ҳ����ǵĵ�һ��������㡣��ע����Ϊ��������������
���Դ���������ݵ���ʾ����������ʽ��ʾ�ģ���֤������������ȷ�ģ�*/

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode * FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		while (p1 != p2)
		{
			p1 = (p1 == NULL ? pHead2 : p1->next);
			p2 = (p2 == NULL ? pHead1 : p2->next);
		}
		return p1;
	}
};
//������ͬ�й�����㣬��һ�ξͱ�������û�й�����㣬�ߵ�β��NULL����������NULL
//���Ȳ�ͬ�й�����㣬��һ���ֵ�ͳ����ˣ��ڶ���һ�𵽹�����㣻û�й�����һ�𵽽�βNULL

class Solution {
public:
	ListNode * FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		/*
		�ٶ� List1����: a+n  List2 ����:b+n, �� a<b
		��ô p1 ���ȵ�����β��, ��ʱp2 �ߵ� a+nλ��,��p1����List2ͷ��
		����p2 ����b+n-(n+a) =b-a ��������β��,��ʱp1Ҳ�ߵ�List2��b-aλ�ã�����a���͵����ܵĵ�һ�������ڵ㡣
		��p2 ���� List1ͷ����p2��a��Ҳ�����ܵĵ�һ�������ڵ㡣���ǡ��p1==p2,��ôp1���ǵ�һ�������ڵ㡣  ����p1��p2һ����n�������б�β��������û�й����ڵ㣬�˳�ѭ���� ͬ��a>=b.
		ʱ�临�Ӷ�O(n+a+b)

		*/
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		while (p1 != p2) {
			if (p1 != NULL) p1 = p1->next;
			if (p2 != NULL) p2 = p2->next;
			if (p1 != p2) {
				if (p1 == NULL) p1 = pHead2;
				if (p2 == NULL) p2 = pHead1;
			}
		}
		return p1;

	}

};