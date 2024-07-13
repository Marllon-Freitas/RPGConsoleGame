#pragma once

#include "typeDef.h"

class PointManager
{
public:
	PointManager();
	PointManager(pointM_t currentPoints, pointM_t maxPoints);

	// Getters
	pointM_t getCurrent() const { return m_currentPoints; }
	pointM_t getMax() const { return m_maxPoints; }

	// Setters
	bool setMax(pointM_t newMax);

	// Functions
	void reduceCurrent(pointM_t reduceAmount);
	void increaseCurrent(pointM_t increaseAmount);

	~PointManager();

private:
	pointM_t m_currentPoints;
	pointM_t m_maxPoints;
};
