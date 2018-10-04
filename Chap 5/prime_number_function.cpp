#include <stdio.h>
#include <conio.h>

//void NhapN(int &n);
void InSNTNhoHonN(int n);


/*
// Cach 1:

void main()
{
	int n = 0; // chu y: phai khoi tao n ban dau
	NhapN(n);
	InSNTNhoHonN(n);

	_getch();
}


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
*/

// Cach 2: 

/*
int NhapN2(int n);
void InSNTNhoHonN(int n);

void main()
{
	int n=0; //pahi khoi tao n = gia tri bat ki vi VS 2015 bao loi
	n = NhapN2(n);
	InSNTNhoHonN(n);

	_getch();
}

int NhapN2(int n)
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
	return n;
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
*/

// Xac dinh so nguyen to hay ko?
/*
bool primenumber(int n);
bool khoang_5_25(int n);
int NhapN2(int n);

void main()
{
	int n=0;
	n = NhapN2(n);
	printf("%c", khoang_5_25(n));
	if (!(primenumber(n)))
		printf("Khong la so nguyen to\n");
	else
		printf("La so nguyen to\n");

	if (khoang_5_25(n))
		printf("Nam trong khoang tu 5-25\n");
	else
		printf("Khong nam trong khoang tu 5-25\n");

	_getch();
}


bool primenumber(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	
	if (dem == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool khoang_5_25(int n)
{
	if ((n >= 5) && (n <= 25))
	{
		return true;
	}
	else
	{
		return false;
	}
		
}


int NhapN2(int n)
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

	while (!((n >= 10) && (n <= 50)));
	//while (!((n>=5) && (n<=25) && (primenumber(n)==1));
	return n;
}
*/

// Tim SNT lon nhat nho hon n

int NhapN2(int n);
void InSNTlonnhatNhoHonN(int n);

void main()
{
	int n = 0; //pahi khoi tao n = gia tri bat ki vi VS 2015 bao loi
	n = NhapN2(n);
	InSNTlonnhatNhoHonN(n);

	_getch();
}

int NhapN2(int n)
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
	return n;
}


void InSNTlonnhatNhoHonN(int n)
{
	int i, j;
	for (i = n; i > 2; i--)
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
			break;
		}

	}
}
