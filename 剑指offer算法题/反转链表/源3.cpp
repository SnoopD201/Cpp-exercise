/*��Ŀ����
����һ��������ת��������������ı�ͷ*/
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {                              ////��һ�ַ����ǣ��ǵݹ鷽��
public:
	ListNode * ReverseList(ListNode* pHead) {
		if (pHead == nullptr) return nullptr;
		ListNode* pcurrent = pHead;
		ListNode* pPre = nullptr;
		ListNode* pNext = nullptr;
		while (pcurrent)
		{
			pNext = pcurrent->next;
			pcurrent->next = pPre;
			if (!pNext) return pcurrent;
			pPre = pcurrent;
			pcurrent = pNext;
		}
	}
};

class Solution {                                ////�ڶ��ַ����ǣ��ݹ鷽��
public:
	ListNode * ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL) return pHead;
		ListNode* ReversePhead = ReverseList(pHead->next);
		pHead->next->next = pHead;
		pHead->next = NULL;
		return ReversePhead;
	}
};