#include <iostream>
#include "minmax.h"
using namespace std;

int main(int argc, char** argv){
	int* numArr = new int[argc-1];
	for(int i=0; i<argc-1; i++){
		numArr[i] = atoi(argv[i+1]);
	}
	int min, max;
	int& r_min = min;
	int& r_max = max;
	getMinMax(numArr, argc-1, r_min, r_max);
	cout << "min : " << min << endl << "max : " << max << endl;

	delete[] numArr;
	return 0;
}

