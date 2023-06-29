#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int matrix[4][4] = {{0, 5, 2, 3}, {7, 0, 1, 2}, {1, 3, 0, 6}, {1, 1, 8, 0}};

int distance = 0;

int rec(int x, int y, int index){
	distance += matrix[x][y];
	switch(y){
		case 0:
			printf("A");
			break;
		case 1:
			printf("B");
			break;
		case 2:
			printf("C");
			break;
		case 3:
			printf("D");
			break;
		default:
			break;
	}	
	if(index == 12)
		return distance;
	if(x == 0 && y == 1)
		return rec(y, 2, index + 1);
	int temp;
	do{
		temp = rand() % 4;
		for(int i = 0; i < 4; i++)
			if(matrix[y][temp] <= matrix[y][i] && (temp == x || temp == y))
				temp = i;
	}while(temp == x || temp == y);
	return rec(y, temp, index + 1);
}

	
int main(){
	srand(time(NULL));
	int highest = 0;
	for(int i = 0; i < 1000; i++){
		printf("A");
		distance = rec(0, rand() % 3 + 1, 1);
		if(i == 0)
			highest = distance;
		if(highest < distance)
			highest = distance;
		printf("\n");
		distance = 0;
	}
	printf("\nTotal Distance = %d\n", highest);	
	
	return 0;
}
