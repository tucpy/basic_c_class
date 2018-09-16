#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int n, hang_tram, hang_chuc, hang_dv, max, vt;
	printf("Nhap so nguyen duong co 3 chu so: ");
	scanf_s("%d", &n);
	hang_tram = n / 100;
	hang_chuc = (n % 100) / 10;
	hang_dv = (n % 100) % 10;

	max = hang_tram;
	//gan vi tri (vt) cho so hang chuc, tram, dv
	vt = 1;
	//tim so lon nhat
	if (hang_chuc > max)
	{
		max = hang_chuc;
		vt = 2;
	}
	if (hang_dv > max)
	{
		max = hang_dv;
		vt = 3;
	}

	if (vt == 1)
	{
		printf("So lon nhat o hang tram");
	}
	else if (vt == 2)
	{
		printf("So lon nhat o hang chuc");
	}
	else
	{
		printf("So lon nhat o hang don vi");
	}

	_getch();
}