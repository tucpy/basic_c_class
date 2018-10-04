#include <stdio.h>
#include <conio.h>


/*
int NhapN2(int n);
void InSNTlonnhatNhoHonN(int n);


int forfunc(int n);
int whilefunc(int n);
int dofunc(int n);

void main()
{
	int n = 0;
	int x1, x2, x3;
	n = NhapN2(n);
	x1 = forfunc(n);
	printf("x1: %d\n", x1);
	x2 = whilefunc(n);
	printf("x2: %d\n", x2);
	x3 = dofunc(n);
	printf("x3: %d\n", x3);

	_getch();
}

int NhapN2(int n)
{
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
	return n;
}

int forfunc(int n)
{
	int S = 0;
	for (int i = 0; i <= n; i++)
	{
		S += i;
	}
	return S;
}

int whilefunc(int n)
{
	int S = 0;
	int i = 0;
	while (i<=n)
	{
		S += i;
		i++;
	}
	return S;
}


int dofunc(int n)
{
	int i = 0;
	int S = 0;
	do
	{
		S += i;
		i++;
	} while (i <= n);
	return S;
}

*/

int NhapN2(int n);
void VeTamGiacFor (int n);
void VeTamGiacDo(int n);
void VeTamGiacWhile(int n);

void main()
{
	int n = 0;
	n = NhapN2(n);
	printf("For: \n");
	VeTamGiacFor(n);
	printf("Do: \n");
	VeTamGiacDo(n);
	printf("While: \n");
	VeTamGiacWhile(n);
	
	_getch();
}



int NhapN2(int n)
{
	do
	{
		printf("Nhap n (10-50): ");
		scanf_s("%d", &n);
		if (!((n >= 10) && (n <= 50)))
		{
			printf("Chi nhap so tu 10 den 50\n");
		}
	}
	while (!((n >= 10) && (n <= 50)));
	return n;
}


void VeTamGiacFor(int n)
{
	for (int d = 1; d <= n; d++)
	{
		for (int c = 1; c <= n; c++)
		{
			if ((c == 1) || (d == n) || (d == c))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}



void VeTamGiacDo(int n)
{

	int d = 1;
	do {
		int c = 1;
		do {
			if ((c == 1) || (d == n) || (d == c))
				printf("*");
			else
				printf(" ");

			c++;
		} while (c <= n);
		d++;
		printf("\n");
	} while (d <= n);

}


void VeTamGiacWhile(int n)
{
	int d = 1;
	while (d <= n)
	{
		int c = 1;
		while (c <= n)
		{
			if ((c == 1) || (d == n) || (d == c))
				printf("*");
			else
				printf(" ");
			c++;
		}
		d++;
		printf("\n");
	}
}


