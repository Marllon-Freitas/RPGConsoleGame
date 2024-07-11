#pragma once

#include "includes.h"
#include "typeDef.h"

class StatsInfo
{
public:
	StatsInfo();

	StatsInfo(stats_t str, stats_t dex, stats_t intel, stats_t feith);

	~StatsInfo() = default;

	// Getters
	stats_t getStrength() const { return m_Strength; }
	stats_t getDexterity() const { return m_Dexterity; }
	stats_t getIntelligence() const { return m_Intelligence; }
	stats_t getFeith() const { return m_Feith; }

	// Setters
	void setStrength(stats_t str) { m_Strength = str; }
	void setDexterity(stats_t dex) { m_Dexterity = dex; }
	void setIntelligence(stats_t intel) { m_Intelligence = intel; }
	void setFeith(stats_t feith) { m_Feith = feith; }

protected:
	stats_t m_Strength;
	stats_t m_Dexterity;
	stats_t m_Intelligence;
	stats_t m_Feith;

	void increaseStats(stats_t str, stats_t dex, stats_t intel, stats_t feith);
};
