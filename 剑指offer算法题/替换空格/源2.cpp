/*��Ŀ����
��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy*/
class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (str == NULL || length<1) return;
		int Oldlength = 0;
		int Newlength = 0;
		int count = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				count++;
			Oldlength++;   //OldlengthΪ���������ַ���ԭ�ַ�����Ԫ�ظ���
		}
		Newlength = Oldlength + 2 * count;//NewlengthΪ���������ַ������ַ�����Ԫ�ظ���
		if (Newlength + 1>length) return;
		for (; Oldlength >= 0 && Newlength>Oldlength; Oldlength--)//�Ӻ���ǰԭ���滻�ո�
		{
			if (str[Oldlength] == ' ')
			{
				str[Newlength--] = '0';
				str[Newlength--] = '2';
				str[Newlength--] = '%';
			}
			else
				str[Newlength--] = str[Oldlength];
		}
	}
};