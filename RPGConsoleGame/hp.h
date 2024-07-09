#pragma once

#include "hitPointTypes.h"

class hp
{
public:
	hp();

	// Getters
	hp_t getCurrentHP() const { return m_currentHP; }
	hp_t getMaxHP() const { return m_maxHP; }

	// Setters
	bool setMaxHP(hp_t newMaxHP);	// returns true if set successfully, false if not

	// Functions
	void takeDamage(hp_t damage);
	void heal(hp_t healAmount);

	~hp();

private:
	hp_t m_currentHP;
	hp_t m_maxHP;
};
