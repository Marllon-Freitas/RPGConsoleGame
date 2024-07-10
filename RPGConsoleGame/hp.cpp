#include "hp.h"

Hp::Hp()
{
	m_currentHP = 1;
	m_maxHP = 1;
}

Hp::Hp(hp_t currentHP, hp_t maxHP)
{
	if (currentHP < 1) currentHP = 1;
	if (maxHP < 1) maxHP = 1;

	m_currentHP = currentHP;
	m_maxHP = maxHP;

	if (m_currentHP > m_maxHP) m_currentHP = m_maxHP;
}


bool Hp::setMaxHP(hp_t newMaxHP)
{
	if (newMaxHP < 1) return false;

	m_maxHP = newMaxHP;

	if (m_currentHP > m_maxHP) m_currentHP = m_maxHP;

	return true;
}

void Hp::takeDamage(hp_t damage)
{
	if (damage > m_currentHP)
	{
		m_currentHP = 0;
		return;
	}

	m_currentHP -= damage;

	return;
}

void Hp::heal(hp_t healAmount)
{
	if (m_currentHP + healAmount > m_maxHP)
	{
		m_currentHP = m_maxHP;
		return;
	}

	m_currentHP += healAmount;

	return;
}

Hp::~Hp()
{
}
