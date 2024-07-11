#pragma once

#include "Hp.h"
#include "statsInfo.h"
#include "LevelSystem.h"

class Wizard : public Hp, public StatsInfo, public LevelSystem
{
public:
	Wizard();
	~Wizard() = default;

	// Getters

	// Setters

	// Functions
	void levelUp() override;

private:

};
