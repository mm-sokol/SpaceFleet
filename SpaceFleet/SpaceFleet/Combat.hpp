#ifndef COMBAT_HPP
#define COMBAT_HPP

#include <iostream>
#include <string>
#include <ctime>
#include "Ship.hpp"
#include "Weapon.hpp"
#include "Arsenal.hpp"


using namespace std;

class Combat : public Ship
{
public:
	Combat();
	Combat(const Combat& toCopyFrom);
	Combat(string name);
	~Combat();
	Combat& operator= (const Combat& other);
	
	void display();
	void setWeapon(Weapon* weapon);
	void loseWeapon();
	
	static unsigned int getNumberOfCombat() {return numberOfCombat;}
	double getVelocity() const;
	double getScope() const;
	double getDurability() const;
	double getCombatValue() const;
	Weapon* getWeapon() {
		if(this->weapon) {
			return weapon;
		}
		else return NULL;
	}
	
private:
	double combatValue;
	Weapon * weapon;
	
	static unsigned int numberOfCombat;
};

#endif // COMBAT_HPP
