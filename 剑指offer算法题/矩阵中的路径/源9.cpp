/*�����һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����
·�����ԴӾ����е�����һ�����ӿ�ʼ��ÿһ�������ھ������������ң����ϣ�����
�ƶ�һ�����ӡ����һ��·�������˾����е�ĳһ�����ӣ����·�������ٽ���ø���*/

class Solution {
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		if (!str || rows<1 || cols<1 || !matrix) return false;
		bool *flag = new bool[rows*cols]();
		for (int i = 0; i<rows; i++)
			for (int j = 0; j<cols; j++)
				if (hasPathHelper(matrix, rows, cols, str, flag, i, j))
					return true;
		return false;
	}

	bool hasPathHelper(char* matrix, int rows, int cols, char* str, bool *flag, int x, int y)
	{
		if (*str == '\0') return true;
		if (y == cols)
		{
			x++;
			y = 0;
		}
		if (y == -1)
		{
			x--;
			y = cols - 1;
		}
		if (x<0 || x >= rows) return false;
		if (flag[x*cols + y] || *str != matrix[x*cols + y]) return false;
		flag[x*cols + y] = true;
		bool res = hasPathHelper(matrix, rows, cols, str + 1, flag, x - 1, y) ||
			hasPathHelper(matrix, rows, cols, str + 1, flag, x + 1, y) ||
			hasPathHelper(matrix, rows, cols, str + 1, flag, x, y - 1) ||
			hasPathHelper(matrix, rows, cols, str + 1, flag, x, y + 1);
		flag[x*cols + y] = false;
		return res;
	}


};

/*˼·��
�����㷨
����һ�������û�˷������ĵ����⡣
���ȣ��ھ�������ѡһ��������Ϊ·������㡣���·���ϵĵ�i���ַ�����ch��
��ô������Ӳ����ܴ���·���ϵĵ�i��λ�á����·���ϵĵ�i���ַ�������ch��
��ô�����ڵĸ���Ѱ��·���ϵĵ�i+1���ַ������ھ���߽��ϵĸ���֮�⣬
�������Ӷ���4�����ڵĸ��ӡ�
�ظ��������ֱ��·���ϵ������ַ����ھ������ҵ���Ӧ��λ�á�
���ڻ�˷���ĵݹ����ԣ�·�����Ա�����һ��ջ��
���ھ����ж�λ��·����ǰn���ַ���λ��֮�������n���ַ���Ӧ�ĸ��ӵ���Χ��û���ҵ���n+1���ַ���
���ʱ��ֻҪ��·���ϻص���n-1���ַ������¶�λ��n���ַ���
  ��������·�������ظ��������ĸ��ӣ�����Ҫ������ַ������Сһ���Ĳ���ֵ����
	������ʶ·���Ƿ��Ѿ�����ÿ�����ӡ� ������������Ϊ��row,col���ĸ��Ӻ�·���ַ�������Ӧ���ַ�һ��ʱ��
	��4�����ڵĸ���(row,col-1),(row-1,col),(row,col+1)�Լ�(row+1,col)��ȥ��λ·���ַ�������һ���ַ�
	���4�����ڵĸ��Ӷ�û��ƥ���ַ�������һ�����ַ���������ǰ·���ַ������ַ��ھ����еĶ�λ����ȷ��
	������Ҫ�ص�ǰһ����Ȼ�����¶�λ��
	����һֱ�ظ�������̣�ֱ��·���ַ����������ַ����ھ������ҵ����ʵ�λ��
*/