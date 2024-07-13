#pragma once

#include "statsInfo.h"
#include "PlayerCharacter.h"

class Cleric : public PlayerCharacterDelegate
{
public:
	Cleric();
	~Cleric() = default;

	// Getters
	std::string getClassName() override { return std::string("Cleric"); }

private:
	void levelUp() override;
};
