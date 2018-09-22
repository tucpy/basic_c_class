/*
Giai phuong trinh 
x + y = 36
2x + 4y = 100
Tim so con ga (x), so con cho (y)

Vua ga vua cho
Co 36 con
Bo lai cho tron
Du mot tram chan

*/



#include <stdio.h>
#include <conio.h>


int main(void)
{


	for (int i = 1; i <= 36; i++)
	{
		for (int j = 1; j <= (36 - i); j++)
		{
			if (2 * i + 4 * j == 100 && (i + j == 36))
				printf("ga: %d; cho: %d\n", i, j);
		}
	}

	_getch()

}