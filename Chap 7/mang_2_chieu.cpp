/*
Khoi tao mang 2 chieu

*/

#include <stdio.h>
#include <conio.h>

#define ROWS 4
#define COLS 6

void main()
{
	float a[ROWS][COLS]; // Khai bao mang 2 chieu gom ROW dong, COL cot
	int sd, sc;
	int i, j;
	float tam;

	do {
		printf("Nhap so dong va so cot:");
		scanf_s("%d%d", &sd, &sc);
	} while (sd < 1 || sd > ROWS || sc < 1 || sc > COLS);

	// Nhap du lieu mang tu ban phim

	for (i = 0; i < sd; i++) {
		for (j = 0; j < sc; j++) {
			printf("pt thu [%d][%d]:", i,j);
			scanf_s("%f", &tam);
			a[i][j] = tam;
		}
	}

	// Xuat du lieu mang ra man hinh

	for (i = 0; i < sd; i++) {
		for (j = 0; j < sc; j++) {
			printf("%0.2f\t", a[i][j]);
		}
		printf("\n");
	}

	_getch();

}