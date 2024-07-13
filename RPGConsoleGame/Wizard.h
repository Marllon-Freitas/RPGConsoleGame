#pragma once

#include "statsInfo.h"
#include "PlayerCharacter.h"

class Wizard : public PlayerCharacterDelegate
{
public:
	Wizard();
	~Wizard() = default;

	// Getters
	std::string getClassName() override { return std::string("Wizard"); }

private:
	void levelUp() override;
};
