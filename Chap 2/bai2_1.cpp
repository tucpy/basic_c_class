// Tinh tong, hieu, tich, thuong va du cua 2 so nguyen

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int a, b;
  printf("Nhap 2 so nguyen: ");
  scanf_s("%d%d", &a,&b);

  printf("a + b = %d\n", a+b);
  printf("a - b = %d\n", a-b);
  printf("a * b = %d\n", a*b);
  printf("a / b = %d\n", a/b);
  printf("du = %d\n", a%b);

  _getch();
}
