---
title: Reshade
collection: leaf
permalink: /:path/reshade/
edit-date: 2021-10-19
typora-root-url: ../../
notes: ^ is only so typora correctly renders images
---

# Reshade Presets
{: .no_toc}

<div class="contents-intro-container" markdown="1">

{: .table-of-contents}

* Will be replaced with the ToC
{:toc}

<div class="page-intro">

<p>
presets for <a href="https://reshade.me/">crosire's reshade</a>
</p>

<p>
i haven't used <a href="https://sfx.thelazy.net/games/">sweetfx' mouseover script</a> due to my no js policy, but one can hover over the images to see the "before" version
</p>

</div>

</div>

---

## CRT Æsthetic

scanlines, bloom and frame blending, it's inspired by crt's rather than slavishly imitating: i've gone for aestheticity over authenticity - i don't know if i've ever seen any actual crt screens that look like this, but i just went for what i think looks best

this isn't a slight against pixel artists, i think it requires very good pixel art to be readable on a crt. this just makes things pop a little more

made on 1440p, but also tested at 1080p

hover over each image to view a comparison before image, and middle click to open the image in a new tab

i'd advise viewing the previews at large size or maybe even fullscreen (<kbd>F11</kbd>), else the scanlines get lost

### Blasphemous

<a href="/assets/text/reshade/blasphemous-crt-aesthetic.ini" download>download</a> {{ site.sep_char }} [sfx repo](https://sfx.thelazy.net/games/preset/12125/)

vastly underrated game - this was the game this preset was originally designed
for, and the one that has the comments in the .ini file

<div class="reshade-container">
	<a href="/assets/images/games/reshade/blasphemous-after.png">
		<img src="/assets/images/games/reshade/blasphemous-after.png"
			class="showcase sc-wide sc-mid sc-rs-after"
			alt="crt æsthetic for blasphemous - after" />
		<img src="/assets/images/games/reshade/blasphemous-before.png"
			class="showcase sc-wide sc-mid sc-rs-before"
			alt="crt æsthetic for blasphemous - before" />
		</a>
</div>

### CastleVania: Order of Ecclesia

<a href="/assets/text/reshade/dev-sys-crt-aesthetic.ini" download>download</a>

should work for all the ds castlevanias, but untested as of yet

much lower brightboost to compensate for ds games being overly bright (i presume due to the ds' low saturation screen - akin to the gba)

the emulator that i could get to work with reshade was melonDS

<div class="reshade-container">
	<a href="/assets/images/games/reshade/ooe-after.png">
		<img src="/assets/images/games/reshade/ooe-after.png"
			class="showcase sc-wide sc-mid sc-rs-after"
			alt="crt æsthetic for castlevania: ooe - after" />
		<img src="/assets/images/games/reshade/ooe-before.png"
			class="showcase sc-wide sc-mid sc-rs-before"
			alt="crt æsthetic for castlevania: ooe - before" />
		</a>
</div>

### Timespinner

<a href="/assets/text/reshade/timespinner-crt-aesthetic.ini" download>download</a>

not quite a pixel perfect game, so sometimes looks a bit blurry when game-pixels are halfway between shader-pixels. i've quadrupled the horizontal resolution for this reason, which doesn't look great but reduces blurring when entering the screen

N.B. pcgw says it's a directx 9 game, but reshade only works when selecting directx 10/11/12 mods

<div class="reshade-container">
	<a href="/assets/images/games/reshade/timespinner-after.png">
		<img src="/assets/images/games/reshade/timespinner-after.png"
			class="showcase sc-wide sc-mid sc-rs-after"
			alt="crt æsthetic for timespinner - after" />
		<img src="/assets/images/games/reshade/timespinner-before.png"
			class="showcase sc-wide sc-mid sc-rs-before"
			alt="crt æsthetic for timespinner - before" />
		</a>
</div>

---

## KennyKid's Universal Preset

### All Games

<a href="/assets/text/reshade/kennykids-universal-preset.ini" download>download</a>

this is such a fantastic preset, and it's the first one i install for most games i play. it was originally made for sweetfx 2.0, but i manually converted it to reshade. i thought i'd upload it here to save others the trouble

all credit goes to [kennykid](https://sfx.thelazy.net/users/u/Kennykid/)

screenshot coming soon, for now check [kennykid's pages on the sfx repo](https://sfx.thelazy.net/games/screenshot/51403/)