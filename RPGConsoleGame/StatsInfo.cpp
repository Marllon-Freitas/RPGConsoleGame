#include "StatsInfo.h"

StatsInfo::StatsInfo(
	stats_t str = 1,
	stats_t dex = 1,
	stats_t intel = 1,
	stats_t feith = 1,
	stats_t armor = 0,
	stats_t elementalResistance = 0
)
{
	m_Strength = str;
	m_Dexterity = dex;
	m_Intelligence = intel;
	m_Feith = feith;
	m_Armor = armor;
	m_ElementalResistance = elementalResistance;
}

void StatsInfo::increaseStats(
	stats_t str = 0,
	stats_t dex = 0,
	stats_t intel = 0,
	stats_t feith = 0,
	stats_t armor = 0,
	stats_t elementalResistance = 0
)
{
	m_Strength += str;
	m_Dexterity += dex;
	m_Intelligence += intel;
	m_Feith += feith;
	m_Armor += armor;
	m_ElementalResistance += elementalResistance;
}
