#include "Cleric.h"

static const hp_t CLERIC_HP_GROWTH = 14;
static const stats_t CLERIC_BASE_STR = 2;
static const stats_t CLERIC_BASE_DEX = 2;
static const stats_t CLERIC_BASE_INT = 2;
static const stats_t CLERIC_BASE_FEITH = 4;

Cleric::Cleric() : Hp(CLERIC_HP_GROWTH, CLERIC_HP_GROWTH),
StatsInfo(CLERIC_BASE_STR, CLERIC_BASE_DEX, CLERIC_BASE_INT, CLERIC_BASE_FEITH)
{
}