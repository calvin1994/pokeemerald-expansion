Route104_PrettyPetalFlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
	.byte 0

Route104_PrettyPetalFlowerShop_OnTransition:
	setflag FLAG_LANDMARK_FLOWER_SHOP
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
	setflag FLAG_TEMP_1
	end

Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
	setobjectxyperm LOCALID_FLOWER_SHOP_OWNER, 4, 6
	end

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
	return

Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
	return

Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
	message gText_PlayerWhatCanIDoForYou
	waitmessage
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
	.2byte DECOR_RED_PLANT
	.2byte DECOR_TROPICAL_PLANT
	.2byte DECOR_PRETTY_FLOWERS
	.2byte DECOR_COLORFUL_PLANT
	.2byte DECOR_BIG_PLANT
	.2byte DECOR_GORGEOUS_PLANT
	pokemartlistend

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_WAILMER_PAIL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

PrettyPetalFlowerShop_InGameTradeSequence::
 
	// Check a flag to see if the trade has already happened
	lock
	faceplayer
	goto_if_set FLAG_INGAME_ROSELIA_TRADE, PrettyPetalFlowerShop_EventScript_TradeCompleted
 
	// Buffer the trade and requested mon names and ask if you want to trade
	setvar VAR_0x8008, INGAME_TRADE_ROSELIA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox PrettyPetalFlowerShop_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PrettyPetalFlowerShop_DeclineTrade
 
	// Handle the selection of the requested mon from the player
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PrettyPetalFlowerShop_DeclineTrade
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies 
	goto_if_ne VAR_RESULT, VAR_0x8009, PrettyPetalFlowerShop_EventScript_NotRequestedMon 
 
	// Perform the actual trade
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon 
	special DoInGameTradeScene 
	waitstate
 
	msgbox PrettyPetalFlowerShop_TradeThanks, MSGBOX_DEFAULT
	setflag FLAG_INGAME_ROSELIA_TRADE
	release
	end
 
PrettyPetalFlowerShop_DeclineTrade::
	msgbox PrettyPetalFlowerShop_DeclineTrade_Text, MSGBOX_DEFAULT
	release
	end
 
PrettyPetalFlowerShop_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PrettyPetalFlowerShop_WrongMon_Text, MSGBOX_DEFAULT
	release
	end
 
PrettyPetalFlowerShop_EventScript_TradeCompleted::
	msgbox PrettyPetalFlowerShop_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
	release
	end
 
PrettyPetalFlowerShop_EventScript_TradeCompleted_Text::
	.string "Take good care of my {STR_VAR_2}!$"
 
PrettyPetalFlowerShop_Text_WillingToTradeIt::
	.string "Check out this {STR_VAR_2}!\n"
	.string "Oh, I can see that you want it!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"
 
PrettyPetalFlowerShop_DeclineTrade_Text::
	.string "Thats too bad, maybe next time.$"
 
PrettyPetalFlowerShop_WrongMon_Text::
	.string "I'm sorry but that is not\n"
	.string "a {STR_VAR_1}, I cannot trade with you.$"
 
PrettyPetalFlowerShop_TradeThanks::
	.string "Thanks for trading with me!$"