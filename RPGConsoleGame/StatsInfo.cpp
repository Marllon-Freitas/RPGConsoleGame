#include "StatsInfo.h"

StatsInfo::StatsInfo()
{
	m_Strength = 1;
	m_Dexterity = 1;
	m_Intelligence = 1;
	m_Feith = 1;
}

StatsInfo::StatsInfo(stats_t str, stats_t dex, stats_t intel, stats_t feith)
{
	m_Strength = str;
	m_Dexterity = dex;
	m_Intelligence = intel;
	m_Feith = feith;
}

void StatsInfo::increaseStats(stats_t str, stats_t dex, stats_t intel, stats_t feith)
{
	m_Strength += str;
	m_Dexterity += dex;
	m_Intelligence += intel;
	m_Feith += feith;
}
