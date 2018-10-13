#include <stdio.h>
#include <conio.h>
#define SIZE 20

/*
// Khai bao nguyen mau ham
void Nhap(int *a, int *n);
void Xuat(int *a, int n);


// Ham chinh
void main()
{
	int a[SIZE];
	int n;
	Nhap(a, &n);
	Xuat(a, n);

	_getch();
}


// Ham phu
void Nhap(int *a, int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &(*n));
	} while (*n < 1 || *n > SIZE);

	for (int i = 0; i < *n; i++)
	{
		printf("pt thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}

void Xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
*/

/*
void Nhap2(int A[], int &n);
void Nhap(int *A, int *n);
void Xuat(int *a, int n);
void Nhap3(int *A, int &n);


void main()
{

	int A[SIZE], n;
	Nhap(A, &n);
	Xuat(A, n);
	Nhap2(A, n);
	Xuat(A, n);

	Nhap3(A, n);
	Xuat(A, n);

	_getch();
}

void Nhap2(int A[], int &n)
{
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
	} while ((n < 1) || (n > SIZE));
	
	for (int i = 0; i < n; i++)
	{
		printf("Nhap A[%d]: ", i);
		scanf_s("%d", &A[i]);
	}
}


void Nhap(int *A, int *n)
{
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &(*n));
	} while ((*n < 1) || (*n > SIZE));

	for (int i = 0; i < *n; i++)
	{
		printf("Nhap A[%d]: ", i);
		scanf_s("%d", &A[i]);
	}
}


void Nhap3(int *A, int &n)
{
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
	} while ((n < 1) || (n > SIZE));

	for (int i = 0; i < n; i++)
	{
		printf("Nhap A[%d]: ", i);
		scanf_s("%d", A+i);
	}
}


void Xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
*/


int Tong(int n);
int Tong2(int n);
int Tong3(int n);


void main()
{

	// Nhap n
	int n, a, b,c;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	
	// Tinh tong cac phan tu tu 1-n
	a = Tong(n);
	printf("Tong n: %d\n", a);
	b = Tong2(n);
	printf("Tong n: %d\n", b);
	c = Tong3(n);
	printf("Tong n: %d\n", c);

	_getch();
}

int Tong(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i ++)
	{
		tong += i;
	}

	return tong;
}

int Tong2(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; tong += i, i++); // bien the cua for, dua lenh len, dung dau "," de ngan cach

	return tong;
}

int Tong3(int n)
{
	int tong = 0;
	int i = 1;
	for (; ; )
	{
		if (i > n)
			break;
		tong += i;
		i++;
	}
	return tong;
}