#include <stdio.h>
#include <conio.h>

void NhapN(int &n);
int tongA(int n);
float tongB(int n);
float tichC(int n);
float tichD(int n);
int tangN_A(int n);
void tangN_B(int &n);


void main()
{
	int S1;
	float S2, S3, S4;
	int n = 0;
	NhapN(n);
	S1 = tongA(n);
	printf("Kq = %d\n", S1);
	S2 = tongB(n);
	printf("Kq = %.2f\n", S2);
	S3 = tichC(n);
	printf("Kq = %.2f\n", S3);
	S4 = tichD(n);
	printf("Kq = %.2f\n", S4);
	//Cach 1:
	n = tangN_A(n);
	printf("n moi A: %d\n", n);
	//Cach2:
	tangN_B(n);
	printf("n moi B: %d\n", n);

	_getch();
}

void NhapN(int &n)
{
	do
	{
		printf("Nhap n (>0): ");
		scanf_s("%d", &n);
		if (!(n >0))
		{
			printf("Chi nhap so nguyen duong\n");
		}
	} while (!(n >= 0));
}

// a. S = 1 + 2 + 3 + ... + n

int tongA(int n)
{
	int S = 0; 
	for (int i = 1; i <= n; i++)
	{
		S += i;
	}
	return S;
}

// b. S = 1/2 + 2/3 + 3/4 +... + n/(n+1)

float tongB(int n)
{
	float S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += (float)i/((float)(i + 1));
		//S2 += ((float)(i / (i + 1))); tam bay, ra S=0
	}
	return S;
}


// c. P = 1 * 1/2 * 1/3 * ... * 1/n


float tichC(int n)
{
	float S = 1;
	for (int i = 1; i <= n; i++)
	{
		S *= float(1) / float(i);
	}
	return S;
}

// d. P = 1/1*2 * 1*2/1*2*3 + 1*2*3/1*2*3*4 + ....n!/(n+1)!

float tichD(int n)
{
	int a = 1;
	int b = 1;
	float S = 1;
	for (int i = 1; i <= n; i++)
	{
		a = a * i;
		b = b * (i + 1);
		S *= (float)a / (float)b;
	}
	return S;
}

// e. Nhap n, viet ham tra n = n+1
// Cach 1:

int tangN_A(int n)
{
	return n + 1;
}

// Cach 2:
void tangN_B(int &n)
{
	n = n + 1;
}