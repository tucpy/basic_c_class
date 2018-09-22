#include <stdio.h>
#include<conio.h>

int main(void)
{
	int n, i , dao, du, m;
	do
	{
		printf("Nhap n: ");
		scanf_s("%d", &n);
	} while (n < 0);

	//printf("n: %d", n);

	for (int i = 1; i <= n; i++)
	{
		// kiem tra so dao
		dao = 0;
		m = i;
		while (m > 0)
		{
			du = m % 10;
			dao = dao * 10 + du;
			m = m/10;
		}
	
		if (dao == i)
		{
			printf("%d \t", i);
		}
// sai
	}
	_getch();

}