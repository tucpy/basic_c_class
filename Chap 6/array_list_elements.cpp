/*
// List cac so nguyen to co trong mang ngau nhien


#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang
#include <conio.h>


// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int *n);
void LietkeSNT(int a[], int n);

//Dinh nghia cac ham
void TaoMangNNhien(int a[], int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &(*n));
	} while (*n<1 || *n> SIZE);
	int min = 0, max = 100;
	for (int i = 0; i < *n; i++)
		a[i] = (rand() % (max - min + 1)) + min;
}

void LietkeSNT(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 1; j <= a[i]; j++)
		{
			if (a[i] % j == 0)
				count += 1;
			//return count;
		}
		if (count == 2)
		{
			printf("%d\t", a[i]);
		}
	}
	printf("\n");
}

void main()
{
	int a[SIZE], n;
	srand((unsigned int)time(NULL));
	TaoMangNNhien(a, &n);
	LietkeSNT(a, n);
	_getch();
}

*/



/*

//List cac so chia chan cho 2 va 3



#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang
#include <conio.h>


// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int *n);
void Lietkesochia2va3(int a[], int n);

//Dinh nghia cac ham
void TaoMangNNhien(int a[], int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &(*n));
	} while (*n<1 || *n> SIZE);
	int min = 0, max = 20;
	for (int i = 0; i < *n; i++)
		a[i] = (rand() % (max - min + 1)) + min;
}

void Lietkesochia2va3(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 0) && (a[i] % 3 == 0))
			printf("%d\t", a[i]);
	}


	printf("\n");
}

void main()
{
	int a[SIZE], n;
	srand((unsigned int)time(NULL));
	TaoMangNNhien(a, &n);
	Lietkesochia2va3(a, n);
	_getch();
}

*/



//List cac so chia het cho so x bat ky


#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang
#include <conio.h>


// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int &n);
int Nhapx(int x);
void Lietkesochiahetchox(int a[], int n, int x);
void LietkesoNTlonhonx(int a[], int n, int x);
void Xuat(int a[], int n);
bool SNT(int n);
void Vitrisochiahetchox(int a[], int n, int x);


void main()
{
	int a[SIZE], n, x=0;
	srand((unsigned int)time(NULL));
	TaoMangNNhien(a, n);
	printf("Mang ban dau: ");
	Xuat(a, n);
	x = Nhapx(x);
	printf("Cac so trong mang chia chan cho %d: ",x);
	Lietkesochiahetchox(a, n, x);
	printf("Cac so nguyen to trong mang lon hon %d: ", x, n);
	LietkesoNTlonhonx(a, n, x);
	printf("Vi tri cac so chia het cho %d: ", x);
	Vitrisochiahetchox(a, n, x);

	_getch();
}

//Dinh nghia cac ham
void TaoMangNNhien(int a[], int &n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &n);
	} while ((n<1) || (n> SIZE));
	int min = 0, max = 100;
	for (int i = 0; i < n; i++)
		a[i] = (rand() % (max - min + 1)) + min;
}

int Nhapx(int x)
{
	do
	{
		printf("Nhap x : ");
		scanf_s("%d", &x);
	} while (!((x > 0) && (x < 100)));
	return x;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
			printf("%d\t", a[i]);
	}
	printf("\n");
}


void Lietkesochiahetchox(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{	
		if (a[i] % x == 0)
			printf("%d\t", a[i]);
	}
	printf("\n");
}

void LietkesoNTlonhonx(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if ((SNT(a[i]) == true) && (a[i] > x))
		{
			printf("%d\t", a[i]);
		}
	}
	printf("\n");
}


bool SNT( int n)
{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
				count += 1;
		}
		if (count == 2)
		{
			return true;
		}
		else
		{
			return false;
		}
}


// Bai 5: tra ve vi tri cua phan tu (index)
// Liet ke cac so nam tai vi tri chia chan cho x

void Vitrisochiahetchox(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % x == 0)
			printf("%d: %d\t", i, a[i]);
	}
	printf("\n");
}




