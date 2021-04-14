# sm-zombiereloaded-3-Franug-Anubis-Edition
### Improved version of zombiereloaded plugin with support for CS:GO and CS:S
 
* Test & Compile, SouceMod 1.10.0-6492
* Sorry for my English.

* Author Greyscale | Richard Helgeby and Franc1sco franug, Anubis Edition
* Version = 3.7 Anubis edition

### Update

* Updated new synthase. Separate audio module to make editing easier and the core lighter. (Without it there will be no audio.)
* Repeatkill fix, block! Zspawn. Command add admin "! Zrk".
* Infect alone off. Command admin "! Zalone" for map testers.
* Zhp removed, as most servers use external plugins for this function.

*Update cfg, so that there are no conflicts of cvars from the "zombireload.cfg" cfg related to the audio ..

### Natives implemented:

### AutoZspawn- Automatic Spawn after Countdown ends.
"zr_autozspawn",					  "1",		"Allow players to spawn into the game late automatic.[Dependency:zr_zspawn ]"

### RoundEnd- Music Round End
"zr_roundend_sounds",	 "1",	"Enable/disable togle sounds roundend. Default '1'"
"zr_roundend_sounds_enable",	 "1",	"Enable/disable sounds roundend. Default '1'"

### Zsounds-General Volume Control Zombies Contdown etc ...
"zr_zombies_sounds",	 "1",	"Enable/disable togle sounds Zombies. Default '1'"
"zr_zombies_sounds_enable",	 "1",	"Enable/disable sounds Zombies. Default '1'"
"zr_volume_default",			 "0.5",	"Default volume Zr Sounds. Default '0.5'"

### Sounds-General  ...


Added the possibility to change the location of the system's sound folders.

* Added the possibility to change the location of the system's sound folders.
* To upload the sound, simply replace the file "By the same name as the previous file", enter the folder name, and upload the corresponding Cvar to the new folder.
* Changing the path of folders avoids file conflicts with the same name as competing servers.

# New Cvars

* zr_countdown_files_mam - "zr/countdown/" - Folder referring to the counter sounds. Man.
* zr_countdown_files_woman - "zr/countdown/female/" - Folder referring to the counter sounds. Woman.
* zr_files_humans_win - "roundend/humanswin/" - Folder referring to the sounds of the round end. Humans win.
* zr_files_zombie_win - "roundend/zombiewin/" - Folder referring to the sounds of the round end. Zombie win.
* zr_files_zombie_sounds - "zr/" - Folder referring to the sounds of zombies.


### Countdown-Male and Female Voice, Customer Selects.
"zr_voice_count_default",			 "1",	"Default countdown voice. ['1' = Mem  | '2' = Woman!] Default 1"

### CustonArms - Depends on Arm-fix(optional plugins\default_glove_blocker.smx - Windows).
"zr_classes_arms",	 "0",			"Enable Class Arms Apply."

### ForceTeams- Moves Players To CT at the beginning of all matches.
"zr_forceteams",		"0",			"Forces teams to switch to Humans at the start of the Match."

### This native will detect infinite loops where the map kills a player.
"zr_respeatkill",		"1",			"Repeat kill map triger. [ 1=On 0=Off ]"
"zr_respeatkill_time",		"5.0",			"Repeat kill time detect"

### No armor all zombies.
"zr_noarmor_zombie",		"1",			"No armor to zombies. [ 1=On 0=Off ]"

### No alone infection.
"zr_no_alone_infection_players"		"2",			"Minimum number of players to start infection.. [ 0 or 1=Off ]"

### No player vs player collisions.
"zr_noblock"		"1",			"Removes player vs. player collisions.. [ 0=Off 1=On ]"

### Global multiplier for knockback.
"zr_knockback_multiplier"		"1.0",			"Global multiplier for knockback. Default '1.0'"

### Please remove these plugins if you use them, to test!

* autozspawn.smx
* RoundEndSound.smx
* zr_customarms_csgo.smx
* zr_forceteams.smx
* zr_repeatkill.smx
* zspawnfranug.smx
* zr_no_alone_infection.smx
* noblock.smx

### Warm up in CS:GO
If you want warm up round work perfectly, Use `optional plugins/ze_warmup.smx`
It can prevent warm up will not end in some map

### All natives have been implemented, if using with these plugins there may be conflicts! But if you are going to continue using some of the plugins, please disable the native for the plugin in zombiereloaded.

#I accept suggestions and modifications to improve the code, I am new to programming and I want to help and learn more.
![alt text](https://i.ibb.co/fSYqhHT/20201113222029-1.jpg)
