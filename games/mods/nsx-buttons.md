---
title: NSX Buttons
collection: leaf
permalink: /:path/nsx-buttons/
edit-date: 2022-08-15
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

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/demons-souls) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/demonssouls/mods/47)

* to install:
	* unpack `.\USRDIR\` from your choice of archive to `[rom-directory]\PS3_GAME\`

![demon's soul nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/2952/images/47/47-1627235435-1097188189.jpeg){: .showcase .sc-wide .sc-btm}

---

### Dark Souls I

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/dark-souls-i) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/demonssouls/mods/1778)

* to install **remastered**:
	* download [DSR TPUP](https://www.nexusmods.com/darksoulsremastered/mods/9)
	* unpack files from .`\Texture Override` to `[TPUP_directory]\Texture Override`
	* run DSR TPUP
* to install **ptde**:
	* /!\ the ptde version is untested, as i don't own ptde, but it *should* work /!\
	* Download DSFix and enable texture override
	* Copy png file to `[game_directory]\DATA\dsfix\tex_override`

![dark souls 1 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/2432/images/375/375-1627472569-32691204.jpeg){: .showcase .sc-wide .sc-mid}

---

### Dark Souls II (SotFS)

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/dark-souls-ii) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/darksouls2/mods/990)

* to install with ipg11:
	* unpack files from `.\tex_override` to `[game_directory]\game\igp11\tex_override`
* to install manually:
	* download no-igp11 file, and unpack from `.\font\` to `[game_directory]\game\font\`
		* (this version may work with non-sotfs, but it's untested)

![dark souls 2 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/482/images/990/990-1627310764-2065981038.jpeg){: .showcase .sc-wide .sc-btm}

---

### Dark Souls III

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/dark-souls-iii) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/darksouls3/mods/993)

* to install with ipg11:
	* unpack files from `.\tex_override` to `[game_directory]\game\igp11\tex_override`

![dark souls 3 nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/1392/images/993/993-1627386166-97632564.jpeg){: .showcase .sc-wide .sc-btm}

---

### Elden Ring

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/elden-ring) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/eldenring/mods/6)

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

![elden ring nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/4333/images/6/6-1654724459-751664911.jpeg){: .showcase .sc-wide .sc-mid}

---

## Game Kitchen

### Blasphemous

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/blasphemous) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/blasphemous/mods/14)

blasphemous is such a good game - if you've never played it, let this page be
your catalyst

* to install (simple)
	* locate your blasphemous folder
		* (by default: `C:\Program Files (x86)\Steam\steamapps\common\Blasphemous`)
	* (optionally) back up your vanilla `data.unity3d` file
		* change the file extension or move to another folder, else the game will load slowly
	* copy `data.unity3d` to your `Blasphemous_Data\`
* to install (for merging with other mods)
	* follow the *import* section of [this guide](https://github.com/RedFurryDemon/BlasphemousModdingNotes/blob/master/notes/Graphics.md)
	* in step 4, select the texture `all_platform_buttons`
	* load the included `all_platform_buttons-resources.assets-884.png`
	* install as above

**/!\ game may load slowly first launch after installation - i'm not quite sure why this is, but it's fine after that**

![blasphemous nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/2950/images/14/14-1660601122-1743945224.jpeg){: .showcase .sc-wide .sc-mid}

---

## MercurySteam

### Castlevania: Lords of Shadow

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/cv-los) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/castlevanialordsofshadow/mods/5)

A & B aren't switched, like they are in my other mods, as i disliked jump being on A. only the face buttons for now, i may update later with back buttons + dpad if i can be arsed

* to install:
	* copy `Data00.dat` to your game directory, overwriting existing file
	* (a backup of the original file is included for convenient uninstallation,
		but one can safely ignore it)

![cv: lords of shadow nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/1897/images/5/5-1640738352-1765467313.jpeg){: .showcase .sc-wide .sc-top}

## Overborder Studio

### Thymesia

[Github](https://github.com/ZeusOfTheCrows/nsx-button-prompts/releases/tag/thymesia) {{ site.sep_char }} [Nexus](https://www.nexusmods.com/castlevanialordsofshadow/mods/5)

i usually only make nintendo button prompts, but as nobody else has done so for this game i thought i'd do all of them

the shoulder icons look squished in the rebinding menu, but they look fine elsewhere ingame

* to install
	* locate your game folder
		* usually: steam -> ⚙︎ -> manage -> browse local files
	* copy `PlagueProject\` to your game folder
	* launch game, and enjoy

![cv: lords of shadow nintendo icons mod preview](https://staticdelivery.nexusmods.com/mods/4731/images/2/2-1661186129-863847722.jpeg){: .showcase .sc-wide .sc-btm}
