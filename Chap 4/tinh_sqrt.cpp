/*
Tinh S = can bac n cua x
Nhap n va x
*/



#include <stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
	int n;
	float x, S;
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
		printf("Nhap x: ");
		scanf_s("%f", &x);

	} while (n < 0 & x < 0);

	S = 0;
	for (int i = 1; i <= n; i++)
	{
		S = sqrt(x) + S;
	}

	printf("S: %f", S);

	_getch();
}