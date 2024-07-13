#include "includes.h"
#include "PlayerCharacter.h"

// Include all the classes
#include "Cleric.h"
#include "Rogue.h"
#include "Warrior.h"
#include "Wizard.h"


int main()
{
	PlayerCharacter cleric(new Cleric());

	for (int i = 0; i < 2; i++)
	{
		std::cout << "---------------------------------------\n"
			<< "|            Character Info           |\n"
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
			<< "| ARMOR:      " << cleric.getArmor() << "                       |\n"
			<< "| E. RES:     " << cleric.getElementalResistance() << "                       |\n"
			<< "---------------------------------------\n";
		cleric.gainExperience(100);
	}

	return 0;
}
