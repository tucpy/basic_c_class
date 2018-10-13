#include <stdio.h>


void HoanVi1(int &a, int &b)
{
	int tam = a;
		  a = b;
		b = tam;
}

                                  
void HoanVi2(int *a, int *b) //con tro
{
	int tam = *a;
	*a = *b;
	*b = tam;
}


int main (void)
{
	int a = 5, b = 100, *pa, *pb;
	pa = &a;
	pb = &b;
	printf("Khoi dau a=%d, b=%d\n", a, b);
	HoanVi1(a, b);
	printf("Hoan vi lan 1, a=%d, b=%d\n", a, b);
	HoanVi2(&a, &b); //phai gui dia chi cho ham HoanVi2
	printf("Hoan vi lan 2, a=%d, b=%d\n", a, b);

}

