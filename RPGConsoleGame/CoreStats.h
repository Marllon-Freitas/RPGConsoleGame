#pragma once

#include "typeDef.h"

struct CoreStats
{
	stats_t strength = 1;
	stats_t dexterity = 1;
	stats_t intelligence = 1;
	stats_t faith = 1;
	stats_t armor = 0;					//physical damage reduction
	stats_t elementalResistance = 0;	//elemental damage reduction

	CoreStats& operator+=(const CoreStats& other)
	{
		this->strength += other.strength;
		this->dexterity += other.dexterity;
		this->intelligence += other.intelligence;
		this->faith += other.faith;
		this->armor += other.armor;
		this->elementalResistance += other.elementalResistance;
		return *this;
	};

	CoreStats& operator-=(const CoreStats& other)
	{
		CoreStats temp = *this;

		this->strength -= other.strength;
		this->dexterity -= other.dexterity;
		this->intelligence -= other.intelligence;
		this->faith -= other.faith;
		this->armor -= other.armor;
		this->elementalResistance -= other.elementalResistance;

		if (this->strength < temp.strength)
			this->strength = 0;
		if (this->dexterity < temp.dexterity)
			this->dexterity = 0;
		if (this->intelligence < temp.intelligence)
			this->intelligence = 0;
		if (this->faith < temp.faith)
			this->faith = 0;
		if (this->armor < temp.armor)
			this->armor = 0;
		if (this->elementalResistance < temp.elementalResistance)
			this->elementalResistance = 0;

		return *this;
	};

	CoreStats operator=(const stats_t& other)
	{
		this->strength = other;
		this->dexterity = other;
		this->intelligence = other;
		this->faith = other;
		this->armor = other;
		this->elementalResistance = other;
		return *this;
	};
};