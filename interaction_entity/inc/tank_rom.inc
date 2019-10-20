{"bt7_rom tank"
	("bt7_sound")
	("burn_by_engine" args 0.2)
}
{"pzkpfw38t_rom tank"
	("pz38_sound")
	("burn_by_engine" args 0.3)
}

{"pz35t tank"
	("pz38_sound")
	("burn_by_engine" args 0.3)
}
{"r1_prague tank"
	("pz38_sound")
	("burn_by_engine" args 0.3)
}
{"r2 tank"
	("pz38_sound")
	("burn_by_engine" args 0.3)
}
{"r35_rom tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/r35"		}
		{link_sound "engine"			"vehicle/engine/r35"		}
		{link_sound "engine_end"		"vehicle/engine/r35_end"	}
		{link_sound "exhaust"			"vehicle/engine/r35_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pz38t_turret"	}
		{link_sound "idle"			"vehicle/engine/r35"		}
	}
	("burn_by_engine" args 0.2)
}

{"t26_rom tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}

{"t-26_1939 tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}

{"tacam_t60 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t-70"}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/bt_end"	}
		{link_sound "exhaust"			"vehicle/engine/bt_up"	}
		{link_sound "idle"			"vehicle/engine/t26"		}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.2)
}

{"t28_rom tank"		
	{on "init_gun"
		{add_view	"flash_gun_big_vehicle"	"flashbarrel7"	"Foresight7"}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel8"	"Foresight8"}
	}
	("mk7_sound")
	("burn_by_engine" args 0.3)
	{on fire "mgun4"
		{view show  "flashbarrel7"}
		{view start "flashbarrel7"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel7"}
			{view pause	"flashbarrel7"}
			{view pause	"shell"}
		}
	}
	{on fire "mgun5"
		{view show  "flashbarrel8"}
		{view start "flashbarrel8"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel8"}
			{view pause	"flashbarrel8"}
			{view pause	"shell"}
		}
	}
}

{"pz4grom tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}

{"marder3_rom tank"
	("wespe_sound")
	("burn_by_engine" args 0.3)
}

{"stug3grom tank"
	("stug_sound")
	("burn_by_engine" args 0.3)
}

(define "ba10_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"	}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"}
		{link_sound "idle"			"vehicle/engine/ba11"	}
	}
)

{"ba10 tank"
	("ba10_sound")
	("burn_by_engine" args 0.3)
}

{"ba10_rom tank"
	("ba10_sound")
	("burn_by_engine" args 0.3)
}
{"ab41_rom tank"
	("m8grayhound_sound")
	("burn_by_engine" args 0.3)
}
{"panhard_rom tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/Panhard_178"		}
		{link_sound "engine_end"		"vehicle/engine/Panhard_178_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"			}
		{link_sound "exhaust"			"vehicle/engine/Panhard_178_up"	}
		{link_sound "idle"			"vehicle/engine/Panhard_178"		}
	}
	("burn_by_engine" args 0.3)
}

{"sdkfz222_rom tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"pz3nrom tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"t34_rom tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}