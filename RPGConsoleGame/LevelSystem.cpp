#include "LevelSystem.h"

LevelSystem::LevelSystem()
{
	m_currentLevel = 1;
	m_currentExperience = 0;
	m_experienceToNextLevel = 100;
}

void LevelSystem::gainExperience(exp_t experience)
{
	m_currentExperience += experience;
	while (checkIfLevelUp())
		levelUp();
}

bool LevelSystem::checkIfLevelUp()
{
	if (m_currentExperience >= m_experienceToNextLevel)
	{
		m_currentLevel++;
		m_currentExperience = m_currentExperience - m_experienceToNextLevel;
		m_experienceToNextLevel = static_cast<exp_t>
			(static_cast<int>((50 / 3) * ((pow(m_currentLevel, 3) -
				6 * pow(m_currentLevel, 2)) + 17 * m_currentLevel -
				12))) + 100;
		return true;
	}
	return false;
}
