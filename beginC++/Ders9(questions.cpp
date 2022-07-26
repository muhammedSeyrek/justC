#include<iostream>
using std :: cout;
using std :: endl;
int asalTamamla(int sayi){
	int kontrol = 1, i;
	for(i = sayi + 1; kontrol == 1; i++){
		for(int j = sayi; j > 1; j--){
			if(i % j == 0){
				i++;
			}
			if(j == 2 && i % j == 1){
				return i;
			}
		}
	}
}
int main(){
	cout << "Sayinin tamlanan asali = " << asalTamamla(6);
	return 0;
}
