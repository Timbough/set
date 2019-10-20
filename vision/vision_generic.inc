;= START =====================================


(define "vision_human"
    ("radius" r(145))
    {rules
        {human 1 ;Multiplier for which a running human is detected
            {firing 1.33 ;Multiplier for which a firing human is detected
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_humancrew"
    ("radius" r(80))
    {rules
        {human 1
            {firing 0.0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic"
    ("radius" r(165))
    {rules
        {human 1
            {firing 0.0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_human_air"
    ("radius" r(200))
    {rules
        {human 1
            {firing 0
                ("firing")
            }
            ("vision")
        }
        ("cannon")
        ("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_gunner"
    ("radius" r(70))
    {rules
        {human 1
            {firing 0.0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_turret"
    ("radius" r(140))
    {rules
        {human 1
            {firing 0.0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_seeair_around"
    ("radius" r(200))
    {rules
        {human 0}
        {cannon_01 0}
        {cannon_02 0}
        {cannon_03 0}
        {cannon_04 0}
        {cannon_05 0}
        {vehicle_01 0}
        {vehicle_02 0}
        {vehicle_03 0}
        {vehicle_04 0}
        {vehicle_05 0}
        {air 1.2
            {firing 0}
            {visible 0.9}
            {still 0.1}
        }
    }
    {mods
        {stand 1}
    }
)
(define "vision_ship"
    ("radius" r(500))
    {rules
        {human 1
            {firing 0.0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_ship_tower"
    ("radius" r(600))
    {rules
        {human 1
            {firing 0
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "glass"
		("radius" r(%0))
        {rules
           {zero 0}
        }
)

;= MAP HELPER ====================================

(define "ultra_vision"
	{radius 20}
	{h_fov 360}
   	{v_fov 180}
	{uncover %range}
)
{"start_point"  ("ultra_vision" range(20))}
{"map_point"    ("ultra_vision" range(20))}
{"flag_point"   ("ultra_vision" range(20))}
