#include "queue.h"
#include <iostream>

Queue::Queue() {
	head = tail = NULL;
}

Queue::~Queue() {
	NUM* temp;
	while (!this->empty()) {
		temp = head->next;
		delete head;
		head = temp;
	}
}

void Queue::ADD(int A) { //Выделение динамической памяти на один эл
	struct NUM* temp = new NUM; // Выделил память на переменную temp которое зайдет в очередь
	temp->next = NULL; // т к элемент новый то ссылка на следующий эл пустая
	temp->Num = A; // Передал число в очередь
	if (head != NULL) {
		temp->prev = tail; // создаем ссылку на предыдущий элемент для новго
		tail->next = temp;
		tail = temp;
	}
	else {// если это первый элемент в очедери
		temp->prev = NULL;
		head = tail = temp;
	}
}

int Queue::Extracting() {
	if (this->empty()) return 0;
	int Num;
	struct NUM* temp;
	temp = head;
	Num = temp->Num;
	head = head->next;
	if (head!=NULL)
		head->prev = NULL;
	delete temp;
	return Num;
}
bool Queue::empty() {
	return head == NULL;
}

void Queue::PRINT() {
	if (head == NULL) {
		std::cout << "EMPTY\n";
		return;
	}
	struct NUM* temp;
	temp = head;
	while (temp->next != NULL) {
		std::cout << temp->Num << "\t";
		temp = temp->next;
	}
	std::cout << temp->Num << "\n";
}

void Queue::COPY(Queue& Q_Copy) {
	struct NUM* temp;
	temp = head;
	while (temp->next != NULL) {
		Q_Copy.ADD(temp->Num);
		temp = temp->next;
	}
	Q_Copy.ADD(temp->Num);
}

void Queue::Merging(Queue& Q){
	struct NUM* temp;
	temp = Q.head;
	while (temp->next != NULL){
		this->ADD(temp->Num);
		temp = temp->next;
	}
	this->ADD(temp->Num);
}
