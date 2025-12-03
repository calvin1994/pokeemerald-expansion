FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_ZangooseInGameTradeSequence::
 
	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_ZANGOOSE_TRADE, FallarborTown_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_ZANGOOSE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox FallarborTown_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FallarborTown_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, FallarborTown_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox FallarborTown_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_ZANGOOSE_TRADE
	release
	end
 
FallarborTown_DeclineTrade::
	msgbox FallarborTown_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
FallarborTown_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FallarborTown_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
FallarborTown_EventScript_TradeCompleted::
	msgbox FallarborTown_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
FallarborTown_EventScript_TradeCompleted_Text::
	.string "Take good care of my Zangoose!$"
 
FallarborTown_Text_WillingToTradeIt::
	.string "Check out this {STR_VAR_2}!\n"
	.string "Oh, I can see that you want it!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"
 
FallarborTown_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
FallarborTown_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
FallarborTown_TradeThanks::
	.string "Thanks for trading with me.$"
 
 
 