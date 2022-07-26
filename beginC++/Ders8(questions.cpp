#include<iostream>
#include<iomanip>
using std :: cout;
using std :: cin;
using std :: endl;
using std :: setprecision;
int main(){
	char cevap;
	double toplam = 0, sayi, sayac = 1, ortalama = 0;
	do{
		cout << "Sayi giriniz = ";
		cin >> sayi;
		toplam += sayi;
		ortalama = toplam / sayac;
		sayac++;
		cout << "Devam etmek istiyor musunuz ? (E/H) = ";
		cin >> cevap;
	}while(cevap != 'H' && cevap != 'h');
	cout << "Toplamlari = " << toplam << endl << "Ortalamalari = " << setprecision(4) << ortalama;
	return 0;
}
