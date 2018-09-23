/* 
In Visual Studio Code
Nhap so nguyen duong n
a. s1 = 1*2 + 2*3 +...+ n*(n+1)
b. s2 = 1^ + 2^2 + ... + n^n
c. s3 = 1 + 1/2 + 1/3 +... +1/n

*/

#include <stdio.h>


int main(void)
{
	int n, s1, s2;
    float s3;
	printf("n: ");
	scanf("%d", &n);
//S1
  s1 = 0;
  s2 = 0;
  s3 = 0;
  int tich = 1;
  int gt = 1;
  float thuong = 1; 
  for (int i = 1; i <= n; i++)
  {
    //tich = i * (i+1);
    //s1 += tich;
    s1 += i * (i+1);
    gt = i * i;
    s2 += gt;
    thuong = 1.0 / i; //s3 += 1.0/i
    s3 += thuong;
  }

  printf("s1: %i\ts2: %i\ts3: %.2f\t", s1,s2,s3);
}