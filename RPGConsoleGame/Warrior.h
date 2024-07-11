#pragma once

#include "Hp.h"
#include "statsInfo.h"
#include "LevelSystem.h"

class Warrior : public Hp, public StatsInfo, public LevelSystem
{
public:
	Warrior();
	~Warrior() = default;

	// Getters

	// Setters

	// Functions
	void levelUp() override;

private:

};
