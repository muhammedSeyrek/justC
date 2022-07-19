#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int guess, randomNumber = 2, randomX, randomY;
	while(randomNumber != guess){
		randomNumber = rand() % 100 + 1;
		randomX = rand() % 4;
		randomY = rand() % 4;
		printf("%d between %d\n",randomNumber - randomX - 1, randomNumber + randomY + 1);
		printf("You guess = ");
		scanf("%d",&guess);
	}
	printf("Well done");
	return 0;
}
