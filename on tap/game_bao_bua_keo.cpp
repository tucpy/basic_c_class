#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <conio.h>

void main()
{
	srand(time(NULL));
	int com, hum;
	com	= rand() % 3;
	//printf("%d", com);

	printf("Input 0: Bao, 1: Bua, 2: Keo");
	scanf_s("%d", &hum);

	/*if (hum == 0)
	{
		printf("Nguoi Bao\n");
	}
	else if (hum == 1)
	{
		printf("Nguoi Bua\n");
	}
	else{
		printf("Nguoi Keo\n");
	}

	if (com == 0)
	{
		printf("May Bao\n");
	}
	else if (com == 1)
	{
		printf("May Bua\n");
	}
	else{
		printf("May Keo\n");
	}*/

	char *s[] = { "Bao", "Bua", "Keo" };
	printf("May chon %s\n", s[com]);
	printf("Nguoi chon %s\n", s[hum]);

	/*if (hum == com){
		printf("Hoa\n");
	}
	else if ((hum == 0 && com == 1) || (hum == 1 && com == 2) || (hum == 2 && com == 0))
	{
		printf("Nguoi thang\n");
	}
	else{
		printf("Chuc ban may man lan sau\n");
	}*/


	// Ve ma tran, hoa = 0, thang = 1 va thua = 2), row: human, col: com 
	int a[3][3] = {
		{0, 1, 2},
		{2, 0, 1},
		{1, 2, 0}
	};
	char *c[] = { "Hoa", "Thang", "Thua" };
	printf("%s\n", c[a[hum][com]]);
	_getch();
}