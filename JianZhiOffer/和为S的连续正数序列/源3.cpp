/*��Ŀ����
С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,�����Ͼ�д������ȷ����100��
���������������ڴ�,�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22��
���ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
�������:
������к�ΪS�������������С������ڰ��մ�С�����˳�����м䰴�տ�ʼ���ִ�С�����˳��*/


//˫ָ�뼼���������൱����һ�����ڣ����ڵ��������߾�������ָ�룬
//���Ǹ��ݴ�����ֵ֮����ȷ�����ڵ�λ�úͿ��
class Solution {
public:
	vector<vector<int> > FindContinuousSequence(int sum) {
		vector<vector<int>> res;
		int plow = 1, phigh = 2;
		while (plow<phigh)
		{
			int cur = (phigh + plow)*(phigh - plow + 1) / 2;
			if (cur == sum)
			{
				vector<int> tmp;
				for (int i = plow; i <= phigh; i++)
					tmp.push_back(i);
				res.push_back(tmp);
				plow++;
			}
			else if (cur<sum) phigh++;
			else plow++;
		}
		return res;
	}
};