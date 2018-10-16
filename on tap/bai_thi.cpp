
#include <stdio.h>
#define SIZE 100



// (1) Khai bao cau truc
typedef struct HOCVIEN
{
	char maso[5];
	char hoten[20];
	float toan, ly, hoa, dtb;

}HOCVIEN;


// Khai bao nguyen mau ham
int NhapN();
void NhapSV(HOCVIEN *hv);
void NhapMang(HOCVIEN A[], int n);
void Xuat(HOCVIEN hv);
void XuatMang(HOCVIEN A[], int n);
void Toanduoi5(HOCVIEN A[], int n);
int LoaiGioi(HOCVIEN A[], int n);
int SVdtbCaoNhat(HOCVIEN A[], int n);
void DSHV(HOCVIEN A[], int n);


// Ham chinh
int main(void)
{
	int n = NhapN();
	//HOCVIEN sv;
	//NhapSV(&sv);

	HOCVIEN A[SIZE];
	NhapMang(A, n);
	printf("\nDanh sach hoc vien vua nhap\n");
	XuatMang(A, n);

	printf("\nDanh sach hoc vien co diem toan duoi 5\n");
	Toanduoi5(A, n);

	int sl = LoaiGioi(A, n);
	printf("\nSo luong hoc vien co diem trung binh >=8 la: %d\n", sl);

	int vt = SVdtbCaoNhat(A, n);
	printf("\nHo ten hoc vien co diem trung binh lon nhat: %s", A[vt].hoten);

	printf("\nDanh sach hoc vien co diem trung binh lon nhat\n");
	DSHV(A, n);

	return(0);
}



// Ham phu

// (2) Nhap n

int NhapN()
{
	int n;
	do
	{
		printf("Nhap so nguyen duong n : ");
		scanf("%d", &n);
	} while (!((n > 0) && (n < SIZE)));
	return n;
}

// (3) Nhap thong tin 1 HV

void NhapSV(HOCVIEN *hv)
{
	float tam1, tam2, tam3;
	while (getchar() != '\n');
	fflush(stdin);
	printf("Ma so sinh vien: "); fflush(stdin); fgets(hv->maso, sizeof(hv->maso), stdin);
	printf("Ho ten: "); fflush(stdin); fgets(hv->hoten, sizeof(hv->hoten), stdin);
	printf("Diem toan: "); scanf("%f", &tam1); hv->toan = tam1;
	printf("Diem ly: "); scanf("%f", &tam2); hv->ly = tam2;
	printf("Diem hoa: "); scanf("%f", &tam3); hv->hoa = tam3;
	hv->dtb = ((tam1 + +tam2 + tam3) / 3);
	//printf("Diem trung binh: %f", hv->dtb);
}

// (4) Ham nhap danh sach hv

void NhapMang(HOCVIEN A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Hoc vien thu %d\n", i + 1);
		NhapSV(&A[i]);
	}
}

// (5) Ham xuat du lieu 1 hv

void Xuat(HOCVIEN hv)
{
	printf("Ma so: %s", hv.maso);
	printf("Ho ten: %s", hv.hoten);
	printf("Toan: %.2f\tLy: %.2f\tHoa: %.2f\tDTB: %.2f\n", hv.toan, hv.ly, hv.hoa, hv.dtb);
	//printf("DTB: %.2f\n", hv.dtb);
	printf("====================\n");
}


// (6) Ham xuat danh sach hoc vien co trong mang

void XuatMang(HOCVIEN A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Hoc vien thu %d\n", i + 1);
		Xuat(A[i]);
	}
}


// (7) Liet ke hv co diem toan duoi 5

void Toanduoi5(HOCVIEN A[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i].toan < 5.0)
		{
			Xuat(A[i]);
			count++;
		}
	}
	if (count == 0)
	{
		printf("Khong co hoc vien nao co diem toan duoi 5\n");
	}

}


// (8) Dem so luong hv co dtb >=8

int LoaiGioi(HOCVIEN A[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i].dtb >= 8.0)
		{
			dem++;
		}
		else
		{
			dem += 0;
		}
	}
	return dem;
}


// (9) Xuat ho ten hv co dtb lon nhat
int SVdtbCaoNhat(HOCVIEN A[], int n)
{
	float dtbmax = A[0].dtb;
	int vt = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i].dtb > dtbmax)
		{
			dtbmax = A[i].dtb;
			vt = i;
		}
	}
	return vt;
}


void DSHV(HOCVIEN A[], int n)
{
	float dtbmax = A[0].dtb;
	for (int i = 1; i < n; i++)
	{
		if (A[i].dtb > dtbmax)
		{
			dtbmax = A[i].dtb;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i].dtb == dtbmax)
		{
			printf("Cac SV co DTB lon nhat: %s", A[i].hoten);
		}
	}
}
