{"t34_3_nkr tank"
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
{"is2_nkr tank"
	("is_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"su76_nkr tank"
	("su76_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"isu122_nkr tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/isu"		}
		{link_sound "engine_end"		"vehicle/engine/isu_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/isu_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"m5a1_nkr tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m3stuart"		}
		{link_sound "engine_end"		"vehicle/engine/tankengine_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/tankengine_up"	}
		{link_sound "idle"			"vehicle/engine/m3stuart"		}
	}
	("burn_by_engine" args 0.3)
}
{"ba64_nkr tank"
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