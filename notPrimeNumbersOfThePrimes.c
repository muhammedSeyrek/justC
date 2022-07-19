#include<stdio.h>
int main(){
	int i, j, k, m;
	for(i = 2; i < 100; i++){
		int flag = 1;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				flag = 0;
			}
		}
		if(flag == 0){
			printf("%d = ",i);
			for(k = 2; k < i; k++){
				int flag2 = 1;
				for(m = 2; m < k; m++){
					if(k % m == 0){
						flag2 = 0;
					}
				}
				if(flag2 != 0){
					if(i % k == 0){
						printf("%d ",k);
					}
				}
			}
			printf("\n");
		}
	}	
	return 0;
}
