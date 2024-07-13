#include "Rogue.h"

static const hp_t ROGUE_BASE_HP = 12;
static const mp_t ROGUE_BASE_MP = 0;
static const stats_t ROGUE_BASE_STR = 2;
static const stats_t ROGUE_BASE_DEX = 4;
static const stats_t ROGUE_BASE_INT = 1;
static const stats_t ROGUE_BASE_FAITH = 1;
static const stats_t ROGUE_BASE_ARMOR = 0;
static const stats_t ROGUE_BASE_ELEMENTAL_RESISTANCE = 0;

static const hp_t ROGUE_HP_GROWTH = 6;
static const mp_t ROGUE_MP_GROWTH = 0;
static const stats_t ROGUE_STR_GROWTH = 1;
static const stats_t ROGUE_DEX_GROWTH = 2;
static const stats_t ROGUE_INT_GROWTH = 1;
static const stats_t ROGUE_FAITH_GROWTH = 1;
static const stats_t ROGUE_ARMOR_GROWTH = 0;
static const stats_t ROGUE_ELEMENTAL_RESISTANCE_GROWTH = 0;

Rogue::Rogue() : PlayerCharacterDelegate()
{
	// HP
	HP->setMax(ROGUE_BASE_HP);
	HP->increaseCurrent(ROGUE_BASE_HP);

	// MP
	if (MP)
	{
		MP->setMax(ROGUE_BASE_MP);
		MP->increaseCurrent(ROGUE_BASE_MP);
	}

	// Stats
	increaseStats(
		ROGUE_BASE_STR,
		ROGUE_BASE_DEX,
		ROGUE_BASE_INT,
		ROGUE_BASE_FAITH,
		ROGUE_BASE_ARMOR,
		ROGUE_BASE_ELEMENTAL_RESISTANCE
	);
}

void Rogue::levelUp()
{
	// HP
	HP->setMax(HP->getMax() + ROGUE_HP_GROWTH);
	HP->increaseCurrent(ROGUE_HP_GROWTH);

	// MP
	if (MP)
	{
		MP->setMax(MP->getMax() + ROGUE_MP_GROWTH);
		MP->increaseCurrent(ROGUE_BASE_MP);
	}

	// Stats
	increaseStats(
		ROGUE_STR_GROWTH,
		ROGUE_DEX_GROWTH,
		ROGUE_INT_GROWTH,
		ROGUE_FAITH_GROWTH,
		ROGUE_ARMOR_GROWTH,
		ROGUE_ELEMENTAL_RESISTANCE_GROWTH
	);
}
