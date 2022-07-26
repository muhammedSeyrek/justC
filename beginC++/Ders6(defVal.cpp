#include<iostream>
#include<cmath>
using std :: cout;
using std :: endl;
double mesafe(int x1, int y1, int x2 = 0, int y2 = 0){
	return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
}
int main(){
	cout << "(2,3) ve (7,0) arasindaki mesafe = " << mesafe(2, 3, 7) << endl;
	return 0;
}
