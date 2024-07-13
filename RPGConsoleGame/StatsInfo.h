#pragma once

#include "includes.h"
#include "typeDef.h"
#include "Buff.h"

class StatsInfo
{
public:
	StatsInfo(stats_t str, stats_t dex, stats_t intel, stats_t faith, stats_t armor, stats_t elementalResistance);

	~StatsInfo() = default;

	// Getters
	stats_t getBaseStrength() const { return m_BaseStrength; }
	stats_t getBaseDexterity() const { return m_BaseDexterity; }
	stats_t getBaseIntelligence() const { return m_BaseIntelligence; }
	stats_t getBaseFaith() const { return m_BaseFaith; }
	stats_t getBaseArmor() const { return m_BaseArmor; }
	stats_t getBaseElementalResistance() const { return m_BaseElementalResistance; }
	// Getters for total stats including buffs
	stats_t getTotalStrength() const { return m_BaseStrength + m_TotalStrengthFromBuffs; }
	stats_t getTotalDexterity() const { return m_BaseDexterity + m_TotalDexterityFromBuffs; }
	stats_t getTotalIntelligence() const { return m_BaseIntelligence + m_TotalIntelligenceFromBuffs; }
	stats_t getTotalFaith() const { return m_BaseFaith + m_TotalFaithFromBuffs; }
	stats_t getTotalArmor() const { return m_BaseArmor + m_TotalArmorFromBuffs; }
	stats_t getTotalElementalResistance() const { return m_BaseElementalResistance + m_TotalElementalResistanceFromBuffs; }

	// Setters
	void setStrength(stats_t str) { m_BaseStrength = str; }
	void setDexterity(stats_t dex) { m_BaseDexterity = dex; }
	void setIntelligence(stats_t intel) { m_BaseIntelligence = intel; }
	void setFaith(stats_t faith) { m_BaseFaith = faith; }
	void setArmor(stats_t armor) { m_BaseArmor = armor; }
	void setElementalResistance(stats_t elementalResistance) { m_BaseElementalResistance = elementalResistance; }

protected:
	// Buffs
	std::vector<Buff> m_Buffs;

	stats_t m_BaseStrength;
	stats_t m_BaseDexterity;
	stats_t m_BaseIntelligence;
	stats_t m_BaseFaith;
	stats_t m_BaseArmor;				//physical damage reduction
	stats_t m_BaseElementalResistance;	//elemental damage reduction

	// Stats with buffs
	stats_t m_TotalStrengthFromBuffs = 0;
	stats_t m_TotalDexterityFromBuffs = 0;
	stats_t m_TotalIntelligenceFromBuffs = 0;
	stats_t m_TotalFaithFromBuffs = 0;
	stats_t m_TotalArmorFromBuffs = 0;
	stats_t m_TotalElementalResistanceFromBuffs = 0;

	// Functions
	void increaseStats(stats_t str, stats_t dex, stats_t intel, stats_t faith, stats_t armor, stats_t elementalResistance);
	void addNewBuff(Buff buff);

private:
	void recalculateBuffs();
};
