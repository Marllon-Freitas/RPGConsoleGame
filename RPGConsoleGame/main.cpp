#include "includes.h"
#include "allCLassesIncludes.h"

int main()
{
	// Cleric
	Cleric cleric;
	std::cout << "Cleric: " << std::endl;
	std::cout << "HP: " << cleric.getCurrentHP() << std::endl;
	std::cout << "Strength: " << cleric.getStrength() << std::endl;
	std::cout << "Dexterity: " << cleric.getDexterity() << std::endl;
	std::cout << "Intelligence: " << cleric.getIntelligence() << std::endl;
	std::cout << "Feith: " << cleric.getFeith() << std::endl;


	// Rogue
	Rogue rogue;
	std::cout << "Rogue: " << std::endl;
	std::cout << "HP: " << rogue.getCurrentHP() << std::endl;
	std::cout << "Strength: " << rogue.getStrength() << std::endl;
	std::cout << "Dexterity: " << rogue.getDexterity() << std::endl;
	std::cout << "Intelligence: " << rogue.getIntelligence() << std::endl;
	std::cout << "Feith: " << rogue.getFeith() << std::endl;

	// Warrior
	Warrior warrior;
	std::cout << "Warrior: " << std::endl;
	std::cout << "HP: " << warrior.getCurrentHP() << std::endl;
	std::cout << "Strength: " << warrior.getStrength() << std::endl;
	std::cout << "Dexterity: " << warrior.getDexterity() << std::endl;
	std::cout << "Intelligence: " << warrior.getIntelligence() << std::endl;
	std::cout << "Feith: " << warrior.getFeith() << std::endl;

	// Wizard
	Wizard wizard;
	std::cout << "Wizard: " << std::endl;
	std::cout << "HP: " << wizard.getCurrentHP() << std::endl;
	std::cout << "Strength: " << wizard.getStrength() << std::endl;
	std::cout << "Dexterity: " << wizard.getDexterity() << std::endl;
	std::cout << "Intelligence: " << wizard.getIntelligence() << std::endl;
	std::cout << "Feith: " << wizard.getFeith() << std::endl;

	return 0;
}
