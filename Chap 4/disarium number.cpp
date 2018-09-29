/*
Disarium number: 
135 = 1^1 + 3^2 + 5^3 = 135

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,i,d_number, digit,m;
	printf("n: ");
	scanf("%d", &n);

	for (int j = 1; j < n; j++)
	{
		d_number = 0;
		m = i;
		while (m > 0)
		{
			digit = m % 10;
			d_number = digit * digit;
			m = m/10;
		}
	
		if (d_number == i)
		{
			printf("%d \t", i);
		}

	}

}