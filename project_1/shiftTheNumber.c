
# include <sys/ioctl.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

#define clear() printf("\033[H\033[J")

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


// a function to check winner
int checkWinner(int arr[]){
	int win[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,32}, count = 0, i;
	for(i=1; i<=16; i++){
		if(arr[i] == win[i])
			count++;
	}

	if(count == 16){
		return 0;
	}
	else{
		return 1;
	}

}

// display out put center of the screen and add color in output
void ctr(char string[100], char color[21]){
	struct winsize w;
    	ioctl(0, TIOCGWINSZ, &w);

    	int columns = w.ws_col;
    	int rows = w.ws_row;
	
    	int stringLength = strlen(string) / 2;
	printf("%s%*s%s", color, columns / 2 + stringLength, string, RMC);
}

// display RUles of Game
void gameRules(){
	printf("\n");
	ctr("-------[ GAME RULES ]------- \n",BRED);
	printf("\n");
	ctr("> You can move only 1 step at a time with the arrow key. <\n",YELLOW);
	ctr("> You can move numbers at an empty position only. <\n",YELLOW);
	ctr("> For each valid move : your total number of moves will decrease by 1. <\n",YELLOW);
	printf("\n");
	ctr("-----[ WHEN YOU WILL WIN ]-----\n",BRED);
	printf("\n");
	ctr("> Number in a 4*4 matrix should be in order from 1 to 15 <\n",YELLOW);
	printf("\n");
	ctr("|  1 |  2 |  3 |  4 |\n",YELLOW);
	ctr("|  5 |  6 |  7 |  8 |\n",YELLOW);
	ctr("|  9 | 10 | 11 | 12 |\n",YELLOW);
	ctr("| 13 | 14 | 15 |    |\n",YELLOW);
	printf("\n");
}

//function to swap to integers
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    //printf("");
}

// function to shuffle arrray 
void shuffle ( int arr[], int n )
{
    srand ( time(NULL) );
    
    for (int i = n-1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i+1);

        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}

// generate 4x4 matrix with Numbers between 1 to 15
void displayMatrix(int arr[]){
	int i, j, k = 0, s;
	for(i=1; i<=4; i++){
		for(j=1; j<=4; j++){
			if(arr[k] == 0){
				arr[k] = ' ';
				printf("%c\t", arr[k]);
			}
			else{
				if(arr[k] == 32){
					printf("%c\t", arr[k]);
				}
				else{
					printf("%d\t", arr[k]);
				}
			}
			k++;
		}
		printf("\n");
	}
}

int main(){

	char playerName[11], yn;
	int arr[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, moves;

	clear(); // clear screen
		     
	// get name from player
	ctr("  Enter a Player's Name: ",WHIGHT);
	scanf("%s", playerName);
	clear();

	gameRules(); // display Game Rules
	printf("\n");

	// wait for player to press enter 
	ctr(": press ENTER to continue :\n",WHIGHT);
	while( getchar() != '\r' && getchar() != '\n' );	
	clear();
	
    	shuffle(arr, 15);
    	//printArray(arr, 16);
	printf("\n");
	int i = 15;
	moves = 10;
	while(1){

		clear();
		
		// check winner
		if(0 == checkWinner(arr)){
			ctr("* * *  Winner! Winner!, Chicken Dinner... * * *",BGREEN);
			exit(0);
		}
		
		// kill game when moves are 0
		if(moves == 0){
			printf("\n\n\n");
			ctr(" ------- Loooser -------\n", BRED);
			printf(" Do you want restart the Game [ y|n ]: ");
			yn = getchar();
			if(yn == 'y'){ main(); }
			else{ exit(0); }
		}
		
		ctr("Good Luck \n", BGREEN);
		printf("%s Player: %s%s ,%s Moves Left %d%s\n\n", YELLOW, BLUE, playerName, YELLOW, moves, RMC);
		printf("\n");

		// display 4x4 matrix with 1 to 15 random numbers
		displayMatrix(arr);
		printf("\n");
		
		char ch = getchar();
		getchar();
		switch(ch){
			case 'D': // LEFT
				swap(&arr[i+1],&arr[i]);
				i++;
                                break;
                        case 'C': // RIGHT
				swap(&arr[i-1],&arr[i]);
				i--;
                                break;
                        case 'A': // UP
				swap(&arr[i+4],&arr[i]);
				i+=4;
                                break;
                        case 'B': // DOWN
				swap(&arr[i-4],&arr[i]);
				i-=4;
                                break;
                        case 32: // ESC
                                exit(0);
		}
		moves--;

	}

	return 0;
}

