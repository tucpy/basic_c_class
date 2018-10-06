#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <time.h> 


#define CANH 20 // Dong va cot deu la 20
int Nhapn(int n);
void TaoMT(int A[][CANH], int n);
void XuatMT(int A[][CANH], int n);
int Tinh(int A[][CANH], int n);
int Tamgiactren(int A[][CANH], int n);
int Tamgiacduoi(int A[][CANH], int n);
int TamgiacA(int A[][CANH], int n);
int TamgiacB(int A[][CANH], int n);
bool sole(int n);
void sole(int A[][CANH], int n);
int Nhapxy(int x, int &y);
void sotrongkhoangxy(int A[][CANH], int n, int x, int y);
void TongCot(int A[][CANH], int n);

void main()
{
	int A[CANH][CANH];
	// Nhap n
	int n=0;
	int tinh;
	n = Nhapn(n);
	srand((unsigned int)time(NULL));

	TaoMT(A, n);
	XuatMT(A, n);

	tinh = Tinh(A, n);
	printf("Tong %d\n", tinh);

	int tamgiactren;
	tamgiactren = Tamgiactren(A, n);
	printf("Tong tam giac tren: %d\n", tamgiactren);

	int tamgiacduoi;
	tamgiacduoi = Tamgiacduoi(A, n);
	printf("Tong tam giac duoi: %d\n", tamgiacduoi);

	int tamgiacA;
	tamgiacA = TamgiacA(A, n);
	printf("Tong tam giac A: %d\n", tamgiacA);

	int tamgiacB;
	tamgiacB = TamgiacB(A, n);
	printf("Tong tam giac B: %d\n", tamgiacB);

	sole(A, n);

	int x = 0; int y = 0;
	x = Nhapxy(x,y);
	sotrongkhoangxy(A, n, x, y);

	XuatMT(A, n);
	TongCot(A, n);

	_getch();
}


int Nhapn(int n)
{
	do
	{
		printf("Nhap canh n : ");
		scanf_s("%d", &n);
	} while (!((n >= 0) && (n < 20)));
	return n;
}

void TaoMT(int A[][CANH], int n)
{
	int min = 1, max = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

void XuatMT(int A[][CANH], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}
}

int Tinh(int A[][CANH], int n)
{
	int tinh = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if ((i + j) % 2 == 0)
				tinh += A[i][j];
	}
	return tinh;

}


// Tinh tong tam giac tren

int Tamgiactren(int A[][CANH], int n)
{
	int tinh = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			tinh += A[i][j];
	}
	return tinh;
}


// Tinh tong tam giac duoi

int Tamgiacduoi(int A[][CANH], int n)
{
	int tinh = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			tinh += A[i][j];
	}
	return tinh;
}

// Tinh tong tam giac A

int TamgiacA(int A[][CANH], int n)
{
	int tinh = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <(n-i); j++)
			tinh += A[i][j];
	}
	return tinh;
}

// Tinh tong tam giac B -> not ok, check lai dieu kien cua j (thieu cac phan tu nam o duong cheo)

int TamgiacB(int A[][CANH], int n)
{
	int tinh = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j =(n-i); j<n; j++)
			tinh += A[i][j];
	}
	return tinh;
}


bool sole(int n)
{
	if (n % 2 == 1)
		return true;
	else
		return false;
}

void sole(int A[][CANH], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (sole(A[i][j]) == true)
			{
				printf("%5d\t", A[i][j]);
			}
		}	
		printf("\n");
	}
}


// Nhap x, y. Dem so luong gia tri nam trong khoang x va y

int Nhapxy(int x, int &y)
{
	int max = 20;
	do
	{
		
		printf("Nhap x, y: ");
		scanf_s("%d%d", &x, &y);
	} while (!((x > 0) && (x < max) && (y>0) && (y<max)));
	return x;
}

void sotrongkhoangxy(int A[][CANH], int n, int x, int y)
{
	int dem = 0;
	printf("\nCac so trong khoang u %d den %d: ", x,y);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (((A[i][j]) >= x) && ((A[i][j]) <= y))
			{
				printf("%5d", A[i][j]);
				dem++;
			}
		}
	}
	printf("\nSL phan tu: %5d\t", dem);
	printf("\n\n");
}


// Tinh tong cac cot trong ma tran


void TongCot(int A[][CANH], int n)
{
	
	for (int c= 0; c< n; c++)
	{
		int tong = 0;
		for (int d = 0; d < n; d++)
			tong += A[d][c];
		printf("%5d", tong);
	}
	
}