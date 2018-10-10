#include <stdio.h>
#include <limits.h>
#include <conio.h>


void main()
{

	int p[] = { 1549, 1600, 1858, 2340, 2615, 2701 };
	int a[] = { 50, 100, 200, 300, 400, INT_MAX };
	
	int n = sizeof(a) / sizeof(a[0]);
	printf("n: %d\n", n);
	int kw;
	printf("Nhap so kw:");
	scanf_s("%d", &kw);
	
	int total = 0;
	int carry = 0;
	/*for (int i = 0; i < n; i++)
	{
		if (kw >= a[i])
		{
			total += (a[i] - carry)* p[i];
			carry = a[i];
		}
		else
		{
			total += (kw - carry) * p[i];
			break;
		}
	}*/

	int i = 0;
	while (kw >= a[i])
	{
		total += (a[i] - carry)* p[i];
		carry = a[i];
		i++;
	}
	total += (kw - carry) * p[i];

	printf("Tong tien: %d", total);
	_getch();

}