#include "slat_set.h"
#include <iostream>

template <typename T>
void printField(const char* fieldName, T val)
{
	std::cout << fieldName << " = " << val << std::endl;
}

SlatSet::SlatSet(int width, int length, Slat slat) :
	m_width(width),
	m_slat(slat),
	m_length(length)
{
	if (m_slat.w >= length) {
		m_length = m_slat.w;
		m_slatsCount = 1;
		m_gap = 0.0f;
	}
	else {
		m_slatsCount = m_length / m_slat.w;
		m_gap = calcGap(m_length, m_slat.w, m_slatsCount);
	}
}

SlatSet::~SlatSet()
{
}

void SlatSet::printSlatSet()
{
	printField("Length", m_length);
	printField("Width", m_width);
	printField("Slat width", m_slat.w);
	printField("Slat count", m_slatsCount);
	printField("Gap", m_gap);
}

float SlatSet::calcGap(int length, int slatWidth, size_t slatsCount)
{
	if (slatsCount <= 1)
		return 0.0f;

	return (length - slatWidth * slatsCount) / (float)(slatsCount - 1);
}
