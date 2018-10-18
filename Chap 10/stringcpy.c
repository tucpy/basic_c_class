#include <stdio.h>
#define SIZE 100
#include <string.h>
// declare a string 
char s[SIZE];
// or pointer to the first element of the string array
char *p;

// write stringcpy function same as strcpy() in string.h library

// as array
void stringcpy1(char dest[], char source[])
{
    int i = 0;
    while((dest[i] = source[i] !='\0'))
    {
        i++;
    }
}

// as pointer

void stringcpy2(char *dest, char *source)
{
    while((*dest = *source) != '\0')
    {
        dest++;
        source++;
    }
}

// main function

// this one ok <- dont know why
int main(void)
{
    char a[SIZE] = "Hello there";
    char b[SIZE];
    stringcpy2(b, a);

    for(int i = 0; i < strlen(b); i++)
    {
        printf("%c\n", b[i]);
    }
    return(0);
}



