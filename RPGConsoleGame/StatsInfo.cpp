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
	m_BaseStrength = str;
	m_BaseDexterity = dex;
	m_BaseIntelligence = intel;
	m_BaseFaith = faith;
	m_BaseArmor = armor;
	m_BaseElementalResistance = elementalResistance;
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
	m_BaseStrength += str;
	m_BaseDexterity += dex;
	m_BaseIntelligence += intel;
	m_BaseFaith += faith;
	m_BaseArmor += armor;
	m_BaseElementalResistance += elementalResistance;
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
	stats_t totalStrFromBuffs = 0;
	stats_t totalDexFromBuffs = 0;
	stats_t totalIntFromBuffs = 0;
	stats_t totalFaithFromBuffs = 0;
	stats_t totalArmorFromBuffs = 0;
	stats_t totalElementalResistanceFromBuffs = 0;

	for (auto& buff : m_Buffs)
	{
		if (buff.isDebuff)
		{
			totalStrFromBuffs -= buff.m_Strength;
			totalDexFromBuffs -= buff.m_Dexterity;
			totalIntFromBuffs -= buff.m_Intelligence;
			totalFaithFromBuffs -= buff.m_Faith;
			totalArmorFromBuffs -= buff.m_Armor;
			totalElementalResistanceFromBuffs += buff.m_ElementalResistance;
		}
		else {
			totalStrFromBuffs += buff.m_Strength;
			totalDexFromBuffs += buff.m_Dexterity;
			totalIntFromBuffs += buff.m_Intelligence;
			totalFaithFromBuffs += buff.m_Faith;
			totalArmorFromBuffs += buff.m_Armor;
			totalElementalResistanceFromBuffs += buff.m_ElementalResistance;
		}
	}

	m_TotalStrengthFromBuffs = totalStrFromBuffs;
	m_TotalDexterityFromBuffs = totalDexFromBuffs;
	m_TotalIntelligenceFromBuffs = totalIntFromBuffs;
	m_TotalFaithFromBuffs = totalFaithFromBuffs;
	m_TotalArmorFromBuffs = totalArmorFromBuffs;
	m_TotalElementalResistanceFromBuffs = totalElementalResistanceFromBuffs;

	std::cout << "totalStrFromBuffsaaaaaaaaaaaaaaaaaa: " << m_TotalStrengthFromBuffs << std::endl;

	if (m_TotalStrengthFromBuffs < 0) m_TotalStrengthFromBuffs = 0;
	if (m_TotalDexterityFromBuffs < 0) m_TotalDexterityFromBuffs = 0;
	if (m_TotalIntelligenceFromBuffs < 0) m_TotalIntelligenceFromBuffs = 0;
	if (m_TotalFaithFromBuffs < 0) m_TotalFaithFromBuffs = 0;
	if (m_TotalArmorFromBuffs < 0) m_TotalArmorFromBuffs = 0;
	if (m_TotalElementalResistanceFromBuffs < 0) m_TotalElementalResistanceFromBuffs = 0;
}
