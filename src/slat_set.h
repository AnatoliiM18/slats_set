#pragma once

#include "slat.h"

class SlatSet {
public:
	SlatSet(int width, int length, Slat slat);
	~SlatSet();

public:
	int getLenght() { return m_length; }
	int getWidth() { return m_width; }
	float getGap() { return m_gap; }
	size_t getSlatsCount() { return m_slatsCount; }

	void printSlatSet();

private:
	float calcGap(int length, int slatWidth, size_t slatsCount);

private:
	int m_width;
	int m_length;
	Slat m_slat;
	size_t m_slatsCount;
	float m_gap;
};
