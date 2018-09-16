#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int d, m, y, A, n;
	printf("day, month, year: ");
	scanf_s("%d%d%d", &d, &m, &y);
	if (m == 1)
	{
		m == 13;
		y--;
	}
	if (m == 2)
	{
		m == 14;
		y--;
	}

	A = d + 2*m + (3*(m+1)/5) + y + (y/4) -(y/100) + (y/400) +2 ;
	switch (n = (A % 7))
	{
	case 0:
		printf("Day la ngay thu bay");
		break;
	case 1:
		printf("Day la ngay chu nhat");
		break;
	case 2:
		printf("Day la ngay thu hai");
		break;
	case 3:
		printf("Day la ngay thu ba");
		break;
	case 4:
		printf("Day la ngay thu tu");
		break;
	case 5:
		printf("Day la ngay thu nam");
		break;
	case 6:
		printf("Day la ngay thu sau");
		break;
	}
	
	_getch();
}
