#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h> -> dung cho define INT_MAX, PI...

void main()
{
	int a[] = {0, 1589, 1600, 1858, 2340, 2615, 2701 };
	int b[] = { 0, 50, 100, 200, 300, 400, INT_MAX };

	int kw;
	printf("Nhap so kw tieu thu: ");
	scanf_s("%d", &kw);
	int n = sizeof(b) / sizeof(b[0]);
	int total = 0;
	for (int i = 1; i < n; i++){
		if (kw >= b[i]){
			total += (b[i] - b[i - 1]) * a[i];
		}
		else{
			total += (kw - b[i - 1]) * a[i];
			break;
		}
	}
	printf("Total %d\n", total);


	_getch();
}
