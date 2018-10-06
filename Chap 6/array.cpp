
/*
// Cach 1: Nhap xuat mang 

#include <stdio.h>
#include <conio.h>
#define SIZE 20 // Khai bao mang gom SIZE phan tu kieu int

void main()
{
	int a[SIZE];
	int n;
	int i;
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &n);
	} while (n < 1 || n > SIZE);
	// Nhap du lieu cho mang
	for (i = 0; i < n; i++)
	{
		printf("Pt thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
	// Xuat du lieu cua mang
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
		//printf("\n");
	}
	_getch();
}

*/

/*

// Cach 2: Nhap xuat mang 

#include <stdio.h>
#include <conio.h>
#define SIZE 20

// Khai bao cac nguyen mau ham
void Nhap(int *a, int *n);
void Xuat(int *a, int *n);

// Dinh nghia cac ham
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

void main()
{
	int a[SIZE], n;
	Nhap(a, &n);
	Xuat(a, n);
}

*/

/*

// Cach 3: tuy dung cach nay nhung van ra so giong nhau sau moi lan
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
#include <conio.h>

// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int *n);
void Xuat(int *a, int n);

//Dinh nghia cac ham
void TaoMangNNhien(int a[], int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf_s("%d", &(*n));
	} while (*n<1 || *n> SIZE);
	int min = 0, max = 10;
	for (int i = 0; i < *n; i++)
		a[i] = (rand() % (max - min + 1)) + min;
}

void Xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

void main()
{
	int a[SIZE], n;
	TaoMangNNhien(a, &n);
	Xuat(a, n);
	_getch();
}

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang
#include <conio.h>

// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int *n);
void Xuat(int *a, int n);

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

void Xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

void main()
{
	int a[SIZE], n;
	srand((unsigned int)time(NULL));
	TaoMangNNhien(a, &n);
	Xuat(a, n);
	_getch();
}

*/