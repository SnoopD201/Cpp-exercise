/*��Ŀ����
ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�
ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼��
���磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��*/

class Solution {             //�ȷ�תÿ�����ʣ��ٷ�ת��������
public:
	string ReverseSentence(string str) {
		int length = str.length();
		int low = 0, high = 0, i = 0;
		while (i<length)
		{
			while (i<length&&str[i] == ' ')  //�ҵ����ʵ�һ����ĸ
				i++;
			low = high = i;
			while (i<length&&str[i] != ' ')  //�ҵ����ʺ��һ���ո�
			{
				high++; i++;
			}
			ReverseWord(str, low, high - 1);
		}
		ReverseWord(str, 0, length - 1);
		return str;
	}

	void ReverseWord(string &str, int low, int high)
	{
		while (low<high)
			swap(str[low++], str[high--]);
	}
};