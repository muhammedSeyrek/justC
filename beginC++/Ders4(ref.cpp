#include <iostream>
using std :: cout;
using std :: endl;
int main(){
	int sayi1 = 9;
	int &sayi2 = sayi1;
	cout << "Sayi1 = " << sayi1 << "\nSayi2 = " << sayi2 << endl;
	sayi2 = 27;
	cout << "Sayi1 = " << sayi1 << "\nSayi2 = " << sayi2 << endl;
	return 0;
}
