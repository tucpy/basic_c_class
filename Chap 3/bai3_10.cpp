#include<stdio.h>
#include<conio.h>

int main(void)
{
	float a, b, c, d, m, n, DX, DY, D, x, y;
	printf("Nhap vao 6 so thuc: ");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &m, &n);

	printf("He phuong trinh: %.0fx + %.0fy = %.0f\n", a, b, m);
	printf("He phuong trinh: %.0fx + %.0fy = %.0f\n", c, d, n);

	DX = (m*d) - (n*b);
	DY = (a*n) - (c*m);
	D = (a*d) - (c*b);

	if (D != 0)
	{
		x = DX / D;
		y = DY / D;
		printf("Nghiem x = %.2f\n Nghiem y = %.2f\n", x, y);
	}
	else
	{
		printf("Phuong trinh vo nghiem");
	}
	_getch();
}
