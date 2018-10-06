// Bai 1: Dem cac so > x
// Bai 2: Dem cac so chia chan cho x
// Bai 3: Cho nhap x, y. Dem cac so nam trong khoang x va y
// Bai 4: Dem cac so chia chan cho 3 va ko chia chan cho 5


#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang
#include <conio.h>


// Khai bao cac nguyen mau ham
void TaoMangNNhien(int a[], int &n);
int Nhapx(int x);
void Xuat(int a[], int n);
int demX(int a[], int n, int x);
int demchiachanX(int a[], int n, int x);
int Nhapy(int y);
int demkhoangXY(int a[], int n, int x, int y);
int demchiahet3va5(int a[], int n);

// Bai 1: Dem cac so > x

void main()
{
	int a[SIZE], n, x = 0, y=0;
	int dem, dem1, dem2, dem3;
	srand((unsigned int)time(NULL));
	TaoMangNNhien(a, n);
	printf("Mang ban dau: ");
	Xuat(a, n);
	x = Nhapx(x);
	
	dem = demX(a, n, x);
	printf("So luong cac so lon hon %d: %d \n", x, dem);
	
	dem1 = demchiachanX(a, n, x);
	printf("So luong cac so chia chan cho %d: %d \n", x, dem1);
	
	y = Nhapy(y);
	dem2 = demkhoangXY(a, n, x, y);
	printf("So luong cac so nam trong khoang %d - %d: %d \n", x, y, dem2);

	dem3 = demchiahet3va5(a, n);
	printf("So luong cac so chia het cho 3 va 5: %d \n", dem3);

	_getch();
}


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


int demX(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ( a[i] > x)
			dem++;
	}
	return dem;
}


// Bai 2: Dem cac so chia chan cho x

int demchiachanX(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % x == 0 )
			dem++;
	}
	return dem;
}

// Bai 3: Cho nhap x, y. Dem cac so nam trong khoang x va y

int Nhapy(int y)
{
	do
	{
		printf("Nhap y : ");
		scanf_s("%d", &y);
	} while (!((y > 0) && (y < 100)));
	return y;
}

int demkhoangXY(int a[], int n, int x, int y)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] > x) && (a[i] < y))
			dem++;
	}
	return dem;
}


// Bai 4: Dem cac so chia chan cho 3 va ko chia chan cho 5

int demchiahet3va5(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 3 == 0) && (a[i] % 5 == 0))
			dem++;
	}
	return dem;
}

