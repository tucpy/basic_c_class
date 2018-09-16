#include <stdio.h>
#include <conio.h>

#include <math.h>

int main(void)
{
	int time_in, time_out, salary;

	printf("Time in: ");
	scanf_s("%d", &time_in);

	printf("Time out: ");
	scanf_s("%d", &time_out);

	int(total_time) = time_out - time_in;

	if (time_in >= 6 && time_out <= 12)
	{
		salary = total_time * 6000;
		printf("Salary: %d", salary);
	}
	else if (time_in > 12 && time_out <= 18)
	{
		salary = total_time * 7500;
		printf("Salary: %d", salary);
	}
	else if (time_in >= 6 && time_out <= 18)
	{
		salary = ((12 - time_in) * 6000 + (time_out - 12) * 7500);
		printf("Salary: %d", salary);
	}
	else
	{
		printf("Invalid working hour");
	}

	_getch();
}