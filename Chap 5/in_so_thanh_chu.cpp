/*
#include <stdio.h>
#include <conio.h>

void NhapN(int &n);
void inchuso(int n);
void in(int so);

void main ()
{
	int n=0;
	NhapN(n);
	inchuso(n);

	_getch();
}

void NhapN(int &n)
{
	do
	{
		printf("Nhap n (0-999): ");
		scanf_s("%d", &n);
		if (!((n >= 0) && (n <= 999)))
		{
			printf("Chi nhap so tu 0 den 999\n");
		}
	}
	while (!((n >= 0) && (n <= 999)));
}

void inchuso(int n)
{
	int k = 100;
	int so;
	
	while (k > n) // 2 dong nay de tranh in so 0 o dau
		k = k / 10;

	while (k >= 1)
	{
		so = n / k;
		n = n % k;
		k = k / 10;
		in(so);
	}
}

void in(int so)
{
	switch (so)
	{
		case 0: printf("khong ");
				break;
		case 1: printf("mot ");
				break;
		case 2: printf("hai ");
				break;
		case 3: printf("ba ");
				break;
		case 4: printf("bon ");
				break;
		case 5: printf("nam ");
				break;
		case 6: printf("sau ");
				break;
		case 7: printf("bay ");
				break;
		case 8: printf("tam ");
				break;
		case 9: printf("chin ");
				break;
		}
}
*/

#include <stdio.h>
#include <conio.h>

void NhapN(long &n);
void inchuso(long n);
void in(int so);

void main()
{
	long n = 0;
	NhapN(n);
	inchuso(n);

	_getch();
}

void NhapN(long &n)
{
	do
	{
		printf("Nhap n (0-999): ");
		scanf_s("%d", &n);
		if (!((n >= 0) && (n <= 9999999999)))
		{
			printf("Chi nhap so tu 0 den 999\n");
		}
	} while (!((n >= 0) && (n <= 9999999999)));
}

void inchuso(long n)
{
	long k = 100;
	int so;

	while (k > n) // 2 dong nay de tranh in so 0 o dau
		k = k / 10;

	while (k >= 1)
	{
		so = n / k;
		n = n % k;
		k = k / 10;
		in(so);
	}
}

void in(int so)
{
	switch (so)
	{
	case 0: printf("khong ");
		break;
	case 1: printf("mot ");
		break;
	case 2: printf("hai ");
		break;
	case 3: printf("ba ");
		break;
	case 4: printf("bon ");
		break;
	case 5: printf("nam ");
		break;
	case 6: printf("sau ");
		break;
	case 7: printf("bay ");
		break;
	case 8: printf("tam ");
		break;
	case 9: printf("chin ");
		break;
	}
}
