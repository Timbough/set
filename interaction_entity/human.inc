{"human"
	{inflammation_time 0.25}
	{on spawn
		{add_view	"cigarettesmoke"		"smoke"		"head"}
		{add_view	"drops_water_small2"	"on_water"	"foot3r"}
		{add_view	"drops_water_small2"	"on_water"	"foot3l"}
		{add_view	"drops_water_small3"	"swim"		"foot3r"}
		{add_view	"drops_water_small3"	"swim"		"foot3l"}
		{add_view	"drops_water_small3"	"swim"		"hand2r"}
		{add_view	"drops_water_small3"	"swim"		"hand2l"}
		{add_view	"wash_human_small"		"swim_move"	"head"}
		{add_view	"drops_puddle_small"	"on_puddle"	"foot3r"}
		{add_view	"drops_puddle_small"	"on_puddle"	"foot3l"}
		{add_view	"drops_puddle_small"	"die_in_swamp"	"foot3r"}
		{add_view	"drops_puddle_small"	"die_in_swamp"	"foot3l"}
		
		{add_view	"marker_healing" 		"marker_healing" "head"}
		{add_view	"marker_repair" 		"marker_repair" "head"}
		{add_view	"marker_ammo_out" 		"marker_ammo_out" "head"}
		{add_view	"marker_ammo_refill" 	"marker_ammo_refill" "head"}
		{add_view	"marker_personage" 		"marker_personage" "head"}
		{add_view	"marker_veterancy" 		"marker_veterancy" "head"}
		
		{link_sound "move_ground" "human/move/ground"}
		{link_sound "move_road"   "human/move/road"}
		{link_sound "move_sand"   "human/move/sand"}
		{link_sound "move_snow"   "human/move/snow"}
		{link_sound "move_grass"  "human/move/grass"}
		{link_sound "door_open" "vehicle/open"}
                	{link_sound "door_close" "vehicle/close"}
		{link_sound "swim" "human/move/swim"}

		{if able "burning"
			{call "add_burn_fx"}
			{view start "burn_fire"}
		}
		(mod "mp"
			{tags add "teamnone"}
		)
		{call "update_season"}
		{call "update_face"}
	}	
	{on "update_season" 
		{if tex_mod "1"
			{bone cut "skins"}
			{bone cut "skind"}
			{bone show "skinw"}
			{tags add "texmod_w"} 
		else tex_mod "d"
			{bone cut "skinw"}
			{bone cut "skins"}
			{bone show "skind"}
			{tags add "texmod_d"} 
		else
			{bone hide "skinw"}
			{bone hide "skind"}

		}
	}
	{on "desert_uniform"
		{bone cut "skinw"}
		{bone cut "skins"}
		{bone show "skind"}
		{tex_mod "d"}
		{tags add "texmod_d"}
		{call "update_face_map"}
	}
	{on "winter_uniform"
		{bone cut "skins"}
		{bone cut "skind"}
		{bone show "skinw"}
		{tex_mod "1"}
		{tags add "texmod_w"} 
		{call "update_face_map"}
	}
	{on "update_face" 
		{if tagged "texmod_w"
			{if not tagged "texmod_set"
				{if rand 0.90 
					{if rand 0.1
 						{delay 0.1
 							{tex_mod "w3"}
 						}
 					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "w4"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "w5"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "w6"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w7"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "w8"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w9"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w10"}
 						}
					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "w11"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "w12"}
 						}
					}
					{tags add "texmod_set"} 
				}
			}
		else tagged "texmod_d"
			{if not tagged "texmod_set"
				{if rand 0.90 
					{if rand 0.1
 						{delay 0.1
 							{tex_mod "d3"}
 						}
 					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "d4"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "d5"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "d6"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d7"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "d8"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d9"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d10"}
 						}
					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "d11"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "d12"}
 						}
					}
					{tags add "texmod_set"} 
				}
			}
		else
			{if not tagged "texmod_set"
				{if rand 0.90 
					{if rand 0.1
 						{delay 0.1
 							{tex_mod "3"}
 						}
 					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "4"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "5"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "6"}
 						}	
					else rand 0.1
						{delay 0.1 
 							{tex_mod "7"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "8"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "9"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "10"}
 						}
					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "11"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "12"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "13"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "14"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "15"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "16"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "17"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "18"}
 						}
					}
					{tags add "texmod_set"} 
				}
				{call "update_rank"}
			}
		 }
	}
	{on "update_face_map" 
		{if tagged "texmod_w"
			{if not tagged "map_texmod_set"
				{if rand 0.90 
					{if rand 0.1
 						{delay 0.1
 							{tex_mod "w3"}
 						}
 					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "w4"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "w5"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "w6"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w7"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "w8"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w9"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "w10"}
 						}
					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "w11"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "w12"}
 						}
					}
					{tags add "map_texmod_set"} 
				}
			}
		else tagged "texmod_d"
			{if not tagged "map_texmod_set"
				{if rand 0.90 
					{if rand 0.1
 						{delay 0.1
 							{tex_mod "d3"}
 						}
 					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "d4"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "d5"}
 						}
  					else rand 0.1
						{delay 0.1 
 							{tex_mod "d6"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d7"}
 						}
 					else rand 0.1
						{delay 0.1 
 							{tex_mod "d8"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d9"}
 						}
					else rand 0.1
						{delay 0.1 
 							{tex_mod "d10"}
 						}
					else rand 0.1 
 						{delay 0.1 
 							{tex_mod "d11"}
 						}
 				 	else rand 0.1
 						{delay 0.1 
 							{tex_mod "d12"}
 						}
					}
					{tags add "map_texmod_set"} 
				}
			}
		}
	}
	{on "update_rank" 
		{if rand 0.80 
			{if not tagged "rank_set" 
				{if rand 0.2
 					{delay 0.1
 						{tex_mod "cpl"}
 					}
 				else rand 0.2 
 					{delay 0.1 
 						{tex_mod "lcpl"}
 					}
 			 	else rand 0.2
 					{delay 0.1 
 						{tex_mod "msgt"}
 					}
  				else rand 0.2
					{delay 0.1 
 						{tex_mod "sgt"}
 					}
				else rand 0.2
					{delay 0.1 
 						{tex_mod "ssgt"}
 					}
 				}
				{tags add "rank_set"}
			} 
		}
	}
		;---------- harpoon ----------
	{on "move_rope"	
		{call "up_rope"}
		{delay 5 {ani_play "garpun_teleport" callback}}
		{delay 5.5 {call "down_rope"}}
	}
	{on "up_rope"
		{spawn "paralizator-2" "basis" x}
		{spawn "ex_bul_zenit_snow" "Palm1R" x}
		{ani_stop "walk"}
		{ani_stop "run"}
		{ani_play "garpun_podem" callback}
		{delay 0.1 {spawn "rope_uper" "basis" x}}
		{delay 1.6 {call "idle"} {spawn "circledust_norm" "basis" x}}
	}
	{on "down_rope"
		{spawn "paralizator-1" "basis" x}
		{spawn "ex_bul_zenit_snow" "Palm1R" x}
		{ani_stop "walk"}
		{ani_stop "run"}
		{ani_play "garpun_spusk" callback}
		{delay 0.2 {spawn "rope_faller" "basis" x}}
		{delay 2.1 {call "idle"} {spawn "circledust_norm" "basis" x}}
	}
	;----------------------------------------
	
	{on contact 
		{if not impregnable
			{kill_flags reset}
			{volumes disable contact}
			{delay 2
				{volumes enable contact}
			}
			{if effector "tank"
				{if not user_control
					{health_damage_crush "die" "crush"}
				 else
					{health_damage_crush "die" "crush"}
				}
			else effector "vehicle"
				{if not dead
					{if not user_control
						{call "die"}
					 else
						{call "die"}
					}
				else
					{if rand 0.1 {spawn "ground_blood01"}}
	                {if rand 0.1 {spawn "ground_blood02"}}
	                {if rand 0.1 {spawn "ground_blood03"}}
				}
			else effector "knife"
				{if contact_velocity 5
					{health_damage_count 500
						{effects "" "hit" "damage" "die_from_knife" "die_from_knife"}
					}
				}
			(define "health_damage"
				{health_damage_count %c
					{effects "" "hit" "damage" "die" "die"}
				}
  	        )
			else effector "axe"
				{if contact_velocity 5
  		        	("health_damage" c(500))
  		        }
			(define "contact_part"
			else effector %e
				{if contact_velocity %v
					{if difficulty "easy"
						{if user_control
							("health_damage" c(%ud))
						else
							("health_damage" c(%d))
						}
					else
						("health_damage" c(%d))
					}

					("health_damage" c(%d))
				}

  	        )
			("contact_part" e("building_part")	v(3)	ud(20)	d(120))
			("contact_part" e("big part")		v(3)	ud(20)	d(120))
			("contact_part" e("medium part")	v(6)	ud(10)	d(80))
			("contact_part" e("small part")		v(10)	ud(3)	d(40))
			else effector "chicken"
				{health_damage_count 0
					{effects "" "hit" "hit" "hit" "hit"}
				}
			else effector "wire"
				{health_damage_count 20
					{effects "" "hit" "damage" "die" "die"}
				}
			else effector "flame_piece"
				{health_damage_count 15
					{effects "" "hit" "hit" "die" "die"}
				}
			}
		}
	}
	{on bullet_hit
		{kill_flags reset}
		{spawn "ex_bul_sm"}		; to generate hit signal
		{if stuff "shell fg"
			{bullet_detonate}
		else stuff "bazooka"
			{bullet_detonate}
			{call "process_bullet_hit"}
		else stuff "bullet"
			{if volume_armored
				{bullet_detonate}
			}
			{call "process_bullet_hit"}
		else
			{call "process_bullet_hit"}
		}
	}
	{on blow
		{if not name "knife"
			{start_sound "human/blow"}
		}
	}
	{on blow opponent
		{if name "knife"
			{health_damage_blow
				{effects "" "hit" "hit" "die_from_knife" "die_from_knife"}
			}
		else
			{if name "head"
				{spawn "bloodspark_small02" "head"}
			}
			{health_damage_blow
				{effects "" "hit" "hit" "die" "die"}
			}
		}
	}
	{on "process_bullet_hit"
		{if hit_side front	{kill_flags front}
		else hit_side back	{kill_flags back}
		else				{kill_flags front back}
		}
		{if velocity 7		{kill_flags run}
		else velocity 0.1	{kill_flags go}
		}
		{kill_flags piercing}
		{if	stuff "rifle"	{kill_flags rifle}}
		{if	stuff "mgun"	{kill_flags mgun}}
		{if	stuff "smg"	{kill_flags smg}}
		{if	stuff "pistol"	{kill_flags pistol}}

		{health_damage_pierce
			{effects	"hit-scream"
						"hit-light" "hit-heavy"
						"die" "hit-explosion"
						"throw-off" "throw-off-and-die"
			}
			{explosive_treshold 70}
			{table {30 1} {200 2.5} {500 3} {5000 5}}
		}
		{if volume "head"
			{if not dead
				{if volume_armored
					{if stuff "pistol" {if rand 0.35 ("health_damage" c(0))}}
					{if stuff "smg" {if rand 0.35 ("health_damage" c(0))}}
					{if not stuff "pistol"
						{if not stuff "smg"
							("health_damage" c(150))
						}
					}
				else
					("health_damage" c(160))
				}
			}
			{spawn "blood_hit"}
			{if rand 0.5
				{take_off "head"
					{impulse up 5 2 dir 7 3}
				}
			}
		}
		{if volume "body"
			{if not dead
				{if stuff "pistol"
					{if rand 0.1
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "smg"
					{if rand 0.1
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "rifle"
					{spawn "blood_hit"}  
					{if rand 0.25 
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "sniper"
					{spawn "blood_hit"}
					{if rand 0.3 
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "mgun"
					{spawn "blood_hit"}
					{if rand 0.2 
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
				{if stuff "hmgun"
					{spawn "blood_hit"}
					{if rand 0.35 
						("health_damage" c(50))
					else
						("health_damage" c(50))
					}
				}
			}
		}
		{if volume "foot1l"
			{if not dead
				{if stuff "pistol" {if rand 0.1 ("health_damage" c(0))}}
				{if stuff "smg"    {if rand 0.1 ("health_damage" c(0))}}
				{if stuff "rifle"  {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "sniper" {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "mgun"   {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "hmgun"  {if rand 0.3 ("health_damage" c(0))}}
			}
		}
		{if volume "foot1r"
			{if not dead
				{if stuff "pistol" {if rand 0.1 ("health_damage" c(0))}}
				{if stuff "smg"    {if rand 0.1 ("health_damage" c(0))}}
				{if stuff "rifle"  {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "sniper" {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "mgun"   {if rand 0.2 ("health_damage" c(0))}}
				{if stuff "hmgun"  {if rand 0.3 ("health_damage" c(0))}}
			}
		}
	}
	{on blast_hit overload
		{if min_energy 0.8
			("health_damage" c(100))
		}
		{if stuff "kamikaze"
			{call "die"}
			("health_damage" c(250))
			{con "kamikaze"}
		}
		
		{kill_flags reset}
		{if hit_side front	{kill_flags front}
		else hit_side back	{kill_flags back}
	    else				{kill_flags front back}
	    }
		{kill_flags blast}

		{health_damage_blast
			{effects	"hit-scream"
						"hit-light" "hit-heavy"
						"die" "hit-explosion"
						"throw-off" "throw-off-and-die"
			}
			{table {0.5 0.5} {2 1} {10 3} {50 6}}
		}
	}
	{on "die_throw_high"
		{set "die_after_throw" 1}
		{spawn "ground_blood_big"}
		{if rand 0.15 {spawn "ground_blood01"}}
	        {if rand 0.1 {spawn "ground_blood02"}}
	        {if rand 0.2 {spawn "ground_blood03"}}
		{call "die_scream"}
		{call "throw_high"}
	}
	
    {on "hit-scream"
		{if not "talk"
			{set "talk" 1}
			{talk "injuring"}
			{delay 10 2
				{set "talk" 0}
			}
		}
	}

	{on "hit-light"
		{if not dead
			{if rand 0.03 {knockdown 2 1}}
			{if rand 0.65 {spawn "bloodspark_small01"}}
                        {if rand 0.55 {spawn "bloodspark_small02"}}
                        {if rand 0.4 {spawn "bloodsparks01"}}
                        {if rand 0.2 {spawn "bloodsparks02"}}
                        {if rand 0.1 {spawn "ground_blood_big"}}
                        {if rand 0.1 {spawn "ground_blood01"}}
                        {if rand 0.1 {spawn "ground_blood02"}}
                        {if rand 0.2 {spawn "ground_blood03"}}
                        {if rand 0.1 {spawn "mainspark_small03"}}
			else
				{if rand 0.1 {call "explosion"}}
		}
	}
	
        {on "hit-heavy"
		{if not dead
		        {if stuff "shell apcr" {if rand 0.35 {call "explosion"}}
                        else
			{if stuff "shell ap" {if rand 0.2 {call "explosion"}}
			else
			{if stuff "fg_medium" {if rand 0.35 {call "explosion"}}
			else
			{if stuff "fg_heavy" {if rand 0.5 {call "explosion"}}
			else
			{if stuff "dynamite" {if rand 0.65 {call "explosion"}}
			else
			{if stuff "shell fg" {if rand 0.25 {call "explosion"}}
			else
			{if stuff "apcr" {if rand 0.4 {call "explosion"}}
			else
                        {if stuff "ap" {if rand 0.25 {call "explosion"}}
			else
			{if stuff "fg" {if rand 0.2 {call "explosion"}}
			else
				{if rand 0.05 {knockdown 2 1}}
			        {if rand 0.7 {spawn "bloodspark_small01"}}
                                {if rand 0.65 {spawn "bloodspark_small02"}}
                                {if rand 0.55 {spawn "bloodsparks01"}}
                                {if rand 0.5 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood01"}}
                                {if rand 0.3 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.2 {spawn "mainspark_small03"}}
                        }}}
                        }}}
                        }}}
                else
                {if rand 0.2 {call "explosion"}}
		}
	}
	{on "hit-explosion"
		{if tagged "no_explosion"
			{call "die"}
		else
			{call "die_scream"}
			{call "explosion"}
		}
	}
	{on "throw-off"
		{set "die_after_throw" 0}
		{call "throw_high"}
	}
	{on "throw-off-and-die"
		{set "die_after_throw" 1}
		{call "die_scream"}
		{call "throw_high"}
	}
	
	{on "hit"
		{call "hit-scream"}
	}
	{on "damage"
		{if rand 0.1 {spawn "ground_blood01"}}
	        {if rand 0.1 {spawn "ground_blood02"}}
	        {if rand 0.1 {spawn "ground_blood03"}}
		{call "hit"}
	}

	{on "throw_high"
		{if senseless
			{if not dead
				{if not user_control
					{call "die"}
				}
			}
		else
			{if not dead
				{if linked "vehicle"
					{if "die_after_throw"
						{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 die force}
					else
						{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}
					}
				else
					{if "die_after_throw"
						{throw_off up 4 0.8 dir 3.5 0.5 forward 0 0 die}
					else
						{throw_off up 4 0.8 dir 3.5 0.5 forward 0 0}
					}
				}
			else
				{call "explosion"}
			}
		}
	}
	{on "throw_off_end"
		{if not user_control
			{health_damage_count 50 
				{effects "" "hit" "damage" "die" "die"}
			}
		}
		{call "knock_down"}
	}
	{on "throw_off_end_die"
		{call "die"}
	}
	{on "throw_off_from_tower"
		{throw_off up 1 forward 2 die force}
	}
	{on "throw_off_from_ladder"
		{throw_off up 1 forward -2 die force}
	}
	{on "throw_off_from_ship"
		{throw_off up 4 dir 3 1 die force}
	}
	{on "throw_off_from_vehicle"
		{if difficulty "multiplayer"
			{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force die}
		else
			{if user_control
				{throw_off up 1.3 0.5 dir 5.5 2 forward 4 turn 0 360 force}
			else
				{throw_off up 1.3 0.5 dir 5 1 forward 4 turn 0 360 rnd_die 0.7 force}
			}
		}
	}
	{on "linker_simulation"
		{if effector "airborne"
		 else effector "marine"
		 else effector "cannon"
;			{throw_off up 2.25 0.75 forward 2.25 0.75 turn 0 360 force}
		 else altitude 3
			{throw_off up 1 forward 2 die force}
		}
	}

	{on "knock_down"
		{if not water_level -0.1
			{knockdown 12 3}
		}
	}

	{on "die"
		{if not dead
			{if linked
				{if linked "shipflak"
					{call "throw_off_from_ship"}
				else linked "doublecolt"
					{call "throw_off_from_ship"}
				else linked "car"
					{if place "driver"
						{throw_off up 1.6 forward 2 turn -90 die force rotate_to_dir}
					else place "commander"
						{throw_off up 1.6 forward 2 turn +90 die force rotate_to_dir}
					else
						{call "die_with_blood"}
					}
				else altitude 2
					{if boarding
						{call "throw_off_from_ladder"}
					else
						{call "throw_off_from_tower"}
					}
				else linked "cannon"
					{call "die_with_blood"}
				else
					{call "throw_off_from_vehicle"}
				}
			else
				{call "die_with_blood"}
			}
		}
	}
	{on "die_with_blood"
		{if not senseless
			{if rand 0.5 {spawn "ground_blood01"}}
	                {if rand 0.3 {spawn "ground_blood02"}}
	                {if rand 0.2 {spawn "ground_blood03"}}
	                {if rand 0.1 {spawn "ground_blood01"}}
	                {if rand 0.1 {spawn "ground_blood02"}}
		}
		{call "die_without_blood"}
	}
	{on "die_without_blood"
;		{con "die"}
		{view pause "swim"}
		{call "die_scream"}
		{if not kill_flags blast
			{kill_flags piercing}
		}
		{die}
;		{able collect 1}
		{delay 3
			{volumes enable contact}
		}
;		{delay 30 {delete}}
	}
	{on "die_scream"
		{if not "die_sound"
			{set "die_sound" 1}
			{talk "death_cry"}
			{signal mandie 5}
		}
	}
	{on "die_from_knife"
		{set "die_from_knife" 1}
		{call "die"}
	}

	{on ground_hit
		{if rand 0.8 {spawn "ground_blood01"}}
	        {if rand 0.7 {spawn "ground_blood02"}}
	        {if rand 0.6 {spawn "ground_blood03"}}
	}

	(define "piece_explosion"
		{spawn %0 %1
			{impulse	up 1 0.5 dir 8 4
						cx 0 12 cy 0 12
						fx 0 60 fy 0 60 fz 80 40
			}
		}
	)
	(define "piece_crush"
		{spawn %0 %1
			{impulse	up 0.1 0.1
						fx 0 7 fy 0 7 fz 0 7
			}
		}
	)
	(define "spawn_pieces"
		;left hand
		{if rand 0.2
			(%0 args "m_hand00" "hand1l")
		else rand 0.2
			(%0 args "m_hand01" "hand1l")
		else rand 0.2
			(%0 args "m_hand02" "hand1l")
		}
		;right hand
		{if rand 0.2
			(%0 args "m_hand00" "hand1r")
		else rand 0.2
			(%0 args "m_hand01" "hand1r")
		else rand 0.2
			(%0 args "m_hand02" "hand1r")
		}

		;left foot
		{if rand 0.3
			(%0 args "m_leg00" "foot1l")
		}
		;right foot
		{if rand 0.3
			(%0 args "m_leg00" "foot1r")
		}

		;head
		{if rand 0.3
			(%0 args "m_head00" "head")
		else rand 0.3
			(%0 args "m_head01" "head")
		}
	)

	{on "explosion"
		{if personage
			{call "die"}
		else
		        {if stuff "zenite"
			        {if rand 0.7 {spawn "bloodspark_small01"}}
                                {if rand 0.6 {spawn "bloodspark_small02"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.3 {spawn "bloodsparks02"}}
                                {if rand 0.3 {spawn "ground_blood_big"}}
                                {if rand 0.1 {spawn "ground_blood_small"}}
                                {if rand 0.25 {spawn "ground_blood01"}}
                                {if rand 0.1 {spawn "ground_blood02"}}
                                {if rand 0.5 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "mainspark_small03"}}
		else
			{if stuff "rifle"
			    {if rand 0.5 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.15 {spawn "bloodsparks02"}}
                            {if rand 0.2 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.1 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.1 {spawn "ground_blood03"}}
                            {if rand 0.2 {spawn "mainspark_small03"}}
        	else
                        {if stuff "mgun"
			        {if rand 0.4 {spawn "bloodspark_small01"}}
                                {if rand 0.3 {spawn "bloodspark_small02"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.2 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood_small"}}
                                {if rand 0.1 {spawn "ground_blood01"}}
                                {if rand 0.2 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.3 {spawn "mainspark_small03"}}
                else
                        {if stuff "hmgun"
			    {if rand 0.5 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.5 {spawn "bloodsparks02"}}
                            {if rand 0.2 {spawn "ground_blood_big"}}
                            {if rand 0.5 {spawn "ground_blood_small"}}
                            {if rand 0.3 {spawn "ground_blood01"}}
                            {if rand 0.3 {spawn "ground_blood02"}}
                            {if rand 0.3 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                  else
                        {if stuff "shotgun"
			    {if rand 0.75 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.15 {spawn "bloodsparks02"}}
                            {if rand 0.1 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.3 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.3 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                    else
                        {if stuff "smg"
			    {if rand 0.55 {spawn "bloodspark_small01"}}
                            {if rand 0.5 {spawn "bloodspark_small02"}}
                            {if rand 0.3 {spawn "bloodsparks01"}}
                            {if rand 0.05 {spawn "bloodsparks02"}}
                            {if rand 0.1 {spawn "ground_blood_big"}}
                            {if rand 0.2 {spawn "ground_blood_small"}}
                            {if rand 0.1 {spawn "ground_blood01"}}
                            {if rand 0.2 {spawn "ground_blood02"}}
                            {if rand 0.1 {spawn "ground_blood03"}}
                            {if rand 0.1 {spawn "mainspark_small03"}}
                    else
                    	{if stuff "pistol"
			        {if rand 0.45 {spawn "bloodspark_small01"}}
                                {if rand 0.3 {spawn "bloodspark_small02"}}
                                {if rand 0.2 {spawn "bloodsparks01"}}
                                {if rand 0.01 {spawn "bloodsparks02"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
                                {if rand 0.1 {spawn "ground_blood_small"}}
                                {if rand 0.1 {spawn "ground_blood01"}}
                                {if rand 0.1 {spawn "ground_blood02"}}
                                {if rand 0.1 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "mainspark_small03"}}
                     	else
                                {if rand 0.7 {spawn "excloud02"}}
                                {if rand 0.85 {spawn "excloud"}}
                                {if rand 0.5 {spawn "bloodsparks01"}}
                                {if rand 0.5 {spawn "bloodsparks02"}}
                                {if rand 0.5 {spawn "ground_blood_big"}}
                                {if rand 0.15 {spawn "exflame"}}
                                {if rand 0.7 {spawn "ground_blood01"}}
                                {if rand 0.6 {spawn "ground_blood02"}}
                                {if rand 0.5 {spawn "ground_blood03"}}
                                {if rand 0.3 {spawn "ground_blood_big"}}
                                {if rand 0.2 {spawn "ground_blood01"}}
                                {if rand 0.3 {spawn "ground_blood02"}}
                                {if rand 0.2 {spawn "ground_blood03"}}
                                {if rand 0.1 {spawn "ground_blood_big"}}
	{if rand 0.2
	         {if rand 0.25
                    {spawn "m_hand01" {impulse up 2 4 dir 2 5}}
                    else
                        {if rand 0.35
                            {spawn "m_hand02" {impulse up 2 4 dir 2 8}}
                            else
                                {if rand 0.45
                                    {spawn "m_hand03" {impulse up 2 4 dir 2 5}}
                                    else
                                        {if rand 0.55
                                            {spawn "m_hand04" {impulse up 2 4 dir 6 8}}
                                            else
                                                {spawn "m_hand05" {impulse up 2 4 dir 2 5}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "m_hand01" {impulse up 3 5 dir 1 4}}
                    else
                        {if rand 0.35
                            {spawn "m_hand02" {impulse up 3 5 dir 1 8}}
                            else
                                {if rand 0.45
                                    {spawn "m_hand03" {impulse up 3 5 dir 1 6}}
                                    else
                                        {if rand 0.55
                                            {spawn "m_hand04" {impulse up 3 5 dir 1 4}}
                                            else
                                                {spawn "m_hand05" {impulse up 3 5 dir 1 4}}
                                        }
                                }
                        }
                }
                ;{if rand 0.3
                 ;   {spawn "m_leg01" {impulse up 2 3 dir 1 2}}
                 ;   else
                 ;       {if rand 0.5
                 ;           {spawn "m_leg02" {impulse up 2 3 dir 1 8}}
                 ;           else
                 ;               {if rand 0.65
                 ;                   {spawn "m_leg03" {impulse up 2 3 dir 1 2}}
                 ;                   else
                 ;                       {spawn "m_leg04" {impulse up 2 3 dir 1 6}}
                 ;               }
               ;         }
               ; }
               ; {if rand 0.3
               ;     {spawn "m_leg01" {impulse up 1 4 dir 1 3}}
               ;     else
               ;         {if rand 0.5
               ;             {spawn "m_leg02" {impulse up 3 4 dir 1 3}}
               ;             else
               ;                 {if rand 0.65
               ;                     {spawn "m_leg03" {impulse up 1 4 dir 1 8}}
               ;                     else
              ;                          {spawn "m_leg04" {impulse up 1 4 dir 1 3}}
               ;                 }
              ;          }
               ; }
                {if rand 0.25
                    {spawn "m_head01" {impulse up 3 5 dir 1 2}}
                    else
                        {if rand 0.3
                            {spawn "m_head02" {impulse up 3 5 dir 1 2}}
                            else
                                {if rand 0.5
                                    {spawn "m_head03" {impulse up 4 5 dir 6 8}}
                                    else
                                        {if rand 0.65
                                            {spawn "m_head04" {impulse up 3 5 dir 1 2}}
                                            else
                                                {spawn "m_head05" {impulse up 3 5 dir 1 2}}
                                        }
                                }
                        }
                }
                {if rand 0.33
                    {spawn "m_torse01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "m_torse02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "m_torse03" {impulse up 0 1 dir 0 1}}
                        }
                }
                {if rand 0.33
                    {spawn "m_guts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_guts01a" {impulse up 1 4 dir 1 8}}
                            else
                                {spawn "m_guts01b" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_guts02" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_guts02a" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "m_guts02b" {impulse up 1 3 dir 3 6}}
                        }
                }
                {if rand 0.33
                    {spawn "m_guts03" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_guts03a" {impulse up 1 3 dir 1 8}}
                            else
                                {spawn "m_guts03b" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "m_sguts03" {impulse up 1 3 dir 3 6}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 3 4 dir 1 8}}
                            else
                                {spawn "m_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts01" {impulse up 2 7 dir 1 6}}
                            else
                                {spawn "m_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 1 2 dir 1 5}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "m_guts02b" {impulse up 3 3 dir 2 4}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "m_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}
		       	else
	{if rand 0.3
		       	        {if rand 0.33
                    {spawn "m_xlcorp01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "m_xlcorp02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "m_xlcorp03" {impulse up 0 1 dir 0 1}}
                        }
                }
                 {if rand 0.33
                    {spawn "m_foot01" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_foot02" {impulse up 3 4 dir 7 8}}
                            else
                                {spawn "m_foot03" {impulse up 3 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_foot01" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_foot02" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "m_foot03" {impulse up 1 5 dir 3 5}}
                        }
                }
				{if rand 0.33
                    {spawn "m_sguts03" {impulse up 4 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts01" {impulse up 2 7 dir 1 8}}
                            else
                                {spawn "m_sguts02" {impulse up 1 5 dir 3 7}}
                        }
                }
		{if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 2 4 dir 3 4}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 1 2 dir 1 2}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 3 4 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "m_guts02b" {impulse up 2 3 dir 2 7}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 4 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts03a" {impulse up 3 4 dir 3 5}}}
                {if rand 0.2 {spawn "m_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}
						else
	{if rand 0.4
                {if rand 0.25
                    {spawn "m_hand01" {impulse up 2 4 dir 2 5}}
                    else
                        {if rand 0.35
                            {spawn "m_hand02" {impulse up 2 4 dir 2 5}}
                            else
                                {if rand 0.45
                                    {spawn "m_hand03" {impulse up 2 4 dir 2 8}}
                                    else
                                        {if rand 0.55
                                            {spawn "m_hand04" {impulse up 2 4 dir 2 5}}
                                            else
                                                {spawn "m_hand05" {impulse up 2 4 dir 2 5}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "m_hand01" {impulse up 3 5 dir 1 4}}
                    else
                        {if rand 0.35
                            {spawn "m_hand02" {impulse up 3 5 dir 1 4}}
                            else
                                {if rand 0.45
                                    {spawn "m_hand03" {impulse up 3 5 dir 1 8}}
                                    else
                                        {if rand 0.55
                                            {spawn "m_hand04" {impulse up 3 5 dir 1 7}}
                                            else
                                                {spawn "m_hand05" {impulse up 3 5 dir 1 4}}
                                        }
                                }
                        }
                }
                {if rand 0.25
                    {spawn "m_head01" {impulse up 3 5 dir 1 8}}
                    else
                        {if rand 0.3
                            {spawn "m_head02" {impulse up 3 5 dir 1 2}}
                            else
                                {if rand 0.5
                                    {spawn "m_head03" {impulse up 4 5 dir 1 2}}
                                    else
                                        {if rand 0.65
                                            {spawn "m_head04" {impulse up 3 5 dir 1 5}}
                                            else
                                                {spawn "m_head05" {impulse up 3 5 dir 1 2}}
                                        }
                                }
                        }
                }
                {if rand 0.4
                    {spawn "m_lowtor01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.5
                            {spawn "m_lowtor02" {impulse up 0 1 dir 0 1}}
                            else
                                {spawn "m_lowtor03" {impulse up 0 1 dir 0 1}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts01" {impulse up 1 2 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 2 3 dir 1 8}}
                            else
                                {spawn "m_sguts03" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 3 4 dir 2 8}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 1 3 dir 1 2}}
                            else
                                {spawn "m_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts01" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "m_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 1 2 dir 1 2}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 3 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 2 4 dir 1 8}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 1 7}}}
                {if rand 0.15 {spawn "m_guts02a" {impulse up 1 1 dir 2 3}}}
                {if rand 0.2 {spawn "m_guts02b" {impulse up 4 5 dir 2 4}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "m_guts03b" {impulse up 1 2 dir 1 2}}}
		{delay 0.075 {call "delete"}}							else
       {if rand 0.5
                  {if rand 0.15
                    {spawn "m_corp01" {impulse up 0 1 dir 0 1}}
                    else
                        {if rand 0.25
                            {spawn "m_corp02" {impulse up 0 1 dir 0 1}}
                            else
                                {if rand 0.35
                                    {spawn "m_corp03" {impulse up 0 1 dir 0 1}}
                                    else
                                        {if rand 0.5
                                            {spawn "m_xlcorp01" {impulse up 0 1 dir 0 1}}
                                            else
                                              {if rand 0.75
                                                {spawn "m_xlcorp02" {impulse up 0 1 dir 0 1}}
                                                else
                                                    {spawn "m_xlcorp03" {impulse up 0 1 dir 0 1}}
                                        }
                                }}
                        }
                }
                {if rand 0.33
                    {spawn "m_foot01" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_foot02" {impulse up 3 4 dir 1 2}}
                            else
                                {spawn "m_foot03" {impulse up 1 5 dir 5 8}}
                        }
                }
                {if rand 0.33
                    {spawn "m_foot01" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_foot02" {impulse up 2 7 dir 1 2}}
                            else
                                {spawn "m_foot03" {impulse up 1 5 dir 3 5}}
                        }
                }
                                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.2 {spawn "m_guts01b" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.1 {spawn "m_guts01" {impulse up 1 3 dir 2 3}}}
                                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                                {if rand 0.2 {spawn "m_guts01b" {impulse up 2 4 dir 1 8}}}
                                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 1 7}}}
                                {if rand 0.15 {spawn "m_guts02a" {impulse up 1 1 dir 2 3}}}
                                {if rand 0.2 {spawn "m_guts02b" {impulse up 4 5 dir 2 4}}}
                                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 1 8}}}
                                {if rand 0.15 {spawn "m_guts03a" {impulse up 1 3 dir 3 5}}}
                                {if rand 0.2 {spawn "m_guts03b" {impulse up 1 2 dir 1 2}}}
		                {delay 0.075 {call "delete"}}
	        else
		  {if rand 0.33
                    {spawn "m_full01"}
                    else
                        {if rand 0.5
                            {spawn "m_full02"}
                            else
                                {spawn "m_full03"}
                        }
                }
                 {if rand 0.33
                    {spawn "m_sguts01" {impulse up 1 2 dir 2 8}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 1 2 dir 1 2}}
                            else
                                {spawn "m_sguts03" {impulse up 1 3 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 3 4 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts02" {impulse up 3 4 dir 1 5}}
                            else
                                {spawn "m_sguts01" {impulse up 1 5 dir 3 5}}
                        }
                }
                {if rand 0.33
                    {spawn "m_sguts03" {impulse up 2 6 dir 2 3}}
                    else
                        {if rand 0.5
                            {spawn "m_sguts01" {impulse up 2 7 dir 1 8}}
                            else
                                {spawn "m_sguts02" {impulse up 1 5 dir 3 5}}
                        }
                }
		{if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 1 2 dir 1 2}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 2 4 dir 1 8}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 2 3}}}
                {if rand 0.15 {spawn "m_guts01a" {impulse up 3 4 dir 1 2}}}
                {if rand 0.2 {spawn "m_guts01b" {impulse up 1 3 dir 1 5}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 1 2 dir 1 8}}}
                {if rand 0.15 {spawn "m_guts02a" {impulse up 1 2 dir 2 3}}}
                {if rand 0.2 {spawn "m_guts02b" {impulse up 1 3 dir 2 8}}}
                {if rand 0.1 {spawn "m_guts01" {impulse up 2 3 dir 1 2}}}
                {if rand 0.15 {spawn "m_guts03a" {impulse up 1 3 dir 3 5}}}
                {if rand 0.2 {spawn "m_guts03b" {impulse up 1 2 dir 1 2}}}
                {delay 0.075 {call "delete"}}
							}}}
						}
					}
				}			
			}
			}
            }
            }
            }		
		}	
	}  

	{on "crush"
		{if personage
			{call "die"}
		else
                        ;("spawn_pieces" args "piece_crush")
			{call "explosion"}
		}
	}
	{on "delete"
		{if not dead
			{stat_notify die}
		}
		{delete}
	}
	{on "burn_volume"
		{if volume "body"
			{call "_burn"}
		}
	}
	{on "_burn"
		{if not burned
			{able "burning" 1}
			;{able select 0}
			(define "try_get_off"
				{delay %0 0.5
					{get_off}
				}
			)
			("try_get_off" args 1.0)
			("try_get_off" args 2.0)
			("try_get_off" args 3.0)
			("try_get_off" args 4.0)
			("try_get_off" args 5.0)
			{tex_morph "burned" 10}
			{call "add_burn_fx"}
			{view start "burn_fire"}
			{delay_effect 0.5 0.2 "burn_scream"}
			{delay 6 2 "burn_die"
				{able "burning" 0}
				{kill_flags reset}
				{kill_flags piercing}
				{if not dead
					{able personage 0}
					{call "die"}
				}
				{view stop "burn_fire"}
				{if terrain_fx "puddle"
					{call "stop_burn"}
				else
					{add_view "smoke_dead_small1" "burn_fire_b" 	"body"}
					{add_view "smoke_dead_small1" "burn_fire_hl"	"hand1l"}
					{add_view "smoke_dead_small1" "burn_fire_hr"	"hand1r"}
					{add_view "smoke_dead_small1" "burn_fire_fl"	"foot2l"}
					{add_view "smoke_dead_small1" "burn_fire_fr"	"foot2r"}
					{view start "burn_fire_b"}
					{view start "burn_fire_hl"}
					{view start "burn_fire_hr"}
					{view start "burn_fire_fl"}
					{view start "burn_fire_fr"}
					{delay 7.5 1.5	{view stop "burn_fire_b"}}
					{delay 3.5 2.0	{view stop "burn_fire_hl"}}
					{delay 3.8 1.5	{view stop "burn_fire_hr"}}
					{delay 4.3 1.5	{view stop "burn_fire_fl"}}
					{delay 4.5 1.5	{view stop "burn_fire_fr"}}
				}
			}
			{burn time 17} ; total burn time
		}
	}
	{on "add_burn_fx"
		{add_view "smoke_dead_small" "burn_fire"	"body"}
		{add_view "smoke_dead_small" "burn_fire"	"hand1l"}
		{add_view "smoke_dead_small" "burn_fire"	"hand1r"}
;		{add_view "smoke_dead_small" "burn_fire"	"hand2l"}
;		{add_view "smoke_dead_small" "burn_fire"	"hand2r"}
		{add_view "smoke_dead_small" "burn_fire"	"foot2l"}
		{add_view "smoke_dead_small" "burn_fire"	"foot2r"}
	}
	{on "burn_scream"
		{if not dead
			{if not senseless
				{if not "quench"
					{talk "death_cry"}
;					{start_sound "human/die"}
					{delay_effect 1.2 0.5 "burn_scream"}
				else
					{kill_delay "burn_die"}
					{view stop "burn_fire"}
					{set "quench" 0}
					{able "burning" 0}
				}
			}
		}
	}
	{on "smoke"
		{smoke}
	}
	{on "smoking"
;		{con "smoke start"}
		{view start "smoke"}
		{delay 0.3 0.1
			{view pause "smoke"}
;			{con "smoke end"}
		}
	}
	
	{on "jam_enable"
		{set "gun_jamming_enabled" 1} 
	}
	{on "gun_jam_mod_menu"
	{set "ingame_jam_modifiers" 1} 
	{set "winter_season" 0} 
	{if not "winter_season"
		{set "siberia_winter_season" 0}} 
		{set "winter_sound" 1} 
		{set "terrain_influence" 1} 
		{set "random_fix_timer" 0} 
		{set "hangfire" 1} 
		{set "cant_move" 1} 
		{set "jam_fix_animations" 1} 
		{if "winter_season" 
			{if rand 0.0065 
					{tags add "js"}
					{tags add "winterjam"} 
			}
		}
		{if "siberia_winter_season" 
			{if rand 0.0155 
					{tags add "js"}
					{tags add "winterjam"}
			}
		}
	} 
	{on "jam_modifiers_menu" 
		{if "ingame_jam_modifiers" 
			{if tagged "jamca" 
				{if tagged "js" 
					{if rand 0.7 
						{tags remove "js"}
						{tags remove "winterjam"}
						{delay 0.2
							{damage_report "body" "weapon_jam/empty"}
						}
					}
				}
			}
		} 
		{if "ingame_jam_modifiers" 
			{if tagged "jamre" 
				{if tagged "js" 
					{if rand 0.0055 
						{tags add "js"}
						{delay 0.2
							{damage_report "body" "weapon_jam/empty2"}
						}
					}
				}
			}
		} 
	}
	{on "terrain_influence_1"
		{if "terrain_influence"
			{if lying 
				{if terrain_fx "snow" 
					{if rand 0.0055 
						{tags add "js"}
						{start_sound "human/move/snow"} 
						{damage_report "body" "weapon_jam/snow_jammed"}
					}
				}
				{if terrain_fx "sand" 
					{if rand 0.0045 
						{tags add "js"} 
						{start_sound "human/move/sand"}
						{damage_report "body" "weapon_jam/sand_fell"}
					}
				}
				{if terrain_fx "shallow_water" 
					{if rand 0.0025 
						{tags add "js"} 
						{start_sound "human/move/swim"}
						{damage_report "body" "weapon_jam/water_fell"}
					}
				}
				{if terrain_fx "swamp" 
					{if rand 0.0045 
						{tags add "js"}
						{start_sound "human/move/swim"}
						{damage_report "body" "weapon_jam/water_drift_fell"}
					}
				}
				{if terrain_fx "mud" 
					{if rand 0.0045 
						{tags add "js"}
						{start_sound "human/move/snow"} 
						{damage_report "body" "weapon_jam/mud_fell"}
					}
				}
			}
		}
	}
	(define "tags_remove" 
		{if tagged %iftag
			{tags remove %tagrem}
		}
	)
	{on "link_weapon"
		{if stuff "pistol" 
			{tags add "pistolw"} 
			{tags add "jammable"}
			("tags_remove" iftag("pistolw") tagrem("smgw riflew sniperw shotgunw mgunw")) 
			{add_view "shell_smg" "shell" "fxshell"}
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
		else stuff "smg" 
			{tags add "smgw"} 
			{tags add "jammable"}
			("tags_remove" iftag("smgw") tagrem("pistolw mgunw riflew shotgunw sniperw")) 
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
			{add_view "shell_smg" "shell" "fxshell"}
		else stuff "rifle" 
			{tags add "riflew"} 
			{tags add "jammable"}  
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
			{add_view "shell_mgun" "shell" "fxshell"}
			("tags_remove" iftag("riflew") tagrem("pistolw mgunw smgw shotgunw sniperw")) 
		else stuff "ptr" 
			{tags add "ptrw"} 
			{add_view "shell_mgun" "shell" "fxshell"}
			("tags_remove" iftag("ptrw") tagrem("pistolw riflew jammable mgunw smgw shotgunw sniperw")) 
		else stuff "sniper" 
			{tags add "riflew"} 
			{tags add "jammable"}  
			{add_view "flash_gun_small" "flashbarrel" "foresight3"}
			{add_view "shell_mgun" "shell" "fxshell"}
			("tags_remove" iftag("riflew") tagrem("pistolw mgunw smgw shotgunw sniperw")) 
		else stuff "shotgun" 
			{tags add "shotgunw"} 
			{tags add "jammable"} 
			("tags_remove" iftag("shotgunw") tagrem("pistolw mgunw smgw riflew sniperw")) 
			{add_view "flash_shotgun" "flashbarrel" "foresight3"}
			{add_view "shell_shotgun" "shell" "fxshell"}
		else stuff "m12_shotgun"
			{tags add "shotgunw"} 
			{tags add "jammable"} 
			("tags_remove" iftag("shotgunw") tagrem("pistolw mgunw smgw riflew sniperw")) 
			{add_view "flash_shotgun" "flashbarrel" "foresight3"}
			{add_view "shell_shotgun" "shell" "fxshell"}
		else stuff "mgun"
			{tags add "mgunw"} 
			{tags add "jammable"} 
			("tags_remove" iftag("mgunw") tagrem("pistolw smgw riflew sniperw shotgunw")) 
			{add_view "flash_gun_big" "flashbarrel" "foresight3"}
			{add_view "shell_mgun" "shell" "fxshell"}
		else stuff "flame_thrower"
			{tags add "mgunw"} 
			("tags_remove" iftag("flamew") tagrem("mgunw pistolw smgw riflew sniperw shotgunw")) 
			{add_view "flamer_fire" "flame" "foresight3"}
			{add_view "flamer_fire_barrel" "fire" "foresight3"}
			{view show "fire"}
			{view start "fire"}
		else
			{view hide "flashbarrel"}
			{view pause "flashbarrel"}
			{view pause "flame"}
		}
	}
	{on "pistoljam"
		{if "gun_jamming_enabled" 
			{if bone "foresight3" 
				{if rand 0.0007 
					{tags add "js"} 
				}
			}
		}
	}
	{on "smgjam" 
		{if "gun_jamming_enabled" 
			{if bone "foresight3" 
				{if rand 0.0007 
					{tags add "js"} 
				}
			}
		}
	}
	{on "riflejam" 
		{if "gun_jamming_enabled" 
			{if bone "foresight3" 
				{if rand 0.0009 
					{tags add "js"} 
				}
			}
		}
	}
	{on "sniperjam" 
		{if "gun_jamming_enabled" 
			{if bone "foresight3" 
				{if rand 0.0009 
					{tags add "js"} 
				}
			}
		}
	}
	{on "shotgunjam"
		{if "gun_jamming_enabled"
			{if bone "foresight3"
				{if rand 0.001 
					{tags add "js"}
				}
			}
		}
	}
	{on "mgunjam"
		{if "gun_jamming_enabled" 
			{if bone "foresight3" 
				{if rand 0.001 
					{tags add "js"}
				}
			}
		}
	}
	{on "manual_fix_timer" 
		{if not "random_fix_timer" 
			{delay 15 
				{tags add "fixed"}
				{call "jam_fix"}
			}
		}
	}
	{on "jam_fix" 
		{if tagged "fixed"
			{if tagged "jam"
				{tags remove "jam"}
				{tags remove "fixed"}
				{call "spawn_shell"}
				{start_sound "weapon/reload"}
				{weapon_work "hand_right" 1}
				{if "cant_move"
					{chassis_work 1}
				} 
				{if not dead 
					{if able "select" 
						{if not senseless 
							{damage_report "body" "weapon_jam/jam fixed"}
						}
					}
				} 
				{talk "jubilation"} 
				{ani_stop "squat_reload_piat"}
				{ani_stop "lie_reload_piat"} 
				{if "cant_move"
					{chassis_work 1}
				}
				{if not dead 
					{if able "select" 
						{if not senseless 
							{if "ingame_jam_modifiers"
								{if rand 0.1 
									{attack_save}
									{damage_report "body" "weapon_jam/gun_fixed"}
									{tags add "jamca"} 
								else rand 0.1 
									{attack_load}
									{damage_report "body" "weapon_jam/gun_damaged"}
									{tags add "jamre"}
								else rand 0.05
									{attack_save}
									{damage_report "body" "weapon_jam/gun_repaired"}
									{tags add "jamfi"} 
								}
							}
						}
					}
				}
			}
		}
	} 
	{on "hangfire" 
		{tags add "hangfire"}
		{if rand 0.5 
			{weapon_work "hand_right" 0}
		}
		{if not tagged "jamre"
			{damage_report "body" "weapon_jam/hangfire"}
		}
		{if tagged "jamre"
			{damage_report "body" "weapon_jam/hangfire_damaged"}
		}
		{start_sound "gui/misc_gui_select"}
		{call "hangfire_chance"}
	}
	{on "hangfire_pt2"
		{if rand 0.2 
			("health_damage" c(50)) 
		} 
		{delay 0.3 
			{talk "injuring"}
		}
		{if tagged "hfixed"
			{tags remove "hangfire"}
			{tags remove "hfixed"}
			{weapon_work "hand_right" 1}
			{call "hand_right"} 
		}
	}
	{on "hangfire_chance"
		{if rand 0.1 
			{delay 0.2 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.3 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.4 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.1 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.2 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.3 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.5 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else rand 0.1
			{delay 0.3 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		else 
			{delay 0.4 
				{tags add "hfixed"}
				{call "hangfire_pt2"}
			}
		}
	}
	{on fire "hand_right"
		{if tagged "jam" 
			{start_sound "gui/misc_gui_select"}
		} 
		{if tagged "jammable"
			{call "jam_enable"} 
			{if "gun_jamming_enabled" 
				{call "gun_jam_mod_menu"}
				{if tagged "smgw" 
					{call "smgjam"}
				else tagged "riflew" 
					{call "riflejam"}
				else tagged "pistolw" 
					{call "pistoljam"}
				else tagged "mgunw" 
					{call "mgunjam"}
				else tagged "shotgunw" 
					{call "shotgunjam"}
				}
				{call "terrain_influence_1"}
				{call "jam_modifiers_menu"} 
				{if "hangfire"
					{if not tagged "jamre"
						{if rand 0.0002 
							{call"hangfire"}
						}
					} 
					{if tagged "jamre"
						{if rand 0.0021 
							{call"hangfire"}
						}
					} 
				}
			}
			{if not tagged "hangfire"
				{if not tagged "jamfi" 
					{if not tagged "fixed" 
						{if tagged "js" 
							{tags remove "js"} 
							{weapon_work "hand_right" 0} 
							{if "cant_move"
								{chassis_work 0}
							}
							{tags add "jam"} 
							{delay 0.3 
								{if able "select" 
									{if rand 0.5 
										{start_sound "gui/misc_gui_select"}
									}
								}
							} 
							{delay 0.6 
								{if able "select" 
									{if rand 0.5 
										{start_sound "gui/misc_gui_select"}
									}
								}
							} 
							{delay 0.8 
								{if able "select" 
									{if rand 0.5 
										{start_sound "gui/misc_gui_select"}
									}
								}
							} 
							{delay 1.4 
								{if able "select" 
									{if rand 0.5 
										{start_sound "gui/misc_gui_select"}
									}
								}
							}
							{delay 1.6 
								{damage_report "body" "weapon_jam/jammed"}
								{delay 5 1
									{if tagged "jamca" 
										{if rand 0.1 
											{damage_report "body" "weapon_jam/still_jammed"}
										}
										{tags remove "jamca"}
									}
									{if tagged "jamre" 
										{if rand 0.1 
											{damage_report "body" "weapon_jam/jammed_again"}
										}
										{tags remove "jamre"}
									}
								}
							}
							{delay 2.0 
								{talk "injuring"}
							} 
							{delay 2.1 
								{if able "select" 
									{if rand 0.8 
										{start_sound "gui/misc_gui_select"}
									}	
								}
							}
							{delay 2.2 
								{if able "select" 
									{if rand 0.7
										{start_sound "gui/misc_gui_select"}
									}
								}
							}
							{delay 2.3
								{if able "select"
									{if rand 0.6
										{start_sound "gui/misc_gui_select"}
									}
								}
							}
							{delay 2.4
								{if able "select"
									{if rand 1.0
										{if tagged "winterjam"
											{damage_report "body" "weapon_jam/by_winter"}
											{talk "injuring"}
											{if "winter_sound"
												{start_sound "world/winter/04"}
												{tags remove "winterjam"}
											}
										}
									}
								}
							}
							{delay 3.4
								{if able "select"
									{if rand 0.5
										{start_sound "gui/misc_gui_select"}
										{delay 3.5
											{talk "things_look_blue"}
										}
									}
								}
							}
							{delay 3.5
								{if "jam_fix_animations"
									{if able "select"
										{tags add "jam"}
										{if rand 0.7
											{ani_play "squat_reload_piat" 1.0 loop}
										else 
											{ani_play "lie_reload_piat" 1.0 loop}
										}
									}
								}
							} 
							{delay 3.6 
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 3.51 
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01 
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								} 
							}
							{delay 3.61
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 3.7 
								{if able "select" 
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 3.71
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 3.8 
								{if able "select" 
									{if rand 0.3 
										{if tagged "jam" 
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 3.81
								{if tagged "jam" 
									{if not able "select" 
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01 
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 4.4 
								{if able "select" 
									{if rand 0.3 
										{if tagged "jam" 
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 4.41
								{if tagged "jam" 
									{if not able "select" 
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01 
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 5.3 
								{if able "select" 
									{if rand 0.3 
										{if tagged "jam" 
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 5.31
								{if tagged "jam" 
									{if not able "select" 
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 6.6
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 6.61
								{if tagged "jam" 
									{if not able "select" 
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 7.8
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 7.81
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 8.4 	
								{if able "select" 
									{if rand 0.3 
										{if tagged "jam" 
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 8.41
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 9.3 
								{if able "select" 
									{if rand 0.3 
										{if tagged "jam" 
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 9.31
								{if tagged "jam" 
									{if not able "select"
											{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
													{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 10.6
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 10.61
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 11.8
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 11.81
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 12.4
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 12.41
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 13.4
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 13.41
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 14.4
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 14.41
								{if tagged "jam" 
									{if not able "select" 
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01 
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{delay 15.4
								{if able "select"
									{if rand 0.3
										{if tagged "jam"
											{start_sound "weapon/reload"}
										}
									}
								}
							}
							{delay 15.41
								{if tagged "jam"
									{if not able "select"
										{tags remove "jam"}
										{throw_on_ground}
										{delay 0.01
											{ani_stop "squat_reload_piat"}
											{delay 0.012
												{ani_stop "lie_reload_piat"}
											}
										}
									}
								}
							} 
							{if "random_fix_timer" 
								{if rand 0.1 
									{delay 15
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.2
									{delay 6
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.3
									{delay 7
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.4
									{delay 8
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.5
									{delay 9
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.6
									{delay 10
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.3
									{delay 3.7
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else rand 0.2
									{delay 4
										{tags add "fixed"}
										{call "jam_fix"}
									}
								else 
									{delay 15
										{tags add "fixed"}
										{call "jam_fix"}
									}
								}
							else
								{call "manual_fix_timer"}
							}
						}
					}
				}
			}
		}	;} 
				{view show "flashbarrel"}
		{view start "flashbarrel"}
		{view start "shell"} 
		{view start "flame"}
		{kill_delay "fire"}
		{delay 0.1 "shell" 
			{view pause "shell"}
		} 
		{delay 0.1 "fire"
			{view hide "flashbarrel"}
			{view pause "flashbarrel"}
		}
		{if tagged "burstone"
			{delay 0.1 "fire"
				{view pause "flame"}
			}
		else
			{delay 0.5 "fire"
				{view pause "flame"}
			}
		}
		{spawn "bazooka_shot" "fxshot" x}
		{if tagged "burstone"
			{weapon_work "hand_right" 0}
			{delay 0.25
				{weapon_work "hand_right" 1}
			}
		}
		{if not tagged "ptrw"
			{if bone "foresight3"
				{if not tagged "jam"
					{if tagged "smgw"
						{call "spawn_shell"}
					} 
					{if tagged "mgunw"
						{call "spawn_shell"}
					} 
					{if tagged "riflew"
						{call "spawn_shell"}
					} 
					{if tagged "pistolw"
						{call "spawn_shell"}
					}
					{if tagged "sniperw"
						{call "spawn_shell"}
					}
					{if tagged "shotgunw"
						{call "spawn_shell"}
					}
				}
			}
		}
	}
	
	(define "terrain_fx_human"
		{on terrain_fx %0 enter
			{if not swimming
				{view start "on_%1"}
				{view start "on_%1_time_short"}
				{delay 0.1
					{view pause "on_%1_time_short"}
				}
			}
		}
		{on terrain_fx %0 leave
			{view pause "on_%1"}
		}
	)
	("terrain_fx_human" args "water" 			water)
	("terrain_fx_human" args "puddle"			puddle)
	("terrain_fx_human" args "shallow_water"	puddle)
	("terrain_fx_human" args "mud" 				mud)

	{on terrain_pp "swamp" enter
		{delay 0							; without delay will crash in Die()
			{call "die_without_blood"}
			{view start "die_in_swamp"}
			{delay 10
				{view stop "die_in_swamp"}
				{delete}
			}
		}
	}

	{on "diving"
		{delay 0.3
			{spawn "spherewater_big"}
		}
	}
	{on swim on
		{view pause "on_water"}
		{view start "swim"}
		{call "stop_burn"}
		{kill_delay "after_swim"}
	}
	{on swim off
		{delay 1.5 "after_swim"
			{view pause "swim"}
		}
	}
	{on move on
		{if swimming
			{view start "swim_move"}
		}
	}
	{on "stop_move_sounds"
		{stop_sound "move_road"}
		{stop_sound "move_ground"}
		{stop_sound "move_snow"}
		{stop_sound "move_sand"}
		{stop_sound "move_grass"}
		{stop_sound "swim"}
	}
	{on movement_mode_changed
		{call "stop_move_sounds"}
		{if name "fast"
			{if swimming
				{play_sound "swim" 1}
			else not lying
				{if terrain_fx "road"
					{play_sound "move_road" 1}
				else terrain_fx "country_road"
					{play_sound "move_road" 1}
				else terrain_fx "ice"
					{play_sound "move_snow" 1}
				else terrain_fx "snow"
					{play_sound "move_snow" 1}
				else terrain_fx "sand"
					{play_sound "move_sand" 1}
				else terrain_fx "grass"
					{play_sound "move_grass" 1}
				else
					{play_sound "move_ground" 1}
				}
			}
		}
	}
	{on move off
		{view pause "swim_move"}
		{call "stop_move_sounds"}
	}
	{on "stop_burn"
		{if burned
			{burn stop_retry}
			{set "quench" 1}
		}
	}
	{on "falldown"
		{if altitude 3
			{throw_off up 1 forward 0.01 die force}
		else altitude 1
			{throw_off up 1 forward 0.01 force}
		else       
			{throw_on_ground}
		}
	}
	{on board in
		{view pause "swim"}
		{if effector "np_zis5 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis42 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "bedford car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "bedford_inf car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "bedford_art car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "botond car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "botond2 car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "chevrolet car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "chevrolet_art car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "chevrolet_eng car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiataa35 car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat35 car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat35_art car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat35_eng car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat35_inf car"
		        	{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "dodgewc56 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_kubel car"
			{if name "driver" "commander" "passenger1" "passenger2"
				{play_sound "door_open"}
			}
		else effector "np_kubel_mg car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "horch car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw353 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw353_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw353_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw353_fuel car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_f car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_39 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_39_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_39_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_39_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_39_f car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_halftrack car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedes_hun car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedes_hun_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedes_hun_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_rom car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_rom_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_rom_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_rom_tr car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_mercedesl3000 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_mercedesl3000_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_matador_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_matador car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_studebakerus6 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_studebakerus6_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_bm13 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_bm13n car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_bm31 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "bm8-48 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_su12 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_olymp car"
			{if name "driver" "commander" "passenger1" "passenger2"
				{play_sound "door_open"}
			}
		else effector "np_gaz_m1 car"
			{if name "driver" "commander" "passenger1" "passenger2"
				{play_sound "door_open"}
			}
		else effector "np_gaz61 car"
			{if name "driver" "commander" "passenger1" "passenger2"
				{play_sound "door_open"}
			}
		else effector "gazaaa4m car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "gaz-mm car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "gaz-mm_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "gaz-mm_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "gaz-mm_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_volvo car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_volvo_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_volvo_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_volvo_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type94 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type95 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type94art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type94eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type94aa car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_voroshilovets car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_voroshilovets_52k car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_yag10 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_29k car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_33 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_33_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_en car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_fuel car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "pf621 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "pf621_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "pf621_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "pf621_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "pf621_aa car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_aa car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_t car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "wz34halftrack car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "isuzutx40 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "isuzutx40_fuel car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "isuzutx40_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "isuzutx40art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
				else effector "ba-6"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "csaba39m"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "csaba40m"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat611"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m2"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m2_2"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m4"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_m5"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_m15a1"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_t15"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_t19"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_t48"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_t48_en"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_t48_us"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m3a1scout"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m3a1scout_chn"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m3a1scout_eng"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m3a1scout_us"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_m17"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "m16"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "na-to"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_ba20"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_ba20_fin"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz231"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz234"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz234_1"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz234_3"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz234_4"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz251_9"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz251_1"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz251_10"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz251_11"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz250_9"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz250_1"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz250_7"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz250_10"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_sdkfz250_11"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "panhard"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "panhard_rom"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "staghound_e1"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "staghound"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "type87"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "wz29"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "wz34"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "wz34puteaux"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat618 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat618_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat618_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat618_inf car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "somua_mcg car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "isuzutx40_bomb"
	     		 {if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_opel_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis5_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "bedford_bomb"
        			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedes_hun_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_rom_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat35_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "3ro"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_type95_com"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "gaz_a"
			{if name "driver" "commander" "passenger1" "passenger2"
				{play_sound "door_open"}
			}
		else effector "fiat626"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat626_art"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat626_eng"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "fiat626_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_bul car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_bul_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_bul_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "mercedesl3k_bul_tr car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis151_nkr"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis151_bomb"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis151_art"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_zis151_en"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "np_bm13nn"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_fr"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_fr_ai"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_fr_2"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "cckw352_fr_art"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "renault_eng44 car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "studebakerus6_pol car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "studebakerus6_pol_art car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		else effector "studebakerus6_pol_eng car"
			{if name "driver" "commander"
				{play_sound "door_open"}
			}
		}
	}
	{on board out
		{tags remove "paradrop_usa"}
		{tags remove "paradrop_ger"}
		{tags remove "paradrop_rus"}
		{tags remove "paradrop_eng"}
		{tags remove "paradrop_jap"}
		{tags remove "paradrop_fin"}
		{tags remove "paradrop_hun"}
		{tags remove "paradrop_ita"}
		{if effector "mtb_d3"
			{if name "emit1" "emit2" "emit3" "emit4"
				{delay 0.7
					{spawn "spherewater_big"}
				}
			}
		else effector "np_zis5 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis42 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "bedford"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "bedford_inf car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "bedford_art car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "botond car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "botond2 car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "chevrolet car"
		       	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "chevrolet_art car"
		       	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "chevrolet_eng car"
		       	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiataa35 car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat35 car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat35_art car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat35_eng car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat35_inf car"
		        	{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "dodgewc56 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_kubel car"
			{if name  "emit1" "emit2" "emit3" "emit4"
				{play_sound "door_close"}
			}
		else effector "np_kubel_mg car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "horch car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw353 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw353_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw353_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw353_fuel car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_f car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_39 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_39_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_39_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_39_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_39_f car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_halftrack car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedes_hun car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedes_hun_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedes_hun_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_rom car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_rom_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_rom_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_rom_tr car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_mercedesl3000 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_mercedesl3000_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_matador_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_matador car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_studebakerus6 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_studebakerus6_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_bm13 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_bm13n car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_bm31 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "bm8-48 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_su12 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_olymp car"
			{if name  "emit1" "emit2" "emit3" "emit4"
				{play_sound "door_close"}
			}
		else effector "np_gaz_m1 car"
			{if name  "emit1" "emit2" "emit3" "emit4"
				{play_sound "door_close"}
			}
		else effector "np_gaz61 car"
			{if name  "emit1" "emit2" "emit3" "emit4"
				{play_sound "door_close"}
			}
		else effector "gazaaa4m car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "gaz-mm car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "gaz-mm_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "gaz-mm_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "gaz-mm_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_volvo car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_volvo_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_volvo_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_volvo_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type94 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type95 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type94art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type94eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type94aa car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_voroshilovets car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_voroshilovets_52k car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_yag10 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_29k car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_33 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_33_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_en car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_fuel car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "pf621 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "pf621_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "pf621_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "pf621_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "pf621_aa car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_aa car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_t car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "wz34halftrack car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "isuzutx40 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "isuzutx40_fuel car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "isuzutx40_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "isuzutx40art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "ba-6"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "csaba39m"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "csaba40m"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat611"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m2"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m2_2"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m4"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_m5"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_m15a1"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_t15"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_t19"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_t48"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_t48_en"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_t48_us"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m3a1scout"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m3a1scout_chn"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m3a1scout_eng"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m3a1scout_us"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_m17"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "m16"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "na-to"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_ba20"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_ba20_fin"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_sdkfz231"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz234"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz234_1"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz234_3"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz234_4"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz251_9"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz251_1"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz251_10"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz251_11"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz250_9"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz250_1"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz250_7"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz250_10"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "np_sdkfz250_11"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "panhard"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "panhard_rom"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "staghound_e1"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "staghound"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "type87"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "wz29"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "wz34"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "wz34puteaux"
		   {if name  "emit1" "emit2"
			    {play_sound "door_close"}
		   }
		else effector "fiat618 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat618_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat618_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat618_inf car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "somua_mcg car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "isuzutx40_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_opel_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis5_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "bedford_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedes_hun_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_rom_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat35_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "3ro car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_type95_com"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "gaz_a"
			{if name  "emit1" "emit2" "emit3" "emit4"
				{play_sound "door_close"}
			}
		else effector "fiat626"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat626_art"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat626_eng"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "fiat626_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_bul car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_bul_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_bul_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "mercedesl3k_bul_tr car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis151_nkr"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis151_bomb"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis151_art"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_zis151_en"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "np_bm13nn"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_fr"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_fr_ai"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_fr_2"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "cckw352_fr_art"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "renault_eng44 car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "studebakerus6_pol car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "studebakerus6_pol_art car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}
		else effector "studebakerus6_pol_eng car"
			{if name  "emit1" "emit2"
				{play_sound "door_close"}
			}	
		else effector "li2 airborne"
			{tags add "paradrop_rus"}
		else effector "tb-3 airborne"
			{tags add "paradrop_rus"}
		else effector "c-47 airborne"
			{tags add "paradrop_usa"}
		else effector "c-47e airborne"
			{tags add "paradrop_eng"}
		else effector "ju-52g airborne"
			{tags add "paradrop_ger"}
		else effector "ju-52i airborne"
			{tags add "paradrop_ita"}	
		else effector "ju-52f airborne"
			{tags add "paradrop_fin"}
		else effector "ca101 airborne"
			{tags add "paradrop_hun"}
		else effector "l2d3 airborne"
			{tags add "paradrop_jap"}
		else effector "fw190f8"
			 {tags add "parapilot_ger"}
		else effector "fw190f8_hun"
			{tags add "parapilot_hun"}
		else effector "i-16"
			{tags add "parapilot_chn"} 
		else effector "i-16_ru"
			{tags add "parapilot_rus"} 
		else effector "mk3mustang" 
			{tags add "parapilot_eng"}
		else effector "a6m5"
			{tags add "parapilot_jap"}
		else effector "la5fn"
			{tags add "parapilot_rus"}
		else effector "bf109"
			 {tags add "parapilot_ger"} 
		else effector "p51mustang"
			 {tags add "parapilot_usa"} 
		else effector "bf109g_fin"
			 {tags add "parapilot_fin"} 
		else effector "mc_205"
			 {tags add "parapilot_ita"} 
		else effector "bf109g_rom"
			 {tags add "parapilot_rom"} 
		else effector "spitfiremk1a"
			 {tags add "parapilot_eng"} 
		else effector "spitfiremk1a_fra"
			 {tags add "parapilot_fra"} 
		else effector "pzlp11"
			 {tags add "parapilot_pol"} 
		else effector "pzlp11_grc"
			 {tags add "parapilot_grc"} 
		else effector "potez633"
			 {tags add "parapilot_fra"} 
		else effector "potez633_grc"
			{tags add "parapilot_grc"}
		else effector "pzlp23"
			 {tags add "parapilot_pol"} 
		else effector "pzlp23_rom"
			{tags add "parapilot_rom"} 
		else effector "j2m_rs"
			{tags add "parapilot_jap"}
		else effector "p-39_ru"
			{tags add "parapilot_rus"}
		else effector "p-39"
			{tags add "parapilot_usa"} 
		else effector "p-39_fr"
			{tags add "parapilot_fra"}
		else effector "ca101_b"
			{tags add "parapilot_hun"}
		else effector "db-3"
			{tags add "parapilot_rus"}
		else effector "db-3_torpedo"
			{tags add "parapilot_rus"}
		else effector "fw190f8_torpedo"
			{tags add "parapilot_ger"}
		else effector "a6m5_torpedo"
			{tags add "parapilot_jap"}
		else effector "p-40"
			{tags add "parapilot_usa"} 
		else effector "p-40_fr"
			{tags add "parapilot_fra"} 
		else effector "b5n2_torpedo"
			{tags add "parapilot_jap"}
		else effector "beaufighter"
			{tags add "parapilot_eng"}
		else effector "beaufighter_torpedo"
			{tags add "parapilot_eng"}
		else effector "hs129"
			{tags add "parapilot_ger"}
		else effector "hs129_75"
			{tags add "parapilot_ger"}
		else effector "ju87g2"
			{tags add "parapilot_ger"}
		else effector "ki45"
			{tags add "parapilot_jap"}
		else effector "hurricane23"
			{tags add "parapilot_eng"}
		else effector "b25"
			{tags add "parapilot_usa"} 
		else effector "b25_torpedo"
			{tags add "parapilot_usa"} 
		else effector "b25_eng"
			{tags add "parapilot_eng"}
		else effector "b25_eng_torpedo"
			{tags add "parapilot_eng"}
		else effector "sm79"
			{tags add "parapilot_ita"} 
		else effector "sm79_torpedo"
			{tags add "parapilot_ita"} 
		else effector "cr42"
			{tags add "parapilot_chn"}
		else effector "pe2"
			{tags add "parapilot_rus"}
		else effector "yak3"
			{tags add "parapilot_rus"}
		else effector "bf110"
			{tags add "parapilot_ger"}
		else effector "he111"
			{tags add "parapilot_ger"}
		else effector "f4f"
			{tags add "parapilot_usa"} 
		else effector "il-2_nkr"
			{tags add "parapilot_rus"}
		else effector "bf109g_bul"
			 {tags add "parapilot_bul"} 
		else effector "ju-87_bul"
			 {tags add "parapilot_bul"}
		else effector "ju-52b airborne"
			{tags add "paradrop_bul"} 
		else effector "il-2_pol"
			 {tags add "parapilot_pol"}
		else effector "la5fn_pol"
			 {tags add "parapilot_pol"}
		else effector "fokker_fin"
			 {tags add "parapilot_fin"}
		else effector "po2_fin"
			 {tags add "parapilot_fin"}
		}
		(define "paradrop_crew_member_with_alt_" 			     
			{if linked "null"	                                                         				
				{delay  0.1 ("paradrop_crew_member_with_alt" args %0)}			     
			else linked  "airborne" 				
				{delay 2.0 ("paradrop_crew_member_with_alt" args %0)}	
			else linked "null2"				
				{delay 0.5 ("paradrop_crew_member_with_alt" args %0)}			     
			else linked "null3"				
				{delay 0.5 ("paradrop_crew_member_with_alt" args %0)}			     
			else linked "null4"				
				{if name "emit0"					
					{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}				
				else name "emit1"					
					{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}				
				else name "emit2" "emit3"					
					{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}				
				}			     
			else linked "null5"
				{if name "emit1" "emit2"					
					{delay  2.0 ("paradrop_crew_member_with_alt" args %0)}				
				else name  "emit3" "emit4" "emit5" "emit6" "emit7" "emit8"					
					{delay  2.0 ("paradrop_crew_member_with_alt" args %0)}				
				}			     
			else linked "null6"				
				{if name "emit1" "emit2"					
					{delay  2.8 ("paradrop_crew_member_with_alt" args %0)}				
				else name  "emit3" "emit4"					
					{delay  1.2 ("paradrop_crew_member_with_alt" args %0)}				
				}			     
			}			
		)			
		(define "paradrop_crew_member_with_alt"	                                                                				
			{if rand 0.5 					
				{if rand 0.5 						
					{if rand 0.5 
						("paradrop_crew_member_with_alt_r" args %0 0)						
					else ("paradrop_crew_member_with_alt_r" args %0 1)						
					}					
				else						
					{if rand 0.5 
						("paradrop_crew_member_with_alt_r" args %0 2)						
					else ("paradrop_crew_member_with_alt_r" args %0 3)						
					}					
				}				
			else					
				{if rand 0.5 						
					{if rand 0.5 
						("paradrop_crew_member_with_alt_r" args %0 4)						
					else 
						("paradrop_crew_member_with_alt_r" args %0 5)						
					}					
				else						
					{if rand 0.5 
						("paradrop_crew_member_with_alt_r" args %0 6)						
					else 
						("paradrop_crew_member_with_alt_r" args %0 7)						
					}					
				}				
			}			
		)			
		(define "paradrop_crew_member_with_alt_r" 			
			{if not altitude 2				
				{If tagged "paradrop_rus"
					{spawn "parachute2_rus" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_ger"
					{spawn "parachute2_ger" "basis" x no_position
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_eng"
					{spawn "parachute2_eng" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_usa"
					{spawn "parachute2_usa" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_jap"
					{spawn "parachute2_jap" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_hun"
					{spawn "parachute2_hun" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "paradrop_fin"
					{spawn "parachute2_fin" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "paradrop_ita"
					{spawn "parachute2_ita" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "paradrop_bul"
					{spawn "parachute2_bul" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "parapilot_rus"
					{spawn "parachute_rus" "basis" x no_position
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_ger"
					{spawn "parachute_ger" "basis" x no_position
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_eng"
					{spawn "parachute_eng" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_usa"
					{spawn "parachute_usa" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_jap"
					{spawn "parachute_jap" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_hun"
					{spawn "parachute_hun" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_fin"
					{spawn "parachute_fin" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "parapilot_ita"
					{spawn "parachute_ita" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "parapilot_chn"
					{spawn "parachute_hun" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_fra"
					{spawn "parachute_fin" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "parapilot_rom"
					{spawn "parachute_ita" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}	
					}
				else tagged "parapilot_pol"
					{spawn "parachute_pol" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_grc"
					{spawn "parachute_grc" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_bul"
					{spawn "parachute_bul" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				else tagged "parapilot_nkr"
					{spawn "parachute_nkr" "basis" x no_position					
						{tags add "heli_parashute%1"} 					
						{call "start_alt_%0"}
					}
				}
			}
		)			
		{if linked "airborne"
			
			{tags remove "heli_paradrop1"}
			{tags remove "heli_paradrop2"}
			{tags remove "heli_paradrop3"}
			{tags remove "heli_paradrop4"}
			{tags remove "heli_paradrop5"}
			{tags remove "heli_paradrop6"} 
			{tags remove "heli_paradrop7"}
			{bone hide "basis"}
			{bone hide "gun_back"}
			
			{if altitude 80					
				{tags add "heli_paradrop7"} 
				("paradrop_crew_member_with_alt_" args 7)
			else altitude 70					
				{tags add "heli_paradrop7"} 
				("paradrop_crew_member_with_alt_" args 7)	
			else altitude 60					
				{tags add "heli_paradrop7"} 
				("paradrop_crew_member_with_alt_" args 7)	
			else altitude 50					
				{tags add "heli_paradrop7"} 
				("paradrop_crew_member_with_alt_" args 7)	
			else altitude 40
				{tags add "heli_paradrop7"} 
				("paradrop_crew_member_with_alt_" args 7)
			else altitude 35					
				{tags add "heli_paradrop6"} 
				("paradrop_crew_member_with_alt_" args 6)
			else altitude 30					
				{tags add "heli_paradrop5"} 
				("paradrop_crew_member_with_alt_" args 5)
			else altitude 25
				{tags add "heli_paradrop4"} 					
				("paradrop_crew_member_with_alt_" args 4)				      
			else altitude 20
				{tags add "heli_paradrop3"} 				
				("paradrop_crew_member_with_alt_" args 3)				      
			else altitude 12
				{tags add "heli_paradrop2"}						
				("paradrop_crew_member_with_alt_" args 2)				      
			else altitude 8
				{tags add "heli_paradrop1"}					
				("paradrop_crew_member_with_alt_" args 1)				      
			else altitude 3
				{if linked "null"						
					{delay 2.0 
						{throw_off up 1 forward 2}
					}					     
				else linked "null1"						
					{delay 2.5 
						{throw_off up 1 forward 2}
					}					     
				else linked "null2"						
					{delay 2.5 
						{throw_off up 1 forward 2}
					}					     
				else linked "null3"						
					{delay 2.5 
						{throw_off up 1 forward 2}
					}					     
				else linked "null4"						
					{if name "emit1" "emit2"							
						{delay  2.0 
							{throw_off up 1 forward 2}
						}						
					else name "emit3" "emit4"							
						{delay  1.0 
							{throw_off up 1 forward 2}
						}						
					}						 
				else linked "null5"						
					{delay 3.0 
						{if linked "airborne" 
							{throw_off up 1 forward 2}
						}
					}						 
				else linked "null6"						
					{delay 3.0 
						{if linked "airborne"
							{throw_off up 1 forward 2}
						}
					}					     
				else 
					{delay  1.5 
						{throw_off up 1 forward 2}
					}					     
				}				      
			else				      
			}
			{If tagged "heli_paradrop7"
				{able select 0}
				{delay 13
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop6"
				{able select 0}
				{delay 12
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop5"
				{able select 0}
				{delay 11
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop4"
				{able select 0}
				{delay 10
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop3"
				{able select 0}
				{delay 9
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop2"
				{able select 0}
				{delay 8
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else tagged "heli_paradrop1"
				{able select 0}
				{delay 7
					{bone show "gun_back"}
					{bone show "basis"}
					{able select 1}
				}
			else
				{able select 0}
				{bone show "gun_back"}
				{bone show "basis"}
				{able select 1}
			}
		}
	}
	{on "start_healing"
		{view start "marker_healing"}
	}
	{on "stop_healing"
		{view pause "marker_healing"}
	}
	{on "start_repair"
		{view start "marker_repair"}
	}
	{on "stop_repair"
		{view pause "marker_repair"}
	}
	{on "start_ammo_out"
		{view start "marker_ammo_out"}
	}
	{on "stop_ammo_out"
		{view pause "marker_ammo_out"}
	}
	{on "start_ammo_refill"
		{view start "marker_ammo_refill"}
		{delay 2.5
			{view pause "marker_ammo_refill"}
		}
	}
	{on "start_personage"
		{view pause "marker_personage_acute"}
		{view start "marker_personage"}
	}
	{on "stop_personage"
		{view pause "marker_personage"}
		{view pause "marker_personage_acute"}
	}
	{on "start_personage_acute"
		{view pause "marker_personage"}
		{view start "marker_personage_acute"}
	}
	{on "start_veterancy"
		{view start "marker_veterancy"}
		{delay 3.5
			{view pause "marker_veterancy"}
		}
	}
	{on "stop_veterancy"
		{view pause "marker_veterancy"}
	}
	{on "capture"
		{tags add "capturer"}
	}
	{on "toot"
		{view start "marker_ahead"}
	        {link_sound "whistle"		"world/whistle"}
	        {play_sound "whistle"}
        	}
	{on "hiss"
	        {link_sound "radio"		"world/radio/radio"}
	        {play_sound "radio"}
        	}
	{on "morse_code"
	        {link_sound "morse"		"world/radio/morse_code"}
	        {play_sound "morse"}
        	}
	{on "ura"
		{link_sound "hooray"		"world/screams/russian_hurrai"}
	        	{play_sound "hooray"}
	}
	{on "rf"
		{link_sound "anthem_rus"		"world/rus_anthem"}
	        	{play_sound "anthem_rus"}
	}
	{on "banzai"
		{link_sound "banzai"		"world/screams/jap_banzai"}
	        	{play_sound "banzai"}
	}
	{on "panzerwaffe"
		{link_sound "panzerlied"		"world/panzerlied"}
	        	{play_sound "panzerlied"}
	}
	{on "tankman_rus"
		{link_sound "tankmanrus"		"world/tankman_rus"}
	        	{play_sound "tankmanrus"}
	}
	{on "anthem_fra"
		{link_sound "anthem_fra"		"world/anthem_fra"}
	        	{play_sound "anthem_fra"}
	}
	{on "usa_song"
		{link_sound "usa_song"		"world/usa_song"}
	        	{play_sound "usa_song"}
	}
	{on "burst_one"
		{If not tagged "burstone"
			{delay 1
				{tags add "burstone"} 
			}
		else
			{delay 1
				{tags remove "burstone"} 
			}
		}
	}
}