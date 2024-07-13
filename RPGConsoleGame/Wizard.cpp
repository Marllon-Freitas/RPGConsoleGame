#include "Wizard.h"

static const hp_t WIZARD_BASE_HP = 10;
static const mp_t WIZARD_BASE_MP = 14;
static const stats_t WIZARD_BASE_STR = 1;
static const stats_t WIZARD_BASE_DEX = 2;
static const stats_t WIZARD_BASE_INT = 8;
static const stats_t WIZARD_BASE_FAITH = 1;
static const stats_t WIZARD_BASE_ARMOR = 0;
static const stats_t WIZARD_BASE_ELEMENTAL_RESISTANCE = 0;

static const hp_t WIZARD_HP_GROWTH = 4;
static const mp_t WIZARD_MP_GROWTH = 3;
static const stats_t WIZARD_STR_GROWTH = 1;
static const stats_t WIZARD_DEX_GROWTH = 1;
static const stats_t WIZARD_INT_GROWTH = 2;
static const stats_t WIZARD_FAITH_GROWTH = 1;
static const stats_t WIZARD_ARMOR_GROWTH = 0;
static const stats_t WIZARD_ELEMENTAL_RESISTANCE_GROWTH = 0;

Wizard::Wizard() : PlayerCharacterDelegate()
{
	// HP
	HP->setMax(WIZARD_BASE_HP);
	HP->increaseCurrent(WIZARD_BASE_HP);

	// MP
	if (MP)
	{
		MP->setMax(WIZARD_BASE_MP);
		MP->increaseCurrent(WIZARD_BASE_MP);
	}

	increaseStats(
		WIZARD_BASE_STR,
		WIZARD_BASE_DEX,
		WIZARD_BASE_INT,
		WIZARD_BASE_FAITH,
		WIZARD_BASE_ARMOR,
		WIZARD_BASE_ELEMENTAL_RESISTANCE
	);
}

void Wizard::levelUp()
{
	// HP
	HP->setMax(HP->getMax() + WIZARD_HP_GROWTH);
	HP->increaseCurrent(WIZARD_HP_GROWTH);

	// MP
	if (MP)
	{
		MP->setMax(MP->getMax() + WIZARD_MP_GROWTH);
		MP->increaseCurrent(WIZARD_BASE_MP);
	}

	// Stats
	increaseStats(
		WIZARD_STR_GROWTH,
		WIZARD_DEX_GROWTH,
		WIZARD_INT_GROWTH,
		WIZARD_FAITH_GROWTH,
		WIZARD_ARMOR_GROWTH,
		WIZARD_ELEMENTAL_RESISTANCE_GROWTH
	);
}
