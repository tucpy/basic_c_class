// Nhap so nguyen duong (1<= n <=7). In ra cac ngay trong tuan tuong ung


#include <stdio.h>

/*
int main (void)
{
    const char *a[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if(n >= 1 && n<=7)
    {
        printf("%s\n", a[n-1]);
    }
    else
    {
        printf("Gia tri nhap vao khong hop le\n");
    }
}
*/

/*
//Nhap thang va nam. Hay tinh va in ra so ngay trong thang

int Nhuan(int y)
{
    if(y % 400 ==0 || (y % 4 == 0 && y % 100 !=0))
        return 1;
    return 0;
}

int main(void)
{
    int m, y;
    printf("Nhap thang va nam : ");
    scanf("%d%d", &m, &y);
    //printf("%d,%d\n", m,y);
    
    int a[12] = {31, Nhuan(y)? 29:28, 31,30,31,30,31,31,30,31,30,31};
    // mang a gom cac ngay trong 12 thang

    if(m > 0 && m < 13 && y > 0)
        printf("So ngay trong thang %d nam %d la %d\n", m, y, a[m-1]);
    else
        printf("Du lieu nhap khong hop le\n");
    
    return(0);
}
*/

/*
// Nhap nam Duong lich, tinh va xuat ra nam Am lich tuong ung

int main(void)
{
    const char *can[10] = {"Canh", "Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
    const char *chi[12] = {"Than","Dau","Tuat","Hoi","Ti","Suu","Dan","Meo","Thin","Ti","Ngo","Mui"};
    int namdl;
    printf("Nhap nam : ");
    scanf("%d", &namdl);

    if(namdl > 0)
        printf("Nam am lich: %s %s\n", can[namdl%10],chi[namdl%12]);
    else
        printf("Du lieu nhap khong hop le\n");
}
*/

/*
//Nhap xuat mang 1 chieu

#define SIZE 20
int main(void)
{
    int a[SIZE];
    int n;
    do{
        printf("Nhap so phan tu: ");
        scanf("%d", &n);
    } while (n<1 || n>SIZE);
    // Nhap du lieu cho mang tu ban phim
    for (int i= 0; i < n; i++)
    {
        printf("pt thu %d: ", i);
        scanf("%d", &a[i]);
    }
    //Xuat du lieu mang ra man hinh
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    return(0);
}
*/

// Dung ten mang 1 chieu lam tham so thuc truyen cho ham
// Ten mang la 1 hang dia chi, chinh la dia chi cua phan tu dau tien trong mang duoc truyen cho ham
// Do do tham so hinh thuc tuong ung trong dinh nghia ham phai viet dang con tro

#define SIZE 20
//Khai bao nguyen mau ham
void Nhap(int a[], int &n);
void Xuat(int a[], int n);

// Ham chinh 

int main(void)
{
    int a[SIZE];
    int n;
    Nhap(a, n);
    Xuat(a, n);

}

//Dinh nghia cac ham
void Nhap(int a[], int &n)
{
    do{
        printf("Nhap so phan tu:");
        scanf("%d",&n);
    }while (n < 1 || n > SIZE);

    for(int i = 0; i < n; i++)
    {
        printf("pt thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}