#include "Wizard.h"

static const hp_t WIZARD_BASE_HP = 9;
static const stats_t WIZARD_BASE_STR = 1;
static const stats_t WIZARD_BASE_DEX = 2;
static const stats_t WIZARD_BASE_INT = 4;
static const stats_t WIZARD_BASE_FEITH = 1;

static const hp_t WIZARD_HP_GROWTH = 4;
static const stats_t WIZARD_STR_GROWTH = 1;
static const stats_t WIZARD_DEX_GROWTH = 1;
static const stats_t WIZARD_INT_GROWTH = 2;
static const stats_t WIZARD_FEITH_GROWTH = 1;

Wizard::Wizard() : PlayerCharacterDelegate()
{
	HP->setMax(WIZARD_BASE_HP);
	HP->increaseCurrent(WIZARD_BASE_HP);
	increaseStats(WIZARD_BASE_STR, WIZARD_BASE_DEX, WIZARD_BASE_INT, WIZARD_BASE_FEITH);
}

void Wizard::levelUp()
{
	HP->setMax(HP->getMax() + WIZARD_HP_GROWTH);
	HP->increaseCurrent(WIZARD_HP_GROWTH);
	increaseStats(WIZARD_STR_GROWTH, WIZARD_DEX_GROWTH, WIZARD_INT_GROWTH, WIZARD_FEITH_GROWTH);
}
