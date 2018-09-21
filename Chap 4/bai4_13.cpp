/*
In cac so nguyen to trong khoang tu 1 den n
So nguyen to: so chia het cho 1 va chinh no
Cho chay vong lap tu 1 den (n-1), neu n%i ==0 -> so do khong phai so nguyen to
*/


#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int n,i;
	printf("n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{

	for (int j = 2; j < i; j++)
	{
		//neu gap so chia het cho j, dung vong lap cua j
		if (i % j == 0)
		{
			break;
		}

		// if (n % i != 0) -> SAI
		// neu j chay duoc toi (i-1), nghia la (n-1) thi so do la so nguyen to
		if (j == (i - 1))
		{
			printf("%d \t", i);
		}

	}

	}

	_getch();
}
