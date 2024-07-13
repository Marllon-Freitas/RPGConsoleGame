#include "StatsInfo.h"

StatsInfo::StatsInfo(
	stats_t str = 1,
	stats_t dex = 1,
	stats_t intel = 1,
	stats_t faith = 1,
	stats_t armor = 0,
	stats_t elementalResistance = 0
)
{
	m_Strength = str;
	m_Dexterity = dex;
	m_Intelligence = intel;
	m_Faith = faith;
	m_Armor = armor;
	m_ElementalResistance = elementalResistance;
}

void StatsInfo::increaseStats(
	stats_t str = 0,
	stats_t dex = 0,
	stats_t intel = 0,
	stats_t faith = 0,
	stats_t armor = 0,
	stats_t elementalResistance = 0
)
{
	m_Strength += str;
	m_Dexterity += dex;
	m_Intelligence += intel;
	m_Faith += faith;
	m_Armor += armor;
	m_ElementalResistance += elementalResistance;
}
