/*
In bang ma ASCII ra man hinh

*/

#include <stdio.h>
#include <math.h>
#define NUM_LINES 40 // Gia su 1 trang man hinh co 40 dong

int main(void)
{
    for (int i = 0; i<=127; i++)
    {
        printf("%d : %c \n", i, i);
        if((i+1)% NUM_LINES ==0){
            printf("**Nhan phim bat ky de tiep tuc **\n");
        }
    }
    return(0);
}