FortreeCity_House5_MapScripts::
	.byte 0

FortreeCity_House5_EventScript_PokefanF::
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Man::
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House5_Text_TreeHousesAreGreat:
	.string "The tree houses of FORTREE are great!\p"
	.string "I think it's the number one town for\n"
	.string "living together with POKéMON.$"

FortreeCity_House5_Text_AdaptedToNature:
	.string "POKéMON and people have adapted to\n"
	.string "nature for survival.\p"
	.string "There's no need to make nature\n"
	.string "conform to the way we want to live.$"

FortreeCity_House5_Text_Zigzagoon:
	.string "ZIGZAGOON: Bufuu!$"

FortreeCity_House5_EventScript_SurskitTrade

	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_SURSKIT_TRADE, ArticunoFortreeCity_House5_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_SURSKIT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox ArticunoFortreeCity_House5_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ArticunoFortreeCity_House5_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, ArticunoFortreeCity_House5_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, ArticunoFortreeCity_House5_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox ArticunoFortreeCity_House5_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_SURSKIT_TRADE
	release
	end
 
ArticunoFortreeCity_House5_DeclineTrade::
	msgbox ArticunoFortreeCity_House5_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
ArticunoFortreeCity_House5_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox ArticunoFortreeCity_House5_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
ArticunoFortreeCity_House5_EventScript_TradeCompleted::
	msgbox ArticunoFortreeCity_House5_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
ArticunoFortreeCity_House5_EventScript_TradeCompleted_Text::
	.string "Take good care of my Surskit!$"
 
ArticunoFortreeCity_House5_Text_WillingToTradeIt::
	.string "Check out this {STR_VAR_2}!\n"
	.string "It took me years to evolve it!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"
 
ArticunoFortreeCity_House5_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
ArticunoFortreeCity_House5_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
ArticunoFortreeCity_House5_TradeThanks::
	.string "Thanks for trading with me.$"