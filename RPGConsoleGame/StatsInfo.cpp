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
	m_BaseStats.strength = str;
	m_BaseStats.dexterity = dex;
	m_BaseStats.intelligence = intel;
	m_BaseStats.faith = faith;
	m_BaseStats.armor = armor;
	m_BaseStats.elementalResistance = elementalResistance;
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
	m_BaseStats.strength += str;
	m_BaseStats.dexterity += dex;
	m_BaseStats.intelligence += intel;
	m_BaseStats.faith += faith;
	m_BaseStats.armor += armor;
	m_BaseStats.elementalResistance += elementalResistance;
}

void StatsInfo::increaseStats(CoreStats stats)
{
	m_BaseStats += stats;
}

void StatsInfo::addNewBuff(Buff buff)
{
	for (auto& b : m_Buffs)
	{
		if (b.m_Name == buff.m_Name)
		{
			b.m_Duration = buff.m_Duration;
			return;
		}
	}

	m_Buffs.push_back(buff);

	recalculateBuffs();
}

void StatsInfo::recalculateBuffs()
{
	CoreStats tempTotalStats = m_BaseStats;

	for (const auto& buff : m_Buffs)
	{
		if (buff.isDebuff)
		{
			tempTotalStats -= buff.m_BuffedStats;
		}
		else {
			tempTotalStats += buff.m_BuffedStats;
		}
	}

	m_StatsFromBuffs = tempTotalStats;
}
