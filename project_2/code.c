// 
#include <stdio.h>
#include <stdlib.h>

int main(){
	int value, turn = 0, player0=0, player1=0;
	while(1){
		system("clear");
		printBoard(player0, player1);
		if(turn == 0){
			printf(" > Player 0's turn: ");
			scanf("%d", &player0);
		}
		else{
			printf(" > Player 1's turn: ");
			scanf("%d", &player1);
		}
		turn = !turn;
	}

	
	return 0;
}
