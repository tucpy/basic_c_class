/*
print this pattern
---*---
--***--
-*****-
*******

*/

#include <stdio.h>
#include <conio.h>


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
