#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

void takas(int &x, int &y){
	int yedek;
	yedek = x;
	x = y;
	y = yedek;
}
int main(){
	int a = 9;
	int b = 11;
	cout << "Fonksiyon cagrilmadan once" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	takas(a,b);
	cout << "Fonksiyon cagrildiktan sonra" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}
