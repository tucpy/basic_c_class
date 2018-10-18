#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// khai bao nguyen mau ham
bool Doixung(char *s);

// ham chinh
int main(void)
{
    char s[] = "abcba";
    if (Doixung(s))
    {
        printf("Chuoi doi xung\n");
    }
    else
        printf("Khong doi xung\n");

    char *a = "abcdef";
    if (Doixung(a))
    {
        printf("Chuoi doi xung\n");
    }
    else
        printf("Khong doi xung\n");
    
    return (0);
}

bool Doixung(char *s)
{
    int len = strlen(s);
    bool ret = true;
    for(int i = 0; i <= len/2; i++)
    {
        if(s[i] != s[len - 1 - i])
        {
            ret = false;
            break;
        }
    }
    return ret;
}