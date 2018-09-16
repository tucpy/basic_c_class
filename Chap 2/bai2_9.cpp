#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
	float r, TT, DT
	printf("Nhap ban kinh hinh cau: ");
	scanf_s("%f", &r);
	TT = (4 * PI* pow(r,3)) / 3;
	DT = 4 * PI* pow(r,2);
	printf("The tich la: %.2f\n", TT);
	printf("Dien tich la: %.2f\n", DT);
	_getch();
}