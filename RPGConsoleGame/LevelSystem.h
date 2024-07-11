#pragma once

#include "typeDef.h"

class LevelSystem
{
public:
	LevelSystem();

	// Getters
	level_t getCurrentLevel() const { return m_currentLevel; }
	exp_t getCurrentExperience() const { return m_currentExperience; }
	exp_t getExperienceToNextLevel() const { return m_experienceToNextLevel; }

	// Setters
	void setLevel(level_t level) { m_currentLevel = level; }
	void setExperience(exp_t experience) { m_currentExperience = experience; }
	void setExperienceToNextLevel(exp_t experienceToNextLevel) { m_experienceToNextLevel = experienceToNextLevel; }

	// Functions
	void gainExperience(exp_t experience);
	bool levelUpAvailable() const { return m_currentExperience >= m_experienceToNextLevel; }
	virtual void levelUp() = 0;

	~LevelSystem() = default;

protected:
	level_t m_currentLevel;
	exp_t m_currentExperience;
	exp_t m_experienceToNextLevel;

	bool checkIfLevelUp();
};

