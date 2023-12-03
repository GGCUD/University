#include "Creature.h"
using namespace std;
class Monster : public Creature {
private:
	string Name;
	string Signs;
public:
	Monster();
	Monster(string Name);
	Monster(const Monster& Monster_copy);
	~Monster();
	string Get_Name() const;
	void Set_Name(string Name_ch);
	string Get_Signs() const;
	void Set_Signs(string Signs_ch);
	
		virtual void Show(); // ����� ������
	virtual void Rewrite(); // ��������� ������
	virtual void Save_me(); // ���������� ������
	virtual void Edit(int num_str, string red_str); // ��������� �����
};
