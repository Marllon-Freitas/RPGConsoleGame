#pragma once

#include "includes.h"
#include "StatsInfo.h"
#include "typeDef.h"

struct Buff
{
	CoreStats m_BuffedStats;

	Buff(
		std::string name,
		std::string description,
		stats_t duration,
		bool isDebuff,
		stats_t strength,
		stats_t dexterity,
		stats_t intelligence,
		stats_t faith,
		stats_t armor,
		stats_t elementalResistance
	) :
		m_Name(name),
		m_Description(description),
		m_Duration(duration),
		isDebuff(isDebuff)
	{
		m_BuffedStats.strength = strength;
		m_BuffedStats.dexterity = dexterity;
		m_BuffedStats.intelligence = intelligence;
		m_BuffedStats.faith = faith;
		m_BuffedStats.armor = armor;
		m_BuffedStats.elementalResistance = elementalResistance;
	}

	Buff(
		std::string name,
		std::string description,
		stats_t duration,
		bool isDebuff,
		CoreStats stats
	) :
		m_Name(name),
		m_Description(description),
		m_Duration(duration),
		isDebuff(isDebuff)
	{
		m_BuffedStats = stats;
	}

	bool isDebuff = false;

	std::string m_Name = "unnamed";
	std::string m_Description = "no description";
	stats_t m_Duration = 2;
};
