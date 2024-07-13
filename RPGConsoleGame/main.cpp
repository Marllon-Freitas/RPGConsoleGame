#include "includes.h"
#include "PlayerCharacter.h"

// Include all the classes
#include "Cleric.h"
#include "Rogue.h"
#include "Warrior.h"
#include "Wizard.h"


int main()
{
	PlayerCharacter cleric(new Warrior());

	for (int i = 0; i < 2; i++)
	{
		std::cout << "---------------------------------------\n"
			<< "|            Character Stats          |\n"
			<< "---------------------------------------\n"
			<< "| Class:      " << cleric.getClassName() << "                  |\n"
			<< "| Level:      " << cleric.getCurrentLevel() << "                       |\n"
			<< "---------------------------------------\n"
			<< "| Experience: " << cleric.getCurrentExperience() << " / " << cleric.getExperienceToNextLevel() << "               |\n"
			<< "| HP:         " << cleric.getCurrentHP() << " / " << cleric.getMaxHP() << "                 |\n"
			<< "---------------------------------------\n"
			<< "|               Stats                 |\n"
			<< "---------------------------------------\n"
			<< "| STR:        " << cleric.getStrength() << "                       |\n"
			<< "| DEX:        " << cleric.getDexterity() << "                       |\n"
			<< "| INT:        " << cleric.getIntelligence() << "                       |\n"
			<< "| FEITH:      " << cleric.getFeith() << "                      |\n"
			<< "---------------------------------------\n";
		cleric.gainExperience(100);
	}

	return 0;
}
