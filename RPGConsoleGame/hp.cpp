#include "hp.h"

hp::hp()
{
}


bool hp::setMaxHP(hp_t newMaxHP)
{
	if (newMaxHP < 1) return false;

	m_maxHP = newMaxHP;

	if (m_currentHP > m_maxHP) m_currentHP = m_maxHP;

	return true;
}

void hp::takeDamage(hp_t damage)
{
	if (damage > m_currentHP)
	{
		m_currentHP = 0;
		return;
	}

	m_currentHP -= damage;

	return;
}

void hp::heal(hp_t healAmount)
{
	if (m_currentHP + healAmount > m_maxHP)
	{
		m_currentHP = m_maxHP;
		return;
	}

	m_currentHP += healAmount;

	return;
}

hp::~hp()
{
}
