#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int d, m, y, ntd, dnew,mnew,ynew;
	printf("day, month, year: ");
	scanf_s("%d%d%d", &d, &m, &y);
	
	//tinh ngay toi da cua moi thang, ngay toi da tuy vao thang va nam nhuan
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: ntd = 31;
			break;
	case 4:
	case 6:
	case 9:
	case 11: ntd = 30;
			break;
	case 2:
		scanf_s("%d", &y);
		switch (y % 4)
		{
		case 0:	ntd = 29;
			break;
		default: ntd = 28;
		}
		break;

	default: ntd = 0;
	}



	if ((d > 0 && d < ntd) && (m > 0 && m <= 12) && (y > 0))
	{
		printf("Ngay thang nam hop le");

		// Change day, month, year
		dnew = d - 1;
		if (dnew == 0)
			//check month
		{
			mnew = m - 1; // mnew--;
			if (mnew == 0)
			{
				//check year
				ynew = y - 1; // ynew--;
				mnew = 12;
				switch (mnew)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: ntd = 31;
					break;
				case 4:
				case 6:
				case 9:
				case 11: ntd = 30;
					break;
				case 2:
					scanf_s("%d", &y);
					switch (y % 4)
					{
					case 0:	ntd = 29;
						break;
					default: ntd = 28;
					}
					break;

				default: ntd = 0;
				}

				printf("%d-%d-%d", ntd, mnew, ynew);
			}
			else
			{
				switch (mnew)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: ntd = 31;
					break;
				case 4:
				case 6:
				case 9:
				case 11: ntd = 30;
					break;
				case 2:
					scanf_s("%d", &y);
					switch (y % 4)
					{
					case 0:	ntd = 29;
						break;
					default: ntd = 28;
					}
					break;

				default: ntd = 0;
				}
				printf("%d-%d-%d", ntd, mnew, y);
			}
		}

		else
		{
			printf("%d-%d-%d", dnew, m, y);
		}

	}

	else
	{
		printf("Ngay thang nam khong hop le");
	}





	

	_getch();
}

