#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int acc=0;
	float beg, cha, cre, lim,becr;
	while (acc != -1)
	{
		printf("Enter account number (-1 to end): ");
		scanf("%d", &acc);
		if (acc == -1)
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf("%f", &beg);
		printf("Enter total charges: ");
		scanf("%f", &cha);
		printf("Enter beginning credits: ");
		scanf("%f", &cre);
		printf("Enter credits limit: ");
		scanf("%f", &lim);
		becr = beg + cre;
		if (becr > lim)
		{
			printf("Account:\t%d\n", acc);
			printf("Credit limit:\t%.2f\n", lim);
			printf("Balance:\t%.2f\n", becr);
			printf("Credit Limit Exceeded.\n");
		}

		printf("\n");
	}









}