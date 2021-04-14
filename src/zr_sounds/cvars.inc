/*
 * ============================================================================
 *
 *  Zombie:Reloaded
 *
 *  File:		  cvars_sounds.inc
 *  Type:		  Core
 *  Description:   Config creation and cvar control.
 *
 *  Copyright (C) 2021 Anubis.
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
 * List of cvars used by the plugin.
 */
enum struct CvarsList
{
	ConVar CVAR_ENABLE;
	ConVar CVAR_VOICE;
	ConVar CVAR_COUNTDOWN_MAM_PATH;
	ConVar CVAR_COUNTDOWN_WOMAN_PATH;
	ConVar CVAR_INFECT_SOUND;
	ConVar CVAR_SEFFECTS_MOAN;
	ConVar CVAR_SEFFECTS_GROAN;
	ConVar CVAR_SEFFECTS_DEATH;
	ConVar CVAR_SEFFECTS_COMMAND_LIMIT;
	ConVar CVAR_SEFFECTS_COMMAND_TIMESPAN;
	ConVar CVAR_ZOMBIES_SOUNDS_FILES;
	ConVar CVAR_AMBIENTSOUNDS;
	ConVar CVAR_AMBIENTSOUNDS_FILE;
	ConVar CVAR_AMBIENTSOUNDS_LENGTH;
	ConVar CVAR_AMBIENTSOUNDS_VOLUME;
	ConVar CVAR_ROUNDEND_HUMANS_WIN;
	ConVar CVAR_ROUNDEND_ZOMBIE_WIN;
	ConVar CVAR_ZOMBIES_SOUNDS;
	ConVar CVAR_ZOMBIES_SOUNDS_DEFAULT;
	ConVar CVAR_ROUNDEND_SOUNDS;
	ConVar CVAR_ROUNDEND_SOUNDS_DEFAULT;
	ConVar CVAR_VOICECOUNT_DEFAULT;
	ConVar CVAR_VOLUME_DEFAULT;
}

/**
 * Array to store cvar data in.
 */
CvarsList g_hCvarsList;

/**
 * @endsection
 */

/**
 * Cvars module init function.
 */
void CvarsInit()
{
	// Create zombiereloaded cvars.
	CvarsCreate();
	
	// Create public cvar for tracking.
	char description[64];
	Format(description, sizeof(description), "%s Current version of this plugin", TRANSLATION_PHRASE_PREFIX);
	CreateConVar("gs_zombiereloaded_sounds_version", VERSION, description, FCVAR_SPONLY|FCVAR_UNLOGGED|FCVAR_DONTRECORD|FCVAR_REPLICATED|FCVAR_NOTIFY);
}

/**
 * Create all cvars for plugin.
 */
void CvarsCreate()
{
	// ===========================
	// Sound Effects (module)
	// ===========================

	// Voice
	g_hCvarsList.CVAR_VOICE					  =	CreateConVar("zr_voice",				    "0",							"(Incomplete) Modify sv_alltalk to obey zombie/human teams instead of t/ct.");

	//CountDown Sounds
	g_hCvarsList.CVAR_COUNTDOWN_MAM_PATH		  =	CreateConVar("zr_countdown_files_mam",	    "zr/countdown/",				"Folder referring to the counter sounds. Man.");
	g_hCvarsList.CVAR_COUNTDOWN_WOMAN_PATH		  =	CreateConVar("zr_countdown_files_woman",     "zr/countdown/female/",			"Folder referring to the counter sounds. Woman.");

	// Zombie Sounds
	g_hCvarsList.CVAR_INFECT_SOUND			  =	CreateConVar("zr_infect_sound",				 "fz_scream1.mp3",   			"Sound, relative to [zr_files_zombie_sounds] folder, to play from player on infection. ['\"\"' = No sound]");
	g_hCvarsList.CVAR_SEFFECTS_MOAN			  =	CreateConVar("zr_seffects_moan",		     "30.0",					 	"Time between emission of a moan sound from a zombie.");
	g_hCvarsList.CVAR_SEFFECTS_GROAN			  =	CreateConVar("zr_seffects_groan",		     "5",							"The probability that a groan sound will be emitted from a zombie when shot. ['100' = 1% chance | '50' = 2% chance | '1' = 100% chance]");
	g_hCvarsList.CVAR_SEFFECTS_DEATH			  =	CreateConVar("zr_seffects_death",		     "1",							"Emit a death sound when a zombie dies.");
	g_hCvarsList.CVAR_SEFFECTS_COMMAND_LIMIT	  =	CreateConVar("zr_seffects_command_limit",    "4",							"Number of sound commands allowed within the time span, or total limit if time span is disabled. ['0' = Disable sound command limit]");
	g_hCvarsList.CVAR_SEFFECTS_COMMAND_TIMESPAN	  =	CreateConVar("zr_seffects_command_timespan", "10",					   		"Time span for sound command limiter (in seconds). ['0' = Disable time span check | positive number = Time span]");
	g_hCvarsList.CVAR_ZOMBIES_SOUNDS_FILES		  =	CreateConVar("zr_files_zombie_sounds",		 "zr/",							"Folder referring to the sounds of zombies.");

	// Ambient Sounds
	g_hCvarsList.CVAR_AMBIENTSOUNDS			  =	CreateConVar("zr_ambientsounds",		      "1",							"Play an ambient sound to all players during gameplay.");
	g_hCvarsList.CVAR_AMBIENTSOUNDS_FILE		  =	CreateConVar("zr_ambientsounds_file",	  	  "ambient/zr/zr_ambience.mp3", "Sound file, relative to \"sound\" folder, to play as ambience.  This file is automatically downloaded to clients. [Dependency: zr_ambientsounds]");
	g_hCvarsList.CVAR_AMBIENTSOUNDS_LENGTH		  =	CreateConVar("zr_ambientsounds_length",		  "60.0",						"Length of the ambient sound. [Dependency: zr_ambientsounds]");
	g_hCvarsList.CVAR_AMBIENTSOUNDS_VOLUME		  =	CreateConVar("zr_ambientsounds_volume",	 	  "0.8",						"Volume of the ambient sound. [1.0 = Max volume | 0.0001 = Not audible | Dependency: zr_ambientsounds]");
	// Round End Sounds
	g_hCvarsList.CVAR_ROUNDEND_HUMANS_WIN		  =	CreateConVar("zr_files_humans_win",			  "roundend/humanswin/",		"Folder referring to the sounds of the round end. Humans win.");
	g_hCvarsList.CVAR_ROUNDEND_ZOMBIE_WIN		  =	CreateConVar("zr_files_zombie_win",			  "roundend/zombiewin/",		"Folder referring to the sounds of the round end. Zombie win.");

	// ===========================
	// Voice ZrSounds (module)
	// ===========================

	g_hCvarsList.CVAR_ZOMBIES_SOUNDS			  =	CreateConVar("zr_zombies_sounds",	 		  "1",						    "Enable/disable togle sounds Zombies. Default '1'");
	g_hCvarsList.CVAR_ZOMBIES_SOUNDS_DEFAULT	  =	CreateConVar("zr_zombies_sounds_enable",	  "1",							"Enable/disable sounds Zombies. Default '1'");
	g_hCvarsList.CVAR_ROUNDEND_SOUNDS			  =	CreateConVar("zr_roundend_sounds",	 		  "1",	 						"Enable/disable togle sounds roundend. Default '1'");
	g_hCvarsList.CVAR_ROUNDEND_SOUNDS_DEFAULT	  =	CreateConVar("zr_roundend_sounds_enable",	  "1",							"Enable/disable sounds roundend. Default '1'");	
	g_hCvarsList.CVAR_VOICECOUNT_DEFAULT		  =	CreateConVar("zr_voice_count_default",		  "1",							"Default countdown voice. ['1' = Mem  | '2' = Woman!] Default 1");
	g_hCvarsList.CVAR_VOLUME_DEFAULT			  =	CreateConVar("zr_volume_default",			  "0.5",						"Default volume Zr Sounds. Default '0.5'");

	// Auto-generate config file if it doesn't exist, then execute.
	AutoExecConfig(true, "zombiereloaded_sounds", "sourcemod/zombiereloaded");
}

void CvarsLoad()
{
	g_bCvarVoice = GetConVarBool(g_hCvarsList.CVAR_VOICE);
	GetConVarString(g_hCvarsList.CVAR_COUNTDOWN_MAM_PATH, g_cMam_Path, sizeof(g_cMam_Path));
	GetConVarString(g_hCvarsList.CVAR_COUNTDOWN_WOMAN_PATH, g_cWom_Path, sizeof(g_cWom_Path));
	GetConVarString(g_hCvarsList.CVAR_INFECT_SOUND, g_cSoundScream, sizeof(g_cSoundScream));
	g_fInterval = GetConVarFloat(g_hCvarsList.CVAR_SEFFECTS_MOAN);
	g_iGroan = GetConVarInt(g_hCvarsList.CVAR_SEFFECTS_GROAN);
	g_bDeaths = GetConVarBool(g_hCvarsList.CVAR_SEFFECTS_DEATH);
	g_ilimitc = GetConVarInt(g_hCvarsList.CVAR_SEFFECTS_COMMAND_LIMIT);
	g_fTimespan = GetConVarFloat(g_hCvarsList.CVAR_SEFFECTS_COMMAND_TIMESPAN);
	GetConVarString(g_hCvarsList.CVAR_ZOMBIES_SOUNDS_FILES, g_cSounds_Path, sizeof(g_cSounds_Path));
	g_bAmbientSounds = GetConVarBool(g_hCvarsList.CVAR_AMBIENTSOUNDS);
	GetConVarString(g_hCvarsList.CVAR_AMBIENTSOUNDS_FILE, g_cSoundAbient, sizeof(g_cSoundAbient));
	g_fAmbientLength = GetConVarFloat(g_hCvarsList.CVAR_AMBIENTSOUNDS_LENGTH);
	g_fAmbientVolume = GetConVarFloat(g_hCvarsList.CVAR_AMBIENTSOUNDS_VOLUME);
	GetConVarString(g_hCvarsList.CVAR_ROUNDEND_HUMANS_WIN, g_cHumWin_Path, sizeof(g_cHumWin_Path));
	GetConVarString(g_hCvarsList.CVAR_ROUNDEND_ZOMBIE_WIN, g_cZomWin_Path, sizeof(g_cZomWin_Path));
	g_bZsecvar = GetConVarBool(g_hCvarsList.CVAR_ZOMBIES_SOUNDS);
	g_bZsed = GetConVarBool(g_hCvarsList.CVAR_ZOMBIES_SOUNDS_DEFAULT);
	g_bRoundendSdEnable = GetConVarBool(g_hCvarsList.CVAR_ROUNDEND_SOUNDS);
	g_bZrod = GetConVarBool(g_hCvarsList.CVAR_ROUNDEND_SOUNDS_DEFAULT);
	g_bZvcd = GetConVarInt(g_hCvarsList.CVAR_VOICECOUNT_DEFAULT);
	g_cfDefaultVolume = GetConVarFloat(g_hCvarsList.CVAR_VOLUME_DEFAULT);
}