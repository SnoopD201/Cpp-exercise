class Solution {       //������ⷨ
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i<nums.size(); i++)
			for (int j = i + 1; j<nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
					return { i,j };
			}
		return {};
	}
};
ʱ�临�Ӷȣ�O(n ^ 2)
����ÿ��Ԫ�أ�������ͼͨ��������������ಿ����Ѱ��������Ӧ��Ŀ��Ԫ�أ�
�⽫�ķ� O(n)��ʱ�䡣���ʱ�临�Ӷ�Ϊ O(n ^ 2)��
�ռ临�Ӷȣ�O(1)O(1)
