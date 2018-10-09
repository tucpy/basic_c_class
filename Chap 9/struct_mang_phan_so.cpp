#include <stdio.h>
#include <math.h>
#define SIZE 100

#include <stdlib.h>
#include <time.h> 

typedef struct PHANSO
{
	int Tu;
	int Mau;
}PHANSO;


// Khai bao nguyen mau ham
void menu();
int NhapN();

PHANSO Nhap();
void Xuat(PHANSO p);
int USCLN(int a, int b);
void RutgonPS(PHANSO &p);
void NhapMang(PHANSO A[], int n);
void XuatMang(PHANSO A[], int n);
PHANSO NhapNgauNhien();
void NhapMangNgauNhien(PHANSO A[], int n);
PHANSO cong2PS(PHANSO p1, PHANSO p2);
PHANSO TongMangPS(PHANSO A[], int n);

int SSanh(PHANSO a, PHANSO b);
PHANSO TimPSMax(PHANSO A[], int n);
PHANSO TimPSMin(PHANSO A[], int n);

// Ham chinh
int main(void)
{
	menu();
	return(0);
}



// Cac ham phu

// Tao menu

void menu()
{
	int chon, n; PHANSO A[SIZE];
	do {
		srand((unsigned int)time(NULL)); // lenh nay luc nao cung de trong ham main de seed gia tri theo thoi gian cho rand()
		printf("Bai tap ve mang cau truc\n");
		printf("1. Nhap so nguyen duong n\n");
		printf("2. Nhap mang phan so\n");
		printf("3. Tao mang phan so ngau nhien\n");
		printf("4. Xuat mang\n");
		printf("5. Tinh tong cac phan so trong mang\n");
		printf("6. Tim phan so lon nhat\n");
		printf("7. Tim phan so nho nhat\n");
		printf("0. Ket thuc\n");
		printf("Ban chon 0 - 7\n");
		scanf("%d", &chon);

		switch (chon)
		{
		case 1: n = NhapN(); break;
		case 2: NhapMang(A, n); break;
		case 3: NhapMangNgauNhien(A, n); break;
		case 4: XuatMang(A, n); break;
		case 5: 
			{
				PHANSO q = TongMangPS(A, n); 
				printf("Tong cac PS la: \n"); 
				Xuat(q); 
				break;
			}
		case 6:
			{
				PHANSO pmax = TimPSMax(A,n); 
				printf("PS lon nhat la: \n"); 
				Xuat(pmax); 
				break;
			}	
		case 7: 
			PHANSO pmin = TimPSMin(A, n); 
			printf("PS nho nhat la: \n"); 
			Xuat(pmin); break;

		}//end switch
	} while (chon != 0);
}


// Nhap n
int NhapN()
{	
	int n;
	do
	{
		printf("Nhap so nguyen duong n : ");
		scanf("%d", &n);
	} while (!((n >= 0) && (n < SIZE)));
	return n;
}

// Nhap 1 phan so
PHANSO Nhap()
{
	PHANSO p;
	printf("Nhap tu: "); scanf("%d", &p.Tu);
	do
	{
		printf("Nhap mau: "); scanf("%d", &p.Mau);
	} while (!(p.Mau != 0));

	if ((p.Tu < 0) && (p.Mau < 0))
	{
		p.Tu = -1 * p.Tu;
		p.Mau = -1 * p.Mau;
	}

	if ((p.Mau < 0) && (p.Tu > 0))
	{
		p.Tu = -1 * p.Tu;
		p.Mau = -1 * p.Mau;
	}
	// Don gian phan so truoc khi tra ve
	RutgonPS(p);
	return p;
}

void Xuat(PHANSO p)
{
	printf("%d/%d", p.Tu, p.Mau);
}

int USCLN(int a, int b)
{
	while (a != b) // khi a == b nghia la a la uoc so chung lon nhat
	{
		if (a > b) // lay so lon hon tru so nho hon den khi nao 2 ben bang nhau
			a -= b;
		else
			b -= a;
	}
	return a;
}


void RutgonPS(PHANSO &p)
{
	int us; // uoc so
	us = USCLN(abs(p.Tu), abs(p.Mau)); // phai dung abs vi neu tu hoac mau am thi ko tim duoc uoc so chung lon nhat
	p.Tu = p.Tu / us;
	p.Mau = p.Mau / us;
}

// Nhap mang phan so
void NhapMang(PHANSO A[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Phan so thu %d la: ", i);
		A[i] = Nhap();
	}

}

// Xuat mang phan so
void XuatMang(PHANSO A[], int n)
{
	printf("Cac phan so co trong mang:");
	for(int i = 0; i < n; i++)
	{	
		Xuat(A[i]);
		printf(" ,");
	}
	printf("\n");
}

// Tao mang phan so ngau nhien

PHANSO NhapNgauNhien()
{
	PHANSO p;
	int min = 1, max = 20;
	p.Tu = (rand() % (max - min + 1)) + min;
	p.Mau = (rand() % (max - min + 1)) + min;
	return p;
}


void NhapMangNgauNhien(PHANSO A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Phan so thu %d la: ", i);
		A[i] = NhapNgauNhien();
	}
}



// Tong cac phan so trong mang
PHANSO TongMangPS(PHANSO A[], int n)
{
	PHANSO Tong;
	Tong = A[0];
	for (int i = 1; i < n; i++) // vi Tong khai bao ban dau da gom i = 0
	{
		Tong = cong2PS(Tong, A[i]);	
	}
	return Tong;
}



// Cong 2 phan so

PHANSO cong2PS(PHANSO p1, PHANSO p2)
{
	PHANSO p;
	p.Tu = (p1.Tu * p2.Mau) + (p2.Tu * p1.Mau);
	p.Mau = p1.Mau * p2.Mau;
	RutgonPS(p);
	return p;
}



// Tim phan so lon nhat -> not ok

/* -> wrong
PHANSO TimPSMax(PHANSO A[], int n)
{
	PHANSO pmax = A[0];
	for (int i = 1; i < n; i++)
	{
		A[0].Tu = A[0].Tu * A[i].Mau;
		A[i].Tu = A[i].Tu * A[0].Mau;
		if (A[i].Tu > A[0].Tu)
			pmax = A[i];
	}
	return pmax; // Tra ve PHAN SO lon nhat
}
*/


PHANSO TimPSMax(PHANSO A[], int n)
{
	PHANSO max = A[0];
	for (int i = 1; i < n; i++)
	{
		if (SSanh(max, A[i]) == 1)
			max = A[i];
	}
	return max;
}

int SSanh(PHANSO a, PHANSO b)
{
	if (b.Tu * a.Mau > a.Tu * b.Mau)
		return 1; //so max
	else if (b.Tu * a.Mau < a.Tu * b.Mau)
		return -1; // so min
	return 0;
}

// Tim phan so nho nhat
PHANSO TimPSMin(PHANSO A[], int n)
{
	PHANSO min = A[0];
	for (int i = 1; i < n; i++)
	{
		if (SSanh(min, A[i]) == -1)
			min = A[i];
	}
	return min;
}
