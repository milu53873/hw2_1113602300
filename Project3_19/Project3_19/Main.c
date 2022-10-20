#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loa = 0;
	float rat,day,cha;
	while (loa != -1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loa);
		if (loa == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &rat);
		printf("Enter tern of the loan in days: ");
		scanf("%f", &day);
		cha = loa * rat*day / 365;
		printf("The interest charge is $%.2f\n", cha);
		printf("\n");
	}
}

