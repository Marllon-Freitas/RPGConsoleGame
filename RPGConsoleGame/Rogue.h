#pragma once

#include "Hp.h"
#include "statsInfo.h"
#include "LevelSystem.h"

class Rogue : public Hp, public StatsInfo, public LevelSystem
{
public:
	Rogue();
	~Rogue() = default;

	// Getters

	// Setters

	// Functions
	void levelUp() override;

private:

};
