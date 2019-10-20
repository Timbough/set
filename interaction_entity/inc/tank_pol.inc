;-----------------Poland
{"wz34 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11"		}
	}
	("burn_by_engine" args 0.2)
}
{"wz34puteaux tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11"		}
	}
	("burn_by_engine" args 0.2)
}
{"tks-mg tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"tks-20mm tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"vickersedw tank"
	("t26_2_sound")
	("burn_by_engine" args 0.2) 
} 
{"vickersejw tank"
	("t26_sound")
	("burn_by_engine" args 0.2) 
} 	
(define "7tp_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"			}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/t26_end"	}
		{link_sound "exhaust"			"vehicle/engine/t26_up"	}
		{link_sound "idle"			"vehicle/engine/t26"		}
	}
)
{"7tp tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	{on fire "mgun"
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.5
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.5
				{view pause "flashbarrel01"}
			}
		}
	}
	("7tp_sound")
}
{"r35_pol tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/r35"		}
		{link_sound "engine"			"vehicle/engine/r35"		}
		{link_sound "engine_end"		"vehicle/engine/r35_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/small1"	}
		{link_sound "exhaust"			"vehicle/engine/r35_up" 	}
		{link_sound "idle"			"vehicle/engine/r35"		}
	}
	("burn_by_engine" args 0.3)
} 
{"wz29 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11"		}
	}
	{on "lights_on"
		{ani_play "lights_on"}
		{view start "light"}
		{view show "light"}
	}
	{on "lights_off"
		{ani_play "lights_off"}
		{view stop "light"}
		{view hide "light"}
	}
	("burn_by_engine" args 0.2)
}
{"t34_2_pol tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"t34_3_pol tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/t34"	}
		{link_sound "rotate_turret" 	"vehicle/turret/t34"		}
		{link_sound "engine"			"vehicle/engine/t3485"		}
		{link_sound "engine_end"		"vehicle/engine/t3485_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/t34_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"su85_pol tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
}
{"is1_pol tank"
	("is_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"is2_pol tank"
	("is_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"su76_pol tank"
	("su76_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"isu122_pol tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/isu"		}
		{link_sound "engine_end"		"vehicle/engine/isu_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/isu_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"isu152_pol tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/isu"		}
		{link_sound "engine_end"		"vehicle/engine/isu_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/isu_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"ba64_pol tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"t70_pol tank"
	("t70_sound")
	("burn_by_engine" args 0.3)
}
{"np_t48_pol tank"
	("m3_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"is1_pol tank"
	("is_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"kv85_pol tank"
	("kv_sound")
	("burn_by_engine" args 0.3)
}
;-----------------Poland