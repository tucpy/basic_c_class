#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUM_ALPHABET 26
#define SIZE 200

void ThongKe(char *s)
{
    int dem[NUM_ALPHABET]; int i; //Array dem so lan xuat hien cua ki tu
    //Khoi tao mang dem
    for(int i = 0; i < NUM_ALPHABET; i++)
    {
        dem[i] = 0;
    }
    //Dem so lan xuat hien cua ki tu
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if(toupper(s[i]) >= 'A' && toupper(s[i]) <= 'Z')
            dem[toupper(s[i]) - 'A']++;
    }
    //In ket qua
    for(int i = 0; i < NUM_ALPHABET; i++)
        if (dem[i] > 0) // chi in cac ki tu co trong chuoi
            printf("Ky tu %c: %d lan\n", i + 'A', dem[i]);
}

int main(void)
{
    char s[SIZE];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    printf("Chuoi vua nhap:");
    puts(s);
    ThongKe(s);

    return(0);
}
