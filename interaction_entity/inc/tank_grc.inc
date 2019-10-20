;-----------------Greece
{"ft17_grc tank"
	("t26_sound")
	("burn_by_engine" args 0.3)
}
{"universal_carrier_grc tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"l335_grc tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"cruisermk1_grc tank"
	{on "add_movement_sound" overload
		{link_sound "move"		    	"vehicle/tracks/cromwell"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"		}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
}
;-----------------Greece