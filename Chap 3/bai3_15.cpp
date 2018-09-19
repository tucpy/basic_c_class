#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int h, m, s, hnew, mnew, snew;
	printf("hour, minute, second: ");
	scanf_s("%d%d%d", &h, &m, &s);

	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		//check second
		snew = s - 1;
		if (snew <= 0)
		{
			snew = 59;
			mnew = m - 1;
			//check minute
			if (mnew <= 0)
			{
				mnew = 59;
				hnew = h - 1;
				// check hour
				if (hnew <= 0)
				{
					printf("%d:%d:%d", hnew, mnew, snew);
				}
				else
				{
					printf("%d:%d:%d", hnew, mnew, snew);
				}
			}
			else
			{
				printf("%d:%d:%d", h, mnew, snew);
			}
		}
		else
		{
			printf("%d:%d:%d", h, m, snew);
		}

	}

	else
	{
		printf("Gio phut giay khong hop le");
	}

	_getch();
}
