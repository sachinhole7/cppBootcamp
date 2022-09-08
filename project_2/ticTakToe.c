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

// ask user if want to continue
int playAgain(){
	printf(" Want to Play Again: \n press 'q' quit\n press 'y' tocontinue: ");
	char input = getchar();
	if(input == 'q'){
		exit(0);
	}
	else if(input == 'y'){
		system("clear");
		main();
	}
	return 0;
}

// print game board
void printBoard(char arr[]){
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

// check winner
int checkWinner(char arr[], int player){
		int i, j, pos=1;
		// check for Rows
		for(i=1; i<=3; i++){
			if(arr[pos] != pos && arr[pos] == arr[pos+1] && arr[pos] == arr[pos+2]){
				printf(" > Player %d is Winner!\n", player);
				return 1;
			}
			pos+=3;
		}
		// check for Colmns
		pos=1;
		for(i=1; i<=3; i++){
			if(arr[pos] != pos && arr[pos] == arr[pos+3] && arr[pos] == arr[pos+6]){
					printf(" > Player %d is Winner!\n", player);
					return 1;
			}
			pos++;
			}		
		// check for Diagonals
		// digonal 1
		pos=1;
		if(arr[pos] != pos && arr[pos] == arr[pos+4] && arr[pos] == arr[pos+8]){
			printf(" > Player %d is Winner!\n", player);
			return 1;
		}
		// diagonal 2
		pos=3;
		if(arr[pos] != pos && arr[pos] == arr[pos+2] && arr[pos] == arr[pos+4]){
			printf(" > Player %d is Winner!\n", player);
			return 1;
		}	
	return 0;
}

// check draw
int draw(int count){
	if(count == 9){
		printf("\n----------------------------------------\n");
		printf("                   DRAW");
		printf("\n----------------------------------------\n");
		return 1;
	}
	return 0;
}

// player to player
int playerToPlayer(char arr[]){	
	int n, player=0, count=0;
	char playerOne[11], playerTwo[11]; 

	while(1){
		system("clear"); // clear screen
		printBoard(arr); // print game board

		if(checkWinner(arr, !player)){ playAgain(); } // check winner
		if(draw(count)){ playAgain(); }		// check draw

		printf("player %d Turn: ", player);    
		scanf("%d", &n);                     

		if(arr[n] != 'X' && arr[n] != 'O')
		{	
			count++;
			if(player == 0){
				arr[n] = 'O';
			}
			else{
				arr[n] = 'X';
			}
			player = !player;
		}
	}
return 0;	
}

// calculate winning possiblity
int canWin(char arr[]){
		  int i, j, pos;
		  char arr2[10]={'0','1','2','3','4','5','6','7','8','9'};
		  // clock wise ------------------------------------------------------------
		  for(i=1; i<=9; i++){
					 arr2[i] = arr[i];
					 // if computer can win
					 for(j=1; j<=9; j++){
								if(arr2[j] != 'X' && arr2[j] != 'O'){
										  arr2[j] = 'O';
										  if(checkWinner(arr2, 0)){
													 return j;
										  }
								}
								arr2[j] = arr[j];
					 }
					 arr2[i] = arr[i];
					 // if player can win
					 if(arr2[i] != 'X' && arr2[i] != 'O'){
					      arr2[i] = 'X';
							if(checkWinner(arr2, 1)){
								return i;
					 }
					 if(arr[i] != 'X' && arr[i] != 'O'){
								pos=i;
					 }
					 arr2[i] = arr[i];
					 }
		  }
		  // Anty clock wise ------------------------------------------------------------
		  for(i=9; i>=1; i--){
					 arr2[i] = arr[i];
					 // if computer can win
					 for(j=9; j>=1; j--){
								if(arr2[j] != 'X' && arr2[j] != 'O'){
										  arr2[j] = 'O';
										  if(checkWinner(arr2, 0)){
													 return j;
										  }
								}
								arr2[j] = arr[j];
					 }
					 arr2[i] = arr[i];
					 // if player can win
					 if(arr2[i] != 'X' && arr2[i] != 'O'){
					      arr2[i] = 'X';
							if(checkWinner(arr2, 1)){
								return i;
					 }
					 if(arr[i] != 'X' && arr[i] != 'O'){
								pos=i;
					 }
					 arr2[i] = arr[i];
					 }
		  }
return pos;
}

// play with computer
int withComputer(char arr[], int player){
	int n;	  
		if(player == 1){
			printf(" Your Turn: ");    
			scanf("%d", &n);                     
			if(arr[n] != 'X' && arr[n] != 'O'){
					 arr[n] = 'X';
					 return 1;
			}
		}
		else{
		   n = canWin(arr); 
			arr[n] = 'O';
			return 1;
		}
	return 0;
}

// driver function
int main(){
	char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
	int num, player=1, count=0, tmp=0;

	system("clear");

	printf(" 1 > Play with another Player:\n 2 > Play with Computer:\n 3 > Play With Chitter:\n 0 > to Quit:\n\n");
	printf(" Enter a Number you want to Play with: ");
	scanf("%d", &num);

	if(num == 1){ 
		playerToPlayer(arr);
	}
	else if(num == 2){
		while(1){
		  system("clear"); // clear screen
		  printBoard(arr); // print game board
          
		  if(checkWinner(arr,player)){ playAgain(); } // check winner
	     if(draw(count)){ playAgain(); }		// check draw

	     if(withComputer(arr, player)){  
		  			 count++;
		  			 player = !player; // change player turn X = O, O = X		   
		  }
		  }
	}
		//	withChitter(arr);
		//	break;
//			exit(0);

	//playerToPlayer(arr);
	return 0;
}

