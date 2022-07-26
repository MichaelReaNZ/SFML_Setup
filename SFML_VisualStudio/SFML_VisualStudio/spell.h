#pragma once
#include "weapon.h"

class CSpell
{
private:
	char m_pcName[g_kiMaxChars];
	TRange m_DamageRange;
	int m_iMagicPointsRequired;
};
