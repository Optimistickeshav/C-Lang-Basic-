

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){

	int i;
	int dice;
	
	for(i=0; i<=20; i++){
	/*printing any random no,*/
	/*printf("%d \n", rand());*/
	
	dice = (rand()%6)+1; /*any num divided by 6 gives mod 0-5*/
	
	printf("%d \n", dice);
	
	}


return 0;
}

