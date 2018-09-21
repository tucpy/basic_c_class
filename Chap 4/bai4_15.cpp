/*
Tim cac so chinh phuong trong khoang tu 1 den n
So chinh phuong la binh phuong cua mot so tu nhien
2^2 = 4 // 3^3 = 9 // 4^4=16
can bac 2 cua n phai la mot so tu nhien, khong phai so thuc (2.458)

*/

#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int n, i;
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= sqrt((float)i) ; j++)
		{
			if (j*j == i)
			{
				printf("%d \t", i);
			}

		}

	}
	
	_getch();
}
