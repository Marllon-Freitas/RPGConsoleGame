#include "Cleric.h"

static const hp_t CLERIC_BASE_HP = 14;
static const stats_t CLERIC_BASE_STR = 2;
static const stats_t CLERIC_BASE_DEX = 2;
static const stats_t CLERIC_BASE_INT = 2;
static const stats_t CLERIC_BASE_FEITH = 4;

static const hp_t CLERIC_HP_GROWTH = 7;
static const stats_t CLERIC_STR_GROWTH = 1;
static const stats_t CLERIC_DEX_GROWTH = 1;
static const stats_t CLERIC_INT_GROWTH = 1;
static const stats_t CLERIC_FEITH_GROWTH = 2;

Cleric::Cleric() : PlayerCharacterDelegate()
{
	HP->setMax(CLERIC_BASE_HP);
	HP->increaseCurrent(CLERIC_BASE_HP);
	increaseStats(CLERIC_BASE_STR, CLERIC_BASE_DEX, CLERIC_BASE_INT, CLERIC_BASE_FEITH);
}

void Cleric::levelUp()
{
	HP->setMax(HP->getMax() + CLERIC_HP_GROWTH);
	HP->increaseCurrent(CLERIC_HP_GROWTH);
	increaseStats(CLERIC_STR_GROWTH, CLERIC_DEX_GROWTH, CLERIC_INT_GROWTH, CLERIC_FEITH_GROWTH);
}
