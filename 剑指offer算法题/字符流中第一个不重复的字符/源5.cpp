/*��Ŀ����
��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ���
���磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��
�������:
�����ǰ�ַ���û�д��ڳ���һ�ε��ַ�������#�ַ���*/

class Solution      
{
public:
	//Insert one char from stringstream
	string str;
	char hash[256];   //���ַ�ת��Ϊ�������ַ����ִ���ת��ΪԪ��ֵ
	void Insert(char ch)
	{
		str += ch;
		hash[ch]++;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		int size = str.size();
		for (int i = 0; i<size; i++)
		{
			if (hash[str[i]] == 1)  
//�����ҳ���һ���ģ��ؼ����if(hash[str[i]]==1)�е�s[i],���Ǵ��ֽ����еĵ�һ���ַ���ʼ�жϵģ��������ҳ��ֽ������е�һ�����ظ���
				return str[i];
		}
		return '#';
	}

};