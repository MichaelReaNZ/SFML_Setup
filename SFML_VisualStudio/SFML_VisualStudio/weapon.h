#pragma once
#ifndef __RPG_WEAPON_H__
#define __RPG_WEAPON_H__

#include "Range.h"

const int g_kiMaxChars = 20;

struct TWeapon
{
   char pcName[g_kiMaxChars];
   TRange DamageRange;
};

#endif // __RPG_WEAPON_H__