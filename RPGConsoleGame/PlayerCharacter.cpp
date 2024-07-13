#include "PlayerCharacter.h"

PlayerCharacterDelegate::PlayerCharacterDelegate() : StatsInfo(0, 0, 0, 0)
{
	m_currentLevel = 1;
	m_currentExperience = 0;
	m_experienceToNextLevel = 100;
	HP = std::make_unique<PointManager>();
}

void PlayerCharacterDelegate::gainExperience(exp_t experience)
{
	m_currentExperience += experience;
	while (checkIfLevelUp())
		levelUp();
}

bool PlayerCharacterDelegate::checkIfLevelUp()
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
