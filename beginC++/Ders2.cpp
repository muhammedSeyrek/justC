#include<iostream>
using std :: cout; //program cout bildirisini tek baþýna kullanabilir.
using std :: cin; //program cin     	|| 		|| ||		||
using std :: endl; // ||		|| 		|| 			||			||

int main(){
	int sayi1;
	int sayi2;
	
	cout << "iki sayi giriniz : ";
	cin >> sayi1 >> sayi2;
	if(sayi1 > sayi2)
		cout << "Buyuk Olan : " << sayi1 << endl;
	else
		cout << "Buyuk Olan : " << sayi2 << endl;
	
	
	return 0;
}
