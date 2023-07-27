//
// Created by Sagar Shah on 07/5/2021.
//

#ifndef COSMIC_MAIN_H
#define COSMIC_MAIN_H

#include "obfuscate.h"
#include "Log.h"
#include "Socket.h"
#include "Structs.h"

bool showName = true;
bool showDistance = true;
bool showHealth = true;
bool showTeamID = true;
bool showBox = false;
bool showRadarLine = false;
bool showSkeleton = true;
bool showWeapon = false;
bool showEnemyCount = false;
bool show360Warning = false;
bool showHeadDots = false;
bool showGrenadeAlert = true;
bool showLootBox = true;
bool showNation = false;
bool showUID = false;
bool LessRecoil = false;
bool ZeroRecoil = false;
bool InstantHit = false;
bool FastShootInterval = false;
bool SmallCrosshair = true;
bool HitX = false;
bool NoShake = false;
bool BulletTrack = true;
bool AimBot = true;
bool AimPrediction = false;
bool AimIgnoreKnocked = false;
int aimingRange = 200;
int aimlocation = 1;
int aimtarget = 0;
int aimtrigger = 3;
#endif //COSMIC_MAIN_H
