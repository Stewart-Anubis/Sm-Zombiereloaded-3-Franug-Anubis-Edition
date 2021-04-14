/*
 * ============================================================================
 *
 *  Zombie:Reloaded
 *
 *  File:		  global.inc
 *  Type:		  Core
 *  Description:   External API.
 *
 *  Copyright (C) 2009-2013  Greyscale, Richard Helgeby
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ============================================================================
 */

/**
 * Global variable that tells if sound cvar data was loaded successfully.
 */
bool g_bCvarVoice;
bool g_bAmbientSounds;
bool g_bDeaths;
bool g_bZsecvar;
bool g_bZsed;
bool g_bRoundendSdEnable;
bool g_bZrod;

char g_cSoundScream[PLATFORM_MAX_PATH];
char g_cMam_Path[PLATFORM_MAX_PATH];
char g_cWom_Path[PLATFORM_MAX_PATH];
char g_cSounds_Path[PLATFORM_MAX_PATH];
char g_cHumWin_Path[PLATFORM_MAX_PATH];
char g_cZomWin_Path[PLATFORM_MAX_PATH];
char g_cSoundAbient[PLATFORM_MAX_PATH];

float g_fInterval;
float g_fTimespan;
float g_fAmbientLength;
float g_fAmbientVolume;
float g_cfDefaultVolume;

int g_iGroan;
int g_ilimitc;
int g_bZvcd;


/**
 * All external API natives are created here.
 */
/*
void CreateGlobals()
{
}
*/