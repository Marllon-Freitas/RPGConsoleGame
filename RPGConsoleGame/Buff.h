#pragma once

#include "includes.h"
#include "typeDef.h"

struct Buff
{
	Buff(
		std::string name,
		std::string description,
		stats_t duration,
		stats_t strength,
		stats_t dexterity,
		stats_t intelligence,
		stats_t faith,
		stats_t armor,
		stats_t elementalResistance,
		bool isDebuff
	) :
		m_Name(name),
		m_Description(description),
		m_Duration(duration),
		m_Strength(strength),
		m_Dexterity(dexterity),
		m_Intelligence(intelligence),
		m_Faith(faith),
		m_Armor(armor),
		m_ElementalResistance(elementalResistance),
		isDebuff(isDebuff)
	{}


	bool isDebuff = false;

	std::string m_Name = "unnamed";
	std::string m_Description = "no description";
	stats_t m_Duration = 2;

	stats_t m_Strength = 0;
	stats_t m_Dexterity = 0;
	stats_t m_Intelligence = 0;
	stats_t m_Faith = 0;
	stats_t m_Armor = 0;
	stats_t m_ElementalResistance = 0;
};
