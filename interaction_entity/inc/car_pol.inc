;-----------------Poland
{"pf621 car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"pf621_eng car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"pf621_art car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"pf621_inf car"
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
{"wz34halftrack car"
	("zis42_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"pf621_aa car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"pf621_75mm car"
	("zis5_sound")
	("shell_ejection")
	{on bullet_hit
 		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 1 2)
		}
 	}
}
{"cckw353_pol  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"cckw353_pol_art  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"cckw353_pol_ai  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"cckw353_pol_tr  car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lampr"
 			("break_glass2" args 3 _lampr)
 		else volume "glass_lampl"
 			("break_glass2" args 3 _lampl)
		}
 	}
}
{"dodge_pol car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/dodge" 		}
		{link_sound "engine_end"		"vehicle/engine/dodge_end" 	}
		{link_sound "exhaust"			"vehicle/engine/dodge_up"	}
		{link_sound "idle"			"vehicle/engine/dodge" 		}
	}
	{on bullet_hit
 		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 3 2)
 		}
 	}
}
{"pf621_44_eng car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"m3a1scout_pol"
	("gmc_sound")
}
{"studebakerus6_pol car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lightr"
 			("break_glass2" args 3 _lightr)
 		else volume "glass_lightl"
 			("break_glass2" args 3 _lightl)
		}
 	}
}
{"studebakerus6_pol_art car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lightr"
 			("break_glass2" args 3 _lightr)
 		else volume "glass_lightl"
 			("break_glass2" args 3 _lightl)
		}
 	}
}
{"studebakerus6_pol_eng car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lightr"
 			("break_glass2" args 3 _lightr)
 		else volume "glass_lightl"
 			("break_glass2" args 3 _lightl)
		}
 	}
}
{"studebakerus6_tr car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		else volume "glass_lightr"
 			("break_glass2" args 3 _lightr)
 		else volume "glass_lightl"
 			("break_glass2" args 3 _lightl)
		}
 	}
}
;-----------------Poland
