#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	printf("Kaca kac olsun(N*N) = ");
	int n;
	scanf("%d", &n);
	printf("Ilk Durum\n");
	int array[n][n];
	srand(time(0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 && j == 0 || i == n - 1 && j == n - 1){
				array[i][j] = 1;
			}
			else{
				array[i][j] = rand() % 2;
			}
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}
	int index =  1;
	int valueJ = 0;
	int valueI;
	int flag = 1;
	for(int i = valueI; i < n; i++){
		for(int j = valueJ; j < n; j++){
			if(array[i][j] == 0){
				if(i != n - 1 && j != 0){
					if(array[i + 1][j - 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j - 1;
						j = 10000;
					}
				}
				else if(i != n - 1){
					if(array[i + 1][j - 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j - 1;
						j = 10000;
					}
				}
				else if(j != 0){
					if(array[i + 1][j - 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j - 1;
						j = 10000;
					}
				}
				else{
					if(array[i + 1][j - 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j - 1;
						j = 10000;
					}
				}
			}
			else if(i != 0 && j != n - 1){
				if(i != n - 1 && j != 0){
					if(array[i - 1][j + 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j + 1;
						j = 10000;
					}
				}
				else if(i != 0){
					if(array[i - 1][j + 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j + 1;
						j = 10000;
					}
				}
				else if(j != 0){
					if(array[i - 1][j + 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j + 1;
						j = 10000;
					}
				}
				else{
					if(array[i - 1][j + 1] == 0){
						j = 10000;
						i = 10000;
						flag = 0;
					}
					else{
						valueJ = j + 1;
						j = 10000;
					}
				}
			}
			else{
				if(j != 0 && j != n - 1){
					if(array[i][j + 1] == 0){
						j -= 2;
					}
					else if(array[i + 1][j] == 0){
						j -= 2;
					}
					else{
						i++;
					}
					i--;
				}
				else{
					i = 10000;
					j = 10000;
					flag = 0;
				}
				valueJ = j;
				index++;
				array[i][j] = index;
			}
		}
	}
	if(flag == 1)
		printf("\n\nTekrar Uretildi(Basarili)");
	else
		printf("\n\nTekrar Uretildi(Basarisiz)");
	
	printf("Son Durum\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
