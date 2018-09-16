#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	float a, b, c, x, x1, x2, delta;
	printf("Nhap 3 so thuc: ");
	scanf_s("%f%f%f", &a, &b, &c);

	//Xet a
	if (a == 0)
	{
		//phuong trinh bac nhat, xet b
		if (b == 0)
		{
			//xet c
			if (c == 0)
			{
				printf("Phuong trinh co vo so nghiem");
			}
			else
			{
				printf("Phuong trinh vo nghiem");
			}
		}
		else
		{
			x = -c / b;
			printf("Phuong trinh co nghiem la: %f", x);
		}
	}

	else
	{
		// a!=0, tinh delta
		delta = pow(b, 2) - 4 * a*c;
		// xet delta
		if (delta > 0)
		{
			x1 = ((-b + sqrt(delta))/(2*a));
			x2 = ((-b - sqrt(delta))/(2*a));
			printf("Phuong trinh co 2 nghiem: x1=%f, x2=%f", x1, x2);
		}
		else if (delta == 0)
		{
			x = -b/(2*a);
			printf("Phuong trinh co nghiem kep: x= %f", x);
		}
		else
		{
			printf("Phuong trinh vo nghiem");
		}

	}


	_getch();
}
