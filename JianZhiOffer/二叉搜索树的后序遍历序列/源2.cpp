/*��Ŀ����
����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No���������������������������ֶ�������ͬ*/

class Solution {
	bool judge(vector<int>& sequence, int left, int right)
	{
		if (left >= right) return true;   //��>��Ϊ�˷�ֹ��֮��Ϊ��
		int temp = left;
		while (sequence[temp]<sequence[right] && temp<right) temp++;
		int mid = temp;
		while (sequence[temp]>sequence[right] && temp<right) temp++;
		if (temp<right) return false;
		return judge(sequence, left, mid - 1) && judge(sequence, mid, right - 1);

	}
public:

	bool VerifySquenceOfBST(vector<int> sequence) {
		if (sequence.size() == 0) return false;
		return judge(sequence, 0, sequence.size() - 1);
	}
};

/*
˼·��
BST�ĺ������еĺϷ������ǣ�����һ������S�����һ��Ԫ����x ��Ҳ���Ǹ�����
���ȥ�����һ��Ԫ�ص�����ΪT����ôT���㣺T���Էֳ����Σ�ǰһ�Σ���������С��x��
��һ�Σ�������������x���������Σ����������ǺϷ��ĺ������С������ĵݹ鶨�� : ) ��*/