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
		std::cout
			<< "---------------------------------------\n"
			<< "|            Character Info           |\n"
			<< "---------------------------------------\n"
			<< "| Class:       " << cleric.getClassName() << "                 |\n"
			<< "| Level:       " << cleric.getCurrentLevel() << "                      |\n"
			<< "---------------------------------------\n"
			<< "| Experience:  " << cleric.getCurrentExperience() << " / " << cleric.getExperienceToNextLevel() << "                |\n"
			<< "| HP:          " << cleric.getCurrentHP() << " / " << cleric.getMaxHP() << "                |\n"
			<< "| MP:          " << cleric.getCurrentMP() << " / " << cleric.getMaxMP() << "                |\n"
			<< "---------------------------------------\n"
			<< "|               Stats                 |\n"
			<< "---------------------------------------\n"
			<< "| STR:         " << cleric.getStrength() << "                      |\n"
			<< "| DEX:         " << cleric.getDexterity() << "                      |\n"
			<< "| INT:         " << cleric.getIntelligence() << "                      |\n"
			<< "| FAITH:       " << cleric.getFaith() << "                      |\n"
			<< "| ARMOR:       " << cleric.getArmor() << "                      |\n"
			<< "| E. RES:      " << cleric.getElementalResistance() << "                      |\n"
			<< "---------------------------------------\n";

		auto abilities = cleric.getAbilities();
		std::cout
			<< "|            Abilities                |\n"
			<< "---------------------------------------\n";
		for (const auto& ability : abilities)
		{
			std::cout
				<< "| Name:        " << ability.m_Name << "\n"
				<< "| Description: " << ability.m_Description << "\n"
				<< "| MP Cost:     " << ability.m_Cost << "\n"
				<< "---------------------------------------\n";
		}

		cleric.gainExperience(100);
	}

	return 0;
}
