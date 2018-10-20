
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 100

int DemKT(char s[]);
int DemTu(char s[]);
int DemTu_new(char s[]);
void tolower(char s[]);
void tolower_new(char s[]);
void toupper_new(char s[]);
void reverse_string(char s[]);
void reverse_string_new(char s[]);

int main (void)
{
	char s[SIZE];
	printf("Nhap chuoi: ");
	fflush(stdin);
	//gets_s(s); <- lenh nay ko duoc trong VS code, dung fgets(bien chuoi, size chuoi, stdin)
    fgets(s, SIZE, stdin);
	puts(s);
	int dem = DemKT(s);
	printf("SL khoang trang la: %d\n", dem);

	int dem1 = DemTu(s);
	printf("SL tu trong chuoi: %d\n", dem1);
	int dem2 = DemTu_new(s);
	printf("SL tu trong chuoi: %d\n", dem2);


	tolower(s);
	tolower_new(s);
	toupper_new(s);
	reverse_string_new(s);
    reverse_string(s);
    return (0);
}


/*
1. Dem so ki tu trang trong chuoi

*/

int DemKT(char s[])
{
	int i = 0; int dem = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			dem++;
		i++;
	}
	return dem;
}



/*

7. Dem so tu

*/


int DemTu(char s[])
{
	int i = 0, dem = 0;
	while (s[i] != '\0')
	{
		//Vuot qua khoang trang dau neu co
		while ((s[i] == ' ') && (s[i] != '\0'))
			i++;
		// Tim cuoi tu
		while ((s[i] != ' ') && (s[i] != '\0'))
			i++;
		//if (s[i] != '\0') <- neu them cau nay, dem bi thieu
			dem++;
	}
	return dem;
}



int DemTu_new(char s[])
{
	int i = 0, dem = 0;
	while (s[i] != '\0')
	{
		//Vuot qua khoang trang dau neu co
		while ((s[i] == ' ') && (s[i] != '\0'))
			i++;
		int j = i;
		// Tim cuoi tu
		while ((s[i] != ' ') && (s[i] != '\0'))
			i++;
		if (j!=i)
			dem++;
	}
	return dem;
}



/*
3. Doi tat ca cac ki tu thanh ki tu thuong

*/

void tolower(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		//Doc tung ki tu, chuyen thanh chu thuong
		s[i] = tolower(s[i]);
		i++;
	}
	printf("Chuoi thuong: ");
	puts(s);
}


void tolower_new(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		//Doc tung ki tu, chuyen hoa thanh chu thuong
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
			s[i] += 32;
		i++;
	}
	printf("Chuoi thuong: ");
	puts(s);
}

void toupper_new(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		//Doc tung ki tu, chuyen chu thuong thanh hoa
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= 32;
		i++;
	}
	printf("Chuoi hoa: ");
	puts(s);

}




/*
4. Dao nguoc ki tu trong chuoi

*/


void reverse_string(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		for (int j = (strlen(s) - 1); j >= 0; j--)
		{
			if (j > i)
			{
				char tam;
				tam = s[j];
				s[j] = s[i];
				s[i] = tam;	
			}
			i++;
		}	
	}
	printf("Chuoi dao: ");
	puts(s);
}



void reverse_string_new(char s[])
{
	int i = 0, j = 0;
	while (s[j] != '\0')
		j++;
	j--;
	while (j > i)
	{
		char tam;
		tam = s[j];
		s[j] = s[i];
		s[i] = tam;
		i++;
		j--;
	}
	printf("Chuoi dao: ");
	puts(s);

}


/*
5. Tim kiem 1 ki tu co xuat hien trong chuoi ko? Xuat ra vi tri cua ki tu do



int findchar(char s[])
{
	
    fflush(stdin);
    char a[1];
    printf("Nhap ki tu:");
	scanf("%c", &a);
    printf("Ki tu vua nhap:");
    putchar(a[1]);
	
    int i = 0, vt = 0;
	while (s[i] != '\0')
	{
		if (strcmp(s[i], a) == 0)
			vt = i;
            i++;
	}
    return vt;
}
*/




/* 
2.	Kiem tra chuoi co doi xung hay ko?
S = 'ABCCBA' -> true
S = 'ABCDBA' -> false



bool DoiXung(char s[])
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			dem++;
		i++;
	}



}

*/





/*
void Nhapchuoi(char &chuoi)
{
	char chuoi[50];
	printf("Nhap chuoi: ");
	_flushall();
	gets_s(chuoi);
}

void Xuatchuoi(char chuoi[])
{
	char chuoi[50];
	printf("Chuoi vua nhap: ");
	puts(chuoi);
}
*/