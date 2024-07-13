#pragma once

#include "includes.h"

enum class ABILITY_TARGET
{
	SELF,
	ENEMY,
	ALLY,
	ALL_ENEMIES,
	ALL_ALLIES,
};

enum class ABILITY_SCALING
{
	NONE,
	STR,
	DEX,
	INT,
	FAITH,
};

struct Ability
{
	Ability(
		std::string name,
		std::string description,
		unsigned int cost,
		unsigned int cooldown,
		ABILITY_TARGET target,
		unsigned int hpEffect,
		ABILITY_SCALING scaling
	)
		: m_Name(name),
		m_Description(description),
		m_Cost(cost),
		m_Cooldown(cooldown),
		m_Target(target),
		m_HpEffect(hpEffect),
		m_Scaling(scaling)
	{}

	std::string m_Name = "unnamed";
	std::string m_Description = "no description";
	unsigned int m_Cost = 0;						// MP cost
	unsigned int m_Cooldown = 1;					// Turns to wait before using again
	ABILITY_TARGET m_Target = ABILITY_TARGET::SELF;
	unsigned int m_HpEffect = 1;
	ABILITY_SCALING m_Scaling = ABILITY_SCALING::NONE;
};
