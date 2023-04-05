#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
//#include <conio.h>

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int gameStatus = -1;

void displayBoard() {
	
	system("cls");
	
	printf(" ......  ..      ..      ......    ........       ..     ......     ....       ......            \n");
	printf(" ......  ..    ..        ......   ..........    ..       ......   ..    ..    ..    ..           \n");
	printf("   ..    ..   ..           ..     ..      ..   ..           ..     ..     ..   .......            \n");
	printf("   ..    ..   ..           ..     ..........   ..           ..     ..     ..   ..             \n");
	printf("   ..    ..    ..          ..     ..      ..    ..          ..     ..     ..   .....              \n");
	printf("   ..    ..      ..        ..     ..      ..      ..        ..       ....       ....           \n");
	
	
	
//	printf("\n[+] This is a Tic Tac Toe Game\n\n");
	
	printf("\n\n[+]You will have to choose the position based on the numbers shown below, Enjoy :)\n\n");
	
	printf("      |       |       \n");
	printf("  %c   |  %c    |  %c  \n", board[1], board[2], board[3]);
	printf("      |       |       \n");
	printf("------|-------|-------\n");
	printf("      |       |       \n");
	printf("  %c   |  %c    |  %c  \n", board[4], board[5], board[6]);
	printf("      |       |       \n");
	printf("------|-------|-------\n");
	printf("      |       |       \n");
	printf("  %c   |  %c    |  %c  \n", board[7], board[8], board[9]);
	printf("      |       |       \n");
}

void drawOnBoard (int player, int position) {
	
	if(player == 1) {
		
		board[position] = 'X';
		
	} else {
		
		board[position] = 'O';
	}
	
}

int checkGameStatus (void) {
	
	if(board[1] == board[2] && board[2] == board[3]) {
		
		return 1;
		
	} else if(board[4] == board[5] && board[5] == board[6]) {
		
		return 1;
		
	} else if(board[7] == board[8] && board[8] == board[9]) {
		
		return 1;
		
	} else if(board[1] == board[5] && board[5] == board[9]) {
		
		return 1;
		
	} else if(board[7] == board[5] && board[5] == board[3]) {
		
		return 1;
		
	} else if(board[1] == board[4] && board[4] == board[7]) {
		
		return 1;
		
	} else if(board[2] == board[5] && board[5] == board[8]) {
		
		return 1;
		
	} else if(board[3] == board[6] && board[6] == board[9]) {
		
		return 1;
		
	} else if ( board[1] != '1' && board[2] != '2' && board[3] != '3' && 
				board[4] != '4' && board[5] != '5' && board[6] != '6' && 
				board[7] != '7' && board[8] != '8' && board[9] != '9') {
					
		return 0;
		
	} else {
		
		return -1;
	}
}

int main(void) {
	
	int choice = 0;
	int player = 1;
	
	do {
		
		displayBoard();
		
		player = (player % 2 == 0) ? 2 : 1;
		
			
		printf("\n[+] Player %d, its your turn: ", player);
		
		scanf("%d", &choice);
		
		if(choice > 0 && choice < 10 && board[choice] != 'X' && board[choice] != 'O') {
			
			drawOnBoard(player, choice);
			
			displayBoard();
			
		} else {
			
			printf("\n[+] Invalid choice\n");
			getch();
			
			player--;
			
		}
		
		player++;
		
		gameStatus = checkGameStatus();
		
	} while (gameStatus == -1);
	
	if (gameStatus == 1) {
		
		printf("\n[+] Player %d won, Congratulations!", --player);
		
		Beep(750, 800);
		
	} else {
		
		printf("[+] draw!");
	}
	
	printf("\n\n[+] Good Bye");
	
	return 0;
}
