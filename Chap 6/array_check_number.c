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
int ChinhPhuong(int n);
void SapXepCP(int A[], int n);
void SXCPTang(int A[], int n);
void SapXepTang(int A[], int n);
void SapXepDayConTang(int A[], int n, int s, int e);
void SapXepDayConGiam(int A[], int n, int s, int e);
void SXNuaTangNuaGiam(int A[], int n);


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
    int s = 16;
    printf("%d\n", ChinhPhuong(s));

    //Sap xep so Chinh Phuong tang
    SXCPTang(A, n);
    Xuat(A,n);

    SapXepTang(A, n);
    Xuat(A,n);

    SXNuaTangNuaGiam(A,n);
    Xuat(A,n);
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

// Sap xep cac phan tu la so chinh phuong tang dan, cac phan tu khac giu nguyen vi tri
int ChinhPhuong(int n)
{
    int cp = 0;// khong la so chinh phuong
    for(int i = 1; i <= sqrt(n); i++)
    {
        if (i * i == n)
        {
            cp = 1;//la so CP
            break;
        }  
    }
    return cp;
}

void SapXepCP(int A[], int n) // tu lam chua dung lam
{
    int cp, vt;
    for(int i = 0; i < n; i++)
    {
        if (ChinhPhuong(A[i]) == 1)
        {
            cp = A[i];
            vt = i;
            break;
        }
    }
    for(int j = 0; j < n; j++)
    {   
        int tam;
        if (ChinhPhuong(A[j]) == 1 && A[j] < cp)
        {
            //swap so CP nho voi so lon
            tam = A[vt];
            A[vt] = A[j];
            A[j] = A[vt+1];
            //swap so CP lon voi so canh so CP nho
            A[vt+1] = tam;
        }
    }
}

void SXCPTang(int A[], int n) // dap an
{
    int i,j;
    for(i = 0; i<n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(ChinhPhuong(A[i]) && ChinhPhuong(A[j]) && A[i]> A[j])
            {
                int tam = A[i];
                A[i] = A[j];
                A[j] = tam;
            }
        }
    }
}
//Nhap so phan tu trong mang: 24
//36   22  144  212  114  276  139  221   55  226  -32  202  214  121  158   59  110   -6  288  195  186    7   91  243
//36   22  121  212  114  276  139  221   55  226  -32  202  214  144  158   59  110   -6  288  195  186    7   91  243



//Selection sort
void SapXepTang(int A[], int n)
{
    int i,j;
    for(i = 0; i < n-1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(A[i] > A[j])
            {
                int tam = A[i];
                A[i] = A[j];
                A[j] = tam;
            }
        }
    }
}

// Sap xep mot bo phan cua mang tang ma ko anh huong cac phan tu con lai
// 0 < s < e < n-1
void SapXepDayConTang(int A[], int n, int s, int e)
{
    int i,j;
    for(i = s; i < e; i++)
    {
        for(j = i + 1; j < e; j++)
        {
            if(A[i] > A[j])
            {
                int tam = A[i];
                A[i] = A[j];
                A[j] = tam;
            }
        }
    }
}

void SapXepDayConGiam(int A[], int n, int s, int e)
{
    int i,j;
    for(i = s; i <= e; i++)
    {
        for(j = i + 1; j <= e; j++)
        {
            if(A[i] < A[j])
            {
                int tam = A[i];
                A[i] = A[j];
                A[j] = tam;
            }
        }
    }
}

// Sap xep nua mang dau tang, nua mang sau giam
void SXNuaTangNuaGiam(int A[], int n)
{
    SapXepDayConTang(A, n, 0, n/2);
    SapXepDayConGiam(A, n, n/2+1, n-1);

}