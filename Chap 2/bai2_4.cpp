//Nhap khoi luong 2 vat the (m1,m2) va khoang cach giua chung (r). Tinh luc van vat hap dan

#include <stdio.h>
#include <conio.h>
#define G 6.67E-11
#include <math.h>

int main(void)
{
  float m1, m2, r, F;
  printf("Nhap khoi luong 2 vat the: ");
  scanf_s("%f%f", &m1, &m2);
  printf("Khoang cach: ");
  scanf_s("%f", &r);

  F = (G *(m1*m2))/pow(r,2);
  printf("Luc van vat hap dan: %f", F);
  _getch;
}
