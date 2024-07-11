#include "Rogue.h"

static const hp_t ROGUE_BASE_HP = 12;
static const stats_t ROGUE_BASE_STR = 2;
static const stats_t ROGUE_BASE_DEX = 4;
static const stats_t ROGUE_BASE_INT = 1;
static const stats_t ROGUE_BASE_FEITH = 1;

static const hp_t ROGUE_HP_GROWTH = 6;
static const stats_t ROGUE_STR_GROWTH = 1;
static const stats_t ROGUE_DEX_GROWTH = 2;
static const stats_t ROGUE_INT_GROWTH = 1;
static const stats_t ROGUE_FEITH_GROWTH = 1;

Rogue::Rogue() : Hp(ROGUE_HP_GROWTH, ROGUE_HP_GROWTH),
StatsInfo(ROGUE_BASE_STR, ROGUE_BASE_DEX, ROGUE_BASE_INT, ROGUE_BASE_FEITH)
{
}

void Rogue::levelUp()
{
	setMaxHP(getMaxHP() + ROGUE_HP_GROWTH);
	increaseStats(ROGUE_STR_GROWTH, ROGUE_DEX_GROWTH, ROGUE_INT_GROWTH, ROGUE_FEITH_GROWTH);
}
