/*题目描述
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。*/

class Solution {                      //暴力求解法
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		for (int i = 0; i<array.size(); i++)
		{
			if (array[i].empty())
				continue;
			if (target >= array[i][0] && target <= array[i][array[i].size() - 1])
				for (int j = 0; j<array[i].size(); j++)
				{
					if (target == array[i][j]) return true;
					else if (target<array[i][j]) break;
				}
		}
		return false;
	}
};

/* 思路
* 矩阵是有序的，从左下角来看，向上数字递减，向右数字递增，
* 因此从左下角开始查找，当要查找数字比左下角数字大时。右移
* 要查找数字比左下角数字小时，上移
*/
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		int i = array.size() - 1; int j = 0;
		while (i >= 0 && j<array[0].size())
		{
			if (target == array[i][j]) return true;
			else if (target>array[i][j])  j++;
			else  i--;
		}
		return false;
	}
};