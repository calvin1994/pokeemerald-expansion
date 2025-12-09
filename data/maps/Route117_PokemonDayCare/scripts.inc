# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts::
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition:
# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end

Route117_PokemonDayCare_RandEggGiver::
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_RECEIVED_RANDOM_EGG, Route117_PokemonDayCare_RandEggGiver_1
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_1, MSGBOX_YESNO
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route117_PokemonDayCare_RandEggGiver_4
# 98 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_5
# 100 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	return

Route117_PokemonDayCare_RandEggGiver_1:
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_0
# 18 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	return

Route117_PokemonDayCare_RandEggGiver_4:
# 31 "data/maps/Route117_PokemonDayCare/scripts.pory"
	getpartysize
# 32 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route117_PokemonDayCare_RandEggGiver_7
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_3
# 38 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_RECEIVED_RANDOM_EGG
# 39 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_4
# 41 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitfanfare
# 42 "data/maps/Route117_PokemonDayCare/scripts.pory"
	random 16
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 0, Route117_PokemonDayCare_RandEggGiver_12
# 47 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 1, Route117_PokemonDayCare_RandEggGiver_13
# 50 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 2, Route117_PokemonDayCare_RandEggGiver_14
# 53 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 3, Route117_PokemonDayCare_RandEggGiver_15
# 56 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 4, Route117_PokemonDayCare_RandEggGiver_16
# 59 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 5, Route117_PokemonDayCare_RandEggGiver_17
# 62 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 6, Route117_PokemonDayCare_RandEggGiver_18
# 65 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 7, Route117_PokemonDayCare_RandEggGiver_19
# 68 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 8, Route117_PokemonDayCare_RandEggGiver_20
# 71 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 9, Route117_PokemonDayCare_RandEggGiver_21
# 74 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 10, Route117_PokemonDayCare_RandEggGiver_22
# 77 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 11, Route117_PokemonDayCare_RandEggGiver_23
# 80 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 12, Route117_PokemonDayCare_RandEggGiver_24
# 83 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 13, Route117_PokemonDayCare_RandEggGiver_25
# 86 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 14, Route117_PokemonDayCare_RandEggGiver_26
# 89 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case 15, Route117_PokemonDayCare_RandEggGiver_27
Route117_PokemonDayCare_RandEggGiver_10:
# 93 "data/maps/Route117_PokemonDayCare/scripts.pory"
	giveegg VAR_TEMP_0
# 94 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	return

Route117_PokemonDayCare_RandEggGiver_7:
# 33 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_RandEggGiver_Text_2
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	return

Route117_PokemonDayCare_RandEggGiver_12:
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_13:
# 48 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ELEKID
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_14:
# 51 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MAGBY
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_15:
# 54 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TYROGUE
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_16:
# 57 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SMOOCHUM
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_17:
# 60 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOGEPI
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_18:
# 63 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MUNCHLAX
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_19:
# 66 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_HAPPINY
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_20:
# 69 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MIME_JR
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_21:
# 72 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MANTYKE
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_22:
# 75 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_23:
# 78 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_24:
# 81 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CLEFFA
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_25:
# 84 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_26:
# 87 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHINGLING
	goto Route117_PokemonDayCare_RandEggGiver_10

Route117_PokemonDayCare_RandEggGiver_27:
# 90 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Route117_PokemonDayCare_RandEggGiver_10


Route117_PokemonDayCare_RandEggGiver_Text_0:
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Thank you for taking the responsibility!$"

Route117_PokemonDayCare_RandEggGiver_Text_1:
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I have found this egg but I am too\n"
	.string "old taking care of it…\p"
	.string "I feel a strong bond between you and \n"
	.string "your POKéMON!\p"
	.string "So… I can entrust it to your care with a \n"
	.string "clear conscience.\p"
	.string "Would you mind taking it into your care?$"

Route117_PokemonDayCare_RandEggGiver_Text_2:
# 33 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

Route117_PokemonDayCare_RandEggGiver_Text_3:
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Take it then…$"

Route117_PokemonDayCare_RandEggGiver_Text_4:
# 40 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "{PLAYER} recieved the EGG!$"

Route117_PokemonDayCare_RandEggGiver_Text_5:
# 98 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I hope someone else will relieve me \n"
	.string "of this responsibility…$"
