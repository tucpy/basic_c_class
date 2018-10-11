#include <stdio.h>
#define _USE_MATH_DEFINES // define so PI, nhung phai dua len truoc math.h
#include <math.h>
#include <stdbool.h>

#include <conio.h>

void hello(){
	printf("Hello\n");
}

int sum(int a, int b){
	int c = a + b;
	return c;
}

bool ktscp(double a)
{
	int t = (int)sqrt(a);
	/*if (t * t == a){
		return true;
		}
		else{
		return false;
		}*/
	return t * t == a;
}

float tinhDienTich(float r)
{
	return r * r * M_PI;
}
void main(){
	hello();

	int a = 8;
	int b = 7;
	printf("Tong 2 so: %d\n", sum(a, b));
	
	int c;
	printf("Input c: ");
	scanf_s("%d", &c);

	if (ktscp(c))
	{
		printf("%d la so chinh phuong\n", c);
	}
	else
	{
		printf("%d khong la so chinh phuong\n", c);
	}

	float r;
	printf("Input radius: ");
	scanf_s("%f", &r);
	printf("Result %f\n", tinhDienTich(r));
	float rs = tinhDienTich(r);
	printf("Result %f\n", rs);

	_getch();
}