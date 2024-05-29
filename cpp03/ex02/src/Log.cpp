#include "../includes/Log.hpp"

void Log::noEnergyLog(string type, string name)
{
	cout << type << " " << name << " has no energy left." << endl;
}

void Log::constructorLog(string type, string name)
{
	cout << "🤖   " << type << " " << name << " was constructed."
		 << endl;
}

void Log::destructorLog(string type, string name)
{
	cout << "💀   " << type << " " << name << " was destroyed." << endl;
}

void Log::attackLog(string type, string name, string target, int attackDamage)
{
	cout << "🗡️    " << type << " " << name << " attacks " << target
		 << " causing " << attackDamage << " points of damage!" << endl;
}

void Log::beRepairedLog(string type, string name, unsigned int amount, int hitPoint, int energyPoints)
{
	cout << "❤️‍🩹  " << type << " " << name << " was repaired for "
		 << amount << " hit points." << endl;
	cout << "❤️‍🩹  ClapTrap " << name << " has now "
		 << hitPoint << " hit points left." << endl;
	cout << "❤️‍🩹  ClapTrap " << name << " has now "
		 << energyPoints << " energy points." << endl;
}

void Log::takeDamageLog(string type, string name,unsigned int amount, int hitPoint)
{
	cout << "💔   " << type << " " << name << " takes " << amount
		 << " points of damage !" << endl;
	cout << "💔   " << type << " " << name << " has now " << hitPoint
		 << " hit points left." << endl;
}

void Log::guardGateLog(string type, string name)
{
	cout << "⛨    " << type << " " << name << " is now on Gate Keeper mode." << endl;
}

void Log::highFiveGuysLog(string type, string name)
{
	cout << "🖐    " << type << " " << name << " is giving everyone an High Five! " << endl;
}
