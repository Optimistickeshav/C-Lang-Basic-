#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
/*Bubble sort*/

int i, temp, swap;
int n = 10;
int goals[10];

for(i=0; i<n; i++){
goals[i] = (rand()%25)+1;
}

printf("List\n");

for(i=0; i<n; i++){
printf("%d \n", goals[i]);
}

while(1){
	swap = 0;
	for(i=0; i<n-1; i++){
		if(goals[i]>goals[i+1]){
		int temp = goals[i];
		goals[i] = goals[i+1];
		goals[i+1] = temp;
		swap = 1;
	
								}

						}
	if(swap==0){
	break;
				}

		}

printf("\nSorted List\n");
for(i=0; i<n; i++){
printf("%d \n", goals[i]);

}

return 0;
}

