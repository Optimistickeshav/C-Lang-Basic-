#include<stdio.h>
	int main()
		
	{
	int day=1, f=31;
	float amount=1;
	
	printf("Enter no. of Days: \n");
	scanf("%d", &f);
	
	printf("Enter how much amount will increase per day: \n");
	scanf("%f", &amount);

	while (day <=f)
	{
			printf("Day:%d \t = Amount $%.2f \n", day, amount);
		amount *=2;
		day++;
		}
	return 0;

	}

