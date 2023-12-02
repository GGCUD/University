#pragma once
#include <iostream>

class Queue
{
public:
	Queue();
	~Queue();
	void ADD(int A);
	bool empty();
	void PRINT();
	int Extracting();
	void COPY(Queue& Q_Copy);
	void Merging(Queue& Q);
private:
	struct NUM
	{
		int Num;
		NUM* prev, * next;
	};
	NUM* tail, * head; 
};