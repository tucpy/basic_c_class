/*
Tim so hoan chinh tu 1 den n.
So hoan chinh la so ma tong cac uoc so bang chinh no
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
vong lap long: vong lap ngoai dung de chay tu 1 den n, tim so thoa dieu kien
vong lap trong de tinh tong cac so uoc cua n
*/

#include <stdio.h>
#include <conio.h>


int main(void)
{
	int n, i, tong_uoc;
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		tong_uoc = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				tong_uoc += j;
				//printf("tong: %d\n", tong_uoc);
			}

		}


		if (tong_uoc == i)
		{
		printf("%d \t", i);
		}

	}

	_getch();
}
