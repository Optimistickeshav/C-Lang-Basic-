/*Using Array*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

int i, avg;
int egg[5];
int total=0;

for(i=0; i<5; i++){
	printf("\nHow many eggs you eat on Day %d =", i+1);
	scanf("%d", &egg[i]);
 	 }

for(i=0; i<5; i++){
	total += egg[i];

/*

1 - total = 10(egg[0]) + 0(total)
2 - total = 20(egg[1]) + 10(total)
3 - total = 30(egg[2]) + 30(total)
4 - total = 40(egg[3]) + 60(total)
5 - total = 50(egg[4]) + 100(total)

total = 150

*/
	 }
	 
	 avg = total/5;
	 
	 /*30=150/5*/
	 
	 printf("\nYou ate %d eggs total, Average = %d / day \n", total, avg);
	

return 0;
}

