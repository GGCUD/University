#include "child.h"
#include <iostream>


void child1::VICHISLRNIE() {
	child1 A;
	int k;
	this->COPY(A);
	int max = INT_MIN;
	int min = INT_MAX;
	while (!A.empty()) {
		k = A.Extracting();
		if (k < min) min = k;
		if (k > max) max = k;
	}
	std::cout << max - min << "\n";
}
