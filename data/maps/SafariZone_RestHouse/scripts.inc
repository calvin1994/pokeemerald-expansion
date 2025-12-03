SafariZone_RestHouse_MapScripts::
	.byte 0

SafariZone_RestHouse_EventScript_Youngster::
	msgbox SafariZone_RestHouse_Text_Youngster, MSGBOX_NPC
	end

SafariZone_RestHouse_EventScript_PsychicM::
	msgbox SafariZone_RestHouse_Text_PsychicM, MSGBOX_NPC
	end

SafariZone_RestHouse_EventScript_FatMan::
	msgbox SafariZone_RestHouse_Text_FatMan, MSGBOX_NPC
	end

SafariZone_RestHouse_InGameTradeSequence::
 
	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_EEVEE_TRADE, SafariZone_RestHouse_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_EEVEE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox SafariZone_RestHouse_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SafariZone_RestHouse_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZone_RestHouse_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, SafariZone_RestHouse_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox SafariZone_RestHouse_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_EEVEE_TRADE
	release
	end
 
SafariZone_RestHouse_DeclineTrade::
	msgbox SafariZone_RestHouse_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_RestHouse_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SafariZone_RestHouse_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_RestHouse_EventScript_TradeCompleted::
	msgbox SafariZone_RestHouse_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_RestHouse_EventScript_TradeCompleted_Text::
	.string "Take good care of my {STR_VAR_1}!$"
 
SafariZone_RestHouse_Text_WillingToTradeIt::
	.string "I'm currently playing Pokémon GO\n"
	.string "and caught a cute Eevee.\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it to you for a {STR_VAR_1}.$"
 
SafariZone_RestHouse_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
SafariZone_RestHouse_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
SafariZone_RestHouse_TradeThanks::
	.string "Do not disturb me any further.\n"
 	.string "Back to Pokémon GO!$"