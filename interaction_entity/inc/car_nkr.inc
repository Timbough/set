(define "zis151_sound"	
	{on "add_movement_sound"
		{link_sound "move"			"vehicle/wheels/car"}
		{link_sound "move_end"		"vehicle/wheels/zis151_end"}
		{link_sound "engine"		"vehicle/engine/zis151"}
		{link_sound "engine_end"	"vehicle/engine/zis151_end"}
		{link_sound "exhaust"		"vehicle/engine/zis151_up"}
		{link_sound "idle"			"vehicle/engine/zis151"}
	}
)
{"np_zis151_nkr" 
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_zis151" 
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
} 
{"np_zis151_art" 
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_zis151_en" 
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}  
{"np_zis151_bomb" 
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_bm13nn car"
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"fiat626_ai"
	("opel_sound")
	{on bullet_hit
 		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2" args 1 _2)
 		}
 	}
}
{"gaz-mm_ai"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"bedford_ai"
	("bedford_sound")
}
{"np_volvo_ai"
	("gmc_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"somua_mcg_ai"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz10"	 }
		{link_sound "engine"			"vehicle/engine/sdkfz10"	 }
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end" }
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up" }
		{link_sound "idle"			"vehicle/engine/sdkfz10"	}
	}
	{on bullet_hit
		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 3 2)
 		else volume "glass3"
 			("break_glass2" args 3 3)
 		}
	}
}
{"np_mercedesl3000_ai"
	("opel_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"fiat618_ai"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"botond2_ai"
	("opel_sound")
	{on move on
		{ani_play "move" loop}
	}
	{on move off
		{ani_stop "move"}
	}
}
{"fiat35_ai"
	("fiat_sound")
}
{"np_type94_ai"
	("opel_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_right"
 			("break_glass2" args 3 _right)
 		else volume "glass_right"
 			("break_glass2" args 3 _left)
		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_zis151_ai"
	("zis151_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"pf621_ai"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"mercedesl3k_rom_tr_ai"
	("opel_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl"
 			("break_glass2" args 3 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 3 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_zis5_33_ai"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 1 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 1 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 1 _back)
		}
 	}
}
{"cckw352_ai"
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