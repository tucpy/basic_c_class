/*
Tinh chu vi, dien tich hinh chu nhat
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(void)
{
	int dai, rong, CV, DT;
	printf("Nhap chieu dai va chieu rong: ");
	scanf_s("%d%d", &dai,&rong);
	CV = (dai + rong)* 2 ;
	DT = dai * rong;
	printf("Chu vi: %d\n", CV);
	printf("Dien tich: %d\n", DT);
	_getch();
}
