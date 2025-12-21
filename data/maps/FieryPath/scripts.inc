# 1 "data/maps/FieryPath/scripts.pory"

# 2 "data/maps/FieryPath/scripts.pory"
FieryPath_MapScripts::
# 3 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
# 4 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FieryPath_OnLoad
# 5 "data/maps/FieryPath/scripts.pory"
	.byte 0
# 6 "data/maps/FieryPath/scripts.pory"

# 7 "data/maps/FieryPath/scripts.pory"
FieryPath_OnLoad:
# 8 "data/maps/FieryPath/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, FieryPath_EventScript_MoltressCave
# 9 "data/maps/FieryPath/scripts.pory"
	end
# 10 "data/maps/FieryPath/scripts.pory"

# 11 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition:
# 12 "data/maps/FieryPath/scripts.pory"
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
# 13 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
# 14 "data/maps/FieryPath/scripts.pory"
	end
# 15 "data/maps/FieryPath/scripts.pory"

# 16 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_MoveScottToFallarbor::
# 17 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 18 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 19 "data/maps/FieryPath/scripts.pory"
	return

FieryPath_EventScript_MoltressCave::
# 26 "data/maps/FieryPath/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, FieryPath_EventScript_MoltressCave_1
	return

FieryPath_EventScript_MoltressCave_1:
# 27 "data/maps/FieryPath/scripts.pory"
	setmetatile 8, 0, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 28 "data/maps/FieryPath/scripts.pory"
	setmetatile 8, 1, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
	return

