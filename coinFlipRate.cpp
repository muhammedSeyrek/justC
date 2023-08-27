#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int counter = 0, one = 0, oneCount = 0, flag = 1;
	while(flag){
		oneCount = 0;
		for(int i = 0; i < 1000; i++){
			one = rand() % 2;	
			if(one)
				oneCount++;
		}
		counter++;
		if(oneCount == 500)
			flag = 0;
	}
	cout << "Ratio = " << (float) 1 / oneCount;
	return 0;
}
