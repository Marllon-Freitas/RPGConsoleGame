#include "includes.h"
#include "allCLassesIncludes.h"

int main()
{
	// Cleric
	Cleric cleric;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Level: " << cleric.getCurrentLevel() << std::endl;
		std::cout << "Experience: " << "(" << cleric.getCurrentExperience() << "\\" << cleric.getExperienceToNextLevel() << ")" << std::endl;
		std::cout << "HP: " << cleric.getMaxHP() << std::endl;
		std::cout << "Strength: " << cleric.getStrength() << std::endl;
		std::cout << "Dexterity: " << cleric.getDexterity() << std::endl;
		std::cout << "Intelligence: " << cleric.getIntelligence() << std::endl;
		std::cout << "Feith: " << cleric.getFeith() << std::endl;
		std::cout << std::endl;
		cleric.gainExperience(100);
	}

	return 0;
}
