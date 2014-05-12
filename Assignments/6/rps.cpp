#include <iostream>

using namespace std;

class Tool {
public:
	char type;
	int strength;
	virtual void setStrength(int);
};

void Tool::setStrength(int s){
	strength = s;
}

class Rock : public Tool{
public:
	Rock(int);
	virtual bool fight(Tool);
};

class Scissors : public Tool{
public:
	Scissors(int);
	virtual bool fight(Tool);
};

class Paper : public Tool{
public:
	Paper(int);
	virtual bool fight(Tool);
};

/*
	Implement class Scissors
*/

bool Scissors::fight(Tool t) {
	if(t.type == 'r'){
		return ((this->strength/2) > t.strength);
	}
	else if(t.type == 'p'){
		return ((this->strength*2) > t.strength);
	}
	return true;
}

Scissors::Scissors(int s) {
	setStrength(s);
	type = 's';
}

/*
	Implement class Paper
*/


bool Paper::fight(Tool t) {
	if(t.type == 'r'){
		return ((this->strength*2) > t.strength);
	}
	else if(t.type == 's'){
		return ((this->strength/2) > t.strength);
	}
	return true;
}

Paper::Paper(int s) {
	setStrength(s);
	type = 'p';
}

/*
	Implement class Rock
*/

bool Rock::fight(Tool t) {
	if(t.type == 's'){
		return ((this->strength*2) > t.strength);
	}
	else if(t.type == 'p'){
		return ((this->strength/2) > t.strength);
	}
	return true;
}

Rock::Rock(int s) {
	setStrength(s);
	type = 'r';
}

int main() {
	// Example main function
	// You may add your own testing code if you like

	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}
