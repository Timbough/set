;-----------------Normand Unit Pack
{"truck_timer"
	{on move off
		{delay 5
			{reset_manual_control}
			{able select 0}
			{able repaired 0}
			{unlink_trailer}
			{clear_inventory}
			{crew_emit}
			{delay 1
				{crew_emit}
			}
			{hide 3}
		}	
	}
}
(define "updatetexmod"
	{on spawn overload
		{if not tagged "texmod_set"
			{if tex_mod "2"
				{tags add "texmod_set"}
				{if rand 0.4
					{delay 0.1
						{tex_mod "2a"}
					}
				}
			else tex_mod "1"
				{tags add "texmod_set"}
				{if rand 0.4
					{delay 0.1
						{tex_mod "1a"}
					}
				}
			else tex_mod "d"
				{tags add "texmod_set"}
				{if rand 0.4
					{delay 0.1
						{tex_mod "da"}
					}
				}
			}
		}
	}
)
(define "break_glass2"
 	{volumes "glass%1" disable bullet contact blast}
 	{spawn "glass_hit2" "glass%1" x}
 	{delay 0.1
 	{bone cut "glass%1"}
	}
)
(define "sdkfz250_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"	}
	}
)
(define "zis5_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
)
(define "zis42_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t34"	}
		{link_sound "engine"			"vehicle/engine/zis"   	}
		{link_sound "engine_end"		"vehicle/engine/zis_end"	}
		{link_sound "exhaust"			"vehicle/engine/zis_up"	}
		{link_sound "idle"			"vehicle/engine/zis"	}
	}
)
(define "willys_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/MB"	}
		{link_sound "engine"			"vehicle/engine/MB" 		}
		{link_sound "engine_end"		"vehicle/engine/MB_end" 	}
		{link_sound "exhaust"			"vehicle/engine/MB_up"		}
		{link_sound "idle"			"vehicle/engine/willys_idle"	}
	}
)
(define "chevy_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/dodge" 		}
		{link_sound "engine_end"		"vehicle/engine/dodge_end" 	}
		{link_sound "exhaust"			"vehicle/engine/dodge_up"	}
		{link_sound "idle"			"vehicle/engine/dodge" 		}
	}
)
(define "opel_sound2"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/Blitz"   	}
		{link_sound "engine_end"		"vehicle/engine/Blitz_end"	}
		{link_sound "exhaust"			"vehicle/engine/Blitz_up"	}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
)
(define "voroshilovets_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/t34"		}
		{link_sound "engine_end"		"vehicle/engine/t34_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"		}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "idle"			"vehicle/engine/t34_idle"	}
	}
)
(define "kubel_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/kubel"	}
		{link_sound "engine"			"vehicle/engine/kubel"   	}
		{link_sound "engine_end"		"vehicle/engine/kubel_end"	}
		{link_sound "exhaust"			"vehicle/engine/kubel_up"	}
		{link_sound "idle"			"vehicle/engine/kubel_idle"   	}

	}
)
(define "horch_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/horch"	}
		{link_sound "engine"			"vehicle/engine/horch" 		}
		{link_sound "engine_end"		"vehicle/engine/horch_end" 	}
		{link_sound "exhaust"			"vehicle/engine/horch_up"	}
		{link_sound "idle"				"vehicle/engine/horch" 		}
	}
)
(define "gmc_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/gmc"		}
		{link_sound "move_end"			"vehicle/wheels/gmc_end"	}
		{link_sound "engine"			"vehicle/engine/m3a1" 		}
		{link_sound "engine_end"		"vehicle/engine/m3a1_end" 	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/m3a1"   	}
	}
)
(define "opel_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/blitz"	}
		{link_sound "engine"			"vehicle/engine/Blitz"   	}
		{link_sound "engine_end"		"vehicle/engine/Blitz_end"	}
		{link_sound "exhaust"			"vehicle/engine/Blitz_up"	}
		{link_sound "idle"			"vehicle/engine/truck_idle"   	}
	}
)
(define "bedford_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/bedford"   	}
		{link_sound "engine_end"		"vehicle/engine/bedford_end"	}
		{link_sound "exhaust"			"vehicle/engine/bedford_up"	}
		{link_sound "idle"			"vehicle/engine/bedford_idle"	}
	}
)
(define "gazmm_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/engine/t-38"	}
		{link_sound "move_end"			"vehicle/engine/t-38_end"}
		{link_sound "engine"			"vehicle/engine/t-38"   	}
		{link_sound "engine_end"		"vehicle/engine/t-38_end"	}
		{link_sound "exhaust"			"vehicle/engine/t-38_up"	}
		{link_sound "idle"			"vehicle/engine/t-38"   	}
	}
)
{"np_bm31 car"
	{on fire "gun"
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"                                        
			{spawn "crater_extra_big" "basis" terrain_texmod}
                        {spawn "shellhole_big_dead" "basis"}
		}
	}
	{on blast
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			else min_energy 1
				{if rand 0.6
					{call "blast_body"}
				}			
			else stuff "grenade"
				{if rand 0.4
					{call "blast_body"}
				}
			}	
		}
	}
}
{"np_zis42 car"
	("zis42_sound")
	{on move on
		{ani_play "move1" +1}
	}
	{on move off
		{ani_play "move1" -1}
	}
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_zis42_61k car"
	("zis42_sound")
	{on move on
		{ani_play "move1" +1}
	}
	{on move off
		{ani_play "move1" -1}
	}
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorleft"
 			("break_glass2" args 3 _doorleft)
 		else volume "glass_doorright"
 			("break_glass2" args 3 _doorright)
 		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
}
{"np_studebakerus6  car" 
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
{"np_sdkfz8 car"
	("sdkfz250_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}

{"np_bm31" 
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
{"np_sdkfz250_1"
	("sdkfz250_sound")
}
{"np_sdkfz250_9"
	("sdkfz250_sound")
}
{"np_sdkfz250_10"
	("sdkfz250_sound")
	("shell_ejection")
}
{"np_sdkfz250_11"
	("sdkfz250_sound")
}
{"np_sdkfz250_7"
	{on spawn
		{link_sound "rotate_turret" "vehicle/turret/mortar"}
		{link_sound "rotate_gun" "vehicle/turret/medium"}
		{add_view	"flash_cannon_small"		"flashbarrel1"	"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"		"Foresight1"}
		{add_view	"smoke_zenite"		    "smkafire"		"Foresight1"}
	}
	("sdkfz250_sound")
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
{"np_mercedesl3000" 
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
{"np_mercedesl3000_art" 
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
{"np_sdkfz251_1"
	("sdkfz250_sound")
}
{"np_sdkfz251_9"
	("sdkfz250_sound")
	("shell_ejection")
}
{"np_sdkfz251_10"
	("sdkfz250_sound")
	("shell_ejection")
}
{"np_sdkfz251_17"
	{on spawn
		{tags remove "rotate_turret_17"}
		{tags add "chassis_work_turret"}
		{tags add "chassis_work"}
	}
	("sdkfz250_sound")
	{on ik begin "turret" overload
		{if not tagged "rotate_turret_17"
			{tags add "rotate_turret_17"}
			{ani_play "close_sides" -1}
			{If "chassis_work"
				{tags add "chassis_work_turret"}
			else
				{tags remove "chassis_work_turret"}
			}	
		}
	}
	{on ik end "turret" overload
		{if tagged "rotate_turret_17"
				{tags add "chassis_work"}
		}
	}
	{on move on overload
		{if tagged "rotate_turret_17"
			{tags remove "rotate_turret_17"}
			{if work "turret"
				{ik_enable "turret" 0}
				{ani_play "close_sides"}
			}
		}
	}
	{on move off overload
		{If not tagged "rotate_turret_17"
			{if work "turret"
				{ik_enable "turret" 1}
				{tags add "chassis_work_turret"}
			}
		}
	}
}
{"np_sdkfz251_1w"
	("sdkfz250_sound")
	{on fire "gun"
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on fire "gun2"
		{ani_play "fire"}
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on fire "gun3"
		{ani_play "fire"}
		{spawn "startsmoke_big"}
		{spawn "startdust_big" "FXdust"}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
			{con "big explosive"}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"                                        
			{spawn "crater_extra_big" "basis" terrain_texmod}
                        {spawn "shellhole_big_dead" "basis"}
		}
	}
	{on blast
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			else min_energy 1
				{if rand 0.6
					{call "blast_body"}
				}			
			else stuff "grenade"
				{if rand 0.4
					{call "blast_body"}
				}
			}	
		}
	}
}
{"np_gaz61" 
	("horch_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl1"
 			("break_glass2" args 3 _doorl1)
 		else volume "glass_doorr1"
 			("break_glass2" args 3 _doorr1)
 		else volume "glass_doorl2"
 			("break_glass2" args 3 _doorl2)
 		else volume "glass_doorr2"
 			("break_glass2" args 3 _doorr2)
		else volume "glass_r"
 			("break_glass2" args 3 _r)
		else volume "glass_l"
 			("break_glass2" args 3 _l)
		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
} 
{"np_willysmb car"
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"np_willys50 car"
	("willys_sound")
}
{"np_willysat car"
	("willys_sound")
}
{"np_zis5 car"
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
{"np_zis5_en car"
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
		else volume "glass_1"
 			("break_glass2" args 1 _1)
		else volume "glass_2"
 			("break_glass2" args 1 _2)
		else volume "glass_3"
 			("break_glass2" args 1 _3)
		else volume "glass_4"
 			("break_glass2" args 1 _4)
		else volume "glass_5"
 			("break_glass2" args 1 _5)
		else volume "glass_6"
 			("break_glass2" args 1 _6)
		}
 	}
}
{"np_zis5_fuel car"
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
{"np_zis5_inf car"
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
{"np_zis5_art car"
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
{"np_yag10 car"
	("zis5_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
		else volume "glass_doorl"
			("break_glass2" args 1 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 1 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 1 _back)
		}
 	}
}
{"np_29k car"
	("zis5_sound")
	("shell_ejection")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
		else volume "glass_doorl"
			("break_glass2" args 1 _doorl)
 		else volume "glass_doorr"
 			("break_glass2" args 1 _doorr)
 		else volume "glass_back"
 			("break_glass2" args 1 _back)
		}
 	}
}
{"np_opel" 
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
{"np_opel_f" 
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
{"np_opel_eng" 
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
{"np_opel_inf" 
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
{"np_opel_art" 
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
{"np_matador" 
	("gmc_sound")
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
{"np_type94" 
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
{"np_type94art" 
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
{"np_type94eng" 
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
{"morris_cs8  car" 
	("gmc_sound")
}
{"m3a1scout"
	("gmc_sound")
}
{"m3a1scout_us"
	("gmc_sound")
}
{"m3a1scout_eng"
	("gmc_sound")
}
{"np_lrdg"
	("chevy_sound")
}
{"np_lrdg_20mm"
	("chevy_sound")
	{on fire "gun"
		{ani_play "fire"}
	}
}
{"np_lrdg_37mm"
	("chevy_sound")
	{on fire "gun"
		{ani_play "fire37"}
		{call "spawn_shell_vehicle"}
	}
	{on "spawn_shell_vehicle"
		{start_sound "weapon/shot/shell"}
		{add_view "smoke_zenit" "smoke_shell" "fx_invers"}
		{view start "smoke_shell"}
		{delay 2.5 0.5
			{view stop "smoke_shell"}
		}
		{spawn "shell_cannon" "fx_invers" x scale 0.014
			{impulse up 1.5 0.5 dir -4.5 0.7 cz 0.2 0.1 com}
			{add_view "smoke_zenit" "smoke_shell" "fx_shellsmoke"}
			{view start "smoke_shell"}
			{delay_effect 3 1 "stop"}
			{delay 3 0.5
				{hide 15}
			}
		}
	}
}
{"np_gaz_m1" 
	("horch_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl1"
 			("break_glass2" args 3 _doorl1)
 		else volume "glass_doorr1"
 			("break_glass2" args 3 _doorr1)
 		else volume "glass_doorl2"
 			("break_glass2" args 3 _doorl2)
 		else volume "glass_doorr2"
 			("break_glass2" args 3 _doorr2)
		else volume "glass_r"
 			("break_glass2" args 3 _r)
		else volume "glass_l"
 			("break_glass2" args 3 _l)
		else volume "glass_back"
 			("break_glass2" args 3 _back)
		}
 	}
} 
{"np_type95 car"
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2" args 3 _2)
 		}
 	}
}
{"np_opel_halftrack" 
	("opel_sound2")
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
{"np_opel_olymp" 
	("horch_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		else volume "glass_doorl1"
 			("break_glass2" args 3 _doorl1)
 		else volume "glass_doorr1"
 			("break_glass2" args 3 _doorr1)
 		else volume "glass_doorl2"
 			("break_glass2" args 3 _doorl2)
 		else volume "glass_doorr2"
 			("break_glass2" args 3 _doorr2)
		else volume "glass_right"
 			("break_glass2" args 3 _right)
		else volume "glass_left"
 			("break_glass2" args 3 _left)
		}
 	}
} 
{"np_voroshilovets"
	("voroshilovets_sound")
}
{"np_voroshilovets_52k"
	("voroshilovets_sound")
	("shell_ejection")
}
{"np_gaz61_417" 
	("horch_sound")
 	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 3 _front)
 		}
 	}
} 
{"botond"
	("opel_sound")
	{on move on
		{ani_play "move" loop}
	}
	{on move off
		{ani_stop "move"}
	}
}
{"botond2"
	("opel_sound")
	{on move on
		{ani_play "move" loop}
	}
	{on move off
		{ani_stop "move"}
	}
}
{"botond_inf"
	("opel_sound")
	{on move on
		{ani_play "move" loop}
	}
	{on move off
		{ani_stop "move"}
	}
}
{"np_sdkfz251_hun"
{on spawn overload
		{if tex_mod "2"
			{delay 0.1
				{tex_mod "2"}
			}
		else tex_mod "1"
			{delay 0.1
				{tex_mod "1"}
			}
		else tex_mod "d"
			{delay 0.1
				{tex_mod ""}
			}
		else tex_mod "2a"
			{delay 0.1
				{tex_mod "2"}
			}
		else tex_mod "1a"
			{delay 0.1
				{tex_mod "1"}
			}
		else tex_mod "da"
			{delay 0.1
				{tex_mod ""}
			}
		else
			{delay 0.1
				{tex_mod ""}
			}
		}
	}
	("sdkfz250_sound")
}
{"mercedes_hun" 
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
{"mercedes_hun_art" 
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
{"mercedes_hun_eng" 
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
{"cckw353  car" 
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
{"cckw352  car" 
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
{"cckw353_inf  car" 
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
{"cckw352_art  car" 
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
{"cckw353_eng  car" 
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
{"cckw353_fuel  car" 
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
{"np_willysmb_en car"
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"np_type94aa" 
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
{"np_kubel car"
	("kubel_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
		}
	}
}
{"np_kubel_mg car"
	("kubel_sound")
	{on bullet_hit
 		{if volume "glass_front"
 			("break_glass2" args 1 _front)
		}
	}
}
{"kettenkard"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/sdkfz250"	}
		{link_sound "engine"			"vehicle/engine/kubel"		}
		{link_sound "engine_end"		"vehicle/engine/kubel_end"	}
		{link_sound "exhaust"			"vehicle/engine/kubel_up"	}	
		{link_sound "idle"			"vehicle/engine/kubel"		}
	}
}
{"schwimmwagen car"
	("kubel_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front)
 		}
 	}
	{on "update_bulbs"
		{if "in_water"
			{if not "eng_water" 
				{set "eng_water" 1}
				{ani_play "engine"}	
			}
			{if not velocity 0.001
				{view start "on_stead"}
				{view pause "on_move"}
				{ani_stop "propeller"}
				{ani_play "drift" loop}
					
			else
				{view start "on_move"}
				{view pause "on_stead"}
				{ani_stop "drift"}
				{ani_play "propeller" loop}
			}
		else
			{if "eng_water" 
				{set "eng_water" 0}
				{ani_play "engine_stop"}
			}
			{ani_stop "propeller"}
			{ani_stop "drift"}
			{view pause "on_stead"}
			{view pause "on_move"}
		}
	}
}
{"np_studebakerus6_inf  car" 
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
{"bedford"
	("bedford_sound")
}
{"bedford_inf"
	("bedford_sound")
}
{"bedford_eng"
	("bedford_sound")
}
{"bedford_art"
	("bedford_sound")
}
{"bedford_fuel"
	("bedford_sound")
}
{"isuzutx40_fuel"
	("opel_sound")
}
{"np_sdkfz251_39"     
	("sdkfz250_sound")
}
{"np_opel_39" 
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
{"np_opel_39_f" 
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
{"np_opel_39_eng" 
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
{"np_opel_39_inf" 
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
{"np_opel_39_art" 
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
{"bm8-48" 
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
{"sdkfz10-d7"
	("sdkfz250_sound")
}
{"somua_mcg"
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
{"isuzutx40_bomb"
	("opel_sound")
}
{"np_opel_bomb car"
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
{"np_zis5_bomb car"
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
{"bedford_bomb"
        	("bedford_sound")
 }
{"cckw352_bomb car"
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
{"mercedes_hun_bomb car"
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
{"dodgewc55"
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{delay 0.1
				{ani_play "open2"}
			}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/dodge" 		}
		{link_sound "engine_end"		"vehicle/engine/dodge_end" 	}
		{link_sound "exhaust"			"vehicle/engine/dodge_up"	}
		{link_sound "idle"			"vehicle/engine/dodge" 		}
	}
	("shell_ejection")
}
{"np_willys_com car"
	{on spawn	
		{if not tagged "window_set"
			{tags add "window_set"}
			{if rand 0.4
				{delay 0.1
					{ani_play "open2"}
				}	
			}
		}
	}
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
}
{"np_type95_com car"
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2" args 3 _2)
 		}
 	}
}
{"laffly_v15t car"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/m8grayhound"		}
		{link_sound "engine"			"vehicle/engine/car" 		}
		{link_sound "engine_end"		"vehicle/engine/car_end" 	}
		{link_sound "exhaust"			"vehicle/engine/car_up"	}
		{link_sound "idle"			"vehicle/engine/car" 		}
	}
}
{"gaz_a car" 
	("gazmm_sound")
	{on bullet_hit
		{if volume "glass_back8"
 			("break_glass2" args 1 _back8)
 		else volume "glass_front2"
 			("break_glass2"  args 3 _front2)
		else volume "glass_light1"
 			("break_glass2"  args 1 _light1)
		else volume "glass_light2"
 			("break_glass2"  args 1 _light2)
 		}
 	}
}
{"bedford_ql"
	("bedford_sound")
	{on bullet_hit
		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2"  args 1 _2)
		}
 	}
}
{"np_sdkfz251_16"
	("sdkfz250_sound")
	{on spawn   
		{add_view "flamer_fire" "flame1" "foresight9"}
		{add_view "flamer_fire_barrel" "fire1" "foresight9"}
		{add_view "flamer_fire" "flame2" "foresight10"}
		{add_view "flamer_fire_barrel" "fire2" "foresight10"}
		{view show   "fire1"}
		{view start   "fire1"}
		{view show   "fire2"}
		{view start   "fire2"}
	}
	{on break_armor
		{if name "blast"
			{if volume "body"
				{call "explosion"}
			}
                		}
	}
	{on bullet_hit
		{if volume "body"
			{if  tagged "isbodypierced"
				{if rand 0.3
					{call "_explosion"}
					{tags remove "isbodypierced"}
				}
			}
		}
	}
	{on "_explosion"
		{call "__explosion"}
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50         
			{blastwave c4 30 r0 8 r1 16}     
			{blastwave c4 3 r0 20 r1 30}
			{spawn "train_die" "basis"}
			{set "big_explosion" 1}
		}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 1 "fire1"
			{view pause	"flame1"}
		}
	}
	{on fire "flamer2"
		{view start	"flame2"}
		{kill_delay "fire2"}
		{delay 1 "fire2"
			{view pause	"flame2"}
		}
	}
	{on operatable on	
		{view start	"fire1"}
		{view start	"fire2"}
	}	
	{on operatable off		
		{view stop	"fire1"}
		{view stop	"fire2"}
	}
}
{"krupp"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"		}
		{link_sound "engine"			"vehicle/engine/sdkfz250"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"	}
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"	}
	}
	{on bullet_hit
		{if volume "glass_front"
 			("break_glass2" args 1 _front)
 		}
 	}
}
{"ford-aa"
	("zis5_sound") 
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"ford-aa_art"
	("zis5_sound") 
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"ford-aa_eng"
	("zis5_sound") 
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"ford-aa_inf"
	("zis5_sound") 
	{on bullet_hit
 		{if volume "glass"
 			("break_glass2" args 1 )
 		}
 	}
}
{"renault_agk"
	("opel_sound")
 	{on bullet_hit
 		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_dl"
 			("break_glass2" args 1 _dl)
 		else volume "glass_dr"
 			("break_glass2" args 1 _dr)
 		else volume "glass_2"
 			("break_glass2" args 1 _2)
		else volume "glass_3"
 			("break_glass2" args 1 _3)
 		else volume "glass_4"
 			("break_glass2" args 1 _4)
		}
 	}
}
{"bedford_ql_inf"
	("bedford_sound")
	{on bullet_hit
		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2"  args 1 _2)
		}
 	}
}
{"bedford_ql_art"
	("bedford_sound")
	{on bullet_hit
		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2"  args 1 _2)
		}
 	}
}
{"bedford_ql_eng"
	("bedford_sound")
	{on bullet_hit
		{if volume "glass_1"
 			("break_glass2" args 1 _1)
 		else volume "glass_2"
 			("break_glass2"  args 1 _2)
		}
 	}
}
{"cckw353_oc car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 1 2)
 		}
 	}
}
{"cckw353_oc_art car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 1 2)
 		}
 	}
}
{"cckw353_oc_eng car" 
	("gmc_sound")
 	{on bullet_hit
 		{if volume "glass1"
 			("break_glass2" args 1 1)
 		else volume "glass2"
 			("break_glass2" args 1 2)
 		}
 	}
}
{"np_willys_sas car"
	{on spawn	
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	("willys_sound")
	{on bullet_hit
 		{if volume "glass_front1"
 			("break_glass2" args 1 _front1)
 		else volume "glass_front2"
 			("break_glass2" args 1 _front2)
 		}
 	}
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.8
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.8
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"maybach" 
	{on spawn
		{if not tagged "texmod_set"
			{tags add "texmod_set"}
			{if rand 0.3
				{delay 0.1
					{tex_mod "2"}
				}
			else rand 0.3
				{delay 0.1
					{tex_mod "1"}
				}
			else 
				{delay 0.1
					{tex_mod ""}
				}
			}
		}	
	}
	("horch_sound")
 	{on bullet_hit
 		{if volume "glass_f"
 			("break_glass2" args 1 _f)
 		else volume "glass_dl1"
 			("break_glass2" args 3 _dl1)
 		else volume "glass_dr1"
 			("break_glass2" args 3 _dr1)
 		else volume "glass_dl2"
 			("break_glass2" args 3 _dl2)
 		else volume "glass_dr2"
 			("break_glass2" args 3 _dr2)
		else volume "glass_r"
 			("break_glass2" args 3 _r)
		else volume "glass_l"
 			("break_glass2" args 3 _l)
		else volume "glass_back"
 			("break_glass2" args 3 _b)
		}
 	}
}
{"ford_1933 car" 
	("gazmm_sound")
}
{"sdkfz7_1"
	("sdkfz250_sound")
} 
{"universal car" 
	{on spawn
		{if not tagged "texmod_set"
			{tags add "texmod_set"}
			{if rand 0.35
				{delay 0.1
					{tex_mod "a"}
				}
			else 
				{delay 0.1
					{tex_mod ""}
				}
			}
		}	
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/dodge"	}
		{link_sound "engine"			"vehicle/engine/l6-40"   	}
		{link_sound "engine_end"		"vehicle/engine/l6-40_end"	}
		{link_sound "exhaust"			"vehicle/engine/l6-40_up"	}
		{link_sound "idle"			"vehicle/engine/l6-40"  	}
	}
}
{"dodge car"
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
{"dodge_en car"
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
;-----------------Normand Unit Pack
