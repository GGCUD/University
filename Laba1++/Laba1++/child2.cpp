#include "child2.h"
#include <iostream>

void child2::ADD1(int A) {
	this->ADD(A);
}

bool child2::empty1() {
	return this->empty();
}

void child2::PRINT1() {
	this->PRINT();
}

int child2::Extracting1() {
	return this->Extracting();
}

void child2::COPY1(child2& Q_Copy) {
	this->COPY(Q_Copy);
}

void child2::Merging1(child2& Q) {
	this->Merging(Q);
}