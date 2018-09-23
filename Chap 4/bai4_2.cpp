/* 
In Visual Studio Code
Nhap so nguyen duong n, so sanh 2 ve trai va phai
a. 1*2 + 2*2 +... +n*2 = n(n+1)(2n+1)/6 
b. 1/2! + 2/3! +... +n/(n+1)! = 1 - (1/(n+1)!)

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, vt_a, vp_a;
    float vt_b, vp_b;
	printf("n: ");
	scanf("%d", &n);
//Cau a:
    vt_a = 0;
 
    for (int i = 1; i <= n; i++)
    {
        vt_a += i * 2;
    }

    vp_a = n*(n+1)*(2*n+1)/6;

    if (vt_a == vp_a)
    {
        printf("Cau a: VT bang VP\n");
    }
    else
    {
        printf("Cau a: Hai ve khong bang nhau\n");
    }

//Cau b:
    #define E 0.0001
    vt_b = 0;
    int gt = 1;

    for (int j = 1; j<= n; j++)
    {
        gt *= (j + 1);
        vt_b += (float)j / gt;
    }

    //1 - (1/(n+1)!)
    // tinh 1/(n+1)!
    vp_b = 1 - (1.0/gt);

    if (fabs(vt_b - vp_b)<E)
    {
        printf("Cau b: VT bang VP\n");
    }
    else
    {
        printf("Cau b: Hai ve khong bang nhau\n");
    }

printf("vt_a: %i\tvp_a: %i\tvt_b: %.4f\tvp_b: %.4f\n", vt_a,vp_a,vt_b,vp_b);

return(0);
}

