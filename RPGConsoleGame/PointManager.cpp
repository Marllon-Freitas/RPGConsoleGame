#include "PointManager.h"

PointManager::PointManager()
{
	m_currentPoints = 1;
	m_maxPoints = 1;
}

PointManager::PointManager(pointM_t currentPoints, pointM_t maxPoints)
{
	if (m_currentPoints < 1) currentPoints = 1;
	if (m_maxPoints < 1) maxPoints = 1;

	m_currentPoints = currentPoints;
	m_maxPoints = maxPoints;

	if (m_currentPoints > m_maxPoints) m_currentPoints = m_maxPoints;
}


bool PointManager::setMax(pointM_t newMaxPoints)
{
	if (newMaxPoints < 1) return false;

	m_maxPoints = newMaxPoints;

	if (m_currentPoints > m_maxPoints) m_currentPoints = m_maxPoints;

	return true;
}

void PointManager::reduceCurrent(pointM_t reduceAmount)
{
	if (reduceAmount > m_currentPoints)
	{
		m_currentPoints = 0;
		return;
	}

	m_currentPoints -= reduceAmount;

	return;
}

void PointManager::increaseCurrent(pointM_t increaseAmount)
{
	if (m_currentPoints + increaseAmount > m_maxPoints)
	{
		m_currentPoints = m_maxPoints;
		return;
	}

	m_currentPoints += increaseAmount;

	return;
}

PointManager::~PointManager()
{
}
