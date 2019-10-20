{"ft17_chn tank"
	("t26_sound")
	("burn_by_engine" args 0.3)
}
{"ba-6 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"t-26_chn_1931 tank"
	("t26_2_sound")
	("burn_by_engine" args 0.2)
}
{"t-26_chn_1933 tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}
{"vickers_chn tank"
	("t26_sound")
	("burn_by_engine" args 0.2) 
} 
{"l335_chn tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz222a tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"bt5_chn tank"
	("bt7_sound")
	("burn_by_engine" args 0.2)
}
{"pz1a tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	("pz1_sound")
	{on fire "mgun" overload
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
}
{"m4_chn tank"
	("m4a2_sound")
	("burn_by_engine" args 0.3)
}
{"m2a4_chn tank"
	("m2a4_sound")
	{on "init_gun"
		{add_view	"flash_gun_big_vehicle"	"flashbarrel7"	"Foresight7"}
	}
	{on fire "mgun4"
		{view start "flashbarrel7"}
		{delay 0.5
			{view pause "flashbarrel7"}
		}
	}
	("burn_by_engine" args 0.3)
}
{"m3a1_chn tank"
	("m2a4_sound")
	{on "init_gun"
		{add_view	"flash_gun_big_vehicle"	"flashbarrel7"	"Foresight7"}
	}
	{on fire "mgun4"
		{view start "flashbarrel7"}
		{delay 0.5
			{view pause "flashbarrel7"}
		}
	}
	("burn_by_engine" args 0.3)
}
{"m18_chn tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/m18hellcat"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/sherman"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m18hellcat"		}
	}
	("burn_by_engine" args 0.3)
	("shell_ejection_tank")
}
{"m24_chn tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m18hellcat"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/sherman"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m18hellcat"		}
	}

}
{"m5a1_chn tank"
	("m2a4_sound")
	{on "init_gun"
		{add_view	"flash_gun_big_vehicle"	"flashbarrel7"	"Foresight7"}
	}
	{on fire "mgun4"
		{view start "flashbarrel7"}
		{delay 0.5
			{view pause "flashbarrel7"}
		}
	}
	("burn_by_engine" args 0.3)
}
{"m3a1halftrack_chn tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"gun_carrier_chn tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
	{on spawn
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}
		{add_view	"flash_cannon_small"		"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"		"Foresight1"}
		{add_view	"smoke_zenite"		    "smkafire"		"Foresight1"}
	}
	{on fire "gun"
        		{view start "flashbarrel1"}
		{view start "flashbarrel1s"}
        		{view start "smkafire"}
		{delay 0.8
			{view pause "flashbarrel1"}
		}
		{delay 0.2
			{view pause "flashbarrel1s"}
		}
        		{delay 2.5
            			{view stop "smkafire"}
        		}
	}
}