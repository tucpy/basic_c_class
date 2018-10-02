#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	for (; ;) {
		printf("Nhap mot so nguyen: ");
		scanf_s("%d", &n);
		if (n % 2 == 0) continue;
		else if (n % 3 == 0) break;
		printf("%d khong chia het cho 2 va 3\n", n);
	}
	printf("Da tim duoc mot so chia het cho 3, do la %d\n", n);
	_getch();
}