#include<iostream>
using std :: cout;
using std :: endl;
double mutlak(double x){
	if(x < 0)
		return x * -1;
	else
		return x;
}
int mutlak(int x){
	if(x < 0)
		return x * -1;
	else
		return x;
}
int main(){
	cout << " |-2| = " << mutlak(-2) << endl;
	cout << "|-2.4| = " << mutlak(-2.4) << endl;
	return 0;
}
