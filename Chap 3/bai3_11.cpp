#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	float a, b, c, p, CV, DT;
	printf("Nhap 3 so thuc: ");
	scanf_s("%f%f%f", &a, &b, &c);
	if ((a + b) > c && (a+c)>b && (b+c)>a)
	{
		CV = a + b + c;
		p = CV / 2;
		DT = sqrt(p*(p - a)*(p - b)*(p - c));
		printf("CV = %f\n", CV);
		printf("DT = %f\n", DT);
	}
	else
	{
		printf("Day khong phai tam giac");
	}
	_getch();
}