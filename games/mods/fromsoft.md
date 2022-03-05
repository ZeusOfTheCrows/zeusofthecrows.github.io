---
title: Fromsoft
collection: leaf
permalink: /:path/fromsoft/
edit_date: 2021-10-19
typora-root-url: ../../
notes: ^ is only so typora correctly renders images
---

# From Software's games
{: .no_toc}

<div class="contents-intro-container" markdown="1">

{: .table-of-contents}

* Will be replaced with the ToC
{:toc}

{: .page-intro}

mods i've made for fromsoft's games

</div>

---

## Demon's Souls

{: #svi-des}

### Soul Value Icons

Normal: [Download](/assets/zips/games/mods/des/soul-values.7z) {{ site.sep_char }} Remake [Download](/assets/zips/games/mods/des/soul-values-remake.7z) {{ site.sep_char }}  [Nexus](https://www.nexusmods.com/demonssouls/mods/51)

**save yourself a google, and display the values in game.** display the number of souls acquired from soldier's, hero's, and demon's soul items on the icon. the remake version has some of the icons i liked from the bluepoint remake.

dark souls III version [here](#svi-ds3)

![Demon's Souls Soul Value Icons mod preview](https://staticdelivery.nexusmods.com/mods/2952/images/51/51-1629380579-218465990.png){: .showcase .sc-wide .sc-mid}

---

## Dark Souls II

### Hylian Shield for SotFS

[Download](/assets/zips/games/mods/ds2/hylian-shield-sotfs.7z) {{ site.sep_char }}  [Nexus](https://www.nexusmods.com/darksouls2/mods/967)

retexture of the drangleic  shield to the hylian shield from zelda: breath of the wild/skyward  sword. this originally started as a port of [this mod](https://www.nexusmods.com/darksouls2/mods/227) to sotfs; but it had a few jpeg artifacts and once i tried to reduce those, i found it easier to just recreate it from scratch.

requires igp11, may get you banned from online, caveat emptor, etc.

* to install:
	* place .dds texture files in igp11's tex_override folder.
	* you can ignore the .png and .afphoto files, but i've included them in case anyone wants to edit this mod.

![LoZ hylian shield mod preview](https://staticdelivery.nexusmods.com/mods/482/images/967/967-1620957422-1177216556.jpeg){: .showcase .sc-wide .sc-mid}

---

## Dark Souls III

{: #svi-ds3}

### Soul Value Icons

[Download](/assets/zips/games/mods/ds3/soul-values.7z) {{ site.sep_char }}  [Nexus](https://www.nexusmods.com/darksouls3/mods/1022)

**save yourself a google, and display the values in game.** optional boss souls icons (they're quite nice icons, and a lot of them share the same icon so it can look a bit cluttered)

demon's souls version [here](#svi-des)

* to install:
	* Download iGP11
	* Unpack the files from either `.\w-boss-souls` or `.\no-boss-souls` to `[game_directory]\Game\iGP11\tex_override`

![DS3 Soul Value Icons mod preview](https://staticdelivery.nexusmods.com/mods/1392/images/1022/1022-1628869927-1062801881.jpeg){: .showcase .sc-wide .sc-mid}

---

### DS1 style ticks for DetUI

[Download](/assets/zips/games/mods/ds3/detailed-ui-w-ticks.7z) {{ site.sep_char }}  [Nexus](https://www.nexusmods.com/darksouls3/mods/1015)

I like [the Detailed UI mod](https://www.nexusmods.com/darksouls3/mods/91) by Celice, but﻿ I miss the little bars from DS1 that let you easily and quickly see your health level. I didn't want to take downloads away from the original though, so install that one first and then overwrite it  with this one.

* To install:
	* Download the iGP11, and the [Detailed UI mod](https://www.nexusmods.com/darksouls3/mods/91)
	* Unpack files from `[detailed_ui]` to `[game_directory]\Game\iGP11\tex_override`
	* Copy <code><abbr title="65536_12831202783399872305.dds"}65536_12[..]05.dds</abbr></code> to `[game_directory]\Game\iGP11\tex_override`, replacing the other
		* (If you want to replace the blood echoes symbol with a normal souls symbol)
		* copy <code><abbr title="65536_2579900381049114659.dds">65536_25[..]59.dds</abbr></code>  as well

<!-- html is to allow title (tooltip) property in code element -->

![DS3 Soul Value Icons mod preview](https://staticdelivery.nexusmods.com/mods/1392/images/1015/1015-1628547210-1550448456.png){: .showcase .sc-wide .sc-mid}

