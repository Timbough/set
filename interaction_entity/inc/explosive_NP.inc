{"mortar_ab_light_ground"
	{on "explosion"
		{stuff_detonate}
	}
        {on spawn
;		{start_sound "weapon/shot/reactive/mortar_whistle4"}
                {delay 0.75
                        {delay 0.75
                                   {spawn "airburst_small"}
                                   {spawn "airburst_dust_small"}
		                 {call "explosion"}        
                            }
			
		}
	}
}
{"mortar_ab_light_snow"
	{on "explosion"
		{stuff_detonate}
	}
        {on spawn
		{start_sound "weapon/shot/artillery"}
                {delay 0.75
                        {delay 0.75
                                   {spawn "airburst_small"}
                                   {spawn "airburst_dust_small_snow"}
		                 {call "explosion"}        
                            }
			
		}
	}
}
{"schrapnellmine_part1"
	{on "explosion"
		{stuff_detonate}
	}
        {on spawn
		{start_sound "detonation/zenite/"}
                {delay 0.00
                        {delay 0.00
                                   
		                 {call "explosion"}        
                            }
			
		}
	}
}
{"schrapnellmine_part2"
	{on "explosion"
		{stuff_detonate}
	}
        {on spawn
		{start_sound ""}
                {delay 0.25
                        {delay 0.25
                                   {spawn "s-mine"}
                                   {spawn "airburst_dust_medium"}
		                 {call "explosion"}        
                            }
			
		}
	}
}
{"mine"
	{inflammation_time 3}
	{on spawn
		{volumes "body" disable all}
		{volumes "body1" disable all}
		{add_view "mined_view_own"		"mined_own"		"mined_view"}
		{add_view "mined_view_enemy"	"mined_enemy"	"mined_view"}
		{add_view "mined_view_defused"	"defused"		"mined_view"}
		{call "change_state"}
	}
	{on "_explosion"
		{volumes "body1" disable blast}
		{volumes "body" disable blast}
		{stuff_detonate}
	}
	{on "explosion"
		{if mined
			{call "_explosion"}
		}
	}
	{on "change_state"
		{if mined
			{tags add "mine_planted"}
			{volumes "body1" disable all}
			{volumes "body" enable select touch contact contact_ground blast}
		 else
			{tags remove "mine_planted"}
			{volumes "body" disable all}
			{volumes "body1" enable select touch contact contact_ground blast}
		}
	}
}
{"kamikaze_bomb"
	{on blast_hit
		{if min_energy 0.5
			{stuff_detonate}
		}	
	}
}
{"mine_antipersonnel"
	{on contact
		{if mine_effector "human"
			{call "explosion"}
		else mine_effector "vehicle"
			{call "explosion"}
		else mine_effector "animal"
			{call "explosion"}
		}
	}
	{on blast_hit
		{if min_energy 1.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}	
	}
}
{"mine_antipersonnel_ger"
	{on contact
		{if mine_effector "human"
			{call "explosion"}
		else mine_effector "vehicle"
			{call "explosion"}
		else mine_effector "animal"
			{call "explosion"}
		}
	}
	{on blast_hit
		{if min_energy 1.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}	
	}
}
{"mine_antitank"
	{on blast_hit
		{if min_energy 2.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}				
	}
	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.1
					{call "explosion"}
				}
			}
		}
	}
}
{"dynamite"
	{on "undermine"
		{tags add "fuse"}
		{add_view "flash_fuse_small" "fire" "fire"}
		{view start "fire"}
		{ani_play "fire" 0.06}
		{delay 1
			{explosive 1}
		}
		{volumes disable touch select}
		{delay 8
			{call "explosion"}
		}
	}
	{on "onThrow"
		{if stuff_activated
			{tags add "fuse"}
			{add_view "flash_fuse_small" "fire" "fire"}
			{view start "fire"}
			{ani_play "fire" 0.06}
			{volumes disable touch select}
		}
	}
	{on blast
		{if min_energy 0.25
			{stuff_detonate}
		}	
	}
	{on "explosion"
		{stuff_detonate}
	}
}
{"air_bomb"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{ani_play "start"}
		{delay 0.5
			{volumes enable contact}
		}
	}
	{on ground_hit
		{if min_speed 10
			{call "explosion"}
		}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}
{"air_bomb_stuff"
	{on "explosion"
		{stuff_detonate}
	}
	{on break_armor
		{call "explosion"}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}
{"artillery_explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{delay 0
			{start_sound "weapon/shot/artillery"}
			{delay 2
				{call "explosion"}
			}
		}
	}
}
{"artillery_explosion_flaer"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{spawn "smoke_red_small"}
		{spawn "smoke_red_norm"}
		{delay 10
			{delay 2
				;{set_radius 20
				{call "explosion"}
			}
			{start_sound "mission/artillery/"}
			{start_sound "weapon/shot/artillery"}
		}
	}
}
{"explosion"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{call "explosion"}
	}
}
{"explosive_barrel"
	{inflammation_time 3}
	{on spawn
		{set "explosioned" 0}
	}
	{on break_armor
		{if name "pierce"
			{if stuff_filled "fuel" 20
				{call "explosion"}
			else stuff "bullet"
				{if stuff_filled "water" 20
					{burn fx "drops_water_small_short" fake}
				}
			else stuff "shell"
				{call "break"}
			}
	else name "blast"
			{call "break"}
		}
	}
	{on contact
	}
	{on "burn"
		{call "break"}
	}
	{on "break"
		{if stuff_filled "fuel" 20
			{call "explosion"}
		else
			{spawn "car_die_particle"}
			{volumes disable bullet blast contact}
			{hide 0.3}
		}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{volumes disable bullet blast contact}
			{delay 1
				{volumes enable contact}
			}
			{blastwave c4 5 r0 4 r1 6}
			{spawn "barrel_die_big"}
			{spawn "fire_shellhole"}
			{add_view "smoke_barrel" "smoke" "root"}
			{view start "smoke"}
			{impulse up 15 3 dir 3 1 cx 0 1 cy 0 1 com}
			{delay 25
				{view stop "smoke"}
				{hide 1}
			}
		}
	}
	{on ground_hit
		{if "explosioned"
			{blastwave c4 2 r0 4 r1 6}
			{spawn "barrel_die" offset 0 0 7}
			{delete}
		}
	}
}
{"balloon"
	{on break_armor
		{if name "pierce"
			{if rand 0.2
				{bullet_detonate}
				{if stuff_filled "fuel" 5
					{call "explosion"}
				}
			}
		}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
			{spawn "flamer_die"}
			{spawn "fire_molot_ground"}
			{blastwave c4 10 r0 1 r1 1.5}
			{fire radius 6 time 2 heating 6}
			{delete}
		}
	}
}

{"explosive_stuff"
	{inflammation_time 7}
	{on break_armor
		{call "explosion"}
	}
	{on "burn"
		{call "explosion"}
	}
	{on "explosion"
		{if not "explosioned"
			{set "explosioned" 1}
;			{con "explosion"}
			{stuff_detonate}
		}
	}
}
{"mine_antitank_ita"
	{on blast_hit
		{if min_energy 2.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}				
	}

	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.1
					{call "explosion"}
				}
			}
		}
	}
}
{"mine_antitank_pol"
	{on blast_hit
		{if min_energy 2.5
			{if not stuff "mine"
				{stuff_detonate}
			}
		}				
	}
	{on contact
		{if mine_effector "mine_exploder"
			{delay 0
				{call "explosion"}
			}
		else mine_effector "vehicle"
			{if mined
				{volumes disable contact}
				{delay 0.1
					{call "explosion"}
				}
			}
		}
	}
}
{"rocket_v2_a4"
	{on "explosion"
		{stuff_detonate}
	}
	{on spawn
		{ani_play "start"}
		{delay 0.5
			{volumes enable contact}
		}
	}
	{on ground_hit
		{if min_speed 10
			{call "explosion"}
		}
	}
	{on contact
		{if min_speed 8
			{call "explosion"}
		}
	}
}