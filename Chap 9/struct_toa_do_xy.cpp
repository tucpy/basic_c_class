#include <stdio.h>
#define SIZE 100
#include <stdlib.h>
#include <time.h>
#include <math.h>


// Khai bao cau truc
typedef struct TOADO
{
	int x;
	int y;

}TOADO;


// Khai bao nguyen mau ham
int NhapN();
TOADO NhapNgauNhien();
void NhapMangNgauNhien(TOADO A[], int n);
void Xuat(TOADO a);
void XuatMang(TOADO A[], int n);

void NhapMang(TOADO A[], int n);
void Xuat_new(TOADO A[], int n);
double KhoangCach(TOADO a, TOADO b);
void KhoangCachMang(TOADO A[], int n);
TOADO diemdx(TOADO u);
void cacdiemdx(TOADO A[], int n);
void MangDiemThuocPhanTu1 (TOADO A[], int n);

double KcDiemvaO (TOADO u);
int TimvitriDiemGanONhat (TOADO A[], int n);

// Ham chinh

int main(void)
{
	srand((unsigned int)time(NULL));
	int n;
	TOADO A[SIZE];
	n = NhapN();
	NhapMangNgauNhien(A, n);
	XuatMang(A, n);
	
	//NhapMang(A, n);
	//printf("Cac diem vua nhap trong mang:\n");
	//Xuat_new(A, n);
	// Khoang cach giua 2 diem tren toa do
	KhoangCachMang(A,n);

	// Diem doi xung 
	cacdiemdx(A,n);
	XuatMang(A, n);

	// Cac diem thuoc phan tu 1
	//printf("Cac diem thuoc phan tu 1: \n");
	//MangDiemThuocPhanTu1(A,n);
	//XuatMang(A, n);

	//Tim diem gan truc toa do 0 nhat
	int vt = TimvitriDiemGanONhat (A, n);
	printf("Vi tri diem gan truc toa do nhat trong mang: %d\n", vt);
	return(0);
}

// Ham phu

// Ham nhap cac diem

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


TOADO NhapNgauNhien()
{
	TOADO a;
	int x, y;
	int min = -10, max = 20;
	a.x = (rand() % (max - min + 1)) + min;
	a.y = (rand() % (max - min + 1)) + min;
	return a;
}

void NhapMangNgauNhien(TOADO A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//printf("Toa do thu %d la: ", i);
		A[i] = NhapNgauNhien();
	}

}

void Xuat(TOADO a)
{
	printf("x= %d, y= %d", a.x, a.y); //luc nay quen them a. truoc x, y nen may se ko hieu x, y o dau
}

void XuatMang(TOADO A[], int n)
{
	printf("Cac diem co trong mang:");
	for (int i = 0; i < n; i++)
	{
		Xuat(A[i]);
		printf("\t");
	}
	printf("\n");
}


// Nhap truc tiep

void NhapMang(TOADO A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap toa do x cho diem thu %d la: ", i+1);
		scanf("%d", &A[i].x);
		printf("Nhap toa do y cho diem thu %d la: ", i + 1);
		scanf("%d", &A[i].y);
	}
}

void Xuat_new(TOADO A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Toa do diem thu %d la: ", i + 1);
		printf("x=%d, y=%d\n", A[i].x, A[i].y);
	}
}

// Tim khoang cach giua 2 diem tren truc toa do

double KhoangCach(TOADO a, TOADO b)
{
	return sqrt(pow(a.y - b.y,2) + pow(a.x - b.x,2));
}

// Khoang cach 2 diem trong mang
void KhoangCachMang(TOADO A[], int n)
{
	double kc;
	TOADO first_point = A[0];
	for (int i = 1; i < n; i++) // neu ko gioi han i<1, no se collect gabbage value??
	{
		kc = KhoangCach(first_point, A[i]);
		printf("Khoang cach giua 2 diem lien tiep: %f\n", kc);
	}
}

// Tim diem doi xung qua truc toa do

TOADO diemdx(TOADO u)
{
	TOADO u_dx;
	u_dx.x = -1 * u.x;
	u_dx.y = -1 * u.y;
	return u_dx;
}


void cacdiemdx(TOADO A[], int n)
{
	for(int i = 0; i < n; i++)
	{
		A[i] = diemdx(A[i]);
	}
}

// Diem thuoc phan tu I
int DiemThuocPhanTu1 (TOADO u)
{
	if(u.x > 0 && u.y > 0)
		return 1;
	else return 0;
}


void MangDiemThuocPhanTu1 (TOADO A[], int n)
{
	TOADO o = {0,0};
	for(int i = 0; i < n; i++)
	{
		if ((DiemThuocPhanTu1(A[i]) == 1))
			A[i] = A[i];
		else
		{
			A[i] = o;
		}	
	}
}

double KcDiemvaO (TOADO u)
{
	TOADO o = {0,0};
	double kc = KhoangCach(u ,o);
	return kc;
}

int TimvitriDiemGanONhat (TOADO A[], int n)
{
	int pos = 0;
	int i;
	int min = KcDiemvaO(A[0]); 
	for (i = 1; i < n; i++)
	{
		if (KcDiemvaO(A[i]) < min)
		{
			min = KcDiemvaO(A[i]);
			pos = i;
		}			
	}
	return pos;		
}

