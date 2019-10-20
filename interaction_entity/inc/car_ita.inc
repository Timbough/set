;-----------------NP
{"np_sdkfz251_ita"
	("sdkfz250_sound")
}
(define "as_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"	}
		{link_sound "engine"			"vehicle/engine/as37"	}
		{link_sound	"engine_end"		"vehicle/engine/as37_end"	}
		{link_sound "exhaust"			"vehicle/engine/as37_up"	}
		{link_sound "idle"			"vehicle/engine/as37"   	}
	}
)
(define "fiat_sound"
	{on "add_movement_sound" overload
		{link_sound	"move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/horch"	}
		{link_sound	"engine_end"		"vehicle/engine/blitz_end"	}
		{link_sound "exhaust"			"vehicle/engine/blitz_up"	}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
)
{"fiat35"
	("fiat_sound")
}
{"fiat35_art"
	("fiat_sound")
}
{"fiat35_bomb"
	("fiat_sound")
}
{"fiataa35"
	("fiat_sound")
}
{"fiat508cm car"
	{on "add_movement_sound" overload
		{link_sound "move"		"vehicle/wheels/blitz"	}
		{link_sound "engine"		"vehicle/engine/Fiat508cm"	}
		{link_sound "engine_end"	"vehicle/engine/Fiat508cm_end"	}
		{link_sound "exhaust"		"vehicle/engine/fiat508cm_up"	}
		{link_sound "idle"			"vehicle/engine/horch"	}
	}
}
{"mototri car"
	{on "add_movement_sound" overload
		{link_sound "move"		"vehicle/wheels/blitz"	}
		{link_sound "engine"		"vehicle/engine/bmw"	}
		{link_sound "engine_end"	"vehicle/car_end"	}
		{link_sound "exhaust"		"vehicle(bmw_up"	}
	}
}
{"3ro"
	{on spawn
		{set "rotate_turret_3ro" 0}
		{set "chassis_work_turret" 1}
		{set "chassis_work" 1}
	}
	("fiat_sound")
	("shell_ejection")
	{on ik begin "turret"
		{kill_delay "rotate_turret"}
		{if not "rotate_turret_3ro"
			{set "rotate_turret_3ro" 1}
			{If "chassis_work"
				{set "chassis_work" 0}
				{ani_play "close"}
				{play_sound "rotate_turret" 1}
				{set  "chassis_work_turret" 1}
			else
				{set  "chassis_work_turret" 0}
				
			}	
		}
	}
	{on ik end "turret"
		{if "rotate_turret_3ro"
			;{If  "chassis_work_turret"
				{set "chassis_work" 1}
			;}
		}
		{delay 0.5 "rotate_turret"
			{stop_sound "rotate_turret"}
			
		}
	}
	{on move on
		{if "rotate_turret_3ro"
			{set "rotate_turret_3ro" 0}
			{if work "turret"
				{ik_enable "turret" 0}
				{ani_play "close" -1}
				
			}
		}
		{set "engine_on" 1}
		{stop_sound "idle"}
		{stop_sound "move_end"}
		{play_sound "move" 1}
		{play_sound "exhaust"}
		{call "exhaust_on"}
		{ani_stop "stop"}
		{ani_play "start"}
		{view pause "exhaust2"}
	}
	{on move off
		{If not "rotate_turret_3ro"
			{if work "turret"
				{ik_enable "turret" 1}
				{set "chassis_work_turret" 1}
			}
		}
		{stop_sound "move"}
		{play_sound "move_end"}
		{call "exhaust_off"}
	}
	{on bullet_hit
 		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_doorl"
 			("break_glass2" args 1 _2)
 		}
 	}
}
{"autocannone10017"
	("fiat_sound")
	("shell_ejection")
}
{"morris_cs8_6517  car" 
	("gmc_sound")
	("shell_ejection")
}
{"c50cma"	
	("fiat_sound")
	("shell_ejection")
}
{"as421  car"
	("as_sound")
}
{"as422  car"
	("as_sound")
}
{"as423  car" 
	("as_sound")
	("shell_ejection")
}
;-----------------NP

