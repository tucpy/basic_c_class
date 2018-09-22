/*
print this pattern
---*---
--***--
-*****-
*******

*/


/*
#include <stdio.h>
#include <conio.h>

#include <math.h>


int main(void)
{
	int n;
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		
		for (int k = 1; k <= (2*i-1); k++)
		{
			printf("*");
		}

		printf("\n");
	}

	
    /*
	print this pattern
	*******
	-*****-
	--***--
	---*---
	*/

/*
	//switch line 4 to line 1 (previous code)
	for (int i = n; i >= 1 ; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= (2 * i - 1); k++)
		{
			printf("*");
		}

		printf("\n");
	}



	_getch();
}

*/


/*
print this pattern
---*---
--* *--
-*   *-
*     *
-*   *-
--* *--
---*---

*/

/*
#include <stdio.h>
#include <conio.h>

#include <math.h>


int main(void)
{
	int n; 
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= (2 * i - 1); k++ )
		{
			if (i==1 || i==n || k== 1 || k== (2*i - 1) || k== i ) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}

	_getch();
}
*/

/*
print this pattern

***************
***************
***************
***************
***************

*/

/*
#include <stdio.h>
#include <conio.h>

#include <math.h>


int main(void)
{
	int doc, ngang;
	printf("doc: ");
	scanf_s("%d", &doc);
	printf("ngang: ");
	scanf_s("%d", &ngang);

	for (int i = 1; i <= doc; i++)
	{
		for (int j = 1; j <= ngang; j++)
		{
			printf("*");
		}

		printf("\n");
	}


	_getch();
}

*/


/*
print this pattern

***************
*			  *
*			  *
*			  *
***************
*/

/*
#include <stdio.h>
#include <conio.h>


int main(void)
{
	int doc, ngang;
	printf("doc: ");
	scanf_s("%d", &doc);
	printf("ngang: ");
	scanf_s("%d", &ngang);

	for (int i = 1; i <= doc; i++)
	{
		for (int j = 1; j <= ngang; j++)
			if (i == 1 || i == doc || j == 1 || j == ngang)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}

		printf("\n");
	}

	_getch();
}
*/

/*
print this pattern
---1---
--121--
-12321-
1234321

*/



#include <stdio.h>
#include <conio.h>

#include <math.h>


int main(void)
{
	int n;
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{	
			if (k <= i)
			{
				char so = k + '0';
				printf("%c", so);
			}
			else
			{	
				printf("%d", (2*i)-k);// deo hieu cong thuc nay
			}

		}

		printf("\n");
	}
	_getch();
}