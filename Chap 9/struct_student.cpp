// Struct student
#include <stdio.h>

// define struct
struct SinhVien{
    char ma[10];
    char ten[30];
    int namsinh;
    float diem;
};

// Declare function
void NhapSV(SinhVien *u);
void XuatSV(SinhVien u);

// Main function
int main(void)
{
    SinhVien sv;
    NhapSV(&sv);
    XuatSV(sv);

    return(0);
}

// Function
void NhapSV(SinhVien *u)
{
    float tam;
    printf("Ma sinh vien:"); fflush(stdin); gets(u-> ma);
    printf("Ho ten:"); gets(u -> ten);
    printf("Nam sinh:"); scanf("%d", &u-> namsinh);
    printf("Diem:"); scanf("%f", &tam); u->diem = tam;
    //for float value like "diem", you cant use &diem to get adress so need to use a temp variable
}

void XuatSV(SinhVien u)
{
    printf("%s\t%s\t%d\t%0.2f\n", u.ma, u.ten, u.namsinh, u.diem);
}
