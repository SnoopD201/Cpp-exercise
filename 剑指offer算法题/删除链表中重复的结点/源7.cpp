/*��Ŀ����
��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬
�ظ��Ľ�㲻��������������ͷָ�롣 
���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5*/

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
*/
class Solution {
public:
	ListNode * deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL || pHead->next == NULL) return pHead;
		ListNode* NewHead = new ListNode(0);
		NewHead->next = pHead;
		ListNode* pre = NewHead;
		ListNode* cur = pHead;
		while (cur != NULL)
		{
			if (cur->next != NULL && cur->val == cur->next->val)
			{
				while (cur->next != NULL && cur->val == cur->next->val)
					cur = cur->next;
				pre->next = cur->next;
				cur = cur->next;
			}
			else
			{
				pre = pre->next;
				cur = cur->next;
			}
		}
		return NewHead->next;
	}
};