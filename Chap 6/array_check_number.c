#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 200
#define SIZE 100

// Khai bao nguyen mau ham
int NhapN();
void Nhap(int A[], int n);
void Xuat(int A[], int n);
int CoDuong(int A[], int n);
int DoiXung(int A[], int n);
void CapKhacNhau (int A[], int n);


// Ham chinh
int main(void)
{
    srand(time(NULL));
    int n = NhapN();
    int A[SIZE];
    Nhap(A, n);
    Xuat(A, n);
    printf("\n");
    printf("%d\n", CoDuong(A,n));
    printf("%d\n", DoiXung(A,n));
    CapKhacNhau(A, n);

    return(0);
}



// Nhap n
int NhapN()
{
    int n;
    do{
        printf("Nhap so phan tu trong mang: ");
        scanf("%d", &n);
    } while (!(n>0) && (n<MAX));
    return n;
}

// Nhap mang tu dong
void Nhap(int A[], int n)
{
    int min = -50, max = 300;
    for (int i = 0; i < n; i++)
    {   
        A[i] = (rand() % (max - min + 1)) + min;
    }	
}

// Xuat mang
void Xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", A[i]);
    }
    printf("\n");
}

// Kiem tra mang co so duong hay ko
int CoDuong(int A[], int n)
{
    int yes = 0;// mang ko co so duong
    for(int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            yes = 1;
            break;
        }
            
    }
    return yes;
}

// Kiem tra mang co doi xung hay ko
int DoiXung(int A[], int n)
{
    int dx = 0;//mang ko doi xung
    for (int i = 0; i < (n/2) ; i++)
    {
        if (A[i] == A[n-1-i])
        {
            dx = 1;
        }
    }
    return dx;
}

// Kiem tra mang co cac cap phan tu dung canh nhau co gia tri khac nhau ko
void CapKhacNhau (int A[], int n)
{
    int k = 0;//cac cap khac nhau
    int vt;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == A[i+1])
        {
            k = 1;
            vt = i;
        }
    }

    if (k==1)
    {
        printf("Cap so dung canh nhau co gia tri giong nhau tai vi tri thu %d\n", vt);
    }
    else{
        printf("Khong co so trung nhau dung canh nhau\n");
    }
}

