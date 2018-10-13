#include <stdio.h>


int main(void)
{
	int x = 2, *px;
	px = &x;
	printf("Gia tri x(dung 'x') = %d\n", x);
	printf("Gia tri x(dung '*px') = %d\n\n", *px);
	//==================================
	printf("Dia chi bien x(dung '&x') = %p\n", &x); // Code cua thay la %d ko bao loi trong VS2015
	printf("Dia chi bien x(dung 'px') = %p\n", px);
	printf("Dia chi bien x(dung '&(*px)') = %p\n\n", &(*px));
	//==================================
	x = 10;
	printf("Gia tri x(dung 'x') = %d\n", x);
	printf("Gia tri x(dung '*px') = %d\n\n", *px);
	//==================================
	*px = 100;
	printf("Gia tri x(dung 'x') = %d\n", x);
	printf("Gia tri x(dung '*px') = %d\n\n", (*px));
	//==================================
	printf("Dia chi cua con tro px (dung &px) = %p", &px);

	return (0);
}