#include <stdio.h>
#include <conio.h>

void main(){
	char *b[] = { "", "Kem", "Yeu", "TB", "TBKha", "Kha", "Gioi", "XS" };
	char *c[] = { "F", "D", "D+", "C", "B", "B+", "A", "A+" };
	double a[] = { 3, 4, 5, 6, 7, 8, 9, 10 };
	//int n =8;
	// Kiem tra so luong phan tu trong mang (kich thuoc mang/kich thuoc tung phan tu)
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(c) / sizeof(c[0]);
	printf("n va m: %d %d\n", n, m);
	double avg;
	printf("input Average score: ");
	scanf_s("%lf", &avg);

	for (int i = 0; i < n; i++)
	{
		if (avg <= a[i]){
			printf("%s\t" "%s\n", b[i], c[i]);
			break;
		}
	}
	/*int i = 0;
	while (avg > a[i]){
		i++;
	}*/
	//printf("%s\n", b[i]);
	_getch();
}