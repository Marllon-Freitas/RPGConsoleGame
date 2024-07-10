#include "Warrior.h"

static const hp_t WARRIOR_HP_GROWTH = 19;
static const stats_t WARRIOR_BASE_STR = 4;
static const stats_t WARRIOR_BASE_DEX = 2;
static const stats_t WARRIOR_BASE_INT = 1;
static const stats_t WARRIOR_BASE_FEITH = 1;

Warrior::Warrior() : Hp(WARRIOR_HP_GROWTH, WARRIOR_HP_GROWTH),
StatsInfo(WARRIOR_BASE_STR, WARRIOR_BASE_DEX, WARRIOR_BASE_INT, WARRIOR_BASE_FEITH)
{
}