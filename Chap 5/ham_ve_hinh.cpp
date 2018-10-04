/*
a.Ve hinh a
 1 2 3 4 5
1*
2* *
3* * *
4* * * *
5* * * * *

b.Ve hinh b
Dao nguoc tam giac vuong can
* * * * *
  * * * *
    * * *
	  * *
		*


c. 
* * * * * 
* * * *
* * *
* *
*

d. 

		 *
	   * *
     * * *
   * * * *
 * * * * *

 e. 

   1 2 3 4 5
 1 *
 2 * *
 3 *   *
 4 *     *
 5 * * * * *



*/

#include <stdio.h>
#include <conio.h>

int NhapN2(int n);
//void VeHinhA(int n);
void VeHinhB(int n);
void VeHinhC(int n);
void VeHinhD(int n);
void VeHinhE(int n);

void main()
{
	int n=0;
	n = NhapN2(n);
	//VeHinhA(n);
	VeHinhB(n);
	VeHinhC(n); 
	VeHinhD(n);
	VeHinhE(n);

	_getch();
}

int NhapN2(int n)
{
	do
	{
		printf("Nhap n (5-30): ");
		scanf_s("%d", &n);
		if (!((n >= 5) && (n <= 30)))
		{
			printf("Chi nhap so tu 10 den 30\n");
		}
	}

	while (!((n >= 5) && (n <= 30)));
	//while (!((n>=5) && (n<=25) && (primenumber(n)==1));
	return n;
}
/*
void VeHinhA(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c ++)
		{
			if (d >= c)
				printf(" *");
			else
				printf(" ");
		}
		printf("\n");
	}
}
*/


void VeHinhB(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if (c < d)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

/*
c.
* * * * *
* * * *
* * *
* *
*
*/

void VeHinhC(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if (c <= ((n - d) + 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

/*
d.

*
* *
* * *
* * * *
* * * * *
*/

void VeHinhD(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if (c <= d)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}


/*
e.

1 2 3 4 5
1 *
2 * *
3 *   *
4 *     *
5 * * * * *
*/

void VeHinhE(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if ((c==d) || (c==1) || (d==n))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
