#include "Wizard.h"

static const hp_t WIZARD_HP_GROWTH = 9;
static const stats_t WIZARD_BASE_STR = 1;
static const stats_t WIZARD_BASE_DEX = 2;
static const stats_t WIZARD_BASE_INT = 4;
static const stats_t WIZARD_BASE_FEITH = 1;

Wizard::Wizard() : Hp(WIZARD_HP_GROWTH, WIZARD_HP_GROWTH),
StatsInfo(WIZARD_BASE_STR, WIZARD_BASE_DEX, WIZARD_BASE_INT, WIZARD_BASE_FEITH)
{
}