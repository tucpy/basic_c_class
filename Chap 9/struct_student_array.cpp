// Struct student array
#include <stdio.h>
#include <string.h>
#define SIZE 20

// define struct
struct SinhVien{
    char ma[10];
    char ten[30];
    int namsinh;
    float diem;
};

struct DSSV{
    int n; //so sinh vien
    SinhVien arr[SIZE]; // Mang cac sinh vien
};
typedef struct SinhVien SinhVien;
typedef struct DSSV DSSV;

//Declare function
void NhapSV(SinhVien *u);
void XuatSV(SinhVien u);
void NhapDSSV(DSSV *u);
void XuatDSSV(DSSV u);
int TimSVDiemMax(DSSV u);
void Them(DSSV *u, int vt, SinhVien sv);
void Xoa(DSSV *u, int vt);
void SapXep(DSSV *u);

// Main function
int main(void)
{
    DSSV dssv;
    SinhVien sv;
    SinhVien svnew;
    int diemmax;
    fflush(stdin);
    printf("Nhap DSSV\n");
    NhapDSSV(&dssv); // ko cho nhap ma SV???
    printf("DSSV vua nhap\n");
    XuatDSSV(dssv);
    
    // Tim vi tri sv diem cao nhat
    diemmax = TimSVDiemMax(dssv);
    printf("SV thu %d co diem cao nhat\n", diemmax);
    fflush(stdin);
    NhapSV(&svnew);
    Them(&dssv, 1, svnew);
    printf("DSSV cap nhat\n");
    XuatDSSV(dssv);

    Xoa(&dssv, 2);
    printf("DSSV cap nhat\n");
    XuatDSSV(dssv);

    SapXep(&dssv);
    printf("DSSV theo thu tu MSSV\n");
    XuatDSSV(dssv);

    return(0);
}



// Function
void NhapSV(SinhVien *u)
{
    float tam;
    //fflush(NULL);
    //fflush(stdin); -> flush output not input
    while (getchar() != '\n');// cant use fflush(stdin) or fflushall()
    printf("Ma sinh vien:");fgets(u-> ma, sizeof(u -> ma), stdin); //gets(u-> ma); never use gets as it is unsafe, use fgets(var, sizeof(var),stdin)
    printf("Ho ten:"); fgets(u -> ten, sizeof(u -> ten), stdin);//gets(u -> ten); 
    printf("Nam sinh:"); scanf("%d", &u-> namsinh);
    printf("Diem:"); scanf("%f", &tam); u->diem = tam;
    //for float value like "diem", you cant use &diem to get adress so need to use a temp variable
}

void XuatSV(SinhVien u)
{
    printf("%s\t%s\t%d\t%0.2f\n", u.ma, u.ten, u.namsinh, u.diem);
}

void NhapDSSV(DSSV *u){
    do {
        printf("Nhap so SV:");
        scanf("%d", &u->n);
        if (u->n < 1 || u->n > SIZE)
        printf("So SV ko hop le, xin nhap lai!\n"); 
    } while (u->n < 1 || u->n > SIZE); 

    for(int i = 0; i < u->n; i++){
        printf("** Sinh vien thu %d **\n", i);
        NhapSV(&u->arr[i]);
    } 
}

void XuatDSSV(DSSV u){
    for(int i = 0; i < u.n; i++)
        XuatSV(u.arr[i]);
}

// Find student with highest score

int TimSVDiemMax(DSSV u)
{
    int ret = 0;
    for (int i = 1; i < u.n; i++)
        if(u.arr[i].diem > u.arr[ret].diem)
            ret = i;
    return ret; // Tra ve vi tri SV co diem cao nhat
}

// Insert a student at certain position

void Them(DSSV *u, int vt, SinhVien sv)
{
    int i;
    if(vt < 0 || vt > u->n)
        printf("Vi tri %d khong hop le\n", vt);
    else{
        if(u->n == SIZE)
        printf("Danh sach da day\n");
        else{
            for(i = u->n - 1; i >= vt; i--)
                u->arr[i+1] = u->arr[i];
            u->arr[vt] = sv;
            u->n++;
        }
    }
}

// Delete a student at position from database

void Xoa(DSSV *u, int vt)
{
    int i;
    if(vt < 0 || vt>= u->n)
        printf("Vi tri %d khong hop le\n", vt);
    else{
        if(u->n == 0)
        printf("Danh sach rong\n");
        else{
            for(i = vt; i < u->n - 1; i++)
                u->arr[i] = u->arr[i+1];
            u->n--;
        }
    }
}

// Sap xep DSSV theo thu tu tang dan cua ma SV

void SapXep(DSSV *u)
{
    int i,j;
    for(i = 0; i < (u->n - 1); i++)
    {
        for(j = i + 1; j < u->n; j++)
        {
        // So sanh ma sinh vien thu i va sinh vien thu j
            if(strcmp(u->arr[i].ma, u->arr[j].ma) > 0)
            {
            // Hoan vi u->arr[i] va u->arr[j]
            SinhVien tam = u->arr[i];
            u->arr[i] = u->arr[j];
            u->arr[j] = tam;
            }
        }
    }
}