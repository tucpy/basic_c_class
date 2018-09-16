#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	int n, hang_tram, hang_chuc, hang_dv, so_dao;
	printf("Nhap so nguyen duong co 3 chu so: ");
	scanf_s("%d", &n);
	hang_tram = n/100;
	hang_chuc = (n % 100) / 10;
	hang_dv = (n % 100) % 10;
	so_dao = hang_dv * 100 + hang_chuc *10 + hang_tram;
	printf("Hang tram %d\n", hang_tram);
	printf("Hang chuc %d\n", hang_chuc);
	printf("Hang don vi %d\n", hang_dv);
	printf("So dao %d", so_dao);
	_getch();
}
