/*��Ŀ����
����һ�������������β��ͷ��˳�򷵻�һ��ArrayList��*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

class PrintListFromTailtoHead         //�ݹ鷨��ͷ��
{
public:
	vector<int> printListFromTailToHead(ListNode* head)==]-[p]
	{
		vector<int> array;
		if (head != NULL)
		{
			array.insert(array.begin,head->val)
				if (head->next != NULL)
				{
					vector<int> temp;
					temp = printListFromTailToHead(head->next);
					array.insert(array.begin(), temp.begin(), temp.end());
				}
		}
		return array;
	}
};

class PrintListFromTailtoHead         //�ݹ鷨��β��
{
public:
	vector<int> value;
	vector<int> printListFromTailToHead(ListNode* head)
	{
		ListNode* p = head;
		if (p != NULL)
		{
			if (p->next != NULL) printListFromTailToHead(p->next);
			value.push_back(p->val);
		}
		return value;
	}

}��

class PrintListFromTailtoHead         //��������ͷ��
{
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int>  value;
		if (head != NULL)
		{
			value.insert(value.begin(),head->val);
			while (head->next != NULL)
			{
				value.insert(value.begin(), head->next->val);
				head = head->next;
			}
		}
		return value;
	}

}��