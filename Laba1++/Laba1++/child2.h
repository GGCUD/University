#pragma once
#include "queue.h"
#include <iostream>



class child2 : private Queue
{
public:
	void ADD1(int A);
	bool empty1();
	void PRINT1();
	int Extracting1();
	void COPY1(child2& Q_Copy);
	void Merging1(child2& Q);
private:

};
