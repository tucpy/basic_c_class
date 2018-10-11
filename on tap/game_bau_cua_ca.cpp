#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 3
#define SIZE 100

// Game bau cua ca cop, nguoi choi chon o va so tien dat cuoc cho moi o
int main (void)
{
    srand(time(NULL));

    // char *s[] = {"Cop", "Bau", "Ga", "Tom", "Ca", "Cua"}; bao loi, phai sua lai thanh const char
    const char *s[] = {"Cop", "Bau", "Ga", "Tom", "Ca", "Cua"};
    // const char nghia la chuoi s ko thay doi trong suot chuong trinh, thinh thoang mot so compiler se cho ep kieu
    // nhung ket qua ko du doan truoc duoc, co the bi loi
    int com[6] = {0};
    int hum[6] = {0};

    // Gia tri ngau nhien may chon( tu 0 den 5)
    // Moi lan xuat ra 3 o trong so 6 o
    for (int i = 0; i < 3; i++)
    {
        //com[i] = rand() % 6;
        int k = rand() % 6;
        printf("%s ", s[k]);
        com[k]++;
        //printf("%s\n", s[com[i]]);
    }
    printf("\n");

    // In lai gia tri may da chon ngau nhien thanh mang 6 so
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", com[i]);
    }

    // Nguoi nhap so luong o muon dat
    int n;
    printf("\nInput n: ");
    scanf("%d", &n);
    

    for (int i =0; i <6; i++)
    {
        printf("%d %s\n", i, s[i]);
    }

    // Nhap vi tri o va so tien cho tung o
    for (int i = 0; i < n; i++)
    {
        int k; //vi tri
        printf("Nhap vi tri: ");
        scanf("%d", &k);
        int m;
        printf("Nhap so tien: ");
        scanf("%d", &m);
        hum[k] += m;
    }

    // Tong tien (lay array cua computer nhan voi array cua nguoi -> ra so tien thang thua tung o)
    int total = 0;
    for(int i = 0; i < 6; i++)
    {
        total += com[i] * hum[i];
    }
    printf("So tien thang cuoc: %d\n", total);
    return(0);

}