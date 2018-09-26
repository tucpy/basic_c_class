/*
Kiem tra n la so doi xung
So doi xung: So dao nguoc bang chinh no
Vi du: 1, 44, 161, 121, 2552... 
*/

#include <stdio.h>

int main (void)
{
    int n,dx, dao, d;
    int m;//luu gia tri cua n, vi n khi chay qua vong lap se thay doi gia tri
    printf("Nhap n: ");
    scanf("%d", &n);

    m = n;
    //Tinh so dao
    dao = 0;
        while (m>0){
            d = m % 10; // lay chu so hang don vi cua n
            dao = 10 * dao + d; //bien so hang don vi cua n thanh so dau tien cua so dao
            m /= 10;
        }
    //Kiem tra
        dx = (dao == n ? 1 : 0);
    //In ket qua
    switch(dx)
    {
        case 1:
            printf("So dao\n");
            break;
        case 0:
            printf("Khong phai so dao\n");
            break;
    }
    return(0);
}
