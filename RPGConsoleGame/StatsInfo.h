#pragma once

#include "includes.h"
#include "typeDef.h"
#include "CoreStats.h"
#include "Buff.h"

class StatsInfo
{
public:
	StatsInfo(stats_t str, stats_t dex, stats_t intel, stats_t faith, stats_t armor, stats_t elementalResistance);

	~StatsInfo() = default;

	// Getters
	stats_t getBaseStrength() const { return m_BaseStats.strength; }
	stats_t getBaseDexterity() const { return m_BaseStats.dexterity; }
	stats_t getBaseIntelligence() const { return m_BaseStats.intelligence; }
	stats_t getBaseFaith() const { return m_BaseStats.faith; }
	stats_t getBaseArmor() const { return m_BaseStats.armor; }
	stats_t getBaseElementalResistance() const { return m_BaseStats.elementalResistance; }
	// Getters for total stats including buffs
	stats_t getTotalStrength() const { return m_StatsFromBuffs.strength + m_BaseStats.strength; }
	stats_t getTotalDexterity() const { return m_StatsFromBuffs.dexterity + m_BaseStats.dexterity; }
	stats_t getTotalIntelligence() const { return m_StatsFromBuffs.intelligence + m_BaseStats.intelligence; }
	stats_t getTotalFaith() const { return m_StatsFromBuffs.faith + m_BaseStats.faith; }
	stats_t getTotalArmor() const { return m_StatsFromBuffs.armor + m_BaseStats.armor; }
	stats_t getTotalElementalResistance() const { return m_StatsFromBuffs.elementalResistance + m_BaseStats.elementalResistance; }

	// Setters
	void setStrength(stats_t str) { m_BaseStats.strength = str; }
	void setDexterity(stats_t dex) { m_BaseStats.dexterity = dex; }
	void setIntelligence(stats_t intel) { m_BaseStats.intelligence = intel; }
	void setFaith(stats_t faith) { m_BaseStats.faith = faith; }
	void setArmor(stats_t armor) { m_BaseStats.armor = armor; }
	void setElementalResistance(stats_t elementalResistance) { m_BaseStats.elementalResistance = elementalResistance; }

protected:
	// Buffs
	std::vector<Buff> m_Buffs;

	// Base stats
	CoreStats m_BaseStats;

	// Stats with buffs
	CoreStats m_StatsFromBuffs;

	// Functions
	void increaseStats(stats_t str, stats_t dex, stats_t intel, stats_t faith, stats_t armor, stats_t elementalResistance);
	void increaseStats(CoreStats stats);
	void addNewBuff(Buff buff);

private:
	void recalculateBuffs();
};
