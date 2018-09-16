#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int trong_luong, tien_loi;

	printf("Trong luong: ");
	scanf_s("%d", &trong_luong);

	if (trong_luong > 0)
	{
		if (trong_luong > 0 && trong_luong <= 20)
		{
			tien_loi = trong_luong * 5000;
		}
		else if (trong_luong > 20 && trong_luong <= 50)
		{
			tien_loi = ((trong_luong * 9000) + 0.02 *(trong_luong * 9000));
		}
		else if (trong_luong > 50)
		{
			tien_loi = ((trong_luong * 10000) + 0.04 *(trong_luong * 10000));
			if (tien_loi > 1000000)
			{
				tien_loi = 1000000;
			}

		}
		printf("Tien loi: %d", tien_loi);
	}
	else
	{
		printf("Du lieu khong hop le");
	}
	
	_getch();

}