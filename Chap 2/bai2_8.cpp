#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	float a, b, c, p, CV, DT;
	printf ("Nhap 3 canh: ");
	scanf_s ("%s\n", );("%f%f%f", &a, &b, &c);
	CV = a + b + c;
	p = CV / 2;
	DT = sqrt(p*(p - a)*(p - b)*(p - c));
	printf ("CV = %f\n", CV);
	printf ("DT = %f\n", DT);
}
