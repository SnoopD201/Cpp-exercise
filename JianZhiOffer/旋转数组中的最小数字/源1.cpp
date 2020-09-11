/*��Ŀ����
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��*/

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.empty()) return 0;
		int low = 0, high = rotateArray.size() - 1, mid = 0;
		while (low<high)
		{
			if (rotateArray[low]<rotateArray[high]) break;
			mid = low + (high - low) / 2;
			if (rotateArray[low]<rotateArray[mid])
				low = mid + 1;
			else if (rotateArray[high]>rotateArray[mid])
				high = mid;
			else low++;
		}
		return rotateArray[low];
	}
};


//����sort����
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		sort(rotateArray.begin(), rotateArray.end());

		return rotateArray[0];

	}
};