#include <stdio.h>

int main(){
	int x=0, y=0;
	int *xp,*yp;
	xp = &x;
	yp = &y;
	printCommand();
	char command;
	while(1){
		printf("\nInput your Command: ");
		scanf(" %c",&command);
		
		switch(command){
		case 'a': initialize(&x,&y);break;
		case 'b': printLocation(*xp,*yp);break;
		case 'c': move(&x,&y);break;
		case 'd': Exit(); break;
		default: printf("Invalid Input\n");
		}
		
		if(command == 'd'){
			break;
		}
	}
}


//	if(command == 'a'){
//		initialize(&x,&y);
//	}
//	else if(command == 'b'){
//		printLocation(*xp,*yp);
//		
//	}
//	else if(command == 'c'){
//		move(&x,&y);
//	}
//	else if(command == 'd'){
//		break;
//	}
//}
//	Exit();
//	
//}

	
