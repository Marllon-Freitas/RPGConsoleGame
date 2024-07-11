#pragma once

#include "Hp.h"
#include "statsInfo.h"
#include "LevelSystem.h"

class Cleric : public Hp, public StatsInfo, public LevelSystem
{
public:
	Cleric();
	~Cleric() = default;

	// Getters

	// Setters

	// Functions
	void levelUp() override;

private:

};
