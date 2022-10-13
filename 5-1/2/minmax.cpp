#include "minmax.h"

void getMinMax(int* arr, int len, int& min, int& max){
	int my_min, my_max;
	my_min = arr[0];
	my_max = arr[0];
	for(int i=1; i<len; i++){
		// minimum
		if(my_min < arr[i]){
			my_min = arr[i];
		}	
		// maximum
		if(my_max > arr[i]){
			my_max = arr[i];
		}
	}
	min = my_min;
	max = my_max;
}