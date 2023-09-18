#include <stdio.h>

void move(char f, char t){
	printf("Move disc from %c to %c\n", f, t);
}

void moveVia(char f, char v, char t){
	move(f, v);
	move(v, t);
}

void hanoi(char count, char f, char h, char t){
	if(count == 0)
		return;
	else{
		hanoi(count - 1, f, t, h);	
		move(f, t);
		hanoi(count - 1, h, f, t);
	}
}

void main(void){
	hanoi(4, 'A', 'B', 'C');
}
