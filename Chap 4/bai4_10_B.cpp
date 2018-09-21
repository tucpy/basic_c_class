/*

Nhap n, tinh gia tri ve trai va ve phai xem co bang nhau khong?
(A) 1*2*3 + 2*3*4 + .... + n(n+1)(n+2) = (n(n+1)(n+2)(n+3))/4
(B) 1*(1!) +2*(2!) + .... + n(n!) = (n+1)! - 1

*/

#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int n, gt, vt, vp;
	printf("n: ");
	scanf_s("%d", &n);

// tinh ve trai
	vt = 0;
	for (int i = 1; i <= n; i++)
	{

		gt = 1;

		for (int j = 1; j <= i; j++)
		{
			gt = gt * j;
		}

		vt = vt + i * gt;
	}
// tinh ve phai
	vp = 1;
	for (int i = 1; i <= (n + 1); i++)
	{
		vp = vp * i;
	}

	vp = vp - 1;

	printf("GT: %d\n", gt);
	printf("VT: %d\n", vt);
	printf("VP: %d\n", vp);

	_getch();

}
