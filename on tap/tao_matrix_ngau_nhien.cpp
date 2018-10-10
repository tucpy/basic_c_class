#include <stdio.h>
#include <limits.h>
#include <conio.h>
#define N 3
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	int a[N][N] = { 0 };
	int label[N * N] = {};
	int n;

	printf("Input n:");
	scanf_s("%d", &n);//3

	int row, col, val;
	for (int k = 0; k < n;)
	{
		row = rand() % N;
		col = rand() % N;
		val = rand() % (N * N) + 1;
		if (label[val - 1] == 0 && a[row][col] == 0)
		{
			a[row][col] = val;
			label[val - 1] = 1;
			k++;
		}
	}

	for (int i = 0; i < N; i ++ )
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	_getch();
}

