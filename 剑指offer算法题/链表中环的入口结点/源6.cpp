/*��Ŀ����
��һ�����������а����������ҳ�������Ļ�����ڽ�㣬�������null��*/

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
	ListNode * EntryNodeOfLoop(ListNode* pHead)
	{
		if (!pHead) return NULL;
		ListNode *fast = pHead, *low = pHead;
		while (fast&&fast->next)
		{
			fast = fast->next->next;
			low = low->next;
			if (fast == low)
				break;
		}

		if (!fast || !fast->next) return NULL;//���ٰ�������Ԫ�أ��Ҳ���Ϊ�޻�����
		low = pHead;  //fast����low��ͷ��ʼ
		while (fast != low)
		{
			fast = fast->next;
			low = low->next;
		}
		return fast;
	}
};