/*
Tinh sin(x)= x - x^3/3! + x^5/5! + ... + (-1)^n (x^2n+1 / (2n+1)!)
Do chinh xac E =0.0001
*/

#include <stdio.h>
#include <math.h>
#define E 0.0001

int main(void)
{   
    int n;
    float x, y, sin;
	printf("x: ");
	scanf("%f", &x);
    n = 1; y = x; sin = x;
    while (fabs(y) >= E)
    {
        n += 2;
        y = -y * x*x /((n-1)*n);
        sin += y;
    }

    printf("sin: %f\n", sin);

    return(0);
}
