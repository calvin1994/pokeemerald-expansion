MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"

MeteorFalls_DittoInGameTradeSequence::
 
	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_DITTO_TRADE, MeteorFalls_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_DITTO
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox MeteorFalls_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MeteorFalls_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MeteorFalls_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, MeteorFalls_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox MeteorFalls_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_DITTO_TRADE
	release
	end
 
MeteorFalls_DeclineTrade::
	msgbox MeteorFalls_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
MeteorFalls_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox MeteorFalls_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
MeteorFalls_EventScript_TradeCompleted::
	msgbox MeteorFalls_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
MeteorFalls_EventScript_TradeCompleted_Text::
	.string "Thanks for your efforts!\n"
	.string "but where is the difference?$"
 
MeteorFalls_Text_WillingToTradeIt::
	.string "You made all your way up!\n"
	.string "here!\p"
	.string "I hope you brought the correct\n"
	.string "copy of me...$"
 
MeteorFalls_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
MeteorFalls_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "what I was looking for...$"
 
MeteorFalls_TradeThanks::
	.string "But where is the difference?$"
 