/*#define _CRT_SECURE_NO_DEPRECATE*/
#include<iostream>
using namespace std;
int main()
{
	int a[3][3], n = 0;
	for (int i = 0; i < 3; i++)/*�����ά������������*/
	{
		for (int j = 0; j < 3; j++)

		{
			cin >> a[i][j];

			if (a[i][j] == 0)/*n��¼0�ĸ���*/

			{

				n++;

			}

		}

	}
	for (int an = 0; an < n; an++)/*n�Ĵ�С��ѭ���Ĵ���*/

	{

		for (int i = 0; i < 3; i++)

		{

			for (int j = 0; j < 3; j++)

			{

				if (a[i][j] == 0)

				{

					int b[5], k = 0;/*b�����д�ŵ�ǰ�������к��������е���ֵ*/

					for (int x = 0; x < 3; x++)/*��������ֵ*/

					{

						if (a[x][j] != 0)

						{

							b[k] = a[x][j];

							k++;

						}

					}

					for (int y = 0; y < 3; y++)/* ��������ֵ */

					{

						if (a[i][y] != 0)

						{

							b[k] = a[i][y];

							k++;

						}

					}

					int c[3] = { 1,2,3 }, x1 = 3;/*cx��ʾ��ǰ�����ֵ�Ŀ�����������������Ϊ3*/

					for (int c1 = 0; c1 < 3; c1++)/*����cc[]������c[]�Ƚ�*/

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

					if (x1 == 1)/*x1=1��ʾ��ǰ�����ֵֻ��һ�ֿ��ܣ����ɽ�����������*/

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

	for (int i = 0; i < 3; i++)/*���*/

	{

		for (int j = 0; j < 3; j++)

		{

			cout << a[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;
}