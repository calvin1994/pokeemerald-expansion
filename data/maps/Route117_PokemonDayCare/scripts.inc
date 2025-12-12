# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts::
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"
.set RAND_EGG_PRICE, 5000
# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 9 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition:
# 10 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 11 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end

Route117_PokemonDayCare_RandEggGiver::
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route117_PokemonDayCare_RandEggGiver_2
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_1
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	showmoneybox 0, 0
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_2, MSGBOX_YESNO
# 48 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route117_PokemonDayCare_RandEggGiver_5
Route117_PokemonDayCare_RandEggGiver_4:
# 98 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_7
# 99 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 100 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end

Route117_PokemonDayCare_RandEggGiver_2:
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_0
# 30 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end

Route117_PokemonDayCare_RandEggGiver_5:
# 50 "data/maps/Route117_PokemonDayCare/scripts.pory"
	checkmoney RAND_EGG_PRICE
# 51 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route117_PokemonDayCare_RandEggGiver_8
# 59 "data/maps/Route117_PokemonDayCare/scripts.pory"
	getpartysize
# 60 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route117_PokemonDayCare_RandEggGiver_11
# 69 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playse SE_SHOP
# 70 "data/maps/Route117_PokemonDayCare/scripts.pory"
	removemoney RAND_EGG_PRICE
# 71 "data/maps/Route117_PokemonDayCare/scripts.pory"
	updatemoneybox
# 72 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_5
# 73 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_6
# 75 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitfanfare
# 76 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 77 "data/maps/Route117_PokemonDayCare/scripts.pory"
	random 16
# 78 "data/maps/Route117_PokemonDayCare/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 0, Route117_PokemonDayCare_RandEggGiver_15
# 80 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 1, Route117_PokemonDayCare_RandEggGiver_16
# 81 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 2, Route117_PokemonDayCare_RandEggGiver_17
# 82 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 3, Route117_PokemonDayCare_RandEggGiver_18
# 83 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 4, Route117_PokemonDayCare_RandEggGiver_19
# 84 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 5, Route117_PokemonDayCare_RandEggGiver_20
# 85 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 6, Route117_PokemonDayCare_RandEggGiver_21
# 86 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 7, Route117_PokemonDayCare_RandEggGiver_22
# 87 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 8, Route117_PokemonDayCare_RandEggGiver_23
# 88 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 9, Route117_PokemonDayCare_RandEggGiver_24
# 89 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 10, Route117_PokemonDayCare_RandEggGiver_25
# 90 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 11, Route117_PokemonDayCare_RandEggGiver_26
# 91 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 12, Route117_PokemonDayCare_RandEggGiver_27
# 92 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 13, Route117_PokemonDayCare_RandEggGiver_28
# 93 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 14, Route117_PokemonDayCare_RandEggGiver_29
# 94 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 15, Route117_PokemonDayCare_RandEggGiver_30
Route117_PokemonDayCare_RandEggGiver_13:
# 96 "data/maps/Route117_PokemonDayCare/scripts.pory"
	giveegg VAR_TEMP_0
	goto Route117_PokemonDayCare_RandEggGiver_4

Route117_PokemonDayCare_RandEggGiver_8:
# 53 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_3
# 54 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 55 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end

Route117_PokemonDayCare_RandEggGiver_11:
# 62 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_4
# 64 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 65 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end

Route117_PokemonDayCare_RandEggGiver_15:
# 79 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_16:
# 80 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ELEKID
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_17:
# 81 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MAGBY
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_18:
# 82 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TYROGUE
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_19:
# 83 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SMOOCHUM
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_20:
# 84 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOGEPI
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_21:
# 85 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MUNCHLAX
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_22:
# 86 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_HAPPINY
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_23:
# 87 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MIME_JR
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_24:
# 88 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MANTYKE
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_25:
# 89 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_26:
# 90 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_27:
# 91 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_28:
# 92 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHINGLING
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_29:
# 93 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Route117_PokemonDayCare_RandEggGiver_13

Route117_PokemonDayCare_RandEggGiver_30:
# 94 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Route117_PokemonDayCare_RandEggGiver_13


Route117_PokemonDayCare_RandEggGiver_Text_0:
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I have found so many eggs!\p"
	.string "I am too old taking care of them…\p"
	.string "But I do not feel a strong bond between\n"
	.string "you and your POKéMON…\p"
	.string "So… I can't entrust it to your care with\n"
	.string "a clear conscience.\p"
	.string "Come visit me again, when you have beaten\n"
	.string "FLANNERY in LAVARIDGE TOWN!$"

Route117_PokemonDayCare_RandEggGiver_Text_1:
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I have found so many eggs but I am\n"
	.string "too old taking care of them…\p"
	.string "I feel a strong bond between you and\n"
	.string "your POKéMON!\p"
	.string "So… I can entrust it to your care with a\n"
	.string "clear conscience.$"

Route117_PokemonDayCare_RandEggGiver_Text_2:
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Would you mind taking one of them into\n"
	.string "your care for 5.000¥?$"

Route117_PokemonDayCare_RandEggGiver_Text_3:
# 53 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "You don't have enough money…$"

Route117_PokemonDayCare_RandEggGiver_Text_4:
# 62 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

Route117_PokemonDayCare_RandEggGiver_Text_5:
# 72 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Take it then…$"

Route117_PokemonDayCare_RandEggGiver_Text_6:
# 74 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received one EGG!$"

Route117_PokemonDayCare_RandEggGiver_Text_7:
# 98 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Come back if you change your mind!$"
