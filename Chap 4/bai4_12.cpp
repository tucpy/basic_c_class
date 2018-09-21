/*
In bang cuu chuong tu 1 den 4
1 x 1 = 1			2 x 1 = 2
1 x 2 = 2			2 x 2 = 4
1 x 3 = 3			2 x 3 = 6
......
1 x 9 = 9			2 x 9 = 18

*/

#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int i;

	//vong lap i dung in so dong (1->9)
	for (int i = 1; i <= 9; i++)
	{
		//vong lap j dung in so cot trong moi dong
		for (int j = 1; j <= 4; j++)
		{
			printf("%d x %d = %d\t", j, i, j*i);
		}
		printf("\n");

	}

	_getch();
}
