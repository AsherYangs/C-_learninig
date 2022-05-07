#include <iostream>
using namespace std;
#include "Wizard.h"
#include "Warrior.h"
#include "Character.h"
#include <string>
/*
void printInit(Character c){
	string name = c.getName();
	cout<<name[0];
}
*/
int main() {

	Character * c[3];
	c[0] = new Warrior("Alice", 10);
	c[1] = new Wizard("Bob", 9);
	c[2] = new Warrior("Cat", 5);
	c[0]->beatMonster(10000);
	for(int i=0;i<3;i++)
		c[i] ->print();
	for(int i=0;i<3;i++)
		delete c[i] ;
	return 0;
}

--------------------------in "Wizard.h"--------------------------

#include "Character.h"

class Wizard: public Character {
	static const int PO_PLUS = 4; //每次升級各個能力值加多少
	static const int KN_PLUS = 9;
	static const int LU_PLUS = 7;
public:
	Wizard(string n, int lv = 1);
	virtual ~Wizard();

	void print();
	void beatMonster(int exp);
};

--------------------------in "Wizard.cpp"--------------------------

#include "Wizard.h"

Wizard::Wizard(string n, int lv):
Character(n, lv, lv*PO_PLUS, lv*KN_PLUS, lv*LU_PLUS)
{
	// TODO Auto-generated constructor stub
}

Wizard::~Wizard() {
	// TODO Auto-generated destructor stub
}

void Wizard::print(){
	cout<<"Wizard";
	Character::print();
}
void Wizard::beatMonster(int exp){
	this->exp += exp;
	while(this->exp >= pow(this->level, 2)*EXP_LV )
		this->levelUp(PO_PLUS, KN_PLUS, LU_PLUS);
}

--------------------------in "Warrior.h"--------------------------

#include "Character.h"

class Warrior: public Character {
	static const int PO_PLUS = 10; //每次升級各個能力值加多少
	static const int KN_PLUS = 5;
	static const int LU_PLUS = 5;
public:
	Warrior(string n, int lv = 1);
	virtual ~Warrior();

	void print();
	void beatMonster(int exp);
};

--------------------------in "Warrior.cpp"--------------------------

#include "Warrior.h"

Warrior::Warrior(string n, int lv) :
Character(n, lv, lv*PO_PLUS, lv*KN_PLUS, lv*LU_PLUS)
{
	// TODO Auto-generated constructor stub
}

Warrior::~Warrior() {
	// TODO Auto-generated destructor stub
}

void Warrior::print(){
	cout<<"Warrior";
	Character::print();
}
void Warrior::beatMonster(int exp){
	this->exp += exp;
	while(this->exp >= pow(this->level, 2)*EXP_LV )
		this->levelUp(PO_PLUS, KN_PLUS, LU_PLUS);
}

--------------------------in "Character.h"--------------------------

#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Character {  //設定一個腳色的class作為父類別
protected:
	static const int EXP_LV = 100;
	string name; //腳色有名字
	int level;      //等級
	int power;  //力量
	int knowledge; //知識
	int luck;  //幸運
	int exp;

	void levelUp(int poPlus, int knPlus, int luPlus); //等級升等時每個腳色的能力值會加多少,取決於職業是勇士或法師
public:
	Character();
	Character(string n, int lv, int po, int kn, int lu); //創造腳色需要初始化
	virtual ~Character();

	virtual void print(); //可以印出腳色資訊 //加上virtual讓子類別運行次序優先
	virtual void beatMonster(int exp) =0; //打怪得經驗值 //純虛擬函式父類別中一定不能執行，所以強迫子類別一定要overriding
	string getName();//回傳腳色名字
};

--------------------------in "Character.cpp"--------------------------

#include "Character.h"

Character::Character() {
	// TODO Auto-generated constructor stub
	name=" ";
	level = power = knowledge = luck = exp =0;
}

Character::~Character() {
	// TODO Auto-generated destructor stub
}

Character::Character(string n, int lv, int po, int kn, int lu):
		name(n), level(lv), exp(pow(lv-1,2)*EXP_LV),
		power(po), knowledge(kn), luck(lu)
{
}

void Character::print(){
	cout<<this->name //印出類似 Asher: 100 (374684/8888888), 1000-500-500
			<<": Level"<<this->level
			<<" ("<<this->exp<<"/"<<pow(this->level-1,2)*EXP_LV<<"), "
			<<this->power<<"-"<<this->knowledge<<"-"<<this->luck<<endl;
}

string Character::getName(){
	return this->name;
}
void Character::beatMonster(int exp){
	this->exp += exp;
	while(this->exp >= pow(this->level,2)*EXP_LV)
		this->levelUp(0, 0, 0);
}
void Character::levelUp(int poPlus, int knPlus, int luPlus){
	this->level++;
	this->power += poPlus;
	this->knowledge += knPlus;
	this->luck += luPlus;
}
