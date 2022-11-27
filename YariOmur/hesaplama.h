#ifndef YARI_M
#define YARI_M
#include <math.h>
void hesapla(){
	int time = 4;
	float result;
	float madde = 0.25 * pow(10, -2);
	float maddeIlk = 1 * pow(10, -2);
	result = log(2) / (maddeIlk * log(time) / (madde * time * time));
	printf("Cevap = %f", result);
}
#endif
