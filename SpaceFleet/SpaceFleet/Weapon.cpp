#include "Weapon.hpp"

string spacing(int, int);
int numLength(int);


Weapon::Weapon() {
	cout<< "Dziala domyslny konstruktor Weapon" <<endl;
	srand( time( NULL ) );
	this->name = "Random Weapon";
	this->velocityInfluence = -rand()%100;
	this->scopeInfluence = -rand()%100;
	this->durabilityInfluence = rand()%100 - 50;
	this->combatValue = 100 + rand()%900;
}

Weapon::Weapon(string name, int velocityInfluence, int scopeInfluence, int durabilityInfluence, int combatValue)
{
	cout<< "Dziala konstruktor Weapon" <<endl;
	this->name = name;
	this->velocityInfluence = velocityInfluence;
	this->scopeInfluence = scopeInfluence;
	this->durabilityInfluence = durabilityInfluence;
	this->combatValue = combatValue;
}

Weapon::~Weapon()
{
}

void Weapon::display() {
	int width = 6;
	
	cout<< setw(width) << left << this->name << right
		<< setw(width) << this->velocityInfluence
		<< setw(width) << this->scopeInfluence
		<< setw(width) << this->durabilityInfluence
		<< setw(width) << this->combatValue <<endl;
}

