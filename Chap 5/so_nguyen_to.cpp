/*#include <stdio.h>
#include <conio.h>


int main(void)
{
	
	int n;
	do 
	{
		printf("Nhap n (10-50): ");
		scanf_s("%d", &n);
		if (!((n >= 10) && (n <= 50)))
		{
			printf("Chi nhap so tu 10 den 50\n");
		}
	}
	//while (n < 10 || n > 50);
	while (!((n >= 10) && (n <= 50)));

	/*
	A. Tim so nguyen to -> ok
	*/
	
	/*
	int i, j;
	for (i = 2; i < n; i++)
	{
		int count = 0;
		for (j = 1; j <=i; j++)
		{
			if (i % j == 0)
				count ++;
		}
		if (count == 2)
		{
			printf("%d \t", i);
		}
	}
	*/

	/*
	B. n la so le -> ok
	*/
	
	/*
	int i;
	for (i = 10; i < n; i++)
	{
		if (!(i % 2 == 0))
		{
			printf("%d \t", i);
		}
	}
	*/

	
	/*
	C. n la mot trong cac so 2,4,6,8,10,12
	*/

	/*
	for (int i = 1; i <= n; i++)
	{
		if (((i % 2 == 0) && (i >= 2) && (i <= 12)))
		{
			printf("%d \t", i);
		}

	}
	
	*/

	/*
	D. n tu 5-10 hoac n tu 15-20
	*/

/*for (int i = 1; i <= n; i++)
	{
		if (((i >= 5) && (i <= 10)) || ((i >= 15) && (i <= 20)))
		{
			printf("%d \t", i);
		}
	}

	_getch();
}

*/