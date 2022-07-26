#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

inline long karesi(int s){
	return s * s;
}

int main(){
	char devam;
	long sayi;
	do{
		cout << "Sayi :";
		cin >> sayi;
		cout << sayi <<" * " << sayi << " = " << karesi(sayi) << endl;
		cout "Devam etmek istiyormusunuz ? (e/h)";
		cin >> devam;
	}while(devam == 'e' || devam == 'E');	
	return 0;
}
