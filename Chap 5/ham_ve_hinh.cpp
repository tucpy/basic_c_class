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
void VeHinhA(int n);

void main()
{
	int n=0;
	n = NhapN2(n);
	VeHinhA(n);
	_getch();
}


void VeHinhA(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c ++)
		{
			if (d >= c)
				printf("* ");
			else
				printf(" ");
		}
		printf("\n");
	}
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