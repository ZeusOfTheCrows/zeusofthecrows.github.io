[Variables]

;                     _____              _           _ 
;                    |_   _|__ _ _ _ __ (_)_ _  __ _| |
;                      | |/ -_) '_| '  \| | ' \/ _` | |
;                      |_|\___|_| |_|_|_|_|_||_\__,_|_|

; ================================ Buttons ====================================

; Here you can edit what each button does in each category
; ProgramXText is what will be displayed on the button, such as [Fallout 4]
; ProgramXTarget is the button action, such as a file path or a website URL

; ============= Programs ==============

Program1Text=Online Messages
Program1Target=D:\Program Files\Telegram Desktop\Telegram.exe
Program2Text=World Wide Web
Program1Target=C:\Program Files\Mozilla Firefox\firefox.exe
Program3Text=Media Player
Program3Target=D:\Program Files (x86)\MusicBee\MusicBee.exe
Program4Text=Game Library
Program4Target=C:\Program Files (x86)\Steam\steam.exe
Program5Text=Live Videos
Program5Target=D:\Program Files\Twitch\Bin\Twitch.exe

; ============= Games =================
; By default, the games use steam to launch them, if you have a game that
;					 requires a file path, you can link to that as well.

Game1Text=Dark Souls
Game1Target=steam://rungameid/17504148431881371648
Game2Text=Snake Pass
Game2Target=steam://rungameid/544330
Game3Text=Left 4 Dead
Game3Target=steam://rungameid/500
Game4Text=Left 4 Dead 2
Game4Target=steam://rungameid/550
Game5Text=Witcher 3: Wild Hunt
Game5Target=steam://rungameid/292030

; =========== Internet ================

Website1Text=Web Feeds
Website1Target=https://inoreader.com
Website2Text=Web Videos
Website2Target=https://youtube.com
Website3Text=Web Mail
Website3Target=https://mail.google.com
Website4Text=Dev Repo
Website4Target=https://github.com
Website5Text=Netflix
Website5Target=https://netflix.com

; ============= Sounds ================

key1File=#@#Sounds\key1.wav
key2File=#@#Sounds\key2.wav
key3File=#@#Sounds\key3.wav
key4File=#@#Sounds\key4.wav
key5File=#@#Sounds\key5.wav
powerOnFile=#@#Sounds\poweron.wav
powerOffFile=#@#Sounds\poweroff.wav

; =============================== Variables ===================================

; header text for the main menu
rootHeaderText="Mem check... [measureUsedDisk1] of [measureTotalDisk1] OK#CRLF#"
; header text for the first menu
priHeaderText="Microsoft (c) DOS Programs#CRLF#"
; header text for the second menu
secHeaderText="Valve (c) Steam Games#CRLF#"
; header text for the third menu
terHeaderText="W3 Consortium intercomms#CRLF#"
; header text for the fourth menu
quaHeaderText="Personal Preferences#CRLF#"
; credit text
creditText="Amber terminal created by ZeusOfTheCrows#CRLF#Original FalloutTerminal created by Daniel2435#CRLF#FixedSys Excelsior font by kika (github)#CRLF#Wallpaper by MaxCorpIndustries (reddit)#CRLF#"
; global header text for all menus
mainHeaderText="Waiting for user input:#CRLF#Num | Name#CRLF#----+-----------------------"
; vars for enable/disable cosmetics
trueText=[x]
falseText=[ ]
trueSwitch="--disable"
falseSwitch="--enable"
fontFace=Fixedsys Excelsior
fontSize=20
textVertPad=30
textHeight=30
textWidth=640
; normal text colour
textColour=235,145,3,255
; text glow colour
glowColour=163,67,3,64
; background rect colour — original: 255,176,0,150 
hoverColour=235,145,3,200
; text colour when hovered
hoverTextColour=0,0,0,255
stringAlign=Left
antiAlias=1
; Scanlines should be white, they will be turned black programmatically
Scanlines=D:\ZeusOfTheCrows\Documents\Rainmeter\Skins\Terminal\@Resources\Images\scanlines.png

;                             ___ _         _   
;                            / __| |___  __| |__
;                           | (__| / _ \/ _| / /
;                            \___|_\___/\__|_\_\

; ============================== Text Options =================================

numFont=DSEG7 Classic Bold Italic
ltrFont=DSEG14 Classic-Bold Italic
numSize=32
ltrSize=12
; %H for 24hour, %I for 12hour
hourFormat=%H
clockWidth=400
clockAngle=-1.5

; ================================= Fonts =====================================

clockColour=255,20,30,150
clkGlowColour=207,0,0,64

; ================================ Waveline ===================================
; ============= Deprecated due to cpu usage, ergo not working =================
wvlColour=0,0,0,0
wvlOutlineColour=0,0,0,0

wvlWidth=3
wvlHeight=50

wvlOutlineWidth=1

; ======= Bars =======

wvlRestingHeight=3
wvlRotateAngle=1; -0.02; -0.05; 1; 0; 0
wvlBarSpacing=5

; ===== Behavior =====

wvlAttackSpeed=50
wvlDecaySpeed=50
wvlSensitivity=50