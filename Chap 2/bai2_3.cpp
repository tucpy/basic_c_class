// Nhap do Celcius, tinh do Fahrenheit

#include <stdio.h>
#include <conio.h>

int main(void)
{
  float cel, far;
  printf("Nhap do Fahrenheit: ");
  scanf_s("%f",&far);

  cel = 5/9.0f * (far - 32); //chu y neu co phep chia le thi declare float
  printf("Do Celcius: %f", cel);

  _getch();
}
