#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	int n, hang_nghin, hang_tram, hang_chuc, hang_dv, so_nut;
	// nhap so xe, tinh so nut (hang don vi cua tong la so nut)
	printf("Nhap bien so xe co 4 chu so: ");
	scanf("%d", &n);
	hang_nghin = n / 1000;
	hang_tram = (n % 1000) / 100;
	hang_chuc = ((n % 1000) % 100)/10;
	hang_dv = ((n % 1000) % 100)%10;
	so_nut = (hang_nghin + hang_tram + hang_chuc + hang_dv)%10;
	printf("hang nghin: %d\n", hang_nghin);
	printf("hang tram: %d\n", hang_tram);
	printf("hang chuc: %d\n", hang_chuc);
	printf("hang dv: %d\n", hang_dv);
	printf("So nut %d", so_nut);
	_getch();
}
