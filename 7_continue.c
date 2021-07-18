/*
Continue

To edit something in between a running Loop,
or to skip something in a running loop*/

#include<stdio.h>
int main(){

	int num=1;
	do{
	
	if(num==6){
		num++;
		printf("This is skipped\n");
		continue;
		
		}
	
	printf("%d is available \n", num);
	num++;
	
	}while(num<=10);

	

return 0;
}

