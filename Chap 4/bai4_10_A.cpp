/*

Nhap n, tinh gia tri ve trai va ve phai xem co bang nhau khong?
(A) 1*2*3 + 2*3*4 + .... + n(n+1)(n+2) = (n(n+1)(n+2)(n+3))/4
(B) 1*(1!) +2*(2!) + .... + n(n!) = (n+1)! - 1

*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n, vt, vp, tich;
	printf("n: ");
	scanf_s("%d", &n);
// tinh ve trai
  vt = 0;
  tich = 1;
  for (int i = 1; i <= n; i++)
  {
    i = i * (i+1) * (i+2); // -> sai:i se bi quay nguoc lai gia tri i trong vong lap, phai dung bien co ten khac
    tich = i * (i+1) * (i+2);
    vt = vt + tich;
  }
// tinh ve phai
  vp = (n*(n+1)*(n+2)*(n+3))/4 ;

  printf("VT: %d\n", vt);
  printf("VP: %d\n", vp);

  _getch();
}
