#include "fatorial.h"

int fatorial(int n){
	int fat;

	for(fat = 1; n > 1; n = n - 1){
		fat = fat * n;
	}
	return fat;
}
