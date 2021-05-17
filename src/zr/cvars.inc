/*
 * ============================================================================
 *
 *  Zombie:Reloaded
 *
 *  File:		  cvars.inc
 *  Type:		  Core
 *  Description:   Config creation and cvar control.
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
 * @section Locked cvar value defines.
 */
#define CVARS_AUTOTEAMBALANCE_LOCKED 0
#define CVARS_LIMITTEAMS_LOCKED 0
#define CVARS_TEAMMATES_ARE_ENEMIES_LOCKED 0
#define CVARS_IGNORE_ROUND_WIN_CONDITIONS_LOCKED 1
#define CVARS_IGNORE_ROUND_WIN_CONDITIONS_ZOMBIESPAWNED_LOCKED 0
/**
 * @endsection
 */

/**
 * List of cvars used by the plugin.
 */
ConVar CVAR_LOG = null;
ConVar CVAR_LOG_FLAGS = null;
ConVar CVAR_LOG_MODULE_FILTER = null;
ConVar CVAR_LOG_IGNORE_CONSOLE = null;
ConVar CVAR_LOG_ERROR_OVERRIDE = null;
ConVar CVAR_LOG_PRINT_ADMINS = null;
ConVar CVAR_LOG_PRINT_CHAT = null;
ConVar CVAR_CONFIG_PATH_MODELS = null;
ConVar CVAR_CONFIG_PATH_DOWNLOADS = null;
ConVar CVAR_CONFIG_PATH_CLASSES = null;
ConVar CVAR_CONFIG_PATH_WEAPONS = null;
ConVar CVAR_CONFIG_PATH_HITGROUPS = null;
ConVar CVAR_PERMISSIONS_USE_GROUPS = null;
ConVar CVAR_CLASSES_MENU_SPAWN = null;
ConVar CVAR_CLASSES_MENU_JOIN = null;
ConVar CVAR_CLASSES_RANDOM = null;
ConVar CVAR_CLASSES_CHANGE_TIMELIMIT = null;
ConVar CVAR_CLASSES_SAVE = null;
ConVar CVAR_CLASSES_DEFAULT_ZOMBIE = null;
ConVar CVAR_CLASSES_DEFAULT_M_ZOMB = null;
ConVar CVAR_CLASSES_DEFAULT_HUMAN = null;
ConVar CVAR_CLASSES_DEFAULT_ADMIN_MODE = null;
ConVar CVAR_CLASSES_MENU_AUTOCLOSE = null;
ConVar CVAR_CLASSES_OVERLAY_TOGGLE = null;
ConVar CVAR_CLASSES_OVERLAY_TOGGLECMDS = null;
ConVar CVAR_CLASSES_OVERLAY_DEFAULT = null;
ConVar CVAR_CLASSES_ARMS = null;
ConVar CVAR_CLASSES_ZOMBIE_SELECT = null;
ConVar CVAR_CLASSES_HUMAN_SELECT = null;
ConVar CVAR_CLASSES_ADMIN_SELECT = null;
ConVar CVAR_CLASSES_SPEED_METHOD = null;
ConVar CVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER = null;
ConVar CVAR_WEAPONS = null;
ConVar CVAR_WEAPONS_RESTRICT = null;
ConVar CVAR_WEAPONS_RESTRICT_ENDEQUIP = null;
ConVar CVAR_WEAPONS_ZMARKET = null;
ConVar CVAR_WEAPONS_ZMARKET_BUYZONE = null;
ConVar CVAR_WEAPONS_ZMARKET_REBUY = null;
ConVar CVAR_WEAPONS_ZMARKET_REBUY_AUTO = null;
ConVar CVAR_HITGROUPS = null;
ConVar CVAR_KNOCKBACK_MULTIPLIER = null;
ConVar CVAR_DAMAGE_HITGROUPS = null;
ConVar CVAR_DAMAGE_BLOCK_FF = null;
ConVar CVAR_DAMAGE_BLOCK_BLAST = null;
ConVar CVAR_DAMAGE_BLOCK_FIRE = null;
ConVar CVAR_FIRE_SLOW_SPEED = null;
ConVar CVAR_FIRE_MOVEMENT_SPEED = null;
ConVar CVAR_DAMAGE_SUICIDE_ZOMBIE = null;
ConVar CVAR_DAMAGE_SUICIDE_MZOMBIE = null;
ConVar CVAR_DAMAGE_SUICIDE_HUMAN = null;
ConVar CVAR_DAMAGE_SUICIDE_CMDS = null;
ConVar CVAR_SUICIDE_AFTER_INFECT = null;
ConVar CVAR_OVERLAYS_UPDATE_TIME = null;
ConVar CVAR_OVERLAYS_MIN_DXLEVEL = null;
ConVar CVAR_ROUNDEND_OVERLAY = null;
ConVar CVAR_ROUNDEND_OVERLAY_ZOMBIE = null;
ConVar CVAR_ROUNDEND_OVERLAY_HUMAN = null;
ConVar CVAR_FORCETEAMS = null;
ConVar CVAR_INFECT_SPAWNTIME_MIN = null;
ConVar CVAR_INFECT_SPAWNTIME_MAX = null;
ConVar CVAR_INFECT_CONSECUTIVE_BLOCK = null;
ConVar CVAR_INFECT_WEAPONS_DROP = null;
ConVar CVAR_INFECT_MZOMBIE_MODE = null;
ConVar CVAR_INFECT_MZOMBIE_RATIO = null;
ConVar CVAR_INFECT_MZOMBIE_MIN = null;
ConVar CVAR_INFECT_MZOMBIE_MAX = null;
ConVar CVAR_INFECT_MZOMBIE_COUNTDOWN = null;
ConVar CVAR_INFECT_MZOMBIE_RESPAWN = null;
ConVar CVAR_INFECT_EXPLOSION = null;
ConVar CVAR_INFECT_FIREBALL = null;
ConVar CVAR_INFECT_SMOKE = null;
ConVar CVAR_INFECT_SPARKS = null;
ConVar CVAR_INFECT_ESPLASH = null;
ConVar CVAR_INFECT_SHAKE = null;
ConVar CVAR_INFECT_SHAKE_AMP = null;
ConVar CVAR_INFECT_SHAKE_FREQUENCY = null;
ConVar CVAR_INFECT_SHAKE_DURATION = null;
ConVar CVAR_INFECT_NOARMOR_ZOMBIE = null;
ConVar CVAR_INFECT_NO_ALONE_INFECTION_PLAYERS = null;
ConVar CVAR_ACCOUNT_CASHFILL = null;
ConVar CVAR_ACCOUNT_CASHFILL_VALUE = null;
ConVar CVAR_ACCOUNT_CASHDMG = null;
ConVar CVAR_VEFFECTS_LIGHTSTYLE = null;
ConVar CVAR_VEFFECTS_LIGHTSTYLE_VALUE = null;
ConVar CVAR_VEFFECTS_SKY = null;
ConVar CVAR_VEFFECTS_SKY_PATH = null;
ConVar CVAR_VEFFECTS_SUN_DISABLE = null;
ConVar CVAR_VEFFECTS_FOG = null;
ConVar CVAR_VEFFECTS_FOG_OVERRIDE = null;
ConVar CVAR_VEFFECTS_FOG_PCOLOR = null;
ConVar CVAR_VEFFECTS_FOG_SCOLOR = null;
ConVar CVAR_VEFFECTS_FOG_DENSITY = null;
ConVar CVAR_VEFFECTS_FOG_STARTDIST = null;
ConVar CVAR_VEFFECTS_FOG_ENDDIST = null;
ConVar CVAR_VEFFECTS_FOG_FARZ = null;
ConVar CVAR_VEFFECTS_RAGDOLL_REMOVE = null;
ConVar CVAR_VEFFECTS_RAGDOLL_DISSOLVE = null;
ConVar CVAR_VEFFECTS_RAGDOLL_DELAY = null;
ConVar CVAR_ANTISTICK = null;
ConVar CVAR_NOBLOCK = null;
ConVar CVAR_SPAWNPROTECT = null;
ConVar CVAR_SPAWNPROTECT_TIME = null;
ConVar CVAR_SPAWNPROTECT_SPEED = null;
ConVar CVAR_SPAWNPROTECT_ALPHA = null;
ConVar CVAR_RESPAWN = null;
ConVar CVAR_RESPAWN_DELAY = null;
ConVar CVAR_RESPAWN_TEAM_ZOMBIE = null;
ConVar CVAR_RESPAWN_TEAM_ZOMBIE_WORLD = null;
ConVar CVAR_REPEATKILL = null;
ConVar CVAR_REPEATKILL_TIME = null;
ConVar CVAR_NAPALM_IGNITE = null;
ConVar CVAR_NAPALM_TIME_RESET = null;
ConVar CVAR_NAPALM_DOUSE = null;
ConVar CVAR_JUMPBOOST_BHOP_PROTECT = null;
ConVar CVAR_JUMPBOOST_BHOP_MAX = null;
ConVar CVAR_VOL = null;
ConVar CVAR_VOL_UPDATE_INTERVAL = null;
ConVar CVAR_VOL_TRIGGER_INTERVAL = null;
ConVar CVAR_ZSPAWN = null;
ConVar CVAR_AUTO_ZSPAWN = null;
ConVar CVAR_ZSPAWN_TEAM_OVERRIDE = null;
ConVar CVAR_ZSPAWN_TEAM_ZOMBIE = null;
ConVar CVAR_ZSPAWN_BLOCK_REJOIN = null;
ConVar CVAR_ZSPAWN_TIMELIMIT = null;
ConVar CVAR_ZSPAWN_TIMELIMIT_TIME = null;
ConVar CVAR_ZSPAWN_TIMELIMIT_ZOMBIE = null;
ConVar CVAR_ZTELE_ZOMBIE = null;
ConVar CVAR_ZTELE_HUMAN_BEFORE = null;
ConVar CVAR_ZTELE_HUMAN_AFTER = null;
ConVar CVAR_ZTELE_DELAY_ZOMBIE = null;
ConVar CVAR_ZTELE_DELAY_HUMAN = null;
ConVar CVAR_ZTELE_MAX_ZOMBIE = null;
ConVar CVAR_ZTELE_MAX_HUMAN = null;
ConVar CVAR_ZTELE_AUTOCANCEL = null;
ConVar CVAR_ZTELE_AUTOCANCEL_DISTANCE = null;
ConVar CVAR_ZMENU_ENABLED = null;

enum struct CvarsList
{
	bool g_bCVAR_LOG;
	int g_iCVAR_LOG_FLAGS;
	bool g_bCVAR_LOG_MODULE_FILTER;
	bool g_bCVAR_LOG_IGNORE_CONSOLE;
	bool g_bCVAR_LOG_ERROR_OVERRIDE;
	bool g_bCVAR_LOG_PRINT_ADMINS;
	bool g_bCVAR_LOG_PRINT_CHAT;
	char g_sCVAR_CONFIG_PATH_MODELS[PLATFORM_MAX_PATH];
	char g_sCVAR_CONFIG_PATH_DOWNLOADS[PLATFORM_MAX_PATH];
	char g_sCVAR_CONFIG_PATH_CLASSES[PLATFORM_MAX_PATH];
	char g_sCVAR_CONFIG_PATH_WEAPONS[PLATFORM_MAX_PATH];
	char g_sCVAR_CONFIG_PATH_HITGROUPS[PLATFORM_MAX_PATH];
	bool g_bCVAR_PERMISSIONS_USE_GROUPS;
	bool g_bCVAR_CLASSES_MENU_SPAWN;
	bool g_bCVAR_CLASSES_MENU_JOIN;
	bool g_bCVAR_CLASSES_RANDOM;
	float g_fCVAR_CLASSES_CHANGE_TIMELIMIT;
	bool g_bCVAR_CLASSES_SAVE;
	char g_sCVAR_CLASSES_DEFAULT_ZOMBIE[64];
	char g_sCVAR_CLASSES_DEFAULT_M_ZOMB[64];
	char g_sCVAR_CLASSES_DEFAULT_HUMAN[64];
	char g_sCVAR_CLASSES_DEFAULT_ADMIN_MODE[64];
	bool g_bCVAR_CLASSES_MENU_AUTOCLOSE;
	bool g_bCVAR_CLASSES_OVERLAY_TOGGLE;
	char g_sCVAR_CLASSES_OVERLAY_TOGGLECMDS[64];
	bool g_bCVAR_CLASSES_OVERLAY_DEFAULT;
	bool g_bCVAR_CLASSES_ARMS;
	bool g_bCVAR_CLASSES_ZOMBIE_SELECT;
	bool g_bCVAR_CLASSES_HUMAN_SELECT;
	bool g_bCVAR_CLASSES_ADMIN_SELECT;
	char g_sCVAR_CLASSES_SPEED_METHOD[16];
	float g_fCVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER;
	bool g_bCVAR_WEAPONS;
	bool g_bCVAR_WEAPONS_RESTRICT;
	bool g_bCVAR_WEAPONS_RESTRICT_ENDEQUIP;
	bool g_bCVAR_WEAPONS_ZMARKET;
	bool g_bCVAR_WEAPONS_ZMARKET_BUYZONE;
	bool g_bCVAR_WEAPONS_ZMARKET_REBUY;
	bool g_bCVAR_WEAPONS_ZMARKET_REBUY_AUTO;
	bool g_bCVAR_HITGROUPS;
	float g_fCVAR_KNOCKBACK_MULTIPLIER;
	bool g_bCVAR_DAMAGE_HITGROUPS;
	bool g_bCVAR_DAMAGE_BLOCK_FF;
	bool g_bCVAR_DAMAGE_BLOCK_BLAST;
	bool g_bCVAR_DAMAGE_BLOCK_FIRE;
	bool g_bCVAR_FIRE_SLOW_SPEED;
	float g_fCVAR_FIRE_MOVEMENT_SPEED;
	bool g_bCVAR_DAMAGE_SUICIDE_ZOMBIE;
	bool g_bCVAR_DAMAGE_SUICIDE_MZOMBIE;
	bool g_bCVAR_DAMAGE_SUICIDE_HUMAN;
	char g_sCVAR_DAMAGE_SUICIDE_CMDS[PLATFORM_MAX_PATH];
	bool g_bCVAR_SUICIDE_AFTER_INFECT;
	float g_fCVAR_OVERLAYS_UPDATE_TIME;
	int g_iCVAR_OVERLAYS_MIN_DXLEVEL;
	bool g_bCVAR_ROUNDEND_OVERLAY;
	char g_sCVAR_ROUNDEND_OVERLAY_ZOMBIE[PLATFORM_MAX_PATH];
	char g_sCVAR_ROUNDEND_OVERLAY_HUMAN[PLATFORM_MAX_PATH];
	bool g_bCVAR_FORCETEAMS;
	float g_fCVAR_INFECT_SPAWNTIME_MIN;
	float g_fCVAR_INFECT_SPAWNTIME_MAX;
	bool g_bCVAR_INFECT_CONSECUTIVE_BLOCK;
	bool g_bCVAR_INFECT_WEAPONS_DROP;
	char g_sCVAR_INFECT_MZOMBIE_MODE[16];
	int g_iCVAR_INFECT_MZOMBIE_RATIO;
	int g_iCVAR_INFECT_MZOMBIE_MIN;
	int g_iCVAR_INFECT_MZOMBIE_MAX;
	bool g_bCVAR_INFECT_MZOMBIE_COUNTDOWN;
	bool g_bCVAR_INFECT_MZOMBIE_RESPAWN;
	bool g_bCVAR_INFECT_EXPLOSION;
	bool g_bCVAR_INFECT_FIREBALL;
	bool g_bCVAR_INFECT_SMOKE;
	bool g_bCVAR_INFECT_SPARKS;
	bool g_bCVAR_INFECT_ESPLASH;
	bool g_bCVAR_INFECT_SHAKE;
	float g_fCVAR_INFECT_SHAKE_AMP;
	float g_fCVAR_INFECT_SHAKE_FREQUENCY;
	float g_fCVAR_INFECT_SHAKE_DURATION;
	bool g_bCVAR_INFECT_NOARMOR_ZOMBIE;
	int g_iCVAR_INFECT_NO_ALONE_INFECTION_PLAYERS;
	bool g_bCVAR_ACCOUNT_CASHFILL;
	int g_iCVAR_ACCOUNT_CASHFILL_VALUE;
	bool g_bCVAR_ACCOUNT_CASHDMG;
	bool g_bCVAR_VEFFECTS_LIGHTSTYLE;
	char g_sCVAR_VEFFECTS_LIGHTSTYLE_VALUE[4];
	bool g_bCVAR_VEFFECTS_SKY;
	char g_sCVAR_VEFFECTS_SKY_PATH[PLATFORM_MAX_PATH];
	bool g_bCVAR_VEFFECTS_SUN_DISABLE;
	bool g_bCVAR_VEFFECTS_FOG;
	bool g_bCVAR_VEFFECTS_FOG_OVERRIDE;
	char g_sCVAR_VEFFECTS_FOG_PCOLOR[16];
	char g_sCVAR_VEFFECTS_FOG_SCOLOR[16];
	float g_fCVAR_VEFFECTS_FOG_DENSITY;
	int g_iCVAR_VEFFECTS_FOG_STARTDIST;
	int g_iCVAR_VEFFECTS_FOG_ENDDIST;
	int g_iCVAR_VEFFECTS_FOG_FARZ;
	bool g_bCVAR_VEFFECTS_RAGDOLL_REMOVE;
	int g_iCVAR_VEFFECTS_RAGDOLL_DISSOLVE;
	float g_fCVAR_VEFFECTS_RAGDOLL_DELAY;
	bool g_bCVAR_ANTISTICK;
	bool g_bCVAR_NOBLOCK;
	bool g_bCVAR_SPAWNPROTECT;
	int g_iCVAR_SPAWNPROTECT_TIME;
	float g_fCVAR_SPAWNPROTECT_SPEED;
	int g_iCVAR_SPAWNPROTECT_ALPHA;
	bool g_bCVAR_RESPAWN;
	float g_fCVAR_RESPAWN_DELAY;
	bool g_bCVAR_RESPAWN_TEAM_ZOMBIE;
	bool g_bCVAR_RESPAWN_TEAM_ZOMBIE_WORLD;
	bool g_bCVAR_REPEATKILL;
	float g_fCVAR_REPEATKILL_TIME;
	bool g_bCVAR_NAPALM_IGNITE;
	bool g_bCVAR_NAPALM_TIME_RESET;
	int g_iCVAR_NAPALM_DOUSE;
	bool g_bCVAR_JUMPBOOST_BHOP_PROTECT;
	float g_fCVAR_JUMPBOOST_BHOP_MAX;
	bool g_bCVAR_VOL;
	float g_fCVAR_VOL_UPDATE_INTERVAL;
	float g_fCVAR_VOL_TRIGGER_INTERVAL;
	bool g_bCVAR_ZSPAWN;
	bool g_bCVAR_AUTO_ZSPAWN;
	bool g_bCVAR_ZSPAWN_TEAM_OVERRIDE;
	bool g_bCVAR_ZSPAWN_TEAM_ZOMBIE;
	bool g_bCVAR_ZSPAWN_BLOCK_REJOIN;
	bool g_bCVAR_ZSPAWN_TIMELIMIT;
	float g_fCVAR_ZSPAWN_TIMELIMIT_TIME;
	int g_iCVAR_ZSPAWN_TIMELIMIT_ZOMBIE;
	bool g_bCVAR_ZTELE_ZOMBIE;
	bool g_bCVAR_ZTELE_HUMAN_BEFORE;
	bool g_bCVAR_ZTELE_HUMAN_AFTER;
	int g_iCVAR_ZTELE_DELAY_ZOMBIE;
	int g_iCVAR_ZTELE_DELAY_HUMAN;
	int g_iCVAR_ZTELE_MAX_ZOMBIE;
	int g_iCVAR_ZTELE_MAX_HUMAN;
	bool g_bCVAR_ZTELE_AUTOCANCEL;
	float g_fCVAR_ZTELE_AUTOCANCEL_DISTANCE;
	bool g_bCVAR_ZMENU_ENABLED;
}

/**
 * Array to store cvar data in.
 */
CvarsList g_hCvarsList;

/**
 * @section Global cvar handles.
 */
Handle g_hAutoTeamBalance = INVALID_HANDLE;
Handle g_hLimitTeams = INVALID_HANDLE;
Handle g_hIgnoreRoundWinConditions = INVALID_HANDLE;
Handle g_hTeammatesAreEnemies = INVALID_HANDLE;
Handle g_hMp_Maxmoney = INVALID_HANDLE;
Handle g_hSv_Disable_Radar = INVALID_HANDLE;

char g_sValue_Mp_Maxmoney[10];
char g_sValue_Sv_Disable_Radar[10];

//Handle g_hRestartGame = INVALID_HANDLE;
/**
 * @endsection
 */

/**
 * Cvars module init function.
 */
void CvarsInit()
{
	// Retrieve handles of CS:S cvars.
	g_hAutoTeamBalance = FindConVar("mp_autoteambalance");
	g_hLimitTeams = FindConVar("mp_limitteams");
	g_hIgnoreRoundWinConditions = FindConVar("mp_ignore_round_win_conditions");
	g_hTeammatesAreEnemies = FindConVar("mp_teammates_are_enemies");
	g_hMp_Maxmoney = FindConVar("mp_maxmoney");
	g_hSv_Disable_Radar = FindConVar("sv_disable_radar");
	//g_hRestartGame = FindConVar("mp_restartgame");
	
	// Create zombiereloaded cvars.
	CvarsCreate();
	
	// Hook cvars.
	CvarsHook();
	
	// Create public cvar for tracking.
	char description[64];
	Format(description, sizeof(description), "%s Current version of this plugin", TRANSLATION_PHRASE_PREFIX);
	CreateConVar("gs_zombiereloaded_version", VERSION, description, FCVAR_SPONLY|FCVAR_UNLOGGED|FCVAR_DONTRECORD|FCVAR_REPLICATED|FCVAR_NOTIFY);

	// Forward event to modules.
	VEffectsOnCvarInit();
}

/**
 * Create all cvars for plugin.
 */
void CvarsCreate()
{
	// ===========================
	// Log (core)
	// ===========================
	CVAR_LOG					   =	CreateConVar("zr_log",					"1",	"Enable logging of events in the plugin. Fatal errors are always logged.");
	CVAR_LOG_FLAGS				 =	CreateConVar("zr_log_flags",			  "2",	"A bit field that specify what event types to log. See logging section (3.3) in manual for details.");
	CVAR_LOG_MODULE_FILTER		 =	CreateConVar("zr_log_module_filter",	  "0",	"Enable module filtering. Only events from listed modules will be logged.");
	CVAR_LOG_IGNORE_CONSOLE		=	CreateConVar("zr_log_ignore_console",	 "1",	"Don't log events triggered by console commands that are executed by the console itself, like commands in configs. Enable this command to avoid spamming logs with events like weapon restrictions.");
	CVAR_LOG_ERROR_OVERRIDE		=	CreateConVar("zr_log_error_override",	 "1",	"Always log error messages no matter what logging flags or modules filters that are enabled.");
	CVAR_LOG_PRINT_ADMINS		  =	CreateConVar("zr_log_print_admins",	   "0",	"Print log events to admin chat in addition to the log file.");
	CVAR_LOG_PRINT_CHAT			=	CreateConVar("zr_log_print_chat",		 "0",	"Print log events to public chat in addition to the log file.");
	
	
	// ===========================
	// Config (core)
	// ===========================
	CVAR_CONFIG_PATH_MODELS		=	CreateConVar("zr_config_path_models",		 "configs/zr/models.txt",				"Path, relative to root sourcemod directory, to models config file.");
	CVAR_CONFIG_PATH_DOWNLOADS	 =	CreateConVar("zr_config_path_downloads",	  "configs/zr/downloads.txt",			 "Path, relative to root sourcemod directory, to downloads file.");
	CVAR_CONFIG_PATH_CLASSES	   =	CreateConVar("zr_config_path_playerclasses",  "configs/zr/playerclasses.txt",		 "Path, relative to root sourcemod directory, to playerclasses config file.");
	CVAR_CONFIG_PATH_WEAPONS	   =	CreateConVar("zr_config_path_weapons",		"configs/zr/weapons.txt",			   "Path, relative to root sourcemod directory, to weapons config file.");
	CVAR_CONFIG_PATH_HITGROUPS	 =	CreateConVar("zr_config_path_hitgroups",	  "configs/zr/hitgroups.txt",			 "Path, relative to root sourcemod directory, to hitgroups config file.");
	
	
	// ===========================
	// Permission Settings
	// ===========================
	CVAR_PERMISSIONS_USE_GROUPS	=	CreateConVar("zr_permissions_use_groups",	 "0",	"Use group authentication instead of flags to access admin features. Generic admin flag is still required on some features.");
	
	
	// ===========================
	// Classes (core)
	// ===========================
	
	// General
	CVAR_CLASSES_MENU_SPAWN			   =	CreateConVar("zr_classes_menu_spawn",			  "0",			"Re-display class selection menu every spawn.");
	CVAR_CLASSES_MENU_JOIN				=	CreateConVar("zr_classes_menu_join",			   "0",			"Display class selection menu when a player spawn for the first time.");
	CVAR_CLASSES_RANDOM				   =	CreateConVar("zr_classes_random",				  "0",			"Player is assigned a random class every spawn. [Override: zr_classes_default_*]");
	CVAR_CLASSES_CHANGE_TIMELIMIT		 =	CreateConVar("zr_classes_change_timelimit",		"20.0",		   "Time limit to change human class with instant change after spawning. Time is in seconds. Use 0 or negative to disable.");
	CVAR_CLASSES_SAVE					 =	CreateConVar("zr_classes_save",					"1",			"Save players' class selections in server cookies and restore when connecting. [Override: zr_classes_default_*]");
	CVAR_CLASSES_DEFAULT_ZOMBIE		   =	CreateConVar("zr_classes_default_zombie",		  "random",	   "Zombie class assigned to players on connect. [\"random\" = Random zombie class | \"\" = Class config default]");
	CVAR_CLASSES_DEFAULT_M_ZOMB		   =	CreateConVar("zr_classes_default_mother_zombie",   "motherzombies","Zombie class assigned to mother zombies. [\"motherzombies\" = Random mother zombie class | \"random\" = Random regular zombie class | \"disabled\" = Don't change class on mother zombies]");
	CVAR_CLASSES_DEFAULT_HUMAN			=	CreateConVar("zr_classes_default_human",		   "random",	   "Human class assigned to players on connect. [\"random\" = Random human class | \"\" = Class config default]");
	CVAR_CLASSES_DEFAULT_ADMIN_MODE	   =	CreateConVar("zr_classes_default_admin_mode",	  "random",	   "(Incomplete) Admin-mode class assigned to admins on connect. Do not confuse this with admin-only classes. [\"random\" = Random admin class | \"\" = Class config default]");
	CVAR_CLASSES_ZOMBIE_SELECT			=	CreateConVar("zr_classes_zombie_select",		   "1",			"Allow players to select zombie classes.");
	CVAR_CLASSES_HUMAN_SELECT			 =	CreateConVar("zr_classes_human_select",			"1",			"Allow players to select human classes.");
	CVAR_CLASSES_ADMIN_SELECT			 =	CreateConVar("zr_classes_admin_select",			"1",			"Allow admins to select admin mode classes. (Not to be confused by admin-only classes!)");
	CVAR_CLASSES_SPEED_METHOD			 =	CreateConVar("zr_classes_speed_method",			"prop",		 "Speed method to use when applying player speed. Do not touch this if you don't know what you're doing! [\"lmv\" = Lagged movement value | \"prop\" = Player speed property");
	CVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER	 =	CreateConVar("zr_classes_csgo_knockback_airmultiplier",	"0.5",			"CS:GO only: Multiplier for knockback on the air");
	// Menu
	CVAR_CLASSES_MENU_AUTOCLOSE		   =	CreateConVar("zr_classes_menu_autoclose",	  "1",			"Automatically close class selection menu after selecting a class.");
	
	// Overlays
	CVAR_CLASSES_OVERLAY_TOGGLE		   =	CreateConVar("zr_classes_overlay_toggle",	  "1",			"Allow players to toggle class overlay.");
	CVAR_CLASSES_OVERLAY_TOGGLECMDS	   =	CreateConVar("zr_classes_overlay_togglecmds",  "nightvision",  "List of commands to hook that players can use to toggle class overlay. [Dependency: zr_classes_overlay_toggle | Delimiter: \",\"]");
	CVAR_CLASSES_OVERLAY_DEFAULT		  =	CreateConVar("zr_classes_overlay_default",	 "1",			"Default class overlay toggle state set on connecting player.");
	
	// Arms
	CVAR_CLASSES_ARMS		  =	CreateConVar("zr_classes_arms",	 "0",			"Enable Class Arms Apply.");
	
	
	// ===========================
	// Weapons (core)
	// ===========================
	
	// General
	CVAR_WEAPONS						  =	CreateConVar("zr_weapons",					 "1",	"Enable weapons module, disabling this will disable any weapons-related features. (weapon restrictions, weapon knockback multipliers, etc)");
	
	// Restrict
	CVAR_WEAPONS_RESTRICT				 =	CreateConVar("zr_weapons_restrict",			"1",	"Enable weapon restriction module, disabling this will disable weapon restriction commands.");
	CVAR_WEAPONS_RESTRICT_ENDEQUIP		=	CreateConVar("zr_weapons_restrict_endequip",   "1",	"Restricts zombies from picking up weapons after the round has ended but before the next round has begun.");
	
	// ZMarket
	CVAR_WEAPONS_ZMARKET				  =	CreateConVar("zr_weapons_zmarket",			 "1",			"Allow player to buy from a list of weapons in the weapons config.");
	CVAR_WEAPONS_ZMARKET_BUYZONE		  =	CreateConVar("zr_weapons_zmarket_buyzone",	 "1",			"Requires player to be inside a buyzone to use ZMarket. [Dependency: zr_weapons_zmarket]");
	CVAR_WEAPONS_ZMARKET_REBUY			=	CreateConVar("zr_weapons_zmarket_rebuy",	   "1",			"Allow players to rebuy their previous weapons. [Dependency: zr_weapons_zmarket]");
	CVAR_WEAPONS_ZMARKET_REBUY_AUTO	   =	CreateConVar("zr_weapons_zmarket_rebuy_auto",  "1",			"Allow players to automatically rebuy their previous weapons. [Dependency: zr_weapons_zmarket&zr_weapons_zmarket_rebuy]");
	
	
	// ===========================
	// Hitgroups (core)
	// ===========================
	CVAR_HITGROUPS						=	CreateConVar("zr_hitgroups",   "1",	"Enable hitgroups module, disabling this will disable hitgroup-related features. (hitgroup knockback multipliers, hitgroup damage control)");
	CVAR_KNOCKBACK_MULTIPLIER	 =	CreateConVar("zr_knockback_multiplier",	"1.0",			"Multiplier for knockback");
	
	// ===========================
	// Infect (core)
	// ===========================
	
	// General
	CVAR_INFECT_MZOMBIE_MODE			  =	CreateConVar("zr_infect_mzombie_mode",		 "dynamic",						  "Mother zombie infection mode. ['dynamic' = every n-th zombie (ratio) | 'absolute' = n zombies (ratio) | 'range' = min/max]");
	CVAR_INFECT_MZOMBIE_RATIO			 =	CreateConVar("zr_infect_mzombie_ratio",		"7",								"Dynamic mode: Infection ratio. Every n-th player is infected. | Absolute mode: Number of zombies to infect (positive ratio), or number of humans to keep (negative ratio).");
	CVAR_INFECT_MZOMBIE_MIN			   =	CreateConVar("zr_infect_mzombie_min",		  "1",								"Minimum number of mother zombies. Range mode only, cannot be zero.");
	CVAR_INFECT_MZOMBIE_MAX			   =	CreateConVar("zr_infect_mzombie_max",		  "3",								"Maximum number of mother zombies. Range mode only, cannot be zero.");
	CVAR_INFECT_MZOMBIE_COUNTDOWN		 =	CreateConVar("zr_infect_mzombie_countdown",	"0",								"Counts down to the first infection of the round.  Countdown is printed in the middle of the client's screen.");
	CVAR_INFECT_MZOMBIE_RESPAWN		   =	CreateConVar("zr_infect_mzombie_respawn",	  "0",								"Teleport mother zombies back to spawn on infect.");
	CVAR_INFECT_SPAWNTIME_MIN			 =	CreateConVar("zr_infect_spawntime_min",		"30.0",							 "Minimum time from the start of the round until picking the mother zombie(s).");
	CVAR_INFECT_SPAWNTIME_MAX			 =	CreateConVar("zr_infect_spawntime_max",		"50.0",							 "Maximum time from the start of the round until picking the mother zombie(s).");
	CVAR_INFECT_CONSECUTIVE_BLOCK		 =	CreateConVar("zr_infect_consecutive_block",	"1",								"Prevent a player from being chosen as mother zombie two rounds in a row.");
	CVAR_INFECT_WEAPONS_DROP			  =	CreateConVar("zr_infect_weapons_drop",		 "1",								"Force player to drop all weapons on infect, disabling this will strip weapons instead.");
	
	// Effects
	CVAR_INFECT_EXPLOSION				 =	CreateConVar("zr_infect_explosion",			"1",								"Disabling this will disable the fireball, smoke cloud, and sparks in a more efficient way.");
	CVAR_INFECT_FIREBALL				  =	CreateConVar("zr_infect_fireball",			 "1",								"Spawn a fireball effect around player on infection. [Dependency: zr_infect_explosion]");
	CVAR_INFECT_SMOKE					 =	CreateConVar("zr_infect_smoke",				"1",								"Spawn a smoke cloud effect around player on infection. [Dependency: zr_infect_explosion]");
	CVAR_INFECT_SPARKS					=	CreateConVar("zr_infect_sparks",			   "1",								"Emit sparks from player on infection. [Dependency: zr_infect_explosion]");
	CVAR_INFECT_ESPLASH				   =	CreateConVar("zr_infect_esplash",			  "1",								"Emit an energy splash from player on infection.");
	CVAR_INFECT_SHAKE					 =	CreateConVar("zr_infect_shake",				"1",								"Shake player's view on infect.");
	CVAR_INFECT_SHAKE_AMP				 =	CreateConVar("zr_infect_shake_amp",			"15.0",							 "Amplitude of shaking effect. [Dependency: zr_infect_shake]");
	CVAR_INFECT_SHAKE_FREQUENCY		   =	CreateConVar("zr_infect_shake_frequency",	  "1.0",							  "Frequency of shaking effect. [Dependency: zr_infect_shake]");
	CVAR_INFECT_SHAKE_DURATION			=	CreateConVar("zr_infect_shake_duration",	   "5.0",							  "Duration of shaking effect. [Dependency: zr_infect_shake]");
	CVAR_INFECT_NOARMOR_ZOMBIE			=	CreateConVar("zr_noarmor_zombie",	   "1",							  "No armor to zombies. [ 1=On 0=Off ]");
	CVAR_INFECT_NO_ALONE_INFECTION_PLAYERS			=	CreateConVar("zr_no_alone_infection_players",	   "2",							  "Minimum number of players to start infection.. [ 0 or 1=Off ]"); 
	
	
	// ===========================
	// Damage (core)
	// ===========================
	
	// Hitgroup Damage
	CVAR_DAMAGE_HITGROUPS				 =	CreateConVar("zr_damage_hitgroups",		"1",							"Read hitgroup damage control from hitgroup config file, disabling this allows all zombie hitgroups to be shot.");
	
	// Block Damage Types
	CVAR_DAMAGE_BLOCK_FF				  =	CreateConVar("zr_damage_block_ff",		 "1",							"Block friendly fire.");
	CVAR_DAMAGE_BLOCK_BLAST			   =	CreateConVar("zr_damage_block_blast",	  "1",							"Block blast damage inflicted on self or teammates.");
	CVAR_DAMAGE_BLOCK_FIRE				=	CreateConVar("zr_damage_block_fire",		 "1",							"Block fire damage inflicted on self or teammates.");
	CVAR_FIRE_SLOW_SPEED				= CreateConVar("zr_damage_fire_slow_speed", "1",							"Slow zombie on fire.[Dependency: Human Attribute 'has_napalm']");
	CVAR_FIRE_MOVEMENT_SPEED			 = CreateConVar("zr_damage_fire_movement_speed", "0.5",							"Speed Applied to the zombie on fire. [Dependency: zr_damage_fire_slow_speed]");

	// Suicide Intercept
	CVAR_DAMAGE_SUICIDE_ZOMBIE			=	CreateConVar("zr_damage_suicide_zombie",   "0",									"Intercept suicide commands attempted by zombies.");
	CVAR_DAMAGE_SUICIDE_MZOMBIE		   =	CreateConVar("zr_damage_suicide_mzombie",  "1",									"Intercept suicide commands attempted by mother zombies.");
	CVAR_DAMAGE_SUICIDE_HUMAN			 =	CreateConVar("zr_damage_suicide_human",	"0",									"Intercept suicide commands attempted by humans.");
	CVAR_DAMAGE_SUICIDE_CMDS			  =	CreateConVar("zr_damage_suicide_cmds",	 "kill, spectate, jointeam, joinclass, explode",  "List of client commands to intercept as suicide attempts. [Delimiter: \", \"]");
	CVAR_SUICIDE_AFTER_INFECT			 =	CreateConVar("zr_damage_suicide_after_infect",	"1",							 "Intercept suicide commands only after the first zombie has spawned.");
	
	
	// ===========================
	// Overlays (core)
	// ===========================
	CVAR_OVERLAYS_UPDATE_TIME			 =	CreateConVar("zr_overlays_update_time",	"1.0",	  "How often to update overlays on players. [0.0 = Disabled]");
	CVAR_OVERLAYS_MIN_DXLEVEL			 =	CreateConVar("zr_overlays_min_dxlevel",	"80",	   "Minimum DirectX level allowed for overlays (mat_dxlevel).");
	
	
	// ===========================
	// Round End (core)
	// ===========================
	CVAR_ROUNDEND_OVERLAY				 =	CreateConVar("zr_roundend_overlay",			"1",							"Show specified overlay to players depending on winner when the round ends.");
	CVAR_ROUNDEND_OVERLAY_HUMAN		   =	CreateConVar("zr_roundend_overlays_human",	 "overlays/zr/humans_win",	   "Overlay, relative to \"materials\" folder, to display when humans win the round. [Dependency: zr_roundend_overlay]");
	CVAR_ROUNDEND_OVERLAY_ZOMBIE		  =	CreateConVar("zr_roundend_overlays_zombie",	"overlays/zr/zombies_win",	  "Overlay, relative to \"materials\" folder, to display when zombies win the round. [Dependency: zr_roundend_overlay]");
	
	// ===========================
	// Round Start (core)
	// ==================
	CVAR_FORCETEAMS					 =	CreateConVar("zr_forceteams",		"0",			"Forces teams to switch to Humans at the start of the Match.");
	
	
	// ===========================
	// Account (module)
	// ===========================
	CVAR_ACCOUNT_CASHFILL				 =	CreateConVar("zr_account_cashfill",			"1",		"Reset player's cash each spawn.");
	CVAR_ACCOUNT_CASHFILL_VALUE		   =	CreateConVar("zr_account_cashfill_value",	  "12000",	"Amount of cash to set player's account to. [Dependency: zr_account_cashfill]");
	CVAR_ACCOUNT_CASHDMG				  =	CreateConVar("zr_account_cashdmg",			 "0",		"Attacker receives amount of cash equivalent to the damage that was inflicted.");
	
	
	// ===========================
	// Visual Effects (module)
	// ===========================
	
	// Lightstyle
	CVAR_VEFFECTS_LIGHTSTYLE			  =	CreateConVar("zr_veffects_lightstyle",		 "0",					"Change lightstyle (brightness) of the map.");
	CVAR_VEFFECTS_LIGHTSTYLE_VALUE		=	CreateConVar("zr_veffects_lightstyle_value",   "b",					"Lightstyle value. ['a' = Darkest | 'z' = Brightest | Dependency: zr_veffects_lightstyle]");
	
	// Sky
	CVAR_VEFFECTS_SKY					 =	CreateConVar("zr_veffects_sky",				"0",					"Change map skybox.");
	CVAR_VEFFECTS_SKY_PATH				=	CreateConVar("zr_veffects_sky_path",		   "sky_borealis01up.vmt", "Skybox file, relative to \"materials/skybox\" folder, to change map skybox to.  This file is automatically downloaded to clients. [Dependency: zr_veffects_sky]");
	
	// Sun
	CVAR_VEFFECTS_SUN_DISABLE			 =	CreateConVar("zr_veffects_sun_disable",		"0",					"Disable sun rendering on map.");
	
	// Fog
	CVAR_VEFFECTS_FOG					 =	CreateConVar("zr_veffects_fog",				"0",					"(UNSUPPORTED) Enable fog rendering on the map.");
	CVAR_VEFFECTS_FOG_OVERRIDE			=	CreateConVar("zr_veffects_fog_override",	   "0",					"(UNSUPPORTED) If fog exists already on the map, then replace with new modified fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_PCOLOR			  =	CreateConVar("zr_veffects_fog_pcolor",		 "255 255 255",		  "(UNSUPPORTED) Primary color of the fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_SCOLOR			  =	CreateConVar("zr_veffects_fog_scolor",		 "255 255 255",		  "(UNSUPPORTED) Secondary color of the fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_DENSITY			 =	CreateConVar("zr_veffects_fog_density",		"0.8",				  "(UNSUPPORTED) Density (thickness) of the fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_STARTDIST		   =	CreateConVar("zr_veffects_fog_startdist",	  "0",					"(UNSUPPORTED) Distance from player to start rendering foremost fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_ENDDIST			 =	CreateConVar("zr_veffects_fog_enddist",		"400",				  "(UNSUPPORTED) Distance from player to stop rendering fog. [Dependency: zr_veffects_fog]");
	CVAR_VEFFECTS_FOG_FARZ				=	CreateConVar("zr_veffects_fog_farz",		   "2000",				 "(UNSUPPORTED) Vertical clipping plane.");
	
	
	// Ragdoll
	CVAR_VEFFECTS_RAGDOLL_REMOVE		  =	CreateConVar("zr_veffects_ragdoll_remove",	 "1",					"Remove players' ragdolls from the game after a delay.");
	CVAR_VEFFECTS_RAGDOLL_DISSOLVE		=	CreateConVar("zr_veffects_ragdoll_dissolve",   "-1",				   "The ragdoll removal effect. ['-2' = Effectless removal | '-1' = Random effect | '0' = Energy dissolve | '1' = Heavy electrical dissolve | '2' = Light electrical dissolve | '3' = Core dissolve | Dependency: zr_veffects_ragdoll_remove]");
	CVAR_VEFFECTS_RAGDOLL_DELAY		   =	CreateConVar("zr_veffects_ragdoll_delay",	  "0.5",				  "Time to wait before removing the ragdoll. [Dependency: zr_veffects_ragdoll_remove]");
	
	
	// ===========================
	// Anti-Stick (module)
	// ===========================
	CVAR_ANTISTICK						=	CreateConVar("zr_antistick",			   "1",					"Automatically unstick players when stuck within each others' collision hull.");
	CVAR_NOBLOCK						=	CreateConVar("zr_noblock",			   "1",					"Removes player vs. player collisions");
	
	// ===========================
	// Spawn Protect (module)
	// ===========================
	CVAR_SPAWNPROTECT					 =	CreateConVar("zr_spawnprotect",		"1",			"Player will be protected from infection when spawning into the game late.");
	CVAR_SPAWNPROTECT_TIME				=	CreateConVar("zr_spawnprotect_time",   "10",		   "Amount of time to protect player. [Dependency: zr_spawnprotect]");
	CVAR_SPAWNPROTECT_SPEED			   =	CreateConVar("zr_spawnprotect_speed",  "250.0",		"Speed of the player during protection. See the manual for more information. [Dependency: zr_spawnprotect]");
	CVAR_SPAWNPROTECT_ALPHA			   =	CreateConVar("zr_spawnprotect_alpha",  "0",			"Alpha of the player during protection. ['255' = Fully visible | '0' = Completely invisible | Dependency: zr_spawnprotect]");
	
	
	// ===========================
	// Respawn (module)
	// ===========================
	CVAR_RESPAWN						  =	CreateConVar("zr_respawn",					 "0",	"Respawn players after death. [Recommended: (Enable) zr_zspawn*]");
	CVAR_RESPAWN_DELAY					=	CreateConVar("zr_respawn_delay",			   "1.0",	"Time after death to delay player respawn. [Dependency: zr_respawn]");
	CVAR_RESPAWN_TEAM_ZOMBIE			  =	CreateConVar("zr_respawn_team_zombie",		 "1",	"Respawn player as a zombie. [Dependency: zr_respawn]");
	CVAR_RESPAWN_TEAM_ZOMBIE_WORLD		=	CreateConVar("zr_respawn_team_zombie_world",   "1",	"Respawn player as a zombie if player was a zombie and killed by world damage. [Override: zr_respawn_team_zombie]");
	CVAR_REPEATKILL						  =	CreateConVar("zr_respeatkill",					 "1",	"Repeat kill map triger. [Recommended: (Enable) 1:ON 0:OFF]");
	CVAR_REPEATKILL_TIME						  =	CreateConVar("zr_respeatkill_time",					 "5.0",	"Respawn time disabled repeat kill map triger. [Dependency: zr_respeatkill]");
	
	
	// ===========================
	// Napalm (module)
	// ===========================
	CVAR_NAPALM_IGNITE					=	CreateConVar("zr_napalm_ignite",	   "1",	"Ignite grenade in mid-air after player throws it. [Dependency: Human Attribute 'has_napalm']");
	CVAR_NAPALM_TIME_RESET				=	CreateConVar("zr_napalm_time_reset",   "1",	"The burn-time is reset when being naded multiple times. [0: Original burn-time is used.]");
	CVAR_NAPALM_DOUSE					 =	CreateConVar("zr_napalm_douse",		"0",	"Minimum water-saturation before flame is extinguished. ['0' = Disabled | '1' = Feet | '2' = Waist | '3' = Full submersion]");
	
	
	// ===========================
	// Jump Boost (module)
	// ===========================
	CVAR_JUMPBOOST_BHOP_PROTECT		   =	CreateConVar("zr_jumpboost_bhop_protect",	  "1",	"Prevent players from using forward jump boost multipliers to bunny hop.");
	CVAR_JUMPBOOST_BHOP_MAX			   =	CreateConVar("zr_jumpboost_bhop_max",		  "300.0",  "The maximum horizontal velocity a player can achieve before bunnyhop protection kicks in. [Dependency: zr_jumpboost_bhop_protect]");
	
	
	// ===========================
	// Volumetric Features (module)
	// ===========================
	CVAR_VOL							  =	CreateConVar("zr_vol",					 "1",	"Enables volumetric features.");
	CVAR_VOL_UPDATE_INTERVAL			  =	CreateConVar("zr_vol_update_interval",	 "0.5",  "How often to update player positions and trigger events, in seconds.");
	CVAR_VOL_TRIGGER_INTERVAL			 =	CreateConVar("zr_vol_trigger_interval",	"0.5",  "How often to check for delayed events, in seconds. Use lower values for more precise delays.");
	
	
	// ===========================
	// ZSpawn (module)
	// ===========================
	CVAR_ZSPAWN						   =	CreateConVar("zr_zspawn",					  "1",		"Allow players to spawn into the game late.");
	CVAR_AUTO_ZSPAWN						   =	CreateConVar("zr_autozspawn",					  "1",		"Allow players to spawn into the game late automatic.[Dependency:zr_zspawn ]");	
	CVAR_ZSPAWN_TEAM_OVERRIDE			 =	CreateConVar("zr_zspawn_team_override",		"1",		"Override spawn team when spawning by means of ZSpawn.");
	CVAR_ZSPAWN_TEAM_ZOMBIE			   =	CreateConVar("zr_zspawn_team_zombie",		  "0",		"Spawn player on zombie team when spawning by means of ZSpawn. [Dependency: zr_zspawn_team_override | Override: zr_respawn_team_zombie]");
	CVAR_ZSPAWN_BLOCK_REJOIN			  =	CreateConVar("zr_zspawn_block_rejoin",		 "1",		"Block players disconnecting and rejoing the game using zspawn.");
	
	CVAR_ZSPAWN_TIMELIMIT				 =	CreateConVar("zr_zspawn_timelimit",			"1",		"Put a time limit on the use of ZSpawn.");
	CVAR_ZSPAWN_TIMELIMIT_TIME			=	CreateConVar("zr_zspawn_timelimit_time",	   "120.0",	"Time from the start of the round to allow ZSpawn. [Dependency: zr_zspawn_timelimit]");
	CVAR_ZSPAWN_TIMELIMIT_ZOMBIE		  =	CreateConVar("zr_zspawn_timelimit_zombie",	 "1",		"Spawn player on the zombie team AFTER the timelimit is up. ['-1' = Block ZSpawn | '0' = Spawn as human | '1' = Spawn as zombie | Dependency: zr_zspawn_timelimit]");
	
	
	// ===========================
	// ZTele (module)
	// ===========================
	CVAR_ZTELE_ZOMBIE					 =	CreateConVar("zr_ztele_zombie",				"1",	"Allow zombies to use ZTele.");
	CVAR_ZTELE_HUMAN_BEFORE			   =	CreateConVar("zr_ztele_human_before",		  "1",	"Allow humans to use ZTele before the mother zombie has spawned.");
	CVAR_ZTELE_HUMAN_AFTER				=	CreateConVar("zr_ztele_human_after",		   "1",	"Allow humans to use ZTele after the mother zombie has spawned.");
	CVAR_ZTELE_DELAY_ZOMBIE			   =	CreateConVar("zr_ztele_delay_zombie",		  "3",  "Time between using ZTele command and teleportation for zombies. [Dependency: zr_ztele_zombie]");
	CVAR_ZTELE_DELAY_HUMAN				=	CreateConVar("zr_ztele_delay_human",		   "3",  "Time between using ZTele command and teleportation for humans. [Dependency: zr_ztele_human_(before)/(after)]");
	CVAR_ZTELE_MAX_ZOMBIE				 =	CreateConVar("zr_ztele_max_zombie",			"3",	"Max number of times a zombie is allowed to use ZTele per round. [Dependency: zr_ztele_zombie]");
	CVAR_ZTELE_MAX_HUMAN				  =	CreateConVar("zr_ztele_max_human",			 "1",	"Max number of times a human is allowed to use ZTele per round. [Dependency: zr_ztele_human_(before)/(after)]");
	CVAR_ZTELE_AUTOCANCEL				 =	CreateConVar("zr_ztele_autocancel",			"1",	"Automatically cancel ZTele if player moves out of a set boundary. [Dependency: zr_ztele_(zombie)/(human)[_(before)/(after)]]");
	CVAR_ZTELE_AUTOCANCEL_DISTANCE		=	CreateConVar("zr_ztele_autocancel_distance",   "20.0",   "Maximum distance, in feet, player is allowed to travel before teleport is cancelled. [Dependency: zr_ztele_autocancel]");
	
	
	// ===========================
	// Zmenu (module)
	// ===========================
	CVAR_ZMENU_ENABLED					  =	CreateConVar("zr_zmenu_enable",	 "1",	"Enable/disable main menu command.");

	// ===========================
	// Convar Load
	// ===========================

	g_hCvarsList.g_bCVAR_LOG = CVAR_LOG.BoolValue;
	g_hCvarsList.g_iCVAR_LOG_FLAGS = CVAR_LOG_FLAGS.IntValue;
	g_hCvarsList.g_bCVAR_LOG_MODULE_FILTER = CVAR_LOG_MODULE_FILTER.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_IGNORE_CONSOLE = CVAR_LOG_IGNORE_CONSOLE.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_ERROR_OVERRIDE = CVAR_LOG_ERROR_OVERRIDE.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_PRINT_ADMINS = CVAR_LOG_PRINT_ADMINS.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_PRINT_CHAT = CVAR_LOG_PRINT_CHAT.BoolValue;
	GetConVarString(CVAR_CONFIG_PATH_MODELS, g_hCvarsList.g_sCVAR_CONFIG_PATH_MODELS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_MODELS));
	GetConVarString(CVAR_CONFIG_PATH_DOWNLOADS, g_hCvarsList.g_sCVAR_CONFIG_PATH_DOWNLOADS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_DOWNLOADS));
	GetConVarString(CVAR_CONFIG_PATH_CLASSES, g_hCvarsList.g_sCVAR_CONFIG_PATH_CLASSES, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_CLASSES));
	GetConVarString(CVAR_CONFIG_PATH_WEAPONS, g_hCvarsList.g_sCVAR_CONFIG_PATH_WEAPONS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_WEAPONS));
	GetConVarString(CVAR_CONFIG_PATH_HITGROUPS, g_hCvarsList.g_sCVAR_CONFIG_PATH_HITGROUPS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_HITGROUPS));
	g_hCvarsList.g_bCVAR_PERMISSIONS_USE_GROUPS = CVAR_PERMISSIONS_USE_GROUPS.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_MENU_SPAWN = CVAR_CLASSES_MENU_SPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_MENU_JOIN = CVAR_CLASSES_MENU_JOIN.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_RANDOM = CVAR_CLASSES_RANDOM.BoolValue;
	g_hCvarsList.g_fCVAR_CLASSES_CHANGE_TIMELIMIT = CVAR_CLASSES_CHANGE_TIMELIMIT.FloatValue;
	g_hCvarsList.g_bCVAR_CLASSES_SAVE = CVAR_CLASSES_SAVE.BoolValue;
	GetConVarString(CVAR_CLASSES_DEFAULT_ZOMBIE, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ZOMBIE, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ZOMBIE));
	GetConVarString(CVAR_CLASSES_DEFAULT_M_ZOMB, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_M_ZOMB, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_M_ZOMB));
	GetConVarString(CVAR_CLASSES_DEFAULT_HUMAN, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_HUMAN, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_HUMAN));
	GetConVarString(CVAR_CLASSES_DEFAULT_ADMIN_MODE, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ADMIN_MODE, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ADMIN_MODE));
	g_hCvarsList.g_bCVAR_CLASSES_MENU_AUTOCLOSE = CVAR_CLASSES_MENU_AUTOCLOSE.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_OVERLAY_TOGGLE = CVAR_CLASSES_OVERLAY_TOGGLE.BoolValue;
	GetConVarString(CVAR_CLASSES_OVERLAY_TOGGLECMDS, g_hCvarsList.g_sCVAR_CLASSES_OVERLAY_TOGGLECMDS, sizeof(g_hCvarsList.g_sCVAR_CLASSES_OVERLAY_TOGGLECMDS));
	g_hCvarsList.g_bCVAR_CLASSES_OVERLAY_DEFAULT = CVAR_CLASSES_OVERLAY_DEFAULT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ARMS = CVAR_CLASSES_ARMS.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ZOMBIE_SELECT = CVAR_CLASSES_ZOMBIE_SELECT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_HUMAN_SELECT = CVAR_CLASSES_HUMAN_SELECT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ADMIN_SELECT = CVAR_CLASSES_ADMIN_SELECT.BoolValue;
	GetConVarString(CVAR_CLASSES_SPEED_METHOD, g_hCvarsList.g_sCVAR_CLASSES_SPEED_METHOD, sizeof(g_hCvarsList.g_sCVAR_CLASSES_SPEED_METHOD));
	g_hCvarsList.g_fCVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER = CVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER.FloatValue;
	g_hCvarsList.g_bCVAR_WEAPONS = CVAR_WEAPONS.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_RESTRICT = CVAR_WEAPONS_RESTRICT.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_RESTRICT_ENDEQUIP = CVAR_WEAPONS_RESTRICT_ENDEQUIP.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET = CVAR_WEAPONS_ZMARKET.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_BUYZONE = CVAR_WEAPONS_ZMARKET_BUYZONE.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_REBUY = CVAR_WEAPONS_ZMARKET_REBUY.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_REBUY_AUTO = CVAR_WEAPONS_ZMARKET_REBUY_AUTO.BoolValue;
	g_hCvarsList.g_bCVAR_HITGROUPS = CVAR_HITGROUPS.BoolValue;
	g_hCvarsList.g_fCVAR_KNOCKBACK_MULTIPLIER = CVAR_KNOCKBACK_MULTIPLIER.FloatValue;
	g_hCvarsList.g_bCVAR_DAMAGE_HITGROUPS = CVAR_DAMAGE_HITGROUPS.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_FF = CVAR_DAMAGE_BLOCK_FF.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_BLAST = CVAR_DAMAGE_BLOCK_BLAST.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_FIRE = CVAR_DAMAGE_BLOCK_FIRE.BoolValue;
	g_hCvarsList.g_bCVAR_FIRE_SLOW_SPEED = CVAR_FIRE_SLOW_SPEED.BoolValue;
	g_hCvarsList.g_fCVAR_FIRE_MOVEMENT_SPEED = CVAR_FIRE_MOVEMENT_SPEED.FloatValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_ZOMBIE = CVAR_DAMAGE_SUICIDE_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_MZOMBIE = CVAR_DAMAGE_SUICIDE_MZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_HUMAN = CVAR_DAMAGE_SUICIDE_HUMAN.BoolValue;
	GetConVarString(CVAR_DAMAGE_SUICIDE_CMDS, g_hCvarsList.g_sCVAR_DAMAGE_SUICIDE_CMDS, sizeof(g_hCvarsList.g_sCVAR_DAMAGE_SUICIDE_CMDS));
	g_hCvarsList.g_bCVAR_SUICIDE_AFTER_INFECT = CVAR_SUICIDE_AFTER_INFECT.BoolValue;
	g_hCvarsList.g_fCVAR_OVERLAYS_UPDATE_TIME = CVAR_OVERLAYS_UPDATE_TIME.FloatValue;
	g_hCvarsList.g_iCVAR_OVERLAYS_MIN_DXLEVEL = CVAR_OVERLAYS_MIN_DXLEVEL.IntValue;
	g_hCvarsList.g_bCVAR_ROUNDEND_OVERLAY = CVAR_ROUNDEND_OVERLAY.BoolValue;
	GetConVarString(CVAR_ROUNDEND_OVERLAY_ZOMBIE, g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_ZOMBIE, sizeof(g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_ZOMBIE));
	GetConVarString(CVAR_ROUNDEND_OVERLAY_HUMAN, g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_HUMAN, sizeof(g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_HUMAN));
	g_hCvarsList.g_bCVAR_FORCETEAMS = CVAR_FORCETEAMS.BoolValue;
	g_hCvarsList.g_fCVAR_INFECT_SPAWNTIME_MIN = CVAR_INFECT_SPAWNTIME_MIN.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SPAWNTIME_MAX = CVAR_INFECT_SPAWNTIME_MAX.FloatValue;
	g_hCvarsList.g_bCVAR_INFECT_CONSECUTIVE_BLOCK = CVAR_INFECT_CONSECUTIVE_BLOCK.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_WEAPONS_DROP = CVAR_INFECT_WEAPONS_DROP.BoolValue;
	GetConVarString(CVAR_INFECT_MZOMBIE_MODE, g_hCvarsList.g_sCVAR_INFECT_MZOMBIE_MODE, sizeof(g_hCvarsList.g_sCVAR_INFECT_MZOMBIE_MODE));
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_RATIO = CVAR_INFECT_MZOMBIE_RATIO.IntValue;
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_MIN = CVAR_INFECT_MZOMBIE_MIN.IntValue;
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_MAX = CVAR_INFECT_MZOMBIE_MAX.IntValue;
	g_hCvarsList.g_bCVAR_INFECT_MZOMBIE_COUNTDOWN = CVAR_INFECT_MZOMBIE_COUNTDOWN.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_MZOMBIE_RESPAWN = CVAR_INFECT_MZOMBIE_RESPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_EXPLOSION = CVAR_INFECT_EXPLOSION.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_FIREBALL = CVAR_INFECT_FIREBALL.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SMOKE = CVAR_INFECT_SMOKE.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SPARKS = CVAR_INFECT_SPARKS.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_ESPLASH = CVAR_INFECT_ESPLASH.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SHAKE = CVAR_INFECT_SHAKE.BoolValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_AMP = CVAR_INFECT_SHAKE_AMP.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_FREQUENCY = CVAR_INFECT_SHAKE_FREQUENCY.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_DURATION = CVAR_INFECT_SHAKE_DURATION.FloatValue;
	g_hCvarsList.g_bCVAR_INFECT_NOARMOR_ZOMBIE = CVAR_INFECT_NOARMOR_ZOMBIE.BoolValue;
	g_hCvarsList.g_iCVAR_INFECT_NO_ALONE_INFECTION_PLAYERS = CVAR_INFECT_NO_ALONE_INFECTION_PLAYERS.IntValue;
	g_hCvarsList.g_bCVAR_ACCOUNT_CASHFILL = CVAR_ACCOUNT_CASHFILL.BoolValue;
	g_hCvarsList.g_iCVAR_ACCOUNT_CASHFILL_VALUE = CVAR_ACCOUNT_CASHFILL_VALUE.IntValue;
	g_hCvarsList.g_bCVAR_ACCOUNT_CASHDMG = CVAR_ACCOUNT_CASHDMG.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_LIGHTSTYLE = CVAR_VEFFECTS_LIGHTSTYLE.BoolValue;
	GetConVarString(CVAR_VEFFECTS_LIGHTSTYLE_VALUE, g_hCvarsList.g_sCVAR_VEFFECTS_LIGHTSTYLE_VALUE, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_LIGHTSTYLE_VALUE));
	g_hCvarsList.g_bCVAR_VEFFECTS_SKY = CVAR_VEFFECTS_SKY.BoolValue;
	GetConVarString(CVAR_VEFFECTS_SKY_PATH, g_hCvarsList.g_sCVAR_VEFFECTS_SKY_PATH, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_SKY_PATH));
	g_hCvarsList.g_bCVAR_VEFFECTS_SUN_DISABLE = CVAR_VEFFECTS_SUN_DISABLE.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_FOG = CVAR_VEFFECTS_FOG.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_FOG_OVERRIDE = CVAR_VEFFECTS_FOG_OVERRIDE.BoolValue;
	GetConVarString(CVAR_VEFFECTS_FOG_PCOLOR, g_hCvarsList.g_sCVAR_VEFFECTS_FOG_PCOLOR, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_FOG_PCOLOR));
	GetConVarString(CVAR_VEFFECTS_FOG_SCOLOR, g_hCvarsList.g_sCVAR_VEFFECTS_FOG_SCOLOR, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_FOG_SCOLOR));
	g_hCvarsList.g_fCVAR_VEFFECTS_FOG_DENSITY = CVAR_VEFFECTS_FOG_DENSITY.FloatValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_STARTDIST = CVAR_VEFFECTS_FOG_STARTDIST.IntValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_ENDDIST = CVAR_VEFFECTS_FOG_ENDDIST.IntValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_FARZ = CVAR_VEFFECTS_FOG_FARZ.IntValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_RAGDOLL_REMOVE = CVAR_VEFFECTS_RAGDOLL_REMOVE.BoolValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_RAGDOLL_DISSOLVE = CVAR_VEFFECTS_RAGDOLL_DISSOLVE.IntValue;
	g_hCvarsList.g_fCVAR_VEFFECTS_RAGDOLL_DELAY = CVAR_VEFFECTS_RAGDOLL_DELAY.FloatValue;
	g_hCvarsList.g_bCVAR_ANTISTICK = CVAR_ANTISTICK.BoolValue;
	g_hCvarsList.g_bCVAR_NOBLOCK = CVAR_NOBLOCK.BoolValue;
	g_hCvarsList.g_bCVAR_SPAWNPROTECT = CVAR_SPAWNPROTECT.BoolValue;
	g_hCvarsList.g_iCVAR_SPAWNPROTECT_TIME = CVAR_SPAWNPROTECT_TIME.IntValue;
	g_hCvarsList.g_fCVAR_SPAWNPROTECT_SPEED = CVAR_SPAWNPROTECT_SPEED.FloatValue;
	g_hCvarsList.g_iCVAR_SPAWNPROTECT_ALPHA = CVAR_SPAWNPROTECT_ALPHA.IntValue;
	g_hCvarsList.g_bCVAR_RESPAWN = CVAR_RESPAWN.BoolValue;
	g_hCvarsList.g_fCVAR_RESPAWN_DELAY = CVAR_RESPAWN_DELAY.FloatValue;
	g_hCvarsList.g_bCVAR_RESPAWN_TEAM_ZOMBIE = CVAR_RESPAWN_TEAM_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_RESPAWN_TEAM_ZOMBIE_WORLD = CVAR_RESPAWN_TEAM_ZOMBIE_WORLD.BoolValue;
	g_hCvarsList.g_bCVAR_REPEATKILL = CVAR_REPEATKILL.BoolValue;
	g_hCvarsList.g_fCVAR_REPEATKILL_TIME = CVAR_REPEATKILL_TIME.FloatValue;
	g_hCvarsList.g_bCVAR_NAPALM_IGNITE = CVAR_NAPALM_IGNITE.BoolValue;
	g_hCvarsList.g_bCVAR_NAPALM_TIME_RESET = CVAR_NAPALM_TIME_RESET.BoolValue;
	g_hCvarsList.g_iCVAR_NAPALM_DOUSE = CVAR_NAPALM_DOUSE.IntValue;
	g_hCvarsList.g_bCVAR_JUMPBOOST_BHOP_PROTECT = CVAR_JUMPBOOST_BHOP_PROTECT.BoolValue;
	g_hCvarsList.g_fCVAR_JUMPBOOST_BHOP_MAX = CVAR_JUMPBOOST_BHOP_MAX.FloatValue;
	g_hCvarsList.g_bCVAR_VOL = CVAR_VOL.BoolValue;
	g_hCvarsList.g_fCVAR_VOL_UPDATE_INTERVAL = CVAR_VOL_UPDATE_INTERVAL.FloatValue;
	g_hCvarsList.g_fCVAR_VOL_TRIGGER_INTERVAL = CVAR_VOL_TRIGGER_INTERVAL.FloatValue;
	g_hCvarsList.g_bCVAR_ZSPAWN = CVAR_ZSPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_AUTO_ZSPAWN = CVAR_AUTO_ZSPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TEAM_OVERRIDE = CVAR_ZSPAWN_TEAM_OVERRIDE.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TEAM_ZOMBIE = CVAR_ZSPAWN_TEAM_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_BLOCK_REJOIN = CVAR_ZSPAWN_BLOCK_REJOIN.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TIMELIMIT = CVAR_ZSPAWN_TIMELIMIT.BoolValue;
	g_hCvarsList.g_fCVAR_ZSPAWN_TIMELIMIT_TIME = CVAR_ZSPAWN_TIMELIMIT_TIME.FloatValue;
	g_hCvarsList.g_iCVAR_ZSPAWN_TIMELIMIT_ZOMBIE = CVAR_ZSPAWN_TIMELIMIT_ZOMBIE.IntValue;
	g_hCvarsList.g_bCVAR_ZTELE_ZOMBIE = CVAR_ZTELE_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_ZTELE_HUMAN_BEFORE = CVAR_ZTELE_HUMAN_BEFORE.BoolValue;
	g_hCvarsList.g_bCVAR_ZTELE_HUMAN_AFTER = CVAR_ZTELE_HUMAN_AFTER.BoolValue;
	g_hCvarsList.g_iCVAR_ZTELE_DELAY_ZOMBIE = CVAR_ZTELE_DELAY_ZOMBIE.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_DELAY_HUMAN = CVAR_ZTELE_DELAY_HUMAN.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_MAX_ZOMBIE = CVAR_ZTELE_MAX_ZOMBIE.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_MAX_HUMAN = CVAR_ZTELE_MAX_HUMAN.IntValue;
	g_hCvarsList.g_bCVAR_ZTELE_AUTOCANCEL = CVAR_ZTELE_AUTOCANCEL.BoolValue;
	g_hCvarsList.g_fCVAR_ZTELE_AUTOCANCEL_DISTANCE = CVAR_ZTELE_AUTOCANCEL_DISTANCE.FloatValue;
	g_hCvarsList.g_bCVAR_ZMENU_ENABLED = CVAR_ZMENU_ENABLED.BoolValue;

	//ConVarChange

	CVAR_LOG.AddChangeHook(ConVarChange);
	CVAR_LOG_FLAGS.AddChangeHook(ConVarChange);
	CVAR_LOG_MODULE_FILTER.AddChangeHook(ConVarChange);
	CVAR_LOG_IGNORE_CONSOLE.AddChangeHook(ConVarChange);
	CVAR_LOG_ERROR_OVERRIDE.AddChangeHook(ConVarChange);
	CVAR_LOG_PRINT_ADMINS.AddChangeHook(ConVarChange);
	CVAR_LOG_PRINT_CHAT.AddChangeHook(ConVarChange);
	CVAR_CONFIG_PATH_MODELS.AddChangeHook(ConVarChange);
	CVAR_CONFIG_PATH_DOWNLOADS.AddChangeHook(ConVarChange);
	CVAR_CONFIG_PATH_CLASSES.AddChangeHook(ConVarChange);
	CVAR_CONFIG_PATH_WEAPONS.AddChangeHook(ConVarChange);
	CVAR_CONFIG_PATH_HITGROUPS.AddChangeHook(ConVarChange);
	CVAR_PERMISSIONS_USE_GROUPS.AddChangeHook(ConVarChange);
	CVAR_CLASSES_MENU_SPAWN.AddChangeHook(ConVarChange);
	CVAR_CLASSES_MENU_JOIN.AddChangeHook(ConVarChange);
	CVAR_CLASSES_RANDOM.AddChangeHook(ConVarChange);
	CVAR_CLASSES_CHANGE_TIMELIMIT.AddChangeHook(ConVarChange);
	CVAR_CLASSES_SAVE.AddChangeHook(ConVarChange);
	CVAR_CLASSES_DEFAULT_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_CLASSES_DEFAULT_M_ZOMB.AddChangeHook(ConVarChange);
	CVAR_CLASSES_DEFAULT_HUMAN.AddChangeHook(ConVarChange);
	CVAR_CLASSES_DEFAULT_ADMIN_MODE.AddChangeHook(ConVarChange);
	CVAR_CLASSES_MENU_AUTOCLOSE.AddChangeHook(ConVarChange);
	CVAR_CLASSES_OVERLAY_TOGGLE.AddChangeHook(ConVarChange);
	CVAR_CLASSES_OVERLAY_TOGGLECMDS.AddChangeHook(ConVarChange);
	CVAR_CLASSES_OVERLAY_DEFAULT.AddChangeHook(ConVarChange);
	CVAR_CLASSES_ARMS.AddChangeHook(ConVarChange);
	CVAR_CLASSES_ZOMBIE_SELECT.AddChangeHook(ConVarChange);
	CVAR_CLASSES_HUMAN_SELECT.AddChangeHook(ConVarChange);
	CVAR_CLASSES_ADMIN_SELECT.AddChangeHook(ConVarChange);
	CVAR_CLASSES_SPEED_METHOD.AddChangeHook(ConVarChange);
	CVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER.AddChangeHook(ConVarChange);
	CVAR_WEAPONS.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_RESTRICT.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_RESTRICT_ENDEQUIP.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_ZMARKET.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_ZMARKET_BUYZONE.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_ZMARKET_REBUY.AddChangeHook(ConVarChange);
	CVAR_WEAPONS_ZMARKET_REBUY_AUTO.AddChangeHook(ConVarChange);
	CVAR_HITGROUPS.AddChangeHook(ConVarChange);
	CVAR_KNOCKBACK_MULTIPLIER.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_HITGROUPS.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_BLOCK_FF.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_BLOCK_BLAST.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_BLOCK_FIRE.AddChangeHook(ConVarChange);
	CVAR_FIRE_SLOW_SPEED.AddChangeHook(ConVarChange);
	CVAR_FIRE_MOVEMENT_SPEED.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_SUICIDE_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_SUICIDE_MZOMBIE.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_SUICIDE_HUMAN.AddChangeHook(ConVarChange);
	CVAR_DAMAGE_SUICIDE_CMDS.AddChangeHook(ConVarChange);
	CVAR_SUICIDE_AFTER_INFECT.AddChangeHook(ConVarChange);
	CVAR_OVERLAYS_UPDATE_TIME.AddChangeHook(ConVarChange);
	CVAR_OVERLAYS_MIN_DXLEVEL.AddChangeHook(ConVarChange);
	CVAR_ROUNDEND_OVERLAY.AddChangeHook(ConVarChange);
	CVAR_ROUNDEND_OVERLAY_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ROUNDEND_OVERLAY_HUMAN.AddChangeHook(ConVarChange);
	CVAR_FORCETEAMS.AddChangeHook(ConVarChange);
	CVAR_INFECT_SPAWNTIME_MIN.AddChangeHook(ConVarChange);
	CVAR_INFECT_SPAWNTIME_MAX.AddChangeHook(ConVarChange);
	CVAR_INFECT_CONSECUTIVE_BLOCK.AddChangeHook(ConVarChange);
	CVAR_INFECT_WEAPONS_DROP.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_MODE.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_RATIO.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_MIN.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_MAX.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_COUNTDOWN.AddChangeHook(ConVarChange);
	CVAR_INFECT_MZOMBIE_RESPAWN.AddChangeHook(ConVarChange);
	CVAR_INFECT_EXPLOSION.AddChangeHook(ConVarChange);
	CVAR_INFECT_FIREBALL.AddChangeHook(ConVarChange);
	CVAR_INFECT_SMOKE.AddChangeHook(ConVarChange);
	CVAR_INFECT_SPARKS.AddChangeHook(ConVarChange);
	CVAR_INFECT_ESPLASH.AddChangeHook(ConVarChange);
	CVAR_INFECT_SHAKE.AddChangeHook(ConVarChange);
	CVAR_INFECT_SHAKE_AMP.AddChangeHook(ConVarChange);
	CVAR_INFECT_SHAKE_FREQUENCY.AddChangeHook(ConVarChange);
	CVAR_INFECT_SHAKE_DURATION.AddChangeHook(ConVarChange);
	CVAR_INFECT_NOARMOR_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_INFECT_NO_ALONE_INFECTION_PLAYERS.AddChangeHook(ConVarChange);
	CVAR_ACCOUNT_CASHFILL.AddChangeHook(ConVarChange);
	CVAR_ACCOUNT_CASHFILL_VALUE.AddChangeHook(ConVarChange);
	CVAR_ACCOUNT_CASHDMG.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_LIGHTSTYLE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_LIGHTSTYLE_VALUE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_SKY.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_SKY_PATH.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_SUN_DISABLE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_OVERRIDE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_PCOLOR.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_SCOLOR.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_DENSITY.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_STARTDIST.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_ENDDIST.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_FOG_FARZ.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_RAGDOLL_REMOVE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_RAGDOLL_DISSOLVE.AddChangeHook(ConVarChange);
	CVAR_VEFFECTS_RAGDOLL_DELAY.AddChangeHook(ConVarChange);
	CVAR_ANTISTICK.AddChangeHook(ConVarChange);
	CVAR_NOBLOCK.AddChangeHook(ConVarChange);
	CVAR_SPAWNPROTECT.AddChangeHook(ConVarChange);
	CVAR_SPAWNPROTECT_TIME.AddChangeHook(ConVarChange);
	CVAR_SPAWNPROTECT_SPEED.AddChangeHook(ConVarChange);
	CVAR_SPAWNPROTECT_ALPHA.AddChangeHook(ConVarChange);
	CVAR_RESPAWN.AddChangeHook(ConVarChange);
	CVAR_RESPAWN_DELAY.AddChangeHook(ConVarChange);
	CVAR_RESPAWN_TEAM_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_RESPAWN_TEAM_ZOMBIE_WORLD.AddChangeHook(ConVarChange);
	CVAR_REPEATKILL.AddChangeHook(ConVarChange);
	CVAR_REPEATKILL_TIME.AddChangeHook(ConVarChange);
	CVAR_NAPALM_IGNITE.AddChangeHook(ConVarChange);
	CVAR_NAPALM_TIME_RESET.AddChangeHook(ConVarChange);
	CVAR_NAPALM_DOUSE.AddChangeHook(ConVarChange);
	CVAR_JUMPBOOST_BHOP_PROTECT.AddChangeHook(ConVarChange);
	CVAR_JUMPBOOST_BHOP_MAX.AddChangeHook(ConVarChange);
	CVAR_VOL.AddChangeHook(ConVarChange);
	CVAR_VOL_UPDATE_INTERVAL.AddChangeHook(ConVarChange);
	CVAR_VOL_TRIGGER_INTERVAL.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN.AddChangeHook(ConVarChange);
	CVAR_AUTO_ZSPAWN.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_TEAM_OVERRIDE.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_TEAM_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_BLOCK_REJOIN.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_TIMELIMIT.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_TIMELIMIT_TIME.AddChangeHook(ConVarChange);
	CVAR_ZSPAWN_TIMELIMIT_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ZTELE_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ZTELE_HUMAN_BEFORE.AddChangeHook(ConVarChange);
	CVAR_ZTELE_HUMAN_AFTER.AddChangeHook(ConVarChange);
	CVAR_ZTELE_DELAY_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ZTELE_DELAY_HUMAN.AddChangeHook(ConVarChange);
	CVAR_ZTELE_MAX_ZOMBIE.AddChangeHook(ConVarChange);
	CVAR_ZTELE_MAX_HUMAN.AddChangeHook(ConVarChange);
	CVAR_ZTELE_AUTOCANCEL.AddChangeHook(ConVarChange);
	CVAR_ZTELE_AUTOCANCEL_DISTANCE.AddChangeHook(ConVarChange);
	CVAR_ZMENU_ENABLED.AddChangeHook(ConVarChange);
	
	//solution found for cvars load delay
	if (FileExists("cfg/sourcemod/zombiereloaded/zombiereloaded.cfg"))
	{
		// Auto-exec config file .
		ServerCommand("exec sourcemod/zombiereloaded/zombiereloaded.cfg");
	}
	// Auto-generate config file if it doesn't exist, then execute.
	AutoExecConfig(true, "zombiereloaded", "sourcemod/zombiereloaded");
	ConfigLoad();
}

public void ConVarChange(ConVar convar, char[] oldValue, char[] newValue)
{
	//ConVarChange

	g_hCvarsList.g_bCVAR_LOG = CVAR_LOG.BoolValue;
	g_hCvarsList.g_iCVAR_LOG_FLAGS = CVAR_LOG_FLAGS.IntValue;
	g_hCvarsList.g_bCVAR_LOG_MODULE_FILTER = CVAR_LOG_MODULE_FILTER.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_IGNORE_CONSOLE = CVAR_LOG_IGNORE_CONSOLE.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_ERROR_OVERRIDE = CVAR_LOG_ERROR_OVERRIDE.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_PRINT_ADMINS = CVAR_LOG_PRINT_ADMINS.BoolValue;
	g_hCvarsList.g_bCVAR_LOG_PRINT_CHAT = CVAR_LOG_PRINT_CHAT.BoolValue;
	GetConVarString(CVAR_CONFIG_PATH_MODELS, g_hCvarsList.g_sCVAR_CONFIG_PATH_MODELS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_MODELS));
	GetConVarString(CVAR_CONFIG_PATH_DOWNLOADS, g_hCvarsList.g_sCVAR_CONFIG_PATH_DOWNLOADS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_DOWNLOADS));
	GetConVarString(CVAR_CONFIG_PATH_CLASSES, g_hCvarsList.g_sCVAR_CONFIG_PATH_CLASSES, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_CLASSES));
	GetConVarString(CVAR_CONFIG_PATH_WEAPONS, g_hCvarsList.g_sCVAR_CONFIG_PATH_WEAPONS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_WEAPONS));
	GetConVarString(CVAR_CONFIG_PATH_HITGROUPS, g_hCvarsList.g_sCVAR_CONFIG_PATH_HITGROUPS, sizeof(g_hCvarsList.g_sCVAR_CONFIG_PATH_HITGROUPS));
	g_hCvarsList.g_bCVAR_PERMISSIONS_USE_GROUPS = CVAR_PERMISSIONS_USE_GROUPS.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_MENU_SPAWN = CVAR_CLASSES_MENU_SPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_MENU_JOIN = CVAR_CLASSES_MENU_JOIN.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_RANDOM = CVAR_CLASSES_RANDOM.BoolValue;
	g_hCvarsList.g_fCVAR_CLASSES_CHANGE_TIMELIMIT = CVAR_CLASSES_CHANGE_TIMELIMIT.FloatValue;
	g_hCvarsList.g_bCVAR_CLASSES_SAVE = CVAR_CLASSES_SAVE.BoolValue;
	GetConVarString(CVAR_CLASSES_DEFAULT_ZOMBIE, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ZOMBIE, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ZOMBIE));
	GetConVarString(CVAR_CLASSES_DEFAULT_M_ZOMB, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_M_ZOMB, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_M_ZOMB));
	GetConVarString(CVAR_CLASSES_DEFAULT_HUMAN, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_HUMAN, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_HUMAN));
	GetConVarString(CVAR_CLASSES_DEFAULT_ADMIN_MODE, g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ADMIN_MODE, sizeof(g_hCvarsList.g_sCVAR_CLASSES_DEFAULT_ADMIN_MODE));
	g_hCvarsList.g_bCVAR_CLASSES_MENU_AUTOCLOSE = CVAR_CLASSES_MENU_AUTOCLOSE.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_OVERLAY_TOGGLE = CVAR_CLASSES_OVERLAY_TOGGLE.BoolValue;
	GetConVarString(CVAR_CLASSES_OVERLAY_TOGGLECMDS, g_hCvarsList.g_sCVAR_CLASSES_OVERLAY_TOGGLECMDS, sizeof(g_hCvarsList.g_sCVAR_CLASSES_OVERLAY_TOGGLECMDS));
	g_hCvarsList.g_bCVAR_CLASSES_OVERLAY_DEFAULT = CVAR_CLASSES_OVERLAY_DEFAULT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ARMS = CVAR_CLASSES_ARMS.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ZOMBIE_SELECT = CVAR_CLASSES_ZOMBIE_SELECT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_HUMAN_SELECT = CVAR_CLASSES_HUMAN_SELECT.BoolValue;
	g_hCvarsList.g_bCVAR_CLASSES_ADMIN_SELECT = CVAR_CLASSES_ADMIN_SELECT.BoolValue;
	GetConVarString(CVAR_CLASSES_SPEED_METHOD, g_hCvarsList.g_sCVAR_CLASSES_SPEED_METHOD, sizeof(g_hCvarsList.g_sCVAR_CLASSES_SPEED_METHOD));
	g_hCvarsList.g_fCVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER = CVAR_CLASSES_CSGO_KNOCKBACK_AIRMULTIPLIER.FloatValue;
	g_hCvarsList.g_bCVAR_WEAPONS = CVAR_WEAPONS.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_RESTRICT = CVAR_WEAPONS_RESTRICT.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_RESTRICT_ENDEQUIP = CVAR_WEAPONS_RESTRICT_ENDEQUIP.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET = CVAR_WEAPONS_ZMARKET.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_BUYZONE = CVAR_WEAPONS_ZMARKET_BUYZONE.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_REBUY = CVAR_WEAPONS_ZMARKET_REBUY.BoolValue;
	g_hCvarsList.g_bCVAR_WEAPONS_ZMARKET_REBUY_AUTO = CVAR_WEAPONS_ZMARKET_REBUY_AUTO.BoolValue;
	g_hCvarsList.g_bCVAR_HITGROUPS = CVAR_HITGROUPS.BoolValue;
	g_hCvarsList.g_fCVAR_KNOCKBACK_MULTIPLIER = CVAR_KNOCKBACK_MULTIPLIER.FloatValue;
	g_hCvarsList.g_bCVAR_DAMAGE_HITGROUPS = CVAR_DAMAGE_HITGROUPS.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_FF = CVAR_DAMAGE_BLOCK_FF.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_BLAST = CVAR_DAMAGE_BLOCK_BLAST.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_BLOCK_FIRE = CVAR_DAMAGE_BLOCK_FIRE.BoolValue;
	g_hCvarsList.g_bCVAR_FIRE_SLOW_SPEED = CVAR_FIRE_SLOW_SPEED.BoolValue;
	g_hCvarsList.g_fCVAR_FIRE_MOVEMENT_SPEED = CVAR_FIRE_MOVEMENT_SPEED.FloatValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_ZOMBIE = CVAR_DAMAGE_SUICIDE_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_MZOMBIE = CVAR_DAMAGE_SUICIDE_MZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_DAMAGE_SUICIDE_HUMAN = CVAR_DAMAGE_SUICIDE_HUMAN.BoolValue;
	GetConVarString(CVAR_DAMAGE_SUICIDE_CMDS, g_hCvarsList.g_sCVAR_DAMAGE_SUICIDE_CMDS, sizeof(g_hCvarsList.g_sCVAR_DAMAGE_SUICIDE_CMDS));
	g_hCvarsList.g_bCVAR_SUICIDE_AFTER_INFECT = CVAR_SUICIDE_AFTER_INFECT.BoolValue;
	g_hCvarsList.g_fCVAR_OVERLAYS_UPDATE_TIME = CVAR_OVERLAYS_UPDATE_TIME.FloatValue;
	g_hCvarsList.g_iCVAR_OVERLAYS_MIN_DXLEVEL = CVAR_OVERLAYS_MIN_DXLEVEL.IntValue;
	g_hCvarsList.g_bCVAR_ROUNDEND_OVERLAY = CVAR_ROUNDEND_OVERLAY.BoolValue;
	GetConVarString(CVAR_ROUNDEND_OVERLAY_ZOMBIE, g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_ZOMBIE, sizeof(g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_ZOMBIE));
	GetConVarString(CVAR_ROUNDEND_OVERLAY_HUMAN, g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_HUMAN, sizeof(g_hCvarsList.g_sCVAR_ROUNDEND_OVERLAY_HUMAN));
	g_hCvarsList.g_bCVAR_FORCETEAMS = CVAR_FORCETEAMS.BoolValue;
	g_hCvarsList.g_fCVAR_INFECT_SPAWNTIME_MIN = CVAR_INFECT_SPAWNTIME_MIN.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SPAWNTIME_MAX = CVAR_INFECT_SPAWNTIME_MAX.FloatValue;
	g_hCvarsList.g_bCVAR_INFECT_CONSECUTIVE_BLOCK = CVAR_INFECT_CONSECUTIVE_BLOCK.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_WEAPONS_DROP = CVAR_INFECT_WEAPONS_DROP.BoolValue;
	GetConVarString(CVAR_INFECT_MZOMBIE_MODE, g_hCvarsList.g_sCVAR_INFECT_MZOMBIE_MODE, sizeof(g_hCvarsList.g_sCVAR_INFECT_MZOMBIE_MODE));
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_RATIO = CVAR_INFECT_MZOMBIE_RATIO.IntValue;
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_MIN = CVAR_INFECT_MZOMBIE_MIN.IntValue;
	g_hCvarsList.g_iCVAR_INFECT_MZOMBIE_MAX = CVAR_INFECT_MZOMBIE_MAX.IntValue;
	g_hCvarsList.g_bCVAR_INFECT_MZOMBIE_COUNTDOWN = CVAR_INFECT_MZOMBIE_COUNTDOWN.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_MZOMBIE_RESPAWN = CVAR_INFECT_MZOMBIE_RESPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_EXPLOSION = CVAR_INFECT_EXPLOSION.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_FIREBALL = CVAR_INFECT_FIREBALL.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SMOKE = CVAR_INFECT_SMOKE.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SPARKS = CVAR_INFECT_SPARKS.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_ESPLASH = CVAR_INFECT_ESPLASH.BoolValue;
	g_hCvarsList.g_bCVAR_INFECT_SHAKE = CVAR_INFECT_SHAKE.BoolValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_AMP = CVAR_INFECT_SHAKE_AMP.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_FREQUENCY = CVAR_INFECT_SHAKE_FREQUENCY.FloatValue;
	g_hCvarsList.g_fCVAR_INFECT_SHAKE_DURATION = CVAR_INFECT_SHAKE_DURATION.FloatValue;
	g_hCvarsList.g_bCVAR_INFECT_NOARMOR_ZOMBIE = CVAR_INFECT_NOARMOR_ZOMBIE.BoolValue;
	g_hCvarsList.g_iCVAR_INFECT_NO_ALONE_INFECTION_PLAYERS = CVAR_INFECT_NO_ALONE_INFECTION_PLAYERS.IntValue;
	g_hCvarsList.g_bCVAR_ACCOUNT_CASHFILL = CVAR_ACCOUNT_CASHFILL.BoolValue;
	g_hCvarsList.g_iCVAR_ACCOUNT_CASHFILL_VALUE = CVAR_ACCOUNT_CASHFILL_VALUE.IntValue;
	g_hCvarsList.g_bCVAR_ACCOUNT_CASHDMG = CVAR_ACCOUNT_CASHDMG.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_LIGHTSTYLE = CVAR_VEFFECTS_LIGHTSTYLE.BoolValue;
	GetConVarString(CVAR_VEFFECTS_LIGHTSTYLE_VALUE, g_hCvarsList.g_sCVAR_VEFFECTS_LIGHTSTYLE_VALUE, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_LIGHTSTYLE_VALUE));
	g_hCvarsList.g_bCVAR_VEFFECTS_SKY = CVAR_VEFFECTS_SKY.BoolValue;
	GetConVarString(CVAR_VEFFECTS_SKY_PATH, g_hCvarsList.g_sCVAR_VEFFECTS_SKY_PATH, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_SKY_PATH));
	g_hCvarsList.g_bCVAR_VEFFECTS_SUN_DISABLE = CVAR_VEFFECTS_SUN_DISABLE.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_FOG = CVAR_VEFFECTS_FOG.BoolValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_FOG_OVERRIDE = CVAR_VEFFECTS_FOG_OVERRIDE.BoolValue;
	GetConVarString(CVAR_VEFFECTS_FOG_PCOLOR, g_hCvarsList.g_sCVAR_VEFFECTS_FOG_PCOLOR, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_FOG_PCOLOR));
	GetConVarString(CVAR_VEFFECTS_FOG_SCOLOR, g_hCvarsList.g_sCVAR_VEFFECTS_FOG_SCOLOR, sizeof(g_hCvarsList.g_sCVAR_VEFFECTS_FOG_SCOLOR));
	g_hCvarsList.g_fCVAR_VEFFECTS_FOG_DENSITY = CVAR_VEFFECTS_FOG_DENSITY.FloatValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_STARTDIST = CVAR_VEFFECTS_FOG_STARTDIST.IntValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_ENDDIST = CVAR_VEFFECTS_FOG_ENDDIST.IntValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_FOG_FARZ = CVAR_VEFFECTS_FOG_FARZ.IntValue;
	g_hCvarsList.g_bCVAR_VEFFECTS_RAGDOLL_REMOVE = CVAR_VEFFECTS_RAGDOLL_REMOVE.BoolValue;
	g_hCvarsList.g_iCVAR_VEFFECTS_RAGDOLL_DISSOLVE = CVAR_VEFFECTS_RAGDOLL_DISSOLVE.IntValue;
	g_hCvarsList.g_fCVAR_VEFFECTS_RAGDOLL_DELAY = CVAR_VEFFECTS_RAGDOLL_DELAY.FloatValue;
	g_hCvarsList.g_bCVAR_ANTISTICK = CVAR_ANTISTICK.BoolValue;
	g_hCvarsList.g_bCVAR_NOBLOCK = CVAR_NOBLOCK.BoolValue;
	g_hCvarsList.g_bCVAR_SPAWNPROTECT = CVAR_SPAWNPROTECT.BoolValue;
	g_hCvarsList.g_iCVAR_SPAWNPROTECT_TIME = CVAR_SPAWNPROTECT_TIME.IntValue;
	g_hCvarsList.g_fCVAR_SPAWNPROTECT_SPEED = CVAR_SPAWNPROTECT_SPEED.FloatValue;
	g_hCvarsList.g_iCVAR_SPAWNPROTECT_ALPHA = CVAR_SPAWNPROTECT_ALPHA.IntValue;
	g_hCvarsList.g_bCVAR_RESPAWN = CVAR_RESPAWN.BoolValue;
	g_hCvarsList.g_fCVAR_RESPAWN_DELAY = CVAR_RESPAWN_DELAY.FloatValue;
	g_hCvarsList.g_bCVAR_RESPAWN_TEAM_ZOMBIE = CVAR_RESPAWN_TEAM_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_RESPAWN_TEAM_ZOMBIE_WORLD = CVAR_RESPAWN_TEAM_ZOMBIE_WORLD.BoolValue;
	g_hCvarsList.g_bCVAR_REPEATKILL = CVAR_REPEATKILL.BoolValue;
	g_hCvarsList.g_fCVAR_REPEATKILL_TIME = CVAR_REPEATKILL_TIME.FloatValue;
	g_hCvarsList.g_bCVAR_NAPALM_IGNITE = CVAR_NAPALM_IGNITE.BoolValue;
	g_hCvarsList.g_bCVAR_NAPALM_TIME_RESET = CVAR_NAPALM_TIME_RESET.BoolValue;
	g_hCvarsList.g_iCVAR_NAPALM_DOUSE = CVAR_NAPALM_DOUSE.IntValue;
	g_hCvarsList.g_bCVAR_JUMPBOOST_BHOP_PROTECT = CVAR_JUMPBOOST_BHOP_PROTECT.BoolValue;
	g_hCvarsList.g_fCVAR_JUMPBOOST_BHOP_MAX = CVAR_JUMPBOOST_BHOP_MAX.FloatValue;
	g_hCvarsList.g_bCVAR_VOL = CVAR_VOL.BoolValue;
	g_hCvarsList.g_fCVAR_VOL_UPDATE_INTERVAL = CVAR_VOL_UPDATE_INTERVAL.FloatValue;
	g_hCvarsList.g_fCVAR_VOL_TRIGGER_INTERVAL = CVAR_VOL_TRIGGER_INTERVAL.FloatValue;
	g_hCvarsList.g_bCVAR_ZSPAWN = CVAR_ZSPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_AUTO_ZSPAWN = CVAR_AUTO_ZSPAWN.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TEAM_OVERRIDE = CVAR_ZSPAWN_TEAM_OVERRIDE.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TEAM_ZOMBIE = CVAR_ZSPAWN_TEAM_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_BLOCK_REJOIN = CVAR_ZSPAWN_BLOCK_REJOIN.BoolValue;
	g_hCvarsList.g_bCVAR_ZSPAWN_TIMELIMIT = CVAR_ZSPAWN_TIMELIMIT.BoolValue;
	g_hCvarsList.g_fCVAR_ZSPAWN_TIMELIMIT_TIME = CVAR_ZSPAWN_TIMELIMIT_TIME.FloatValue;
	g_hCvarsList.g_iCVAR_ZSPAWN_TIMELIMIT_ZOMBIE = CVAR_ZSPAWN_TIMELIMIT_ZOMBIE.IntValue;
	g_hCvarsList.g_bCVAR_ZTELE_ZOMBIE = CVAR_ZTELE_ZOMBIE.BoolValue;
	g_hCvarsList.g_bCVAR_ZTELE_HUMAN_BEFORE = CVAR_ZTELE_HUMAN_BEFORE.BoolValue;
	g_hCvarsList.g_bCVAR_ZTELE_HUMAN_AFTER = CVAR_ZTELE_HUMAN_AFTER.BoolValue;
	g_hCvarsList.g_iCVAR_ZTELE_DELAY_ZOMBIE = CVAR_ZTELE_DELAY_ZOMBIE.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_DELAY_HUMAN = CVAR_ZTELE_DELAY_HUMAN.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_MAX_ZOMBIE = CVAR_ZTELE_MAX_ZOMBIE.IntValue;
	g_hCvarsList.g_iCVAR_ZTELE_MAX_HUMAN = CVAR_ZTELE_MAX_HUMAN.IntValue;
	g_hCvarsList.g_bCVAR_ZTELE_AUTOCANCEL = CVAR_ZTELE_AUTOCANCEL.BoolValue;
	g_hCvarsList.g_fCVAR_ZTELE_AUTOCANCEL_DISTANCE = CVAR_ZTELE_AUTOCANCEL_DISTANCE.FloatValue;
	g_hCvarsList.g_bCVAR_ZMENU_ENABLED = CVAR_ZMENU_ENABLED.BoolValue;
}

/**
 * Hook cvar changes.
 * 
 * @param unhook	If true, cvars will be unhooked, false to hook cvars.
 */
Action CvarsHook(bool unhook = false)
{
	// If unhook is true, then continue.
	if (unhook)
	{
		// Unhook all cvars.
		UnhookConVarChange(g_hAutoTeamBalance, CvarsHookLocked);
		UnhookConVarChange(g_hLimitTeams, CvarsHookLocked);
		UnhookConVarChange(g_hIgnoreRoundWinConditions, CvarsHookLocked);
		UnhookConVarChange(g_hTeammatesAreEnemies, CvarsHookLocked);
		//UnhookConVarChange(g_hRestartGame, CvarsHookRestartGame);
		
		UnhookConVarChange(CVAR_VOL, VolEnabledChanged);
		
		// Stop after unhooking cvars.
		return;
	}
	
	// Set locked cvars to their locked value.
	SetConVarInt(g_hAutoTeamBalance, CVARS_AUTOTEAMBALANCE_LOCKED);
	SetConVarInt(g_hLimitTeams, CVARS_LIMITTEAMS_LOCKED);
	SetConVarInt(g_hIgnoreRoundWinConditions, CVARS_IGNORE_ROUND_WIN_CONDITIONS_LOCKED);
	SetConVarInt(g_hTeammatesAreEnemies, CVARS_TEAMMATES_ARE_ENEMIES_LOCKED);
	
	// Hook cvar to prevent it from changing.
	HookConVarChange(g_hAutoTeamBalance, CvarsHookLocked);
	HookConVarChange(g_hLimitTeams, CvarsHookLocked);
	HookConVarChange(g_hIgnoreRoundWinConditions, CvarsHookLocked);
	HookConVarChange(g_hTeammatesAreEnemies, CvarsHookLocked);
	//HookConVarChange(g_hRestartGame, CvarsHookRestartGame);
	GetConVarString(g_hMp_Maxmoney, g_sValue_Mp_Maxmoney, sizeof(g_sValue_Mp_Maxmoney));
	GetConVarString(g_hSv_Disable_Radar, g_sValue_Sv_Disable_Radar, sizeof(g_sValue_Sv_Disable_Radar));
	HookConVarChange(CVAR_VOL, VolEnabledChanged);
}

/**
 * Cvar hook callback (mp_autoteambalance, mp_limitteams)
 * Prevents changes to cvar.
 * 
 * @param convar	The cvar handle.
 * @param oldvalue  The value before the attempted change.
 * @param newvalue  The new value.
 */
public void CvarsHookLocked(Handle cvar, const char[] oldvalue, const char[] newvalue)
{
	// If cvar is mp_autoteambalance, then continue.
	if (cvar == g_hAutoTeamBalance)
	{
		// If plugin is reverting value, then stop.
		if (StringToInt(newvalue) == CVARS_AUTOTEAMBALANCE_LOCKED)
		{
			return;
		}
		
		// Revert to locked value.
		SetConVarInt(g_hAutoTeamBalance, CVARS_AUTOTEAMBALANCE_LOCKED);
		
		// If log flag check fails, then don't log.
		LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Cvar Locked", "Cvar \"mp_autoteambalance\" was reverted back to %d.", CVARS_AUTOTEAMBALANCE_LOCKED);
	}
	// If cvar is mp_limitteams, then continue.
	else if (cvar == g_hLimitTeams)
	{
		// If plugin is reverting value, then stop.
		if (StringToInt(newvalue) == CVARS_LIMITTEAMS_LOCKED)
		{
			return;
		}
		
		// Revert to locked value.
		SetConVarInt(g_hLimitTeams, CVARS_LIMITTEAMS_LOCKED);
		
		// If log flag check fails, then don't log.
		LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Cvar Locked", "Cvar \"mp_limitteams\" was reverted back to %d.", CVARS_LIMITTEAMS_LOCKED);
	}
	// If cvar is mp_ignore_round_win_conditions, then continue.
	else if (cvar == g_hIgnoreRoundWinConditions)
	{
		if(!g_bcvar)
		{
			// If plugin is reverting value, then stop.
			if (StringToInt(newvalue) == CVARS_IGNORE_ROUND_WIN_CONDITIONS_LOCKED)
			{
				return;
			}
		
			// Revert to locked value.
			SetConVarInt(g_hIgnoreRoundWinConditions, CVARS_IGNORE_ROUND_WIN_CONDITIONS_LOCKED);
		
			// If log flag check fails, then don't log.
			LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Cvar Locked", "Cvar \"mp_ignore_round_win_conditions\" was reverted back to %d.", CVARS_IGNORE_ROUND_WIN_CONDITIONS_LOCKED);
		}
		else
		{
			// If plugin is reverting value, then stop.
			if (StringToInt(newvalue) == CVARS_IGNORE_ROUND_WIN_CONDITIONS_ZOMBIESPAWNED_LOCKED)
			{
				return;
			}
		
			// Revert to locked value.
			SetConVarInt(g_hIgnoreRoundWinConditions, CVARS_IGNORE_ROUND_WIN_CONDITIONS_ZOMBIESPAWNED_LOCKED);
		
			// If log flag check fails, then don't log.
			LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Cvar Locked", "Cvar \"mp_ignore_round_win_conditions\" was reverted back to %d.", CVARS_IGNORE_ROUND_WIN_CONDITIONS_ZOMBIESPAWNED_LOCKED);
		}
	}
	// If cvar is mp_teammates_are_enemies, then continue.
	else if (cvar == g_hTeammatesAreEnemies)
	{
		// If plugin is reverting value, then stop.
		if (StringToInt(newvalue) == CVARS_TEAMMATES_ARE_ENEMIES_LOCKED)
		{
			return;
		}
		
		// Revert to locked value.
		SetConVarInt(g_hTeammatesAreEnemies, CVARS_TEAMMATES_ARE_ENEMIES_LOCKED);
		
		// If log flag check fails, then don't log.
		LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Cvar Locked", "Cvar \"mp_teammates_are_enemies\" was reverted back to %d.", CVARS_TEAMMATES_ARE_ENEMIES_LOCKED);
	}
}

/**
 * Cvar hook callback (mp_restartgame)
 * Stops restart and just ends the round.
 * 
 * @param convar	The cvar handle.
 * @param oldvalue  The value before the attempted change.
 * @param newvalue  The new value.

public void CvarsHookRestartGame(Handle cvar, const char[] oldvalue, const char[] newvalue)
{
	// Prevent round restart.
	SetConVarInt(cvar, 0);
	
	// If value was invalid or 0, then stop.
	float delay = StringToFloat(newvalue);
	if (delay <= 0)
	{
		return;
	}
	
	// Terminate the round with restart time as delay.
	RoundEndTerminateRound(delay);
	
	// If log flag check fails, then don't log.
	LogEvent(false, LogType_Normal, LOG_CORE_EVENTS, LogModule_Cvars, "Restart Game", "\"mp_restartgame\" was caught and blocked, commencing round.");
}
 */