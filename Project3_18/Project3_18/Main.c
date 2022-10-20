#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float dol = 0;
	float sal;
	while (dol != -1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &dol);
		if (dol == -1)
		{
			break;
		}
		sal = 200 + dol * 0.09;
		printf("Salary is: $%.2f\n", sal);
		printf("\n");
	}
}


