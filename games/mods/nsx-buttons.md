---
title: NSX Buttons
collection: leaf
permalink: /:path/nsx-buttons/
edit_date: 2021-12-31
typora-root-url: ../../
notes: ^ is only so typora correctly renders images
---

# NSX Button Prompts
{: .no_toc}

<div class="contents-intro-container" markdown="1">

{: .table-of-contents}

* Will be replaced with the ToC
{:toc}

{: .page-intro}

i find the nintendo layout a lot more intuitive, but colours make buttons a lot easier to see at a glance. for this reason, if one doesn't exist, i've started to make a mod for the switch button prompts, but with the snes/sfc colours for the games i play. for games without a way to change the accept/cancel buttons in menus, A/B are the same way around as xinput, allowing one change it via Steam Input or some other method.

</div>

---

## From Software

### Demon's Souls

Normal: [Download](/assets/zips/games/mods/des/nsx-button-prompts.7z) {{ site.sep_char }} A/B Switched [Download](/assets/zips/games/mods/des/nsx-button-prompts.7z) {{ site.sep_char }} Playstation [Download](/assets/zips/games/mods/des/nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/demonssouls/mods/47)

- to install: 
	- unpack `.\USRDIR\` from your choice of archive to `[rom-directory]\PS3_GAME\`

![demon's soul nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/2952/images/47/47-1627235435-1097188189.jpeg){: .showcase .sc-wide .sc-btm}

---

### Dark Souls I

Remastered [Download](/assets/zips/games/mods/ds1/nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/demonssouls/mods/375) {{ site.sep_char }} PtDE [Download](/assets/zips/games/mods/ds1/ptde-nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/demonssouls/mods/1778)

- to install **remastered**:
	- ﻿download [DSR TPUP](https://www.nexusmods.com/darksoulsremastered/mods/9)
	- ﻿unpack files from .`\Texture Override` to `[TPUP_directory]\Texture Override`
	- run DSR TPUP
- to install **ptde**:
	- /!\ the ptde version is untested, as i don't own ptde, but it *should* work /!\
	- Download DSFix and enable texture override
	- Copy png file to `[game_directory]\DATA\dsfix\tex_override`

![dark souls 1 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/2432/images/375/375-1627472569-32691204.jpeg){: .showcase .sc-wide .sc-mid}

---

### Dark Souls II (SotFS)

Normal: [Download](/assets/zips/games/mods/ds2/nsx-button-prompts.7z) {{ site.sep_char }} Manual: [Download](/assets/zips/games/mods/ds2/nsx-button-prompts-no-igp11.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/darksouls2/mods/990)

* to install with ipg11:
	* unpack files from `.\tex_override` to `[game_directory]\game\igp11\tex_override`
* to install manually:
	* download no-igp11 file, and unpack from `.\font\` to `[game_directory]\game\font\`
		* (this version may work with non-sotfs, but it's untested)

![dark souls 2 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/482/images/990/990-1627310764-2065981038.jpeg){: .showcase .sc-wide .sc-btm}

---

### Dark Souls III

[Download](/assets/zips/games/mods/ds3/nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/darksouls3/mods/993)

* to install with ipg11:
	* unpack files from `.\tex_override` to `[game_directory]\game\igp11\tex_override

![dark souls 3 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/1392/images/993/993-1627386166-97632564.jpeg){: .showcase .sc-wide .sc-btm}

---

### Elden Ring

[Download](/assets/zips/games/mods/er/nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/eldenring/mods/6)

* To install with ModEngine 2:
  * Download and extract ModEngine 2
  * Unpack mod folder to your mod engine install directory
    * One can also rename the mod folder, and add the new name to config_eldenring.toml

  * Run game via launchmod_eldenring.bat

* To install with UXM:
  * To be honest I don't know, I don't use it
  * It should work, but I haven't tested it


Made with [ER.BDT.Tool](https://github.com/Ekey/ER.BDT.Tool); and [Yabber](https://github.com/JKAnderson/Yabber/).

It's a lazy implementation, but elden ring makes modding so annoying I couldn't be bothered to do it better. It may be improved in the future, but no promises.

![elden ring nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/4333/images/6/6-1654554125-465066405.jpeg){: .showcase .sc-wide .sc-mid}

---

## MercurySteam

### Castlevania: Lords of Shadow

Normal: [Download](/assets/zips/games/mods/cvlos/nsx-button-prompts.7z) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/castlevanialordsofshadow/mods/5)

 A & B aren't switched, like they are in my other mods, as i disliked jump being on A. only the face buttons for now, i may update later with back buttons + dpad if i can be arsed

- to install: 
	- copy `Data00.dat` to your game directory, overwriting existing file
	- (a backup of the original file is included for convenient uninstallation, but one can safely
		ignore it)

![demon's soul nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/1897/images/5/5-1640738352-1765467313.jpeg){: .showcase .sc-wide .sc-top}
