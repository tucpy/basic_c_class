/*
Kiem tra n la so nguyen to hay khong

*/

#include <stdio.h>

int main (void)
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int nt = 0;
    for (int i = 2; i < n; i++)
    {
            if (n % i == 0)
        {
            break;
            //nt = 0;
        }
        else
        {
            nt = 1;
        }
    }

    if (nt == 0)
    {
        printf("%d khong phai so nguyen to\n", n);
    }
    else 
        {
            printf("%d la so nguyen to\n", n);
        }
    return(0);
}