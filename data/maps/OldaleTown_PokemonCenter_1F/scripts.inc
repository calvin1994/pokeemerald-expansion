# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

PokemonCenter_EventScript_Wondertrade::
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_DAILY_WONDERTRADE, PokemonCenter_EventScript_Wondertrade_2
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_Wondertrade_Text_1, MSGBOX_YESNO
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonCenter_EventScript_Wondertrade_5
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_Wondertrade_Text_3
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_EventScript_Wondertrade_2:
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_Wondertrade_Text_0
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_EventScript_Wondertrade_5:
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_Wondertrade_Text_2
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PokemonCenter_EventScript_Wondertrade_8
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative CreateWonderTradePokemon
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	callnative DoSurpriseTrade
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DAILY_WONDERTRADE
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_EventScript_Wondertrade_8:
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_EventScript_Wondertrade_Text_3
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


PokemonCenter_EventScript_Wondertrade_Text_0:
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You have used this wonderful trade today.\n"
	.string "There is only one wonder trade per day!$"

PokemonCenter_EventScript_Wondertrade_Text_1:
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hey there! Would you like to try a new,\n"
	.string "wonderful way to trade POKéMON?\p"
	.string "It's called wonder trading! Just trade\n"
	.string "away your POKéMON and receive one in\l"
	.string "return from a stranger.\p"
	.string "Would you like to give it a try?$"

PokemonCenter_EventScript_Wondertrade_Text_2:
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Which Pokémon would you like to send?$"

PokemonCenter_EventScript_Wondertrade_Text_3:
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Come back if you want to test\n"
	.string "it out!$"
