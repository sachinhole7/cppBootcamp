#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// color codes
char* RED = "\033[0;31m";
char* GREEN = "\033[0;32m";
char* YELLOW = "\033[0;33m";
char* BLUE = "\033[0;34m";
char* WHIGHT = "\e[0;37m";

// bold text and color codes
char* BRED = "\e[1;31m";
char* BGREEN = "\e[1;32m";

char* RMC = "\033[0;00m"; // Remove colours

// print matrix
void matrix(char arr[]){
	int i, j, num=0;
	
	printf("\n%s+---+---+---+%s\n", YELLOW, RMC);
	for(i=1; i<=3; i++){
		printf("%s| %s", YELLOW, RMC);
		for(j=1; j<=3; j++){
			num++;
			if(arr[num] == 'X'){
				printf("%s%c%s", BGREEN, arr[num], RMC);
			}
			else if(arr[num] == 'O'){
				printf("%s%c%s", BRED, arr[num], RMC);
			}
			else{
				printf("%c", arr[num]);
			}
			
			printf("%s | %s", YELLOW, RMC);
		}
		printf("\n%s+---+---+---+%s\n", YELLOW, RMC);
	}
	printf("\n");
}

// player to player
int playerToPlayer(char arr[]){	
	int n, player=1, count=0;
	char playerOne[11], playerTwo[11],  //arr[10]={'0','1','2','3','4','5','6','7','8','9'};
	
	printf("%sEnter Player 1 Name: %s", GREEN, RMC);
	scanf("%s", playerOne);
	
	printf("%sEnter Player 2 Name: %s", RED, RMC);
	scanf("%s", playerTwo);


	while(1){
		system("clear");
		matrix(arr);	

		if(count == 9){
			printf("\n----------------------------------------\n");
			printf("                   DRAW");
			printf("\n----------------------------------------\n");
		}

		printf("player %d Enter Position: ", player);
		scanf("%d", &n);
		if(arr[n] != 'X' && arr[n] != 'O')
		{	
			count++;
			if(player == 1)
			{
				arr[n] = 'X';
				player = 2;

			}
			else
			{
				arr[n] = 'O';
				player = 1;
			}
		}
	}
	
}

// driver function
int main(){
	char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
	playerToPlayer(arr);
	return 0;
}

