#pragma once

#include "includes.h"
#include "typeDef.h"

class StatsInfo
{
public:
	StatsInfo(stats_t str, stats_t dex, stats_t intel, stats_t feith, stats_t armor, stats_t elementalResistance);

	~StatsInfo() = default;

	// Getters
	stats_t getStrength() const { return m_Strength; }
	stats_t getDexterity() const { return m_Dexterity; }
	stats_t getIntelligence() const { return m_Intelligence; }
	stats_t getFeith() const { return m_Feith; }
	stats_t getArmor() const { return m_Armor; }
	stats_t getElementalResistance() const { return m_ElementalResistance; }

	// Setters
	void setStrength(stats_t str) { m_Strength = str; }
	void setDexterity(stats_t dex) { m_Dexterity = dex; }
	void setIntelligence(stats_t intel) { m_Intelligence = intel; }
	void setFeith(stats_t feith) { m_Feith = feith; }
	void setArmor(stats_t armor) { m_Armor = armor; }
	void setElementalResistance(stats_t elementalResistance) { m_ElementalResistance = elementalResistance; }

protected:
	stats_t m_Strength;
	stats_t m_Dexterity;
	stats_t m_Intelligence;
	stats_t m_Feith;
	stats_t m_Armor;				//physical damage reduction
	stats_t m_ElementalResistance;	//elemental damage reduction

	void increaseStats(stats_t str, stats_t dex, stats_t intel, stats_t feith, stats_t armor, stats_t elementalResistance);
};
