#include "Warrior.h"

static const hp_t WARRIOR_BASE_HP = 19;
static const mp_t WARRIOR_BASE_MP = 0;
static const stats_t WARRIOR_BASE_STR = 4;
static const stats_t WARRIOR_BASE_DEX = 2;
static const stats_t WARRIOR_BASE_INT = 1;
static const stats_t WARRIOR_BASE_FAITH = 1;
static const stats_t WARRIOR_BASE_ARMOR = 1;
static const stats_t WARRIOR_BASE_ELEMENTAL_RESISTANCE = 0;

static const hp_t WARRIOR_HP_GROWTH = 9;
static const mp_t WARRIOR_MP_GROWTH = 0;
static const stats_t WARRIOR_STR_GROWTH = 2;
static const stats_t WARRIOR_DEX_GROWTH = 1;
static const stats_t WARRIOR_INT_GROWTH = 1;
static const stats_t WARRIOR_FAITH_GROWTH = 1;
static const stats_t WARRIOR_ARMOR_GROWTH = 1;
static const stats_t WARRIOR_ELEMENTAL_RESISTANCE_GROWTH = 0;

Warrior::Warrior() : PlayerCharacterDelegate()
{
	// HP
	HP->setMax(WARRIOR_BASE_HP);
	HP->increaseCurrent(WARRIOR_BASE_HP);

	// MP
	if (MP)
	{
		MP->setMax(WARRIOR_BASE_MP);
		MP->increaseCurrent(WARRIOR_BASE_MP);
	}

	// Stats
	increaseStats(
		WARRIOR_BASE_STR,
		WARRIOR_BASE_DEX,
		WARRIOR_BASE_INT,
		WARRIOR_BASE_FAITH
		,
		WARRIOR_BASE_ARMOR,
		WARRIOR_BASE_ELEMENTAL_RESISTANCE
	);
}

void Warrior::levelUp()
{
	// HP
	HP->setMax(HP->getMax() + WARRIOR_HP_GROWTH);
	HP->increaseCurrent(WARRIOR_HP_GROWTH);

	// MP
	if (MP)
	{
		MP->setMax(MP->getMax() + WARRIOR_MP_GROWTH);
		MP->increaseCurrent(WARRIOR_BASE_MP);
	}

	// Stats
	increaseStats(
		WARRIOR_STR_GROWTH,
		WARRIOR_DEX_GROWTH,
		WARRIOR_INT_GROWTH,
		WARRIOR_FAITH_GROWTH,
		WARRIOR_ARMOR_GROWTH,
		WARRIOR_ELEMENTAL_RESISTANCE_GROWTH
	);
}
