#include <stdio.h>
#include <conio.h>

#include <math.h>


////Nhap diem chuan, diem 3 mon thi, khu vuc du thi. Xet dau rot


int main(void)
{
	int diem_chuan, doi_tuong, diem_1, diem_2, diem_3, tong_diem;
	int diem_kv, diem_dt;
	char khu_vuc;

	printf("Nhap diem chuan: ");
	scanf_s("%d", &diem_chuan);

	printf("Nhap 3 diem thi: ");
	scanf_s("%d%d%d", &diem_1, &diem_2, &diem_3);

	//fflush(stdin);  xoa bo dem truoc khi nhap ki tu, neu khong no se lay 'n' tu lan nhap truoc do, chi dung cho VStudio 2013 
	while (getchar() != '\n');

	printf("Nhap khu vuc: ");
	khu_vuc = getchar();
	// scanf_s("%c", &khu_vuc); (chi dung cho Visual C or IDE khac

	printf("Nhap doi tuong: ");
	scanf_s("%d", &doi_tuong);

	switch (khu_vuc)
	{
	case 'a':
	case 'A':
		diem_kv= 2;
		break;
	case 'b':
	case 'B':
		diem_kv = 1;
		break;
	case 'c':
	case 'C':
		diem_kv = 0.5;
		break;
	default: diem_kv = 0;
	}


	switch (doi_tuong)
	{
	case 1:
		diem_dt = 2.5;
		break;
	case 2:
		diem_dt = 1.5;
		break;
	case 3:
		diem_dt = 1;
		break;
	default: diem_dt = 0;
	}


	tong_diem = diem_1 + diem_2 + diem_3 + diem_dt + diem_kv;

	if (tong_diem >= diem_chuan && diem_1 > 0 && diem_2 > 0 && diem_3 > 0)
	{
		printf("Dau");
	}
	else
	{
		printf("Rot");
	}

	_getch();
}