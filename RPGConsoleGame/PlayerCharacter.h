#pragma once

#include "typeDef.h"
#include "StatsInfo.h"
#include "PointManager.h"
#include "Ability.h"

class PlayerCharacterDelegate : public StatsInfo
{
public:
	PlayerCharacterDelegate();

	// Getters
	level_t getCurrentLevel() const { return m_currentLevel; }
	exp_t getCurrentExperience() const { return m_currentExperience; }
	exp_t getExperienceToNextLevel() const { return m_experienceToNextLevel; }
	virtual std::string getClassName() = 0;

	// Setters
	void setLevel(level_t level) { m_currentLevel = level; }
	void setExperience(exp_t experience) { m_currentExperience = experience; }
	void setExperienceToNextLevel(exp_t experienceToNextLevel) { m_experienceToNextLevel = experienceToNextLevel; }

	// Functions
	bool levelUpAvailable() const { return m_currentExperience >= m_experienceToNextLevel; }
	void gainExperience(exp_t experience);

	virtual void levelUp() = 0;
	std::unique_ptr<PointManager> HP;
	std::unique_ptr<PointManager> MP;

	//Abilities
	std::vector<Ability> abilities;

	~PlayerCharacterDelegate() = default;

protected:
	level_t m_currentLevel;
	exp_t m_currentExperience;
	exp_t m_experienceToNextLevel;

	bool checkIfLevelUp();
};

class PlayerCharacter {
public:
	PlayerCharacter() = delete;
	PlayerCharacter(PlayerCharacterDelegate* playerCharacterClass) : m_playerCharacterClass(playerCharacterClass) {}
	~PlayerCharacter() { delete m_playerCharacterClass; m_playerCharacterClass = nullptr; }

	// Getters
	// get level info
	level_t getCurrentLevel() const { return m_playerCharacterClass->getCurrentLevel(); }
	exp_t getCurrentExperience() const { return m_playerCharacterClass->getCurrentExperience(); }
	exp_t getExperienceToNextLevel() const { return m_playerCharacterClass->getExperienceToNextLevel(); }

	// get name
	std::string getClassName() { return m_playerCharacterClass->getClassName(); }

	// get hp info
	pointM_t getMaxHP() const { return m_playerCharacterClass->HP->getMax(); }
	pointM_t getCurrentHP() const { return m_playerCharacterClass->HP->getCurrent(); }

	// get mp info
	pointM_t getMaxMP() {
		if (m_playerCharacterClass->MP == nullptr)
			return 0;
		return m_playerCharacterClass->MP->getMax();
	}
	pointM_t getCurrentMP() {
		if (m_playerCharacterClass->MP == nullptr)
			return 0;
		return m_playerCharacterClass->MP->getCurrent();
	}

	//get stats info
	stats_t getStrength() const { return m_playerCharacterClass->getStrength(); }
	stats_t getDexterity() const { return m_playerCharacterClass->getDexterity(); }
	stats_t getIntelligence() const { return m_playerCharacterClass->getIntelligence(); }
	stats_t getFaith() const { return m_playerCharacterClass->getFaith(); }
	stats_t getArmor() const { return m_playerCharacterClass->getArmor(); }
	stats_t getElementalResistance() const { return m_playerCharacterClass->getElementalResistance(); }

	// Functions
	void gainExperience(exp_t amount) { m_playerCharacterClass->gainExperience(amount); }
	void takeDamage(pointM_t amount) { m_playerCharacterClass->HP->reduceCurrent(amount); }
	void heal(pointM_t amount) { m_playerCharacterClass->HP->increaseCurrent(amount); }

	// Abilities
	std::vector<Ability> getAbilities() const { return m_playerCharacterClass->abilities; }

private:
	PlayerCharacterDelegate* m_playerCharacterClass;
};
