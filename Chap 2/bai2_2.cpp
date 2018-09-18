// Tinh chu vi va dien tich hinh tron

#include <stdio.h>
#include <conio.h>
#define PI = 3.14

int main(void)
{
  float r, CV, DT;
  printf("Nhap ban kinh: ");
  scanf_s("%f", &r);

  CV = 2 * PI * r;
  DT = PI * r * r;

  printf("Chu vi: %.2f\n", CV);
  printf("Dien tich: %.2f\n", DT);

  _getch();
}
