#pragma once

#include "statsInfo.h"
#include "PlayerCharacter.h"

class Warrior : public PlayerCharacterDelegate
{
public:
	Warrior();
	~Warrior() = default;

	// Getters
	std::string getClassName() override { return std::string("Warrior"); }

private:
	void levelUp() override;
};
