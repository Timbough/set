(define "as37_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/wheels/m8grayhound"	}
		{link_sound "engine"			"vehicle/engine/as37"		}
		{link_sound "engine_end"		"vehicle/engine/as37_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/mk7_turret"	}
		{link_sound "exhaust"			"vehicle/engine/as37_up" 	}
		{link_sound "idle"			"vehicle/engine/as37"		}
	}
)
(define "pz4_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/pz3"		}
		{link_sound "engine"			"vehicle/engine/pz3"		}
		{link_sound "engine_end"		"vehicle/engine/pz3_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/light"		}
		{link_sound "exhaust"			"vehicle/engine/pz3_up"		}
		{link_sound "idle"			"vehicle/engine/pz4_idle"		}
	}
)
(define "stug_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/pz3"		}
		{link_sound "engine"			"vehicle/engine/pz3"		}
		{link_sound "engine_end"		"vehicle/engine/pz3_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy1"		}
		{link_sound "exhaust"			"vehicle/engine/pz3_up"	}
		{link_sound "idle"			"vehicle/engine/pz3_idle"		}
	}
)

(define "semovente_sound"
	{on "add_movement_sound" overload
		{link_sound "move" 			"vehicle/tracks/bt"	}
		{link_sound "engine"			"vehicle/engine/sem7518"	}
		{link_sound "engine_end"		"vehicle/engine/sem7518_end"	}
		{link_sound "exhaust"			"vehicle/engine/sem7518_up"}
		{link_sound "idle"			"vehicle/engine/sem7518"	}
	}
)
(define "m1441_sound"
	{on "add_movement_sound" overload
		{link_sound "move" 			"vehicle/tracks/bt"	}
		{link_sound "engine"			"vehicle/engine/m14"	}
		{link_sound "engine_end"		"vehicle/engine/m14_end"	}
		{link_sound "exhaust"			"vehicle/engine/m14_up"	}
		{link_sound "idle"			"vehicle/engine/m14"	}
	}
)
(define "l640_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/l6-40"		}
		{link_sound "engine"			"vehicle/engine/l6-40"		}
		{link_sound "engine_end"		"vehicle/engine/l6-40_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/light1"		}
		{link_sound "exhaust"			"vehicle/engine/l6-40_up" 	}
		{link_sound "idle"			"vehicle/engine/l6-40"		}
	}

)
(define "l335_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/bt"		}
		{link_sound "rotate_turret" 		"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/cv33"		}
		{link_sound "engine_end"		"vehicle/engine/cv33_end"	}
		{link_sound "exhaust"			"vehicle/engine/cv33_up"	}
		{link_sound "idle"			"vehicle/engine/cv33"		}
	}
)
{"ab40 tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
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
	("as37_sound")
	("burn_by_engine" args 0.3)
}
{"ab41 tank"
	("as37_sound")
	("burn_by_engine" args 0.3)
}
{"as37 tank"
	("as37_sound")
	("burn_by_engine" args 0.3)
}
{"fiat611 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 		"vehicle/turret/light1"		}
		{link_sound "move"			"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/m3a1"		}
		{link_sound "engine_end"		"vehicle/engine/m3a1_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/m3a1"		}
	}
	("burn_by_engine" args 0.3)
}
{"Lancia1ZM tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 		"vehicle/turret/light1"		}
		{link_sound "move"			"vehicle/wheels/dodge"		}
		{link_sound "engine"			"vehicle/engine/m3a1"		}
		{link_sound "engine_end"		"vehicle/engine/m3a1_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/m3a1"		}
	}
	("burn_by_engine" args 0.3)
}
{"lince tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/wheels/wheels"		}
		{link_sound "engine"			"vehicle/engine/daimler"	}
		{link_sound "engine_end"		"vehicle/engine/daimler_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/light1"		}
		{link_sound "exhaust"			"vehicle/engine/daimler_up"	}
		{link_sound "idle"			"vehicle/engine/daimler"	}
	}
	("burn_by_engine" args 0.3)
}
{"l640 tank"
	("l640_sound")
	("burn_by_engine" args 0.3)
}
{"l640fl tank"
	("l640_sound")
	{on spawn
		{add_view "flamer_fire" "flame1" "foresight9"}
		{add_view "flamer_fire_barrel" "fire1" "foresight9"}
		{view show	"fire1"}

		{view start	"fire1"}

	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
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
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	("burn_by_engine" args 0.3)	
}
{"l6a tank"
	("l640_sound")
	("burn_by_engine" args 0.3)
}
{"l335c tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"l35lf tank"
	("l335_sound")
	{on spawn
		{add_view "flamer_fire" "flame1" "foresight9"}
		{add_view "flamer_fire_barrel" "fire1" "foresight9"}
		{view show	"fire1"}

		{view start	"fire1"}

	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
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
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	("burn_by_engine" args 0.3)	
}
{"l335 tank"
	("l335_sound")
	("burn_by_engine" args 0.3)
}
{"m4732 tank"
	("l640_sound")
	("burn_by_engine" args 0.3)
}

{"m41c tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"m1139 tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"m1340 tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"m1441 tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"m1542 tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"p40 tank"
	("m1441_sound")
	("burn_by_engine" args 0.3)
}
{"pz4gita tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"m7518 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
}
{"m7532 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
}
{"m7534 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
}
{"m9053 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
	("shell_ejection_tank")
}
{"m10525 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
}
{"stug3gita tank"
	("stug_sound")
	("burn_by_engine" args 0.3)
}
{"pz3nita tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"ab43 tank"
	("as37_sound")
	("burn_by_engine" args 0.3)
}
{"m7546 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
}
{"m149 tank"
	("semovente_sound")
	("burn_by_engine" args 0.3)
	("shell_ejection_tank")
}