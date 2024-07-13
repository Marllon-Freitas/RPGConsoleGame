#include "Warrior.h"

static const hp_t WARRIOR_BASE_HP = 19;
static const stats_t WARRIOR_BASE_STR = 4;
static const stats_t WARRIOR_BASE_DEX = 2;
static const stats_t WARRIOR_BASE_INT = 1;
static const stats_t WARRIOR_BASE_FEITH = 1;

static const hp_t WARRIOR_HP_GROWTH = 9;
static const stats_t WARRIOR_STR_GROWTH = 2;
static const stats_t WARRIOR_DEX_GROWTH = 1;
static const stats_t WARRIOR_INT_GROWTH = 1;
static const stats_t WARRIOR_FEITH_GROWTH = 1;

Warrior::Warrior() : PlayerCharacterDelegate()
{
	HP->setMax(WARRIOR_BASE_HP);
	HP->increaseCurrent(WARRIOR_BASE_HP);
	increaseStats(WARRIOR_BASE_STR, WARRIOR_BASE_DEX, WARRIOR_BASE_INT, WARRIOR_BASE_FEITH);
}

void Warrior::levelUp()
{
	HP->setMax(HP->getMax() + WARRIOR_HP_GROWTH);
	HP->increaseCurrent(WARRIOR_HP_GROWTH);
	increaseStats(WARRIOR_STR_GROWTH, WARRIOR_DEX_GROWTH, WARRIOR_INT_GROWTH, WARRIOR_FEITH_GROWTH);
}
