#include<stdio.h>
int main()
	{
		float grade=0;
		float score=0;
		float nooftest=0;
		float average=0;
		
		printf("Press 0 when completed\n\n");
		
		do{
		printf("Test:%.0f \t Average:%2.f \n", nooftest, average);
		printf("\n Enter test Score: ");
		scanf("%f", &score);
		grade+=score; // grade = score + 1 
		nooftest++;
		average = grade/nooftest;
		
		}
		while(score!=0);

		return 0;
	}

