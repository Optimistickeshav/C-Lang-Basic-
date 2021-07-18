#include<stdio.h>
int main(){

	int a;
	int not; /*no of times*/
	int max;
	
	printf("How many time you want to run the loop(Max=10)");
	scanf("%d",&not);
	
	for(a=1; a<=max; a++){
	printf("%d \n", a);
		if(a==not){
		break;
		}
	}

return 0;
}

