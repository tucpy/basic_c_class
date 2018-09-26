/*
Kiem tra n la so chinh phuong
So chinh phuong: la so bang binh phuong cua mot so nguyen
Can bac 2 cua no la so nguyen 
Vi du: 9, 16, 25
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    int n, cp;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n<1)
        cp = 0; //khong la so chinh phuong
    else
    {
        //Tinh binh phuong cua can bac 2 cua chinh no
        int binh_phuong = 1;
        for (int i = 1; i <= sqrt(n); i++)
        {
            binh_phuong = i*i;
        }     
        //Kiem tra
        cp = (binh_phuong == n ? 1 : 0);
}
//In ket qua
    if (cp == 0)
    {
        printf("Khong phai chinh phuong\n");
    }      
    else
    {
        printf("So chinh phuong\n");
    }
        
    return(0);
}