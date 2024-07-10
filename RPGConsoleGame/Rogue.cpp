#include "Rogue.h"

static const hp_t ROGUE_HP_GROWTH = 12;
static const stats_t ROGUE_BASE_STR = 2;
static const stats_t ROGUE_BASE_DEX = 4;
static const stats_t ROGUE_BASE_INT = 1;
static const stats_t ROGUE_BASE_FEITH = 1;

Rogue::Rogue() : Hp(ROGUE_HP_GROWTH, ROGUE_HP_GROWTH),
StatsInfo(ROGUE_BASE_STR, ROGUE_BASE_DEX, ROGUE_BASE_INT, ROGUE_BASE_FEITH)
{
}