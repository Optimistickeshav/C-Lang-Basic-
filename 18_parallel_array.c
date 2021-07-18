#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	
	int i;
	
	
	int player[5] = {58,66,68,71,87};
	int goal[5] = {26,39,25,29,31};
	int gameplayed[5] = {30,30,28,30,26};
	
	float ppg[5];/*point per game*/
	float bestppg = 0.0;
	
	int bestplayer;
	
	
	for(i=0; i<5; i++){
	ppg[i] = (float)goal[i] / (float)gameplayed[i];
/*parallel array*/
	printf("%d \t %d \t %d \t %.2f \n", player[i], goal[i], gameplayed[i], ppg[i]);

	/*checking the guy with highest point*/
	if(ppg[i]> bestppg){
	bestppg = ppg[i];
	bestplayer = player[i];
	}

	}
	
	printf("\n Best player is Jursy no. = %d \n", bestplayer);

	

	return 0;
}

