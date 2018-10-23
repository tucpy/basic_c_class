#include <stdio.h>


int stringcmp(char s1[], char s2[]);
int stringcmp1(char *s1, char *s2);

int main(void)
{
    char s[6] = "Hello";
    char m[8] = "Hello";
    char *p_s = "I dont know"; 
    char *p_m = "I dont know";
    printf("%d\n", stringcmp(s,m));

    printf("%d\n", stringcmp1(p_s, p_m));
    return 0;
}

//Input as string
int stringcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] =='\0')
            return 0; //s1 equal s2
        i++;
    }
    return (s1[i] - s2[i]);
}

//Input as pointer
int stringcmp1(char *s1, char *s2)
{
    while(*s1 == *s2)
    {
        if (*s1=='\0')
            return 0;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}