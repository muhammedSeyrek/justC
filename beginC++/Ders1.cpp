#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

namespace ornek{
	int x;
	int y;
}
int x;


int main(){
	
	int x;
	int y;
	x = 13;
	::x = 21;
	ornek ::x = 3;
	 
	cout <<	"x = " << x <<", ::x =" << ::x <<", ornek ::x = " << ornek ::x << endl;
	{
		int x;
		x = 34;
		cout << "x = " << x <<", :: x = " << ::x << endl;
	}
	
	return 0;
}
