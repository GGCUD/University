#include "child3.h"
#include <iostream>

void child3 ::ADD1(int A) {
	this->ADD(A);
}

bool child3::empty1() {
	return this->empty();
}

void child3::PRINT1() {
	this->PRINT();
}

int child3::Extracting1() {
	return this->Extracting();
}

void child3::COPY1(child3& Q_Copy) {
	this->COPY(Q_Copy);
}

void child3::Merging1(child3& Q) {
	this->Merging(Q);
}