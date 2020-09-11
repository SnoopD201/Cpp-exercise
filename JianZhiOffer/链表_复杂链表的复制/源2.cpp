/*��Ŀ����
����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬
һ��ָ����һ���ڵ㣬��һ������ָ��ָ������һ���ڵ㣩��
���ؽ��Ϊ���ƺ��������head����ע�⣬����������
��Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�*/

/*
struct RandomListNode {
int label;
struct RandomListNode *next, *random;
RandomListNode(int x) :
label(x), next(NULL), random(NULL) {
}
};
*/
class Solution {
public:
	RandomListNode * Clone(RandomListNode* pHead)
	{
		if (!pHead) return nullptr;
		RandomListNode* tmp;
		RandomListNode* current = pHead;
		while (current)
		{
			tmp = new RandomListNode(current->label);
			tmp->next = current->next;
			current->next = tmp;
			current = tmp->next;
		}
		current = pHead;
		while (current)
		{
			tmp = current->next;
			if (current->random) tmp->random = current->random->next;
			current = tmp->next;
		}
		RandomListNode* res = pHead->next;
		current = pHead;
		while (current->next)
		{
			tmp = current->next;
			current->next = tmp->next;
			current = tmp;
		}
		return res;
	}
};