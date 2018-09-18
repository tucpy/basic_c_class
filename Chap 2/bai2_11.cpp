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

  A = pow((pow(x,2) + x + 1),n) + pow((pow(x,2) + x - 1),n));

  printf("A: %f\n", A);
  _getch();
}
