;-----------------Greece
{"fiat618 car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"fiat618_eng car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"fiat618_art car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"fiat618_inf car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"pf508 car"
	("horch_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"ford27 car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/MB" 		}
	}
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
		else volume "glass_back"
 			("break_glass2" args 1 _back)
 		}
 	}
}
{"india"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/sdkfz234"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up"	}
		{link_sound "idle"			"vehicle/engine/MB"		}
	}
}
;-----------------Greece
