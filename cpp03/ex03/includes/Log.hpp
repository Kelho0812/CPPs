#pragma once

#include <iostream>
#include <string>

#define cout std::cout
#define endl std::endl
#define string std::string

class Log
{
	public:
	void constructorLog(string type, string name);
	void destructorLog(string type, string name);
	void noEnergyLog(string type, string name);
	void attackLog(string type, string name, string target, int attackDamage);
	void beRepairedLog(string type, string name, unsigned amount, int hitPoint, int energyPoints);
	void takeDamageLog(string type, string name,unsigned int amount, int hitPoint);
	void guardGateLog(string type, string name);
	void ScavTrapAttackLog(string type, string name, string target, int attackDamage);
	void highFiveGuysLog(string type, string name);
};