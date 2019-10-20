{"gaz-mm" 
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"gaz-mm_inf"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	} 
}
{"gaz-mm_art"
	("zis5_sound") 
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"gaz-mm_eng"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"gazaaa4m"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	} 
}
{"gaz-med" 
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"np_su12" 
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
	("shell_ejection")
}
{"m3a1scout_chn"
	("gmc_sound")
}
{"chevrolet  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"chevrolet_art  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"chevrolet_eng  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"np_su12_rus" 
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
	("shell_ejection")
}