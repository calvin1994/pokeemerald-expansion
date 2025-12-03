SafariZone_Southwest_MapScripts::
	.byte 0

SafariZone_Southwest_EventScript_Woman::
	msgbox SafariZone_Southwest_Text_Woman, MSGBOX_NPC
	end

SafariZone_Southwest_EventScript_RestHouseSign::
	msgbox SafariZone_Southwest_Text_RestHouseSign, MSGBOX_SIGN
	end

SafariZone_Southwest_ScytherInGameTradeSequence::
 
	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_SCYTHER_TRADE, SafariZone_Southwest_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_SCYTHER
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox SafariZone_Southwest_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SafariZone_Southwest_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SafariZone_Southwest_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, SafariZone_Southwest_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox SafariZone_Southwest_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_SCYTHER_TRADE
	release
	end
 
SafariZone_Southwest_DeclineTrade::
	msgbox SafariZone_Southwest_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_Southwest_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SafariZone_Southwest_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_Southwest_EventScript_TradeCompleted::
	msgbox SafariZone_Southwest_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
SafariZone_Southwest_EventScript_TradeCompleted_Text::
	.string "Take good care of my Scyther!$"
 
SafariZone_Southwest_Text_WillingToTradeIt::
	.string "Check out this {STR_VAR_2}!\n"
	.string "Oh, I can see that you want it!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"
 
SafariZone_Southwest_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
SafariZone_Southwest_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
SafariZone_Southwest_TradeThanks::
	.string "Thanks for trading with me.$"
 