/*
 * ============================================================================
 *
 *  Zombie:Reloaded
 *
 *  File:		  roundendsounds.inc
 *  Type:		  Core 
 *  Description:   Round End sound effects.
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
 * @section Defines for min/max round wim human sound file index.
 */
#define SOUND_ROUNDEND_MIN 1
#define SOUND_ROUNDEND_MAX 4

/**
 * @endsection
 */

/**
 * Zombie sound types
 */
enum RoundEndSounds
{
	HumansWinCt, /** Human Wim */
	ZombisWimT, /** Zombie's Win */
}

bool:RoundEndSoundsGetRandomSound(String:soundre[], RoundEndSounds:soundtype)
{
	new soundroundmin = SOUND_ROUNDEND_MIN;
	new soundroundmax = SOUND_ROUNDEND_MAX;

	// Get round end sound.
	decl String:HumansWinCache[PLATFORM_MAX_PATH];
	decl String:ZombieWinCache[PLATFORM_MAX_PATH];
	
	GetConVarString(g_hCvarsList[CVAR_ROUNDEND_HUMANS_WIN], HumansWinCache, sizeof(HumansWinCache));
	GetConVarString(g_hCvarsList[CVAR_ROUNDEND_ZOMBIE_WIN], ZombieWinCache, sizeof(ZombieWinCache));

	// Pick a random integer between min and max sound file index.
	new randresound = GetRandomInt(soundroundmin, soundroundmax);
	
	switch(soundtype)
	{
		// Find HumansWin sound.
		case HumansWinCt:
		{
			// Format random index into sound path.
			Format(soundre, SOUND_MAX_PATH, "%shumans_win%d.mp3", HumansWinCache, randresound);
		}
		// Find ZombisWim sound.
		case ZombisWimT:
		{
			// Format random index into sound path.
			Format(soundre, SOUND_MAX_PATH, "%szombie_win%d.mp3", ZombieWinCache, randresound);
		}
		// Invalid case given.
		default:
		{
			// No handled case was given.
			return false;
		}
	}
	// Found sound.
	return true;
}

RoundEndSoundsLoad()
{
	// Get round end sound.
	decl String:HumansWinCache[PLATFORM_MAX_PATH];
	decl String:ZombieWinCache[PLATFORM_MAX_PATH];
	decl String:HumansWinPath[PLATFORM_MAX_PATH];
	decl String:ZombieWinPath[PLATFORM_MAX_PATH];

	GetConVarString(g_hCvarsList[CVAR_ROUNDEND_HUMANS_WIN], HumansWinCache, sizeof(HumansWinCache));
	GetConVarString(g_hCvarsList[CVAR_ROUNDEND_ZOMBIE_WIN], ZombieWinCache, sizeof(ZombieWinCache));

	// Prepend sound/ to the path.
	Format(HumansWinPath, sizeof(HumansWinPath), "sound/%s", HumansWinCache);
	Format(ZombieWinPath, sizeof(ZombieWinPath), "sound/%s", ZombieWinCache);

	
	decl String:s_SoundsFile[64], String:s_PreCachePath[PLATFORM_MAX_PATH];

	new FileType:f_SoundsFileType, Handle:h_SoundsDir = OpenDirectory(HumansWinPath);

	if (h_SoundsDir == INVALID_HANDLE)
	{
		return;
	}

	while(ReadDirEntry(h_SoundsDir, s_SoundsFile, sizeof(s_SoundsFile), f_SoundsFileType))     
	{
		if(f_SoundsFileType == FileType_File)
		{
			Format(s_PreCachePath, sizeof(s_PreCachePath), "%s%s", HumansWinPath, s_SoundsFile);

			// Add sound file to downloads table.
			AddFileToDownloadsTable(s_PreCachePath);

			//Precache Sound
			ReplaceString(s_PreCachePath, sizeof(s_PreCachePath), "sound/", "");

			PrecacheSound(s_PreCachePath);
		}
	}
	CloseHandle(h_SoundsDir);

	Handle:h_SoundsDir = OpenDirectory(ZombieWinPath);

	if (h_SoundsDir == INVALID_HANDLE)
	{
		return;
	}

	while(ReadDirEntry(h_SoundsDir, s_SoundsFile, sizeof(s_SoundsFile), f_SoundsFileType))     
	{
		if(f_SoundsFileType == FileType_File)
		{
			Format(s_PreCachePath, sizeof(s_PreCachePath), "%s%s", ZombieWinPath, s_SoundsFile);

			// Add sound file to downloads table.
			AddFileToDownloadsTable(s_PreCachePath);

			//Precache Sound
			ReplaceString(s_PreCachePath, sizeof(s_PreCachePath), "sound/", "");

			PrecacheSound(s_PreCachePath);
		}
	}
	CloseHandle(h_SoundsDir);
}

RoundEndSoundsSoundFromClient(x, const String:soundre[], Float:level)
{
	if (IsClientInGame(x) && !IsFakeClient(x))
	{
		// Emit sound from client.
		EmitSoundToClient(x, soundre, SOUND_FROM_PLAYER, SNDCHAN_AUTO, SNDLEVEL_GUNFIRE, _, level);
	}
}