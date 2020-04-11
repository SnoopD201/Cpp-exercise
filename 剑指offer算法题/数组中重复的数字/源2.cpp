/*��Ŀ����
��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ� 
������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡�
���磬������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ������ǵ�һ���ظ�������2*/

class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		if (length<1) return false;
		for (int i = 0; i<length; i++)
		{
			while (i != numbers[i])
			{
				if (numbers[i] == numbers[numbers[i]])
				{
					*duplication = numbers[i];
					return true;
				}
				int tmp = numbers[i];
				numbers[i] = numbers[numbers[i]];
				numbers[tmp] = tmp;
			}
		}
		return false;
	}
};
//�˷������˹�ϣ�����ԣ�������Ҫ����Ĵ洢�ռ䡣 
���ʱ�临�Ӷ�ΪO(n)������Ҫ����ռ䣡
�ѵ�ǰ���е�����һ���±���±��Ӧֵ����ͬ�����飻
�������飬�жϵ�ǰλ��ֵ���±��Ƿ���ȣ� 2.1.����ȣ��������һλ��
2.2.�����ȣ��򽫵�ǰλ��i�ϵ�Ԫ�غ�a[i]λ���ϵ�Ԫ�رȽϣ���������ȣ���ɹ���
�����ȣ�������������������֮��a[i]λ���ϵ�ֵ�������±��Ƕ�Ӧ�ģ�
��iλ���ϵ�Ԫ�غ��±겢��һ����Ӧ���ظ�2.2�Ĳ�����ֱ����ǰλ��i��ֵҲΪi��
��i�����һλ�����ظ�2.


//˼·1����ϣ��
��������Ԫ��ֵ���з�Χ�ģ���˿�����һ������Ϊn�����飬�±��ʾ�����е�ÿһ��ֵ���±��Ӧ��ֵ��ʾ���±���ֵĴ�����
ֻ��ɨ��һ��ԭ���У���ͳ�Ƴ�����Ԫ�س��ֵĴ�����
��ɨ��һ�ι�ϣ���飬�ҵ�һ�����ִ�������1��ֵ���ɡ�
���ַ���ʱ�临�ӶȺͿռ临�Ӷȶ�ΪO(n)��
public boolean duplicate(int array[], int length, int[] duplication) {
	if (array == null) return false;

	// �ж������Ƿ�Ϸ���ÿ��������0~n-1֮�䣩
	for (int i = 0; i<length; i++) {
		if (array[i]<0 || array[i]>length - 1) {
			return false;
		}
	}

	// key step
	int[] hash = new int[length];
	for (int i = 0; i<length; i++) {
		hash[array[i]]++;
	}
	for (int i = 0; i<length; i++) {
		if (hash[i]>1) {
			duplication[0] = i;
			return true;
		}
	}
	return false;
}