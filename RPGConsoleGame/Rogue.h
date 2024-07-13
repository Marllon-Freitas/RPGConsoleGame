#pragma once

#include "statsInfo.h"
#include "PlayerCharacter.h"

class Rogue : public PlayerCharacterDelegate
{
public:
	Rogue();
	~Rogue() = default;

	// Getters
	std::string getClassName() override { return std::string("Rogue"); }

private:
	void levelUp() override;
};
