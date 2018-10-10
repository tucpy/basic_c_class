#include <stdio.h>
#include <limits.h>
#include <conio.h>
#define N 3

void main()
{

	int label[N * N] = {};
	int a[N][N] ={
		{ 0, 0, 7 },
		{ 3, 0, 0 },
		{ 0, 9, 0 }
	};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (a[i][j] != 0)
			{
				label[a[i][j] - 1] = 1;
			}
		}
	}
	// Kiem tra lai label xem o nao da duoc dien so
	for (int i = 0; i < N * N; i++)
	{
		printf("%d", label[i]);
	}

	// Dien vao o trong
	/*for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (a[i][j] == 0)
			{
				for (int k = 0; k < N*N; k++)
				{
					if (label[k] == 0)
					{
						a[i][j] = k + 1;
						label[k] = 1;
						break;
					}
				}
			}
		}
	}*/

	// Dien vao o trong

	int k = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (a[i][j] == 0)
			{
				while (label[k] != 0)
				{
					k++;
				}
				/*a[i][j] = k + 1;
				k++;*/
				a[i][j] = ++k;

				//a[i][j] = k + 1;
				//label[k] = 1;

			/* for (; k < N*N; k++)
				{
					if (label[k] == 0)
					{
						a[i][j] = k + 1;
						label[k] = 1;
						break;
					}
				}*/

			}
		}
	}

	// In lai ma tran moi
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}








	_getch();
}