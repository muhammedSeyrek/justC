#include<iostream>
using std :: cout;
using std :: endl;
void simetrik(int *x, int *y, char eksen){
	if(eksen == 'O' || eksen == 'X' || eksen == 'Y'){
		if(eksen == 'O')
			*y *= -1, *x *= -1;
		if(eksen == 'Y')
			*x *= -1;
		if(eksen == 'X')
			*y *= -1;
	}
	else{
		*y *= -1, *x *= -1;
	}
}
int main(){
	int x = 3, y = 4;
	char eksen;
	simetrik(&x,&y,eksen);
	cout << "Istenilen = " << "(" << x << "," << y << ")";
	return 0;
}
