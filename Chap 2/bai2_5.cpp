//nhap so nguyen x, so thuc n, tinh bieu thuc

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
  int n;
  float x, A;
  printf("Nhap so nguyen n:");
  scanf_s("%d",&n);
  printf("Nhap so thuc x: ");
  scanf_s("%f", &x);

  A = pow((x*x),n);

  printf("A: %f\n", A);
  _getch();
}
