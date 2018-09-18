// Nhap so tien nguyen duong, doi ra giay bac 50d, 20d, 10d, 5d va 1d

#include <stdio.h>
#include <conio.h>

int main(void)
{
  int tien, to50, to20, to10, to5, to1;
  printf("Nhap so tien can doi:");
  scanf_s("%d",&tien);
  to50 = tien / 50;
  to20 = (tien % 50) / 20;
  to10 = ((tien % 50) % 20)/10;
  to5 = (((tien % 50) % 20)%10)/5;
  to1 = (((tien % 50) % 20)%10)%5;

  printf("So tien doi duoc: %d 50d, %d 20d, %d 10d, %d 5d, %d 1d", to50,to20,to10,to5,to1);
  _getch();
}
