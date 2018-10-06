/*

Viet ham thuc hien cac chuc nang:
a. Tinh tong cac phan tu tren dong thu k
b. Tinh trung binh cong cac so chinh phuong

*/


#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang


#define ROWS 20
#define COLS 25

void Nhapmangngaunhien(int A[][COLS], int &row, int &col);
void Xuat(int A[][COLS], int &row, int &col);
int Nhapk(int k, int row);
int Tongk(int A[][COLS], int k, int col);
void Tong(int A[][COLS], int row, int col);

void main()
{
	int A[ROWS][COLS];
	int row, col, tongk;
	int k = 0;
	srand((unsigned int)time(NULL));
	Nhapmangngaunhien(A, row, col);
	Xuat(A, row, col);

	k = Nhapk(k, row);
	tongk = Tongk(A, k, col);
	printf("Tong cac phan tu tren dong thu %d: %d\n", k, tongk);

	Tong(A, row, col);
	_getch();

}



// Ham nhap mang 2 chieu bang so ngau nhien
void Nhapmangngaunhien(int A[][COLS], int &row, int &col) //int A[][COLS] : so dong co quyen bo trong, so cot phai ghi
{
	int i, j;
	//int row, col;
	do {
		printf("Nhap so dong va so cot:");
		scanf_s("%d%d", &row, &col);
	} while (row < 1 || row > ROWS || col < 1 || col > COLS);

	// Nhap du lieu mang ngau nhien
	int min = 0, max = 20;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			A[i][j] = (rand() % (max - min + 1)) + min;
		}
	}
}

// Xuat du lieu mang ra man hinh

void Xuat(int A[][COLS], int &row, int &col)
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%5d\t", A[i][j]);
		}
		printf("\n");
	}
}


// Nhap k
int Nhapk(int k, int row)
{
	do
	{
		printf("Nhap k : ");
		scanf_s("%d", &k);
	} while (!((k >= 0) && (k < row)));
	return k;
}


// a. Tinh tong cac phan tu tren dong k
int Tongk(int A[][COLS], int k, int col)
{
	int tongk = 0; int j;
	for (j = 0; j < col; j++)
	{
		tongk += A[k][j];
	}
	return tongk;
}

// b. Tinh tong toan bo mang

void Tong(int A[][COLS], int row, int col)
{
	int tong = 0; int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			tong += A[i][j];
		}
	}
	printf("Tong cac phan tu trong mang = %d\n", tong);
}



// c. Trung binh cong so chinh phuong

// Ham so chinh phuong
bool soCP(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (count == 2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	

}



int TrungbinhcongCP(int A[][COLS], int row, int col)
{
	int tongCP = 0; int i, j;
	int dem = 0;
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col; j++)
		{
			if (soCP(A[i][j]) == 1)
				dem++;
				tongCP += A[i][j];
		}
	}
	if (dem > 0)
	{
		return tongCP / dem;
	}
	else
	{
		return -1;
	}
}

