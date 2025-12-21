# 1 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideIceRoom_OnLoad
# 4 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_OnLoad:
# 8 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
call_if_set FLAG_SYS_GAME_CLEAR, ShoalCave_LowTideIceRoom_EventScript_ArticunoCave
# 9 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
end

ShoalCave_LowTideIceRoom_EventScript_ArticunoCave::
# 15 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ShoalCave_LowTideIceRoom_EventScript_ArticunoCave_1
	return

ShoalCave_LowTideIceRoom_EventScript_ArticunoCave_1:
# 16 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 11, 19, 0x38B, FALSE
	return

