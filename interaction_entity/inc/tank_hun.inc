;-----------------Hungarian Pack
(define "hun_tank_texmode"
	{on spawn
		{link_sound "flame"			"fire/big"}
		{link_sound "move"			"vehicle/tracks/trackclank"}
		{link_sound "heavy_move"	"vehicle/tracks/heavy"}
		{link_sound "gunner_hatch"		"vehicle/hatch_open"}
		{if not rain
			{add_view	"dustrun_big"			"on_ground"				"FXtraceR1"}
			{add_view	"dustrun_big"			"on_ground"				"FXtraceL1"}
			{add_view	"dustrun_small"			"on_grass"				"FXtraceR1"}
			{add_view	"dustrun_small"			"on_grass"				"FXtraceL1"}
			{add_view	"dustrun_sand_big" 		"on_sand"				"FXtraceR1"}
			{add_view	"dustrun_sand_big" 		"on_sand"				"FXtraceL1"}
			{add_view	"dustrun_snow_big" 		"on_snow"				"FXtraceR1"}
			{add_view	"dustrun_snow_big" 		"on_snow"				"FXtraceL1"}
			{add_view	"dustrun_small"			"on_country_road"		"FXtraceR1"}
			{add_view	"dustrun_small"			"on_country_road"		"FXtraceL1"}
		else
			{add_view	"engine_steam"			"engine_steam"			"FXfire1"}
        		}

		{add_view	"tank_grit_small"		"on_ground"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_ground"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceL2"}

		{add_view	"tank_grit_small"		"on_grass"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceL2"}

		{add_view	"drops_water"			"on_water"				"FXtraceR1"}
		{add_view	"drops_water"			"on_water"				"FXtraceL1"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceR2"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceL2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceR2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceL2"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceL1"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceR2"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceL2"}

;		{add_view	"flash_cannon_big"		"flashbarrel1"			"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"			"Foresight1"}
 		{add_view	"smoke_zenite"		    "smkafire"			    "Foresight1"}
		{add_view 	"flash_zenit"			"flashbarrel2s"			"foresight2"}
		{add_view	"smoke_white_steam"		"smoke1"				"FXfire1"}
		{add_view	"smoke_black"			"smoke2"				"FXfire2"}
		{add_view	"smoke_black"			"smoke3"				"FXfire2"}
		{add_view	"tank_die_2"			"tank_die"				"FXfire2"}
		{add_view	"smoke_black"			"smoke4"				"FXfire1"}
		{add_view	"smoke_dead_small2"		"smoke4_1"				"FXfire3"}
		{add_view	"fire_cooking_smoke"		"smoke4_3"				"FXfire3"}
		{add_view	"fire_cooking_flames"		"smoke4_4"				"FXfire3"}
		{add_view	"fire_cooking_afterfire"	"smoke4_5"				"FXfire3"}
		{add_view	"fire_cooking_sparkles"		"smoke4_6"				"FXfire3"}
		{add_view	"fire_cooking_explosion_flames"	"smoke4_7"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_8"				"FXfire3"}
		{add_view	"fire_cooking_aftersmoke"	"smoke4_9"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_10"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_11"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_12"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"cooking_explosion1"			"FXfire3"}
		{add_view	"fire_cooking_presmoke"		"smoke4_17"				"FXfire3"}
		{add_view	"fire_cooking_medium_1a"	"smoke_cook_med_1a"			"FXfire3"}
		{add_view	"fire_cooking_medium_1b"	"smoke_cook_med_1b"			"FXfire3"}
		{add_view	"fire_cooking_medium_1c"	"smoke_cook_med_1c"			"FXfire3"}
		{add_view	"fire_cooking_high_1a"		"smoke_cook_high_1a"			"FXfire3"}
		{add_view	"fire_cooking_high_1b"		"smoke_cook_high_1b"			"FXfire3"}
		{add_view	"fire_cooking_barrel_smoke"	"smoke_cook_barrelsmoke"		"Foresight1"}
		{add_view	"fire_cooking_barrel_fire"	"smoke_cook_barrelfire"			"Foresight1"}
		{add_view	"fire_cooking_turret_ring"	"smoke4_turret"				"turret"}
		{add_view	"fire_cooking_turret_ring2"	"smoke4_turret2"			"turret"}
		{add_view	"fire_cooking_turret_smoke"	"smoke4_15"				"turret"}
		{add_view	"smoke_fuel_fire"		"fire_test"				"body"}
		{add_view	"smoke_fuel_fire"		"fuel_fire"				"engine"}
		{add_view	"smoke_fuel_fire_smoke"		"fuel_fire_smoke"			"engine"}
		{add_view	"smoke_tank_hull_dead"		"smoke_hullcrush"			"body"}
		{add_view	"smoke_tank_hull_dead_engine"	"smoke_hullcrush_engine"		"engine"}
		{add_view	"smoke_dead_small2a"	"smoke4_2"				"FXfire3"}
		{add_view	"smoke_dead_small2a"		"smoke4_13"				"FXfire3"}
		{add_view	"smoke_dead_small2a"		"smoke4_16"				"FXfire3"}
		{add_view	"smoke_dead_small2b"		"smoke_hatch_hit"			"FXfire3"}
		{add_view	"exhaust_dark_big"		"exhaust"				"FXsmoke1"}
		{add_view	"exhaust_dark_big"		"exhaust"				"FXsmoke2"}
		{add_view	"exhaust_dark_big2"		"exhaust2"				"FXsmoke1"}
		{add_view	"exhaust_dark_big2"		"exhaust2"				"FXsmoke2"}
		{set "smoke3" 0}
		{set "smoke4" 0}
		{call "update_hatch_on_spawn"}
		(mod "mp"
			{tags add "teamnone"}
		) 
		{if tex_mod "2"
			{delay 0.1
				{tex_mod "2"}
			}
		else tex_mod "1"
			{delay 0.1
				{tex_mod "1"}
			}
		else tex_mod "d"
			{delay 0.1
				{tex_mod ""}
			}
		else tex_mod "2a"
			{delay 0.1
				{tex_mod "2"}
			}
		else tex_mod "1a"
			{delay 0.1
				{tex_mod "1"}
			}
		else tex_mod "da"
			{delay 0.1
				{tex_mod ""}
			}
		else tex_mod "a"
			{delay 0.1
				{tex_mod ""}
			}
		else
			{delay 0.1
				{tex_mod ""}
			}
		}
	}
)
(define "csaba_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/sdkfz232"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz232_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium3"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz232_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"		}
	}
)
(define "toldi_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz2"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium3"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
)
(define "turan_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/hetzer"		}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium3"	}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/hetzer_idle"		}
	}
)
{"toldi2 tank"
	("toldi_sound")
	("burn_by_engine" args 0.3)
}
{"toldi1 tank"
	("toldi_sound")
	("burn_by_engine" args 0.3)
}
{"turan3 tank"
	("turan_sound")
	("burn_by_engine" args 0.3)
}
{"turan2 tank"
	("turan_sound")
	("burn_by_engine" args 0.3)
}
{"turan1 tank"
	("turan_sound")
	("burn_by_engine" args 0.3)
}
{"nimrod tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz2"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"zrinyi1 tank"
	("turan_sound")
	("burn_by_engine" args 0.3)
}
{"zrinyi2 tank"
	("turan_sound")
	("burn_by_engine" args 0.3)
}
{"tas_44m tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
}
{"tas_44td tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
}

{"csaba39m tank"
	("csaba_sound")
	("burn_by_engine" args 0.3)
}
{"csaba40m tank"
	("csaba_sound")
	("burn_by_engine" args 0.3)
	{on move on
		{ani_play "antennadown" 1}
	}
	{on move off
		{ani_play "antennaup" 1}
	}
}
{"pz4e_hun tank"
	("hun_tank_texmode")
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4f_hun tank"
	("hun_tank_texmode")
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4h_hun tank"
	("hun_tank_texmode")
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz3_hun tank"
	("hun_tank_texmode")
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"stug3g_hun tank"
	("hun_tank_texmode")
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"hetzer_hun tank"
	("hun_tank_texmode")
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/hetzer"		}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"	}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/hetzer_idle"		}
	}
	("burn_by_engine" args 0.3)
	("shell_ejection_tank")
}
{"pz6e_hun tank"
	("hun_tank_texmode")
	("pz6_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"sdkfz301wanze tank"
	("pz1_sound")
	("burn_by_engine" args 0.3)
}
{"l335_hun tank" 
	("l335_sound")
	("burn_by_engine" args 0.3)
}