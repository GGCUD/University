#include <iostream>
#include "queue.h"
#include "child.h"
#include "child2.h"
#include "child3.h"
using namespace std;

string menu = "\n\n\nMenu\n1 – Adding a queue item;\n 2 –Extracting a queue item;\n 3 – Displaying the queue on the screen;\n 4 – Calculatingthe required value(in accordance with the task option);\n 5 – Creating a copy of the queue;\n 6 – Merging the original queue with a copy and displaying the result on the screen;\n 7 – Exit the program.\n";

string case1TEXT = "Element:\n";
string theend = "The end";



child1 Q, Q_Copy;
void MENU();

int main() {
	setlocale(LC_ALL, "RUS");

	MENU();
	return 0;
}

void print() {
	system("cls");
	std::cout << "Q\t";
	Q.PRINT();

	std::cout << "\nQ_Copy\t";
	Q_Copy.PRINT();
}

void MENU() {
	bool work = true;
	while (work == true) {
		cout << menu;
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << case1TEXT;
			int NUMBER;
			cin >> NUMBER;
			Q.ADD(NUMBER);
			system("cls");
			break;
		case 2:
			Q.Extracting();
			print();
			break;
		case 3:
			print();
			break;
		case 4:
			cout << "Bigger range: ";
			Q.VICHISLRNIE();
			break;
		case 5:
			Q.COPY(Q_Copy);
			print();
			break;
		case 6:
			Q_Copy.Merging(Q);
			print();
			break;
		case 7:
			system("cls");
			work = false;
			cout << theend;
			break;
		default:
			break;
		}
	}
}
