/*��Ŀ����
��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С������
���磬�ַ���"+100","5e2","-123","3.1416"��"-1E-16"����ʾ��ֵ�� 
����"12e","1a3.14","1.2.3","+-5"��"12e+4.3"�����ǡ�*/

class Solution {
public:
	bool isNumeric(char* string)
	{
		bool sign = false, decimal = false, hasE = false;
		for (int i = 0; i<strlen(string); i++)
		{
			if (string[i] == '+' || string[i] == '-')
			{
				if (!sign&&i>0 && string[i - 1] != 'E'&&string[i - 1] != 'e') return false;
				// ��һ�γ���+-���ţ��Ҳ������ַ�����ͷ������������e֮��
				else if (sign&&string[i - 1] != 'E'&&string[i - 1] != 'e') return false;
				// �ڶ��γ���+-���ţ�����������e֮��
				sign = true;
			}
			else if (string[i] == '.')
			{
				if (i == 0) return false;
				//.��������λ
				else if (hasE || decimal) return false;
				// Ee���治����С���㣬С���㲻�ܳ�������
				decimal = true;
			}
			else if (string[i] == 'e' || string[i] == 'E')
			{
				if (hasE) return false;
				//Ee���ܳ�������
				else if (i == strlen(string) - 1) return false;
				//Ee������ĩβ
				hasE = true;
			}
			else if (string[i]>'9' || string[i]<'0') return false;
			//������ѧ�������0-9֮��
		}
		return true;
	}

};