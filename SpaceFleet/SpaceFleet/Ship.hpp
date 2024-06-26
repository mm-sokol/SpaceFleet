#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#ifndef SHIP_HPP
#define SHIP_HPP

enum formationType {
	none = 0, line = 1, matrix = 2, spear = 3, cube = 4
};

class Ship
{
public:
	Ship();
	Ship(const Ship& toCopyFrom);
	Ship(string name);
	virtual ~Ship();
	Ship& operator= (const Ship& other);
	
	string getName() const {return name;}
	double getVelocity() const {return velocity;}
	double getScope() const {return scope;}
	double getDurability() const {return durability;}
	
	virtual double getCombatValue() const {
//		cout << "Dziala Ship::getCombatValue" << endl;
		return 0;
	}
	
	virtual double getCapacity() const {
//		cout << "Dziala Ship::getCapacity" << endl;
		return 0;
	} 
	
	formationType getFormation() const {return formation;}
	string formationToString() const;
	
	void setName(string name) {this->name = name;}
	void setVelocity(double velocity) {this->velocity = velocity;}
	void setScope(double scope) {this->scope = scope;}
	void setDurability(double durability) {this->durability = durability;}
	void setFormation(formationType formation) {this->formation = formation;}
	
	static unsigned int getNumberOfShips() {return numberOfShips;}
	
	virtual void display();
	
protected:
	static unsigned int numberOfShips;
	
private:
	string name;
	double velocity;
	double scope;
	double durability;
	formationType formation;


};

#endif // SHIP_HPP
