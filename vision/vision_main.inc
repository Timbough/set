;= HUMAN =====================================

{"human"
    ("uncover" u(10))
    ("h_fov" h(120))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_soldier"
    ("uncover" u(10))
    ("h_fov" h(120))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_officer"
    ("uncover" u(100))
    ("h_fov" h(180))
    ("v_fov" v(200))
    ("vision_human")
}
{"mp_sniper"
    ("uncover" u(10))
    ("h_fov" h(120))
    ("v_fov" v(200))
    ("vision_human")
}

;= SPECIAL ===================================

{"soldier_focused"
    ("uncover" u(10))
    ("h_fov" h(30))
    ("v_fov" v(50))
    ("vision_human")
}
{"rifle_telescope"
    ("uncover" u(2))
    ("h_fov" h(360))
    ("v_fov" v(120))
    ("glass" args 10)
}
{"field_glass"
    ("uncover" u(5))
    ("h_fov" h(360))
    ("v_fov" v(120))
    ("glass" args 25)
}

;= CANNON ========================================

{"cannon_main"
    ("uncover" u(5))
    ("h_fov" h(20))
    ("v_fov" v(140))
    ("vision_optic")
}
{"cannon_mgun"
    ("uncover" u(5))
    ("h_fov" h(50))
    ("v_fov" v(140))
    ("vision_human")
}
{"cannon_main-far"
    ("uncover" u(5))
    ("h_fov" h(40))
    ("v_fov" v(170))
    ("vision_optic")
}
{"cannon_main_wide"
    ("uncover" u(5))
    ("h_fov" h(90))
    ("v_fov" v(170))
    ("vision_human")
}
{"cannon_mgun_ger_3x11"
    ("uncover" u(5))
    ("h_fov" h(11))
    ("v_fov" v(11))
    ("vision_optic")
}
{"cannon_mortar"
    ("uncover" u(5))
    ("h_fov" h(90))
    ("v_fov" v(170))
    ("vision_human")
}
{"cannon_crew"
    ("uncover" u(5))
    ("h_fov" h(180))
    ("v_fov" v(140))
    ("vision_humancrew")
}

;= VEHICLE & MOTO ============================

{"vehicle_main"
    ("uncover" u(5))
    ("h_fov" h(50))
    ("v_fov" v(140))
    ("vision_human")
}
{"vehicle_air"
   ("uncover" u(1))	
   ("h_fov" h(340))
   ("v_fov" v(120))
  ("vision_human")
}
{"vehicle_top_mgun"
    ("h_fov" h(90))
    ("v_fov" v(140))
    ("vision_human")
}
{"vehicle_top_turret"
    ("uncover" u(1))
    ("h_fov" h(45))
    ("v_fov" v(20))
    ("vision_turret")
}
{"vehicle_around"
    ("uncover" u(5))
    ("h_fov" h(360))
    ("v_fov" v(30))
    ("vision_human")
}
{"moto"
    ("uncover" u(5))
    ("h_fov" h(30))
    ("v_fov" v(140))
    ("vision_human")
}
{"moto_crew"
    ("uncover" u(5))
    ("h_fov" h(90))
    ("v_fov" v(60))
    ("vision_human")
}
{"moto_around"
    ("uncover" u(3))
    ("h_fov" h(360))
    ("v_fov" v(60))
    ("vision_human")
}
;= SHIP ======================================
{"marine_main"
   {h_fov 50}
   {v_fov 120}
   ("vision_optic" args 24)
}
{"ship_crew"
    ("uncover" u(7))
    ("h_fov" h(80))
    ("v_fov" v(200))
    ("vision_ship")
}
{"ship_tower"
    ("uncover" u(7))
    ("h_fov" h(80))
    ("v_fov" v(120))
    ("vision_ship_tower")
}

;= TANK ======================================
{"mg_remote"
    ("uncover" u(1))
    ("h_fov" h(20))
    ("v_fov" v(20))
    ("vision_optic")
}
{"mg_hull"
    ("uncover" u(3))
    ("h_fov" h(5))
    ("v_fov" v(45))
    ("vision_gunner")
}
{"tank_main-l"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main-m"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main-h"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main_us_3x"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main_us_5x"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main_eng_1-9x"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main_eng_6x"
    ("uncover" u(5))
    ("h_fov" h(12))
    ("v_fov" v(12))
    ("vision_optic")
}
{"tank_main_ger_1x11"
    ("uncover" u(5))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic")
}
{"tank_main_ger_3x8"
    ("uncover" u(5))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic")
}
{"tank_main_ger_5x8"
    ("uncover" u(5))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic")
}
{"tank_main_ger_2-5x"
    ("uncover" u(5))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic")
}
{"tank_main_ger_5x"
    ("uncover" u(5))
    ("h_fov" h(14))
    ("v_fov" v(14))
    ("vision_optic")
}
{"tank_main_rus_2-5x"
    ("uncover" u(5))
    ("h_fov" h(10))
    ("v_fov" v(10))
    ("vision_optic")
}
{"tank_main_rus_4x"
    ("uncover" u(5))
    ("h_fov" h(10))
    ("v_fov" v(10))
    ("vision_optic")
}
{"tank_driver"
    ("uncover" u(3))
    ("h_fov" h(50))
    ("v_fov" v(20))
    ("vision_gunner")
}
{"tank_back"
    ("uncover" u(3))
    ("h_fov" h(50))
    ("v_fov" v(120))
    ("vision_gunner")
}
{"none"

}
{"tank_around-l"

}
{"tank_around-m"

}
{"tank_around-h"

}
;= OTHER ======================================
{"vehicle_airborne"
    ("uncover" u(5))
    ("h_fov" h(110))
    ("v_fov" v(180))
    ("vision_humancrew")
}
{"vehicle_airborne_3x"
    ("uncover" u(5))
    ("h_fov" h(110))
    ("v_fov" v(180))
    ("vision_optic")
}
{"air_around"       ;
    ("uncover" u(7))
    ("h_fov" h(360))
    ("v_fov" v(360))
    ("vision_seeair_around")
}
{"air"
    ("uncover" u(5))   
    ("h_fov" h(50))
    ("v_fov" v(50))
    ("vision_human_air")
}
{"vehicle_top_mgun_air"
    ("h_fov" h(90))
    ("v_fov" v(70))
    ("vision_human_air")
}
{"cannon_marine"
    ("uncover" u(5))
    ("h_fov" h(110))
    ("v_fov" v(110))
    ("vision_humancrew")
}
{"cover-detector"
	{uncover 5}
	{h_fov 60}
	{v_fov 120}
	("vision_optic" args 50)
}
{"animal"
	{uncover 2}
	{h_fov 360}
	{v_fov 120}
}
{"searchlight"
	{h_fov 30}
	{v_fov 90}
	("vision_optic" args 60)
}
{"watchtower"
	{h_fov 90}
	{v_fov 90}
    ("vision_optic" args 50)
}
{"marine_main"
	{h_fov 50}
	{v_fov 120}
    ("vision_optic" args 24)
}
{"horse"
	{uncover 3}
	{h_fov 110}
	{v_fov 110}
}
{"vehicle_car"
    ("uncover" u(5))
    ("h_fov" h(50))
    ("v_fov" v(140))
    ("vision_humancrew")
}