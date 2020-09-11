/*��Ŀ����
������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������
�����е�Ԫ��Ϊint���͡�*/

class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		int temp;
		if (stack2.empty())
		{
			while (!stack1.empty())
			{
				temp = stack1.top();
				stack2.push(temp);
				stack1.pop();
			}
		}
		temp = stack2.top();
		stack2.pop();
		return temp;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

/*<����>��
��ӣ���Ԫ�ؽ�ջA
���ӣ��ж�ջB�Ƿ�Ϊ�գ����Ϊ�գ���ջA������Ԫ��pop����push��ջB��ջB��ջ�������Ϊ�գ�ջBֱ�ӳ�ջ��
ջA�����洢Ԫ�أ�ջBֻ����Ϊһ���н�
