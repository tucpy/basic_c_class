#include <stdio.h>
#include <conio.h>

void NhapN(int &n);
void InSNTNhoHonN(int n);


void main()
{
	int n=0; // chu y: phai khoi tao n ban dau
	NhapN(n);
	InSNTNhoHonN(n);

	_getch();
}

// Cach 1:
void NhapN(int &n) // chu y: &n la tham tro/ tham bien, dua n la ban chinh vao ham NhapN
				  //co dau & thi no moi tra n lai sau khi xu ly qua ham
				// neu k thi no chi nhan ban copy cua n, sau xu ly khong tra n lai, n van = 0
{
	do
	{
		printf("Nhap n (10-50): ");
		scanf_s("%d", &n);
		if (!((n >= 10) && (n <= 50)))
		{
			printf("Chi nhap so tu 10 den 50\n");
		}
	}
	//while (n < 10 || n > 50);
	while (!((n >= 10) && (n <= 50)));
}

void InSNTNhoHonN(int n)
{
	int i, j;
	for (i = 2; i < n; i++)
	{
		int count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 2)
		{
			printf("%d \t", i);
		}
	}
}

// Cach 2: 


void main()
{
	n = NhapN2();
	InSNTNhoHonN(n);

	_getch();
}

void NhapN2(int n)
{
	do
	{
		printf("Nhap n (10-50): ");
		scanf_s("%d", &n);
		if (!((n >= 10) && (n <= 50)))
		{
			printf("Chi nhap so tu 10 den 50\n");
		}
	}
	//while (n < 10 || n > 50);
	while (!((n >= 10) && (n <= 50)));
}


