# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "PROTEIN boosts ATTACK,\n"
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and CALCIUM raises SP. ATK.$"
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"

LilycoveCity_DepartmentStore_3F_EvoMart::
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_EvoMart_Text_0
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart EvoMart
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_EvoMart_Text_1
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end


	.align 2
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
EvoMart:
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTECTOR
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_UPGRADE
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_3F_EvoMart_Text_0:
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "How may I serve you?$"

LilycoveCity_DepartmentStore_3F_EvoMart_Text_1:
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Please Come Again.$"
