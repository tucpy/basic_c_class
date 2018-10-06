/*
Khoi tao mang 2 chieu ngau nhien bang function

*/

#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <time.h> 
#define SIZE 100 // tong so phan tu toi da trong mang


#define ROWS 20
#define COLS 25

void Nhap(int A[][COLS], int &row, int &col);
void Xuat(int A[][COLS], int &row, int &col);
void Nhapmangngaunhien(int A[][COLS], int &row, int &col);

void main()
{
	int A[ROWS][COLS];
	int row, col;
	Nhap(A, row, col);
	Xuat(A, row, col);
	srand((unsigned int)time(NULL));
	Nhapmangngaunhien(A, row, col);
	Xuat(A, row, col);

	_getch();

}


void Nhap(int A[][COLS], int &row, int &col) //int A[][COLS] : so dong co quyen bo trong, so cot phai ghi
{
	int i, j;
	//int row, col;
	do {
		printf("Nhap so dong va so cot:");
		scanf_s("%d%d", &row, &col);
	} while (row < 1 || row > ROWS || col < 1 || col > COLS);

	// Nhap du lieu mang tu ban phim

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("Nhap so cho a[%d][%d]:", i, j);
			scanf_s("%d", &A[i][j]);
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
	int min = 0, max = 100;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			A[i][j] = (rand() % (max - min + 1)) + min;
		}
	}
}


