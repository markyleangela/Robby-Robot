#include <stdio.h>
#include "robot.h"
char printCommand(void){
	printf("\na] Origin - enables Robby to return to the point of origin\n");
	printf("b] Location - prints the current location of robby\n");
	printf("c] Moves - Robby moves to following direction: 6 - East, 4 - West , 8 - North, 2 - South\n");
	printf("d] Exit - Terminates the program\n");
	
}

void initialize(int *x, int *y){
	*x = 0;
	*y = 0;
} 
void printLocation(int x, int y){
	printf("Current Location: %d %d \n",x,y);
}

void move(int *x, int *y){
	int moveX, moveY;
	printf("Input 2 integer to move robby: ");
	scanf("%d %d",&moveX,&moveY);
	
	if(moveX == 6){
		*x += moveY;
	}
	else if(moveX == 4){
		*x-= moveY;
	}
	else if(moveX == 8){
		*y += moveY;
	}
	else if(moveX == 2){
		*y -= moveY;
	}
}

void Exit(void){
	printf("Program Terminated. Thank you\n");
}
