#include<stdio.h>
int main(){
	int n = 25;
	int dizi[5], i = 0;
	int gecici = n;
	while(gecici >= 1){
		dizi[i] = gecici % 2;
		gecici /= 2;
		i++;
	}
	for(i = 4; i >= 0; i--){
		printf("%d",dizi[i]);
	}
	return 0;
}
