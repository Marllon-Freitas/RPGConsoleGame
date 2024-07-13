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
			<< "| STR:         " << cleric.getTotalStrength() << "                      |\n"
			<< "| DEX:         " << cleric.getTotalDexterity() << "                      |\n"
			<< "| INT:         " << cleric.getTotalIntelligence() << "                      |\n"
			<< "| FAITH:       " << cleric.getTotalFaith() << "                      |\n"
			<< "| ARMOR:       " << cleric.getTotalArmor() << "                      |\n"
			<< "| E. RES:      " << cleric.getTotalElementalResistance() << "                      |\n"
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

		if (i < 1) {
			cleric.gainExperience(100);
			Buff armorBuff(
				"Armor Buff",
				"Boost armor by 5",
				0,
				4,
				0,
				0,
				0,
				0,
				0,
				true
			);
			cleric.applyBuff(armorBuff);
		}
	}

	return 0;
}
