/*#define _CRT_SECURE_NO_DEPRECATE*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3], n = 0;
	for (int i = 0; i < 3; i++)/*定义二维数组输入盘面*/
	{
		for (int j = 0; j < 3; j++)

		{
			cin >> a[i][j];

			if (a[i][j] == 0)/*n记录0的个数*/

			{

				n++;

			}

		}

	}
	for (int an = 0; an < n; an++)/*n的大小及循环的次数*/

	{

		for (int i = 0; i < 3; i++)

		{

			for (int j = 0; j < 3; j++)

			{

				if (a[i][j] == 0)

				{

					int b[5], k = 0;/*b数组中存放当前格所在行和列中已有的数值*/

					for (int x = 0; x < 3; x++)/*纵向已有值*/

					{

						if (a[x][j] != 0)

						{

							b[k] = a[x][j];

							k++;

						}

					}

					for (int y = 0; y < 3; y++)/* 横向已有值 */

					{

						if (a[i][y] != 0)

						{

							b[k] = a[i][y];

							k++;

						}

					}

					int c[3] = { 1,2,3 }, x1 = 3;/*cx表示当前格的数值的可能情况，三宫格最多为3*/

					for (int c1 = 0; c1 < 3; c1++)/*数组cc[]和数组c[]比较*/

					{

						for (int c2 = 0; c2 < k; c2++)

						{

							if (c[c1] == c[c2] && c[c1] != 0)

							{

								c[c1] = 0;

								x1--;

							}

						}

					}

					if (x1 == 1)/*x1=1表示当前格的数值只有一种可能，即可将其填入数组*/

					{

						for (int s = 0; s < 3; s++)

						{

							if (c[s] != 0)

							{

								a[i][j] = c[s];

							}

						}



					}

				}

			}

		}

	}



	cout << endl;

	for (int i = 0; i < 3; i++)/*输出*/

	{

		for (int j = 0; j < 3; j++)

		{

			cout << a[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;
}