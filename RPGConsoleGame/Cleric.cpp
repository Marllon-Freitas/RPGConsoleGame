#include "Cleric.h"

static const hp_t CLERIC_BASE_HP = 14;
static const mp_t CLERIC_BASE_MP = 10;
static const stats_t CLERIC_BASE_STR = 3;
static const stats_t CLERIC_BASE_DEX = 1;
static const stats_t CLERIC_BASE_INT = 5;
static const stats_t CLERIC_BASE_FAITH = 6;
static const stats_t CLERIC_BASE_ARMOR = 0;
static const stats_t CLERIC_BASE_ELEMENTAL_RESISTANCE = 0;

static const hp_t CLERIC_HP_GROWTH = 7;
static const mp_t CLERIC_MP_GROWTH = 5;
static const stats_t CLERIC_STR_GROWTH = 1;
static const stats_t CLERIC_DEX_GROWTH = 1;
static const stats_t CLERIC_INT_GROWTH = 2;
static const stats_t CLERIC_FAITH_GROWTH = 3;
static const stats_t CLERIC_ARMOR_GROWTH = 0;
static const stats_t CLERIC_ELEMENTAL_RESISTANCE_GROWTH = 0;

Cleric::Cleric() : PlayerCharacterDelegate()
{
	MP = std::make_unique<PointManager>(CLERIC_BASE_MP, CLERIC_BASE_MP);

	// HP
	HP->setMax(CLERIC_BASE_HP);
	HP->increaseCurrent(CLERIC_BASE_HP);

	// MP
	if (MP)
	{
		MP->setMax(CLERIC_BASE_MP);
		MP->increaseCurrent(CLERIC_BASE_MP);
	}

	// Stats
	increaseStats(
		CLERIC_BASE_STR,
		CLERIC_BASE_DEX,
		CLERIC_BASE_INT,
		CLERIC_BASE_FAITH,
		CLERIC_BASE_ARMOR,
		CLERIC_BASE_ELEMENTAL_RESISTANCE
	);

	// Abilities
	abilities.emplace_back(
		"Simple Heal",
		"Restores a small amount of HP to the target",
		2,
		1,
		ABILITY_TARGET::ALLY,
		2,
		ABILITY_SCALING::INT
	);
}

void Cleric::levelUp()
{
	// HP
	HP->setMax(HP->getMax() + CLERIC_HP_GROWTH);
	HP->increaseCurrent(CLERIC_HP_GROWTH);

	// MP
	if (MP)
	{
		MP->setMax(MP->getMax() + CLERIC_MP_GROWTH);
		MP->increaseCurrent(CLERIC_BASE_MP);
	}

	// Stats
	increaseStats(
		CLERIC_STR_GROWTH,
		CLERIC_DEX_GROWTH,
		CLERIC_INT_GROWTH,
		CLERIC_FAITH_GROWTH,
		CLERIC_ARMOR_GROWTH,
		CLERIC_ELEMENTAL_RESISTANCE_GROWTH
	);

	// Abilities
	if (m_currentLevel == 2)
	{
		abilities.emplace_back(
			"Smite",
			"Deals damage to the target",
			3,
			1,
			ABILITY_TARGET::ENEMY,
			3,
			ABILITY_SCALING::INT
		);
	}
}
