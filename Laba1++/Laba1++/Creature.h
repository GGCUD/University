#pragma once
#include <iostream>
using namespace std;
class Creature { // ����������� �������� ������������ ������
public:
	Creature() {};
	virtual ~Creature() {};
	virtual void Show() = 0; // ����� ������
	virtual void Rewrite() = 0; // ��������� ������
	virtual void Save_me() = 0; // ���������� ������
	virtual void Edit(int num_str, string red_str) = 0; // ��������� �����
};
typedef struct Elem {
	Creature* data;
	Elem* next;
} Elem; 
