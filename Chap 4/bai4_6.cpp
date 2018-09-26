/*
Kiem tra n la so hoan chinh hay khong
So hoan chinh: so co tong cac uoc so (khong ke no) bang chinh no
Vi du: 6, 28, 496
*/

#include <stdio.h>

int main (void)
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int tong_uoc = 0;
    for (int i = 1; i < n; i++)
    {      
        if (n % i == 0)
        {     
            tong_uoc += i;
        }    
    }

    if (tong_uoc == n)
    {
        printf("%d la so hoan chinh\n", n);
    }
    else 
        {
            printf("%d khong phai so hoan chinh\n", n);
        }
    
    return(0);
}

/*
Cach 2:
int n;
int hc; // 1: so hoan chinh; 0: ko phai so hoan chinh

if (n<1)
    hc = 0; //khong la so hoan chinh
else
{
    //Tinh tong cac uoc so cua n
    s = 0;
    for (int i = 1; i < n; i++)
        if(n % i ==0) s += i;
    //Kiem tra
    hc = (s == n ? 1 : 0); // Cau dieu kien if dang rut gon. if s==n, hc = 1, else hc = 0
}
//In ket qua
if (hc==0)
    printf("Khong phai so hoan chinh")
else
    printf("So hoan chinh")

*/