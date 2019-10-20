	{on spawn
		{link_sound "flame"			"fire/big"}
		{link_sound "move"			"vehicle/tracks/trackclank"}
		{link_sound "heavy_move"	"vehicle/tracks/heavy"}
		{link_sound "gunner_hatch"		"vehicle/hatch_open"}
		{if not rain
			{add_view	"dustrun_big"			"on_ground"				"FXtraceR1"}
			{add_view	"dustrun_big"			"on_ground"				"FXtraceL1"}
			{add_view	"dustrun_small"			"on_grass"				"FXtraceR1"}
			{add_view	"dustrun_small"			"on_grass"				"FXtraceL1"}
			{add_view	"dustrun_sand_big" 		"on_sand"				"FXtraceR1"}
			{add_view	"dustrun_sand_big" 		"on_sand"				"FXtraceL1"}
			{add_view	"dustrun_snow_big" 		"on_snow"				"FXtraceR1"}
			{add_view	"dustrun_snow_big" 		"on_snow"				"FXtraceL1"}
			{add_view	"dustrun_small"			"on_country_road"		"FXtraceR1"}
			{add_view	"dustrun_small"			"on_country_road"		"FXtraceL1"}
		else
			{add_view	"engine_steam"			"engine_steam"			"FXfire1"}
        }

		{add_view	"tank_grit_small"		"on_ground"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_ground"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_ground_time_short"	"FXtraceL2"}

		{add_view	"tank_grit_small"		"on_grass"				"FXtraceR2"}
		{add_view	"tank_grit_small"		"on_grass"				"FXtraceL2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceR2"}
		{add_view	"tank_grit_big"			"on_grass_time_short"	"FXtraceL2"}

		{add_view	"drops_water"			"on_water"				"FXtraceR1"}
		{add_view	"drops_water"			"on_water"				"FXtraceL1"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceR2"}
		{add_view	"tank_grit_big_mud"		"on_mud"				"FXtraceL2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceR2"}
		{add_view	"tank_grit_big_snow"	"on_snow"				"FXtraceL2"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceR1"}
		{add_view	"drops_water_moto"		"on_puddle"				"FXtraceL1"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceR2"}
		{add_view	"tank_grit_small_w"		"on_puddle"				"FXtraceL2"}

;		{add_view	"flash_cannon_big"		"flashbarrel1"			"Foresight1"}
		{add_view	"powdersmoke_big"		"flashbarrel1s"			"Foresight1"}
;///////Engineer_Den + //////////////// для пушек №2 и 3
		{add_view	"flash_cannon_big"		"flashbarrel11"		"Foresight11"}
		{add_view	"powdersmoke_big"		"flashbarrel11s"	"Foresight11"}
		
		{add_view	"flash_cannon_small"		"flashbarrel12"		"Foresight12"}
		{add_view	"powdersmoke_big"		"flashbarrel12s"	"Foresight12"}
;///////Engineer_Den - ////////////////
 		{add_view	"smoke_zenite"		    "smkafire"			    "Foresight1"}
		{add_view 	"flash_zenit"			"flashbarrel2s"			"foresight2"}
;		{add_view	"powdersmoke_small2" 	"flashbarrel1s" 		"Foresight1"}
;		{add_view	"flash_gun_big"			"flashbarrel2"			"Foresight3"}

		{add_view	"smoke_white_steam"		"smoke1"				"FXfire1"}
		{add_view	"smoke_black"			"smoke2"				"FXfire2"}
		{add_view	"smoke_black"			"smoke3"				"FXfire2"}
		{add_view	"tank_die_2"			"tank_die"				"FXfire2"}
		{add_view	"smoke_black"			"smoke4"				"FXfire1"}
;///////Engineer_Den + //////////////// башни 2...5
		{add_view	"smoke_black"			       "smoke5"				"FXfire32"}
		{add_view	"smoke_black"			         		"smoke6"				"FXfire22"}
		{add_view	"smoke_black"					"smoke7"				"FXfire22"}
		{add_view	"smoke_black"			       "smoke8"				"FXfire32"}
		{add_view	"smoke_black"				"smoke9"				"FXfire42"}
		{add_view	"smoke_black"					"smoke10"			"FXfire52"}
		{add_view	"smoke_black"					"smoke11"			"FXfire52"}
		{add_view	"smoke_black"				"smoke12"			"FXfire42"}
;///////Engineer_Den - ////////////////
		{add_view	"smoke_dead_small2"		"smoke4_1"				"FXfire3"}
		{add_view	"fire_cooking_smoke"		"smoke4_3"				"FXfire3"}
		{add_view	"fire_cooking_flames"		"smoke4_4"				"FXfire3"}
		{add_view	"fire_cooking_afterfire"	"smoke4_5"				"FXfire3"}
		{add_view	"fire_cooking_sparkles"		"smoke4_6"				"FXfire3"}
		{add_view	"fire_cooking_explosion_flames"	"smoke4_7"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_8"				"FXfire3"}
		{add_view	"fire_cooking_aftersmoke"	"smoke4_9"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_10"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_11"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"smoke4_12"				"FXfire3"}
		{add_view	"fire_cooking_explosion"	"cooking_explosion1"			"FXfire3"}
		{add_view	"fire_cooking_presmoke"		"smoke4_17"				"FXfire3"}
		{add_view	"fire_cooking_medium_1a"	"smoke_cook_med_1a"			"FXfire3"}
		{add_view	"fire_cooking_medium_1b"	"smoke_cook_med_1b"			"FXfire3"}
		{add_view	"fire_cooking_medium_1c"	"smoke_cook_med_1c"			"FXfire3"}
		{add_view	"fire_cooking_high_1a"		"smoke_cook_high_1a"			"FXfire3"}
		{add_view	"fire_cooking_high_1b"		"smoke_cook_high_1b"			"FXfire3"}
		{add_view	"fire_cooking_barrel_smoke"	"smoke_cook_barrelsmoke"		"Foresight1"}
		{add_view	"fire_cooking_barrel_fire"	"smoke_cook_barrelfire"			"Foresight1"}
		{add_view	"fire_cooking_turret_ring"	"smoke4_turret"				"turret"}
		{add_view	"fire_cooking_turret_ring2"	"smoke4_turret2"			"turret"}
		{add_view	"fire_cooking_turret_smoke"	"smoke4_15"				"turret"}
		{add_view	"smoke_fuel_fire"		"fire_test"				"body"}
		{add_view	"smoke_fuel_fire"		"fuel_fire"				"engine"}
		{add_view	"smoke_fuel_fire_smoke"		"fuel_fire_smoke"			"engine"}
		{add_view	"smoke_tank_hull_dead"		"smoke_hullcrush"			"body"}
		{add_view	"smoke_tank_hull_dead_engine"	"smoke_hullcrush_engine"		"engine"}
		{add_view	"smoke_dead_small2a"	"smoke4_2"				"FXfire3"}
		{add_view	"smoke_dead_small2a"		"smoke4_13"				"FXfire3"}
		{add_view	"smoke_dead_small2a"		"smoke4_16"				"FXfire3"}
		{add_view	"smoke_dead_small2b"		"smoke_hatch_hit"			"FXfire3"}
		{add_view	"exhaust_dark_big"		"exhaust"				"FXsmoke1"}
		{add_view	"exhaust_dark_big"		"exhaust"				"FXsmoke2"}
		{add_view	"exhaust_dark_big2"		"exhaust2"				"FXsmoke1"}
		{add_view	"exhaust_dark_big2"		"exhaust2"				"FXsmoke2"}
		{set "smoke3" 0}
		{set "smoke4" 0}
;///////Engineer_Den + ////////////////
		{set "smoke5" 0};башня-3-2
		{set "smoke6" 0};башня-2-2
		{set "smoke7" 0};башня-2-3
		{set "smoke8" 0};башня-3-3
		{set "smoke9" 0};башня-4-2
		{set "smoke10" 0};башня-5-2
		{set "smoke11" 0};башня-5-3
		{set "smoke12" 0};башня-4-3
;///////Engineer_Den - ////////////////		

		{call "update_hatch_on_spawn"}
		(mod "mp"
			{tags add "teamnone"}
			{call "engine_idle"}
		) 
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
			else
				{tags add "texmod_set"}
				{if rand 0.8
					{delay 0.1
						{tex_mod "a"}
					}
				}
			}
		}
	}

	{on "add_movement_sound"
		{link_sound "engine"		"vehicle/engine/tank"}
		{link_sound "engine_end"	"vehicle/engine/tank_end"}
		{link_sound "exhaust"		"vehicle/engine/tank_up"}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}

	}

	{on "gunner_hatch_open"
		{play_sound "gunner_hatch"}
		{ani_wind "open" end}
	}
	(define "shell_ejection_tank"
		{on fire "gun"
        	{ani_play "fire"}
			{call "spawn_shell_tank"}
		}
		{on fire "gun_indirect"
        	{ani_play "fire"}
			{call "spawn_shell_tank"}
		}
		{on "spawn_shell_tank"
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
	)
	(define "update_hatch"
		{if not operatable
			{if %wind
				{play_sound "gunner_hatch"}
				{ani_wind "open" end}
			else
				{ani_play "open" +1.0 resume}
			}
		else
			{if crew_in_place "gunner2"
				{call "gunner_hatch_open"}
			else
				{if %wind
					{ani_wind "open" begin}
				else
					{ani_play "open" -1.0 resume}
				}
			}
		}
	)
	{on "update_hatch_on_spawn"
		("update_hatch" wind(true))
	}
	(define "update_hatch_event"
		{on %event
			("update_hatch" wind(false))
		}
	)
	("update_hatch_event" event(operatable on))
	("update_hatch_event" event(operatable off))
	("update_hatch_event" event(crew in))
	("update_hatch_event" event(crew out))
        	
	{on "emit_on_hit"
		{call "burn_emit"}
		{able select 0}
		
		;{view start "smoke4_1"}
		;{set "smoke4_1" 1}
		
		{delay 8
			{view stop "smoke4_1"}
			{set "smoke4_1" 0} 	
			{if not "burn_fire"
				{able "burning" 0}
				{able repaired 1}			
			}
		}
		{delay 11
			{able select 1}
			{if not "burn_fire"
				{able "burning" 0}
				{able repaired 1}			
			}
		}
		{delay 20
			{if not "burn_fire"
				{able "burning" 0}			
			}		
		}
		{delay 120
			{stop_sound "flame"}
			{view stop "smoke4_1"}
			{set "smoke4_1" 0} 
		}
	}
        
        {on "emit_on_rocketlauncher"
		{if rand 0.5
			{call "burn_emit"}
		else
			{crew_emit}
		}
		{able select 0}	
		{delay 4
			{if not "burn_fire"
				{able select 1}
				{able "burning" 0}
				{able repaired 1}			
			}
		}
		{burn fx "smoke_dead_tank2" fake}
	}
	
	{on "stat_body_break"
		{if not broken
			{if not "notified_broken"
			{stat_notify break}
				{set "notified_broken" 1}
			{tags add "body_break"}	
		}	
	}
	}
	{on "notify_break"
		{if not "notified_broken"
			{set "notified_broken" 1}
			{stat_notify break}
		}
	}
	
        
        (define "cut_shield_part"
            {if component %0
		{delay_ex 0.11
                	{tear "piece_medium_steel" bone %0
                		{impulse up 2 1 dir 2 1}
			}
		}
            }
	)
        
        (define "gun_hit"
		{if volume "gun"
			{if rand %rand
                {if work "gun"
				{components "gun" break}
				{damage_report "gun" "component/gun_broken"}
                            }
			else rand %rand
				{if work "gun"
					{components "gun" destroy}
					{damage_report "gun" "component/gun_destroyed"}
				}
			}
		}
	)
;///////Engineer_Den + ////////////////
	(define "gun2_hit"
		{if volume "gun2"
			{if rand (* 0.6 %rand)
				{components "gun2" break}
				{damage_report "gun2" "component/gun2_broken"}		
			}
		}
	)
	(define "gun3_hit"
		{if volume "gun3"
			{if rand (* 0.6 %rand)
				{components "gun3" break}
				{damage_report "gun3" "component/gun3_broken"}		
			}
		}
	)
;///////Engineer_Den - ////////////////
	
    (define "track_hitted" {tags add "track_hitted"}{delay 0.5{tags remove "track_hitted"}})
	(define "track_hit"
	{if hit_side front
 	    {if rand (* %max_rand 0.8)
		{if volume "trackleft"
                    {if work "trackleft"
                    {con "left"}
                        ;{burn fx "smoke_dead_tank2" fake}	
                        {if not tagged "track_hitted" {components "trackleft" break}}
                        ("track_hitted")
                        ;{damage_report "trackleft" "component/track_broken"}
                    }				
                else volume "trackright"
                    {if work "trackright"
                        ;{burn fx "smoke_dead_tank2" fake}
                        {if not tagged "track_hitted" {components "trackright" break}}
                        ("track_hitted")
                        ;{damage_report "trackright" "component/track_broken"}
                    }			
		}
	    }
	else hit_side back
	    {if rand (* %max_rand 0.8)
		{if volume "trackleft"
                    {if work "trackleft"
                        ;{burn fx "smoke_dead_tank2" fake}
                        {if not tagged "track_hitted" {components "trackleft" break}}
                        ("track_hitted")
                        ;{damage_report "trackleft" "component/track_broken"}
                    }
                else volume "trackright"
                    {if work "trackright"
                        ;{burn fx "smoke_dead_tank2" fake}
                        {if not tagged "track_hitted" {components "trackright" break}}
                        ("track_hitted")
                        ;{damage_report "trackright" "component/track_broken"}
                    }			
		}				
	    }
	else rand (* %min_rand 0.8)
	    {if volume "trackleft"
                {if work "trackleft"
                    {if not tagged "track_hitted" {components "trackleft" break}}
                    ("track_hitted")
                    ;{burn fx "smoke_dead_tank2" fake}	
                    ;{damage_report "trackleft" "component/track_broken"}
                }
	    else volume "trackright"
                {if work "trackright"
                    {if not tagged "track_hitted" {components "trackright" break}}
                    ("track_hitted")
                    ;{burn fx "smoke_dead_tank2" fake}
                    ;{damage_report "trackright" "component/track_broken"}
                }
	    }				
	}
	)
	(define "crew_shock"
                        {if operatable
                            {if work "mover"
                                    {chassis_work 0}
                                    {tags add "stopped"}
                            }
                	    {if work "turret"
				{ik_enable "turret" 0}
				{tags add "turr_jummed"}
                            }
                            {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
                            {delay %crew_shock_time
                                {if not tagged "gun_brake"
                                    {weapon_work "gun" 1}
                                }
                                {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
                                {if tagged "stopped"
                                    {tags remove "stopped"}
                                    {if work "mover"
                                        {if not tagged "engine_brake"
					    {if "engine_on"
						{chassis_work 1}
					    }
                                        }
                                    }
                                }
                                {if tagged "turr_jummed"
                                    {if tagged "turret_brake"
                                        {tags remove "turr_jummed"}
                                    else tagged "turret_stopped_by_body"
                                        {tags remove "turr_jummed"}
                                    else
                                        {tags remove "turr_jummed"}
					{if work "turret_drive"
                                        	{ik_enable "turret" 1}
					}
                                    }
                                }
                            }
                        }
	)
	{on "transmission_break"
		{if work "transmission"
			{link_sound "transmission_break""vehicle/engine/transmission_break"}
			{if tagged "transmission_destroyed"
				{components "transmission" destroy}
				{damage_report "transmission" "component/transmission_destroyed"}
			else
				{components "transmission" break}
				{damage_report "transmission" "component/transmission_broken"}
			}
			{chassis_work 0}
			{if "engine_on"
				{if work "engine"
					{play_sound "transmission_break" 1}
					{delay 3 3
						{stop_sound "transmission_break"}
						{if work "engine"
							{if not tagged "internal_damage"
								{call "engine fullstop"}
							}
						}
					}
				}
			}
		}
	}
	{on "crew_bail_timer"
		{delay 120
		{if not tagged "internal_damage"
			{if not tagged "transmission_destroyed"
				{if not tagged "turret_drive_destroyed"
					{if not "fuel_fire"
						{if not "ammo_cooked"
							{able select 1}
							{able repaired 1}
						}
					}
				}
			}
		}
		}
	}
	{on "turret_destroyed"
		{if not "turret_destroyed"
			{set "turret_destroyed" 1}
			{damage_report "turret" "component/turret_destroyed"}
			{components "turret" destroy}
			{spawn "tank_die_particle" "turret"}
		}
	}
	(define "crew_bail"
		{delay 4 2
			{call "notify_break"}
			{able select 0}
			{able repaired 0}
			{if operatable
				{reset_manual_control}
				{damage_report "crew" "component/crew_bailin"}
				{delay 2{crew_emit}{call "engine stop view"}{stop_sound "transmission_break"}}
				{delay 4{crew_emit}{call "engine stop view"}}
				{delay 6{crew_emit}{call "engine stop view"}}
			}
		}
	)
	(define "fuel_leak_fire"
		{delay %0 %1
			{call "fuel_fire"}
			{components "engine" break}
		}
	)
	(define "fuel_leak_explosion"
		{delay %0 %1
			{spawn "tank_fuel_die" "engine"}
			{components "engine" destroy}
			{damage_report "engine" "component/engine_destroyed"}
			{if rand 0.4 {call "cookoff"}}
		}
	)
	{on "fuel_leak"
		{if not tagged "fuel_leak"
			{tags add "fuel_leak"}
		}
		{if tagged "fuel_leak"
			{if rand 1
				{if not "fuel_fire"
					{if rand 0.5
						{kill_delay "fuel_fire"}
					}
					{if rand 0.6
						{delay 2.5 2.5 "fuel_fire"
            						{add_view	"smoke_dead_norm"	"burn_fire"	"FXfire1"}
							{view start "fuel_fire_smoke"}
							{call "engine stop view"}
							{set "fuel_fire" 1}
							;{damage_report "engine" "component/fuel_fire"}
							{if rand 0.25 ("fuel_leak_fire" args 3 3)
							else rand 0.25 ("fuel_leak_fire" args 6 5)
							else rand 0.25 ("fuel_leak_fire" args 8 3)
							else ("fuel_leak_fire" args 12 3)
							}
						}
					else
						{delay 2.5 2.5 "fuel_fire"
							("crew_bail")
							{view start "fuel_fire"}
							{set "fuel_fire" 1}
							{components "engine" break}
							{if rand 0.25 ("fuel_leak_explosion" args 15 5)
							else rand 0.25 ("fuel_leak_explosion" args 35 10)
							else rand 0.25 ("fuel_leak_explosion" args 48 17)
							else rand 0.25 ("fuel_leak_explosion" args 63 18)
							}
							{delay 110 20
								{view stop "fuel_fire"}
								{view start "fuel_fire_smoke"}
							}
						}
					}
				}
			}
		}
	}
	(define "burn_fire_rng"
		{delay %0 %1
			{call "fuel_fire_2"}
			{view start "fuel_fire"}
			{call "random_fuel_explosion"}
			{if rand 0.2 {delay 4 4 {view start "burn_fire"}}
			else rand 0.2 {delay 8 5 {view start "burn_fire"}}
			else rand 0.2 {delay 15 7 {view start "burn_fire"}}
			else rand 0.2 {delay 24 12 {view start "burn_fire"}}
			else rand 0.2 {delay 36 24 {view start "burn_fire"}}
			}
		}
	)
	(define "fuel_fire_rng"
		{delay %0 %1
			{call "fuel_fire_2"}
			{view start "burn_fire"}
			{call "random_fuel_explosion"}
			{if rand 0.2 {delay 4 4 {view start "fuel_fire"}}
			else rand 0.2 {delay 8 5 {view start "fuel_fire"}}
			else rand 0.2 {delay 15 7 {view start "fuel_fire"}}
			else rand 0.2 {delay 24 12 {view start "fuel_fire"}}
			else rand 0.2 {delay 36 24 {view start "fuel_fire"}}
			}
		}
	)
	{on "fuel_fire"
		{if rand 0.5
			{if rand 0.2 ("burn_fire_rng" args 3 3)
			else rand 0.2 ("burn_fire_rng" args 6 5)
			else rand 0.2 ("burn_fire_rng" args 8 3)
			else rand 0.2 ("burn_fire_rng" args 12 3)
			else
				{delay 73 18 
					{view stop "fuel_fire_smoke"}
				}
			}
		else
			{if rand 0.2 ("fuel_fire_rng" args 3 3)
			else rand 0.2 ("fuel_fire_rng" args 6 5)
			else rand 0.2 ("fuel_fire_rng" args 8 3)
			else rand 0.2 ("fuel_fire_rng" args 12 3)
			else
				{delay 73 18 
					{view stop "fuel_fire_smoke"}
				}
			}
		}
	}
	(define "random_fuel_explosion"
		{delay %0 %1
			{if rand 0.25 
				{delay 4 4 
					{spawn "tank_fuel_die" "engine"}
					{components "engine" destroy}
					{damage_report "engine" "component/engine_destroyed"}
				}
				{if rand 0.4 
					{call "tank_type_ammo_check"}
				}
			else rand 0.25 
				{delay 8 5 
					{spawn "tank_fuel_die" "engine"}
					{components "engine" destroy}
					{damage_report "engine" "component/engine_destroyed"}
				}
				{if rand 0.4 
					{call "tank_type_ammo_check"}
				}
			else rand 0.25 
				{delay 15 7 
					{spawn "tank_fuel_die" "engine"}
					{components "engine" destroy}
					{damage_report "engine" "component/engine_destroyed"}
				}
				{if rand 0.4 
					{call "tank_type_ammo_check"}
				}
			else rand 0.25 
				{delay 24 12 
					{spawn "tank_fuel_die" "engine"}
					{components "engine" destroy}
					{damage_report "engine" "component/engine_destroyed"}
				}
				{if rand 0.4 
					{call "tank_type_ammo_check"}
				}
			else rand 0.25 
				{delay 36 24 
					{spawn "tank_fuel_die" "engine"}
					{components "engine" destroy}
					{damage_report "engine" "component/engine_destroyed"}
				}
				{if rand 0.4 
					{call "tank_type_ammo_check"}
				}
			}
		}
	)
	{on "random_fuel_explosion"
		{if rand 0.3 ("random_fuel_explosion" args 4 4)
		else rand 0.3 ("random_fuel_explosion" args 10 7)
		else rand 0.3 ("random_fuel_explosion" args 13 6)
		}
	}
	{on "fuel_fire_2"
		{call "burn_emit"}
		("crew_bail")
		{delay 100 20
			{if rand 0.5
				{view stop "fuel_fire"}
				{delay 8 4 {view stop "burn_fire"}}
			else
				{view stop "burn_fire"}
				{delay 8 4 {view stop "fuel_fire"}}
			}
			{view start "fuel_fire_smoke"}
		}
	}
	(define "small_expl_rand_cookoff"
		{if rand 0.5
			{spawn "tank_small_ammo_explosion" "FXfire3"}
		else
			{spawn "fire_cooking_explosion" "FXfire3"}
		}
	)
	{on "cookoff_hatch"
		{if not "ammo_cooked"
			{call "notify_break"}
			{link_sound "cook_off"	"detonation/cook_off"}
			{link_sound "burnup_ammo" "detonation/burnup_ammo"}
			{link_sound "fire" "fire/fire"}
			{set "ammo_cooked" 1}
			{clear_inventory}
			{kill_crew}
			{damage_report "ammo" "component/engine_destroyed"}
			{able select 0}
			{able repaired 0}
			{if not work "gun_breech"
				{view start "smoke_cook_barrelsmoke"}
				{view start "smoke_cook_barrelfire"}
			}
			{if rand 0.5
				{play_sound "flame" 1}
				{fire radius 4 time 20 heating 0.2}
				{if rand 0.35  {view start "smoke4_7"} {play_sound "cook_off" 1} ;start cooking FX, hatch
				else rand 0.30 {view start "smoke_cook_high_1a"} {play_sound "cook_off" 1} {play_sound "burnup_ammo" 1}
				else	       {view start "smoke_cook_high_1b"} {play_sound "cook_off" 1} {play_sound "burnup_ammo" 1}
				}	
				{if rand 0.5
					{view start "smoke4_3"}
					{delay 2 {view stop "smoke4_3"}}
				}
				{if rand 0.3 {spawn "tank_small_ammo_explosion" "FXfire3"}}
				{if rand 0.3 ("small_expl_rand_cookoff")}
				{if rand 0.5
					{view start "smoke4_turret"} ;start cooking FX, turret ring
					{set "turret_flame" 1}
				}

				{delay 8 3 ("small_expl_rand_cookoff")}
				{delay 15 5
					{view stop "smoke4_7"} ;stop cooking FX, hatch
					{view stop "smoke_cook_high_1a"}
					{view stop "smoke_cook_high_1b"}
					{view stop "smoke4_turret"} ;stop cooking FX, turret ring
					{view stop "smoke_cook_barrelfire"}
					{view start "smoke4_5"} ;start after fire FX, hatch
					{if "turret_flame"
						{view stop "smoke4_turret"} ;stop cooking FX, turret ring
						{view start "smoke4_15"} ;start smoke FX, turret ring
					}
					{stop_sound "burnup_ammo"}
					{stop_sound "cook_off"} ;stop cook off sound
					{delay 6 3 ("small_expl_rand_cookoff")}
					{delay 9
						{view start "smoke4_9"} ;start after smoke FX, hatch
					}
				}
				{delay 250
	  				{stop_sound "flame"}
					{view stop "smoke4_9"} ;stop after smoke FX, hatch
					{view start"smoke4_13"} ; start slight smoke FX, hatch
				}
			else ;-----------------------------------------------------------------------
				{play_sound "flame" 1}
				{if rand 0.33 {view start "smoke_cook_med_1a"}
				else rand 0.33 {view start "smoke_cook_med_1b"}
				else	       {view start "smoke_cook_med_1c"}
				}
				{fire radius 4 time 30 heating 0.2}
				{play_sound "fire" 1}
				{if rand 0.5
					{view start "smoke4_3"}
					{delay 2 {view stop "smoke4_3"}}
				}
				{if rand 0.5
					{view start "smoke4_turret"} ;start cooking FX, turret ring
					{set "turret_flame" 1}
				}

				{if rand 0.25{set "med-high-cook" 1}{delay 4 4{call "med-high-cook"}}
				else rand 0.25{set "med-high-cook" 1}{delay 6 5{call "med-high-cook"}}
				else rand 0.25{set "med-high-cook" 1}{delay 10 3{call "med-high-cook"}}
				else rand 0.25{set "med-high-cook" 1}{delay 17 3{call "med-high-cook"}}
				}
				{if not "med-high-cook"
					{delay 30 5
						{stop_sound "fire"}
						{view stop "smoke_cook_med_1a"}
						{view stop "smoke_cook_med_1b"}
						{view stop "smoke_cook_med_1c"}
						{view stop "smoke4_turret"} ;stop cooking FX, turret ring
						{view stop "smoke_cook_barrelfire"}
						{view start "smoke4_9"} ;start after smoke FX, hatch
						{if "turret_flame"
							{view stop "smoke4_turret"} ;stop cooking FX, turret ring
							{view start "smoke4_15"} ;start smoke FX, turret ring
						}
						;{stop_sound "burnup_ammo"}
						;{stop_sound "cook_off"} ;stop cook off sound
						{delay 6 3 ("small_expl_rand_cookoff")}
					}
					{delay 250
						
	  					{view stop "smoke4_9"} ;stop after smoke FX, hatch
						{view start"smoke4_13"} ; start slight smoke FX, hatch
					}
				}
				{stop_sound "flame"}
			}
		}
	}
	{on "med-high-cook" 
		{if "med-high-cook"
	    		{if rand 0.3 
				{stop_sound "fire"}
				{call "explosion"}
	    		else
				{if rand 0.35  
					{view start "smoke4_7"} 
					{play_sound "cook_off" 1} ;start cooking FX, hatch
				else rand 0.30 
					{view start "smoke_cook_high_1a"} 
					{play_sound "cook_off" 1} 
					{play_sound "burnup_ammo" 1}
				else
					{view start "smoke_cook_high_1b"} 
					{play_sound "cook_off" 1} 
					{play_sound "burnup_ammo" 1}
				}
				{stop_sound "fire"}
				{play_sound "flame" 1}
				{view stop "smoke_cook_med_1a"}
				{view stop "smoke_cook_med_1b"}
				{view stop "smoke_cook_med_1c"}
				{if rand 0.5
					{view start "smoke4_3"}
					{delay 2 
						{view stop "smoke4_3"}
					}
				}
				{if rand 0.4 
					("small_expl_rand_cookoff")
				}
				{if rand 0.5
					{view start "smoke4_turret"} ;start cooking FX, turret ring
			{set "turret_flame" 1}
		}
		{if rand 0.3 {delay 6 3 ("small_expl_rand_cookoff")}}
		{if rand 0.3 {delay 8 3 ("small_expl_rand_cookoff")}}
		{delay 12 4
			{play_sound "flame" 1}
			{view stop "smoke4_7"} ;stop cooking FX, hatch
			{view stop "smoke_cook_high_1a"}
			{view stop "smoke_cook_high_1b"}
			{view stop "smoke4_turret"} ;stop cooking FX, turret ring
			{view stop "smoke_cook_barrelfire"}
			{view start "smoke4_5"} ;start after fire FX, hatch
			{if "turret_flame"
				{view stop "smoke4_turret"} ;stop cooking FX, turret ring
				{view start "smoke4_15"} ;start smoke FX, turret ring
			}
			{stop_sound "burnup_ammo"}
			{stop_sound "cook_off"} ;stop cook off sound
			{delay 6 3 ("small_expl_rand_cookoff")}
			{delay 9
				{view start "smoke4_9"} ;start after smoke FX, hatch
			}
		}
		{delay 250
			{stop_sound "flame"}
			{view stop "smoke4_9"} ;stop after smoke FX, hatch
			{view start"smoke4_13"} ; start slight smoke FX, hatch
		}
	    }
	else ;-----------------------------------------------------------
		{delay 30 5
			{stop_sound "fire"}
			{play_sound "flame" 1}
			{view stop "smoke_cook_med_1a"}
			{view stop "smoke_cook_med_1b"}
			{view stop "smoke_cook_med_1c"}
			{view stop "smoke4_turret"} ;stop cooking FX, turret ring
			{view stop "smoke_cook_barrelfire"}
			{view start "smoke4_9"} ;start after smoke FX, hatch
			{if "turret_flame"
				{view stop "smoke4_turret"} ;stop cooking FX, turret ring
				{view start "smoke4_15"} ;start smoke FX, turret ring
			}
			;{stop_sound "burnup_ammo"}
			;{stop_sound "cook_off"} ;stop cook off sound
			{delay 6 3 ("small_expl_rand_cookoff")}
		}
		{delay 250
			{stop_sound "flame"}
	  		{view stop "smoke4_9"} ;stop after smoke FX, hatch
			{view start"smoke4_13"} ; start slight smoke FX, hatch
		}
	}
	}
	(define "smoke4_17"
		{delay %0 %1
			{view start "smoke4_17"}
			{view stop "smoke4_16"}
			{delay 1 0.5
				{view stop "smoke4_17"}
				{call "cookoff_hatch"}
				{call "engine stop view"}
			}
		}
	)
	{on "cookoff"
		{if not "ammo_cooked"
			{view start "smoke4_16"}
			{call "burn_emit"}
			("crew_bail")
			{set "internal_fire" 1}
			{if rand 0.2 {kill_crew}{spawn "tank_small_ammo_explosion" "FXfire3"}}
			{if rand 0.2
				{if rand 0.4 {spawn "tank_small_ammo_explosion" "FXfire3"}}
				{fire radius 5 time 24 heating 0.3}
				{call "engine stop view"}
				{set "ammo_cooked" 1}
				{kill_crew}
				{able select 0}
				{able repaired 0}
				{clear_inventory}
				{call "notify_break"}
				{view start "smoke4_turret2"} ;start high flame FX, turret ring
				{view start "smoke_cook_med_1a"} ;start medium flame FX, hatch
				{delay 24
					{view stop "smoke_cook_med_1a"} ;stop medium flame FX, hatch
					{view start "smoke4_15"} ;start smoke FX, turret ring
				}
			else rand 0.5
				{call "cookoff_hatch"}
				{call "engine stop view"}
			else
				{if rand 0.5
					{view start "smoke_hatch_hit"}
				}
				{if rand 0.33 ("smoke4_17" args 3 3) ;0-3-6
				else rand 0.33 ("smoke4_17" args 4 2) ;2-4-6
				else ("smoke4_17" args 6 1)		;5-6-7
				}
			}
		}
	}
	(define "small_expl"
		{delay %0 %1
			{spawn "tank_small_ammo_explosion" "FXfire3"}
	)
	(define "small_expl_script"
			{if rand 0.25
				{delay %0 %1
					("small_expl" args %2 0.1)
					("small_expl" args 1.5 0.1)
					("small_expl" args 1.8 0.1)
					("small_expl" args 2.5 0.1)
					("small_expl" args 2.7 0.1)
					("small_expl" args 2.9 0.1)
					("small_expl" args 3.1 0.1)
					("small_expl" args 3.3 0.1)
					{call "explosion"} }}}}}}}}
				}
			else rand 0.25
				{delay %0 %1
					("small_expl" args %2 0.1)
					("small_expl" args 0.3 0.1)
					("small_expl" args 0.8 0.1)
					("small_expl" args 1.0 0)
					("small_expl" args 0.2 0)
					("small_expl" args 0.3 0)
					("small_expl" args 0.2 0)
					("small_expl" args 0.1 0)
					("small_expl" args 0.1 0)
					("small_expl" args 0.1 0)
					{call "explosion"} }}}}}}}}}}
				}
			else rand 0.25
				{delay %0 %1
					("small_expl" args %2 0.1)
					("small_expl" args 0.3 0.1)
					("small_expl" args 0.5 0.1)
					("small_expl" args 0.4 0.1)
					{call "explosion"} }}}}
				}
			else rand 0.25
				{delay %0 %1
					("small_expl" args %2 0.1)
					("small_expl" args 0.2 0.1)
					("small_expl" args 0.1 0.1)
					("small_expl" args 0.1 0.1)
					{call "explosion"} }}}}
				}
			else
				{delay 5 1
					{call "explosion"}
				}
			}
	)
	{on "pre_explosion"
	    {if tagged "instant_explosion"
		{call "explosion"}
	    else
		{if rand 0.6
		    {if rand 0.33
			{if rand 0.2 {spawn "tank_small_ammo_explosion" "FXfire3"}}
			{fire radius 4 time 4 heating 0.2}
			{call "notify_break"}
			{damage_report "ammo" "component/ammo_fire"}
			{link_sound "cook_off"	"detonation/cook_off"}
			{link_sound "burnup_ammo" "detonation/burnup_ammo"}
			{link_sound "fire" "fire/fire"}
			{kill_crew}
			{view start "smoke_hatch_hit"}
			{if rand 0.5 {view start "smoke4_9"}}
			{delay 1.5 1
				{play_sound "fire" 1}
				{play_sound "flame" 1}
				{if rand 0.33 {view start "smoke_cook_med_1a"}
				else rand 0.33 {view start "smoke_cook_med_1b"}
				else {view start "smoke_cook_med_1c"}}
				{delay 1.5 0.5
					{stop_sound "fire"}
					{play_sound "cook_off" 1}
					{if rand 0.4 {delay 0.5 0.5 {view start "smoke4_turret"}}}
					{view stop "smoke_cook_med_1a"}
					{view stop "smoke_cook_med_1b"}
					{view stop "smoke_cook_med_1c"}
					{view start "smoke4_7"}
					{delay 1.5 0.5
						{play_sound "burnup_ammo" 1}
						{view stop "smoke4_7"}
						{view start "smoke_cook_high_1b"}
						{delay 1.5 0.5
							{stop_sound "cook_off"}
							{stop_sound "burnup_ammo"}
							{stop_sound "flame"}
							{call "explosion"}
						}
					}
				}
			}
		    else rand 0.33
			{if rand 0.2 {spawn "tank_small_ammo_explosion" "FXfire3"}}
			{fire radius 4 time 4 heating 0.2}
			{call "notify_break"}
			{damage_report "ammo" "component/ammo_fire"}
			{link_sound "cook_off"	"detonation/cook_off"}
			{link_sound "burnup_ammo" "detonation/burnup_ammo"}
			{link_sound "fire" "fire/fire"}
			{kill_crew}
			{view start "smoke_hatch_hit"}
			{if rand 0.5 {view start "smoke4_9"}}
			{if rand 0.1 ("small_expl_script" args 3 1 0.1)
			else rand 0.1 ("small_expl_script" args 1 1 0.4)
			else rand 0.1 ("small_expl_script" args 3 1 0.7)
			else rand 0.1 ("small_expl_script" args 1 1 1)
			else rand 0.1 ("small_expl_script" args 3 1 1.2)

			else rand 0.1 ("small_expl_script" args 1 1 0.1)
			else rand 0.1 ("small_expl_script" args 3 1 0.4)
			else rand 0.1 ("small_expl_script" args 1 1 0.7)
			else rand 0.1 ("small_expl_script" args 3 1 1)
			else rand 0.1 ("small_expl_script" args 1 1 1.2)
			}
			{delay 1.5 1
				{play_sound "fire" 1}
				{play_sound "flame" 1}
				{if rand 0.33 {view start "smoke_cook_med_1a"}
				else rand 0.33 {view start "smoke_cook_med_1b"}
				else {view start "smoke_cook_med_1c"}}
				{delay 1.5 0.5
					{stop_sound "fire"}
					{play_sound "cook_off" 1}
					{if rand 0.4 {delay 0.5 0.5 {view start "smoke4_turret"}}}
					{view stop "smoke_cook_med_1a"}
					{view stop "smoke_cook_med_1b"}
					{view stop "smoke_cook_med_1c"}
					{view start "smoke4_7"}
					{delay 1.5 0.5
						{play_sound "burnup_ammo" 1}
						{view stop "smoke4_7"}
						{view start "smoke_cook_high_1b"}
						{delay 1.5 0.5
							{stop_sound "cook_off"}
							{stop_sound "burnup_ammo"}
							{stop_sound "flame"}
							{call "explosion"}
						}
					}
				}
			}
		   else
			{if rand 0.4 {spawn "tank_small_ammo_explosion" "FXfire3"}}
			{call "notify_break"}
			{kill_crew}
			{view start "smoke_hatch_hit"}
			{if rand 0.5 {view start "smoke4_9"}}
			{if rand 0.1 ("small_expl_script" args 3 1 0.1)
			else rand 0.1 ("small_expl_script" args 1 1 0.4)
			else rand 0.1 ("small_expl_script" args 3 1 0.7)
			else rand 0.1 ("small_expl_script" args 1 1 1)
			else rand 0.1 ("small_expl_script" args 3 1 1.2)

			else rand 0.1 ("small_expl_script" args 1 1 0.1)
			else rand 0.1 ("small_expl_script" args 3 1 0.4)
			else rand 0.1 ("small_expl_script" args 1 1 0.7)
			else rand 0.1 ("small_expl_script" args 3 1 1)
			else rand 0.1 ("small_expl_script" args 1 1 1.2)
			else {call "explosion"}
			}
                    }
		else
			{call "explosion"}
		}
	    }
	}
	{on "pre_cookoff_call"
		{if tagged "instant_explosion"
			{call "explosion"}
		else rand 0.6
			{if not "turret_teared"
				{call "cookoff"}
			else
				{if tagged "ammo_overload"
					{call "pre_explosion"}
				else
					{call "explosion"}
				}
			}
		else
			{if tagged "ammo_overload"
				{call "pre_explosion"}
			else
				{call "explosion"}
			}
		}
	}
	(define "ammunition_check"
		{if explosive_amount (* %ammo 1.25)	;>125%
			{tags add "ammo_overload"}{tags add "instant_explosion"}{call "pre_explosion"}
		else explosive_amount %ammo		;>100%
			{tags add "ammo_overload"}{call "pre_cookoff_call"}
		else explosive_amount (* %ammo 0.9)	;>90%
			{if rand 0.5{tags add "ammo_overload"}else
			{tags add "ammo_normal_load"}{call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0.5)	;>50%
			{tags add "ammo_normal_load"}{call "pre_cookoff_call"}
		else explosive_amount (* %ammo 0.15)	;>15%
			{call "pre_cookoff_call"}
		else explosive_amount (* %ammo 0)	;>0%
		}
	)
	{on "tank_type_ammo_check"
		{if  tagged "light_tank"
			("ammunition_check" ammo(250))
		else  tagged "medium_tank"
			("ammunition_check" ammo(290))
		else  tagged "heavy_tank"
			("ammunition_check" ammo(340))
		else
			("ammunition_check" ammo(250))
		}
	}
	(define "ammunition_loads"
		{if explosive_amount (* %ammo 2.00)	;>200%
			{if rand (* %rand 5.0){tags add "ammo_overload"}{tags add "instant_explosion"}{call "pre_explosion"}}
		else explosive_amount (* %ammo 1.75)	;>175%
			{if rand (* %rand 4.0){tags add "ammo_overload"}{tags add "instant_explosion"}{call "pre_explosion"}}
		else explosive_amount (* %ammo 1.50)	;>150%
			{if rand (* %rand 3.0){tags add "ammo_overload"}{tags add "instant_explosion"}{call "pre_explosion"}}
		else explosive_amount (* %ammo 1.25)	;>125%
			{if rand (* %rand 2.5){tags add "ammo_overload"}{tags add "instant_explosion"}{call "pre_explosion"}}
		else explosive_amount %ammo		;>100%
			{if rand (* %rand 2){tags add "ammo_overload"}{call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0.9)	;>90%
			{if rand (* %rand 1.75){if rand 0.5{tags add "ammo_overload"}else
			{tags add "ammo_normal_load"}{call "pre_cookoff_call"}}}
		else explosive_amount (* %ammo 0.75)	;>75%
			{if rand (* %rand 1.50){tags add "ammo_normal_load"}{call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0.5)	;>50%
			{if rand (* %rand 1.25){tags add "ammo_normal_load"}{call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0.25)	;>25%
			{if rand (* %rand 1.0){call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0.15)	;>15%
			{if rand (* %rand 0.75){call "pre_cookoff_call"}}
		else explosive_amount (* %ammo 0)	;>0%
			{if rand (* %rand 0){call "pre_cookoff_call"}}
		}
	)
	{on "mp_destroy"
		{if not tagged "destroyed"
			{damage_report "body" "component/body_broken"}
			{if not tagged "body_break"
				{components "body" break}
				{call "stat_break"}
			}
			{components "body" destroy}
		}

		{delay 2
			{tags add "destroyed"}
			{kick_entity_manager}

		}
		{if rand 0.5	
			("cut_shield_part" args "shieldl4")
			("cut_shield_part" args "shieldl5")
			("cut_shield_part" args "shieldr2")
			("cut_shield_part" args "shieldr3")
		}
		{if rand 0.5	
			("cut_shield_part" args "shieldl2")
			("cut_shield_part" args "shieldl3")
			("cut_shield_part" args "shieldr4")
			("cut_shield_part" args "shieldr1")
		}
		{call "check_burn_emit"}
											
		{reset_manual_control}
		{able select 0}
		{able repaired 0}
		{unlink_trailer}
	}
	{on "upside_down"
		{reset_manual_control}
		{able select 0}
		{unlink_trailer}
		{if not burned
			{call "_burn"}
			{able repaired 0}
		}
	}

	{on "_explosion"
		{if  tagged "light_tank"
			("ammunition_loads2" ammo(250))
		else  tagged "medium_tank"
			("ammunition_loads2" ammo(290))
		else  tagged "heavy_tank"
			("ammunition_loads2" ammo(340))
		else
			("ammunition_loads2" ammo(250))
		}
		{add_view "smoke_dead_norm" "deathfx" "FXfire1"}
		{start_sound "detonation/tank_die_distant/"}
		{stop_sound "cook_off"}
		{set "ammo_cooked" 1}
		{spawn "tank_die" "Basis"}
		{play_sound "flame" 1}
		{delay 125
	  		{stop_sound "flame"}
		}
	}
	{on "spawn_shellhole"
;		{spawn "crater_big_tank" "Basis" no_normal terrain_texmod}
		{spawn "shellhole_dead_tank2" "Basis"}
	}
	{on "cut_parts"
		{if not tagged "energy_overload"
			{spawn "tank_die" "Basis"}
			{add_view "smoke_black_big2b" "deathfx2" "basis"}
		}
		(define "cut_part"
			{if rand 0.5
				{tear "piece_medium_steel" bone %0
					{impulse up 12 1 dir 9 3 cx 9 3 cy 9 3 rnd_dir 10 no_position}
;					{add_view "smoke_dead_wheel" "smoke" "basis"}
;					{view start "smoke"}
					{delay_effect 20 5 "stop"}
				}
			}
		)
		("cut_part" args "part1")
		("cut_part" args "part2")
		("cut_part" args "part3")
		("cut_part" args "part4")
		("cut_part" args "part5")
		("cut_part" args "part6")
		{delay 90 15
			{view stop "deathfx"}
			{view start "deathfx2"}
		}	
	}

	{on "check_burn_emit"
		{if not "burn_fire"
			{if not "smoke3"
				{if not "smoke4"
					{able "burning" 0}
				else
                                    {delay 5
					{call "burn_emit"}
                                    }
				}
			else
                            {delay 5
				{call "burn_emit"}
                            }
			}
		else
                    {delay
			{call "burn_emit"}
                    }
		}
	}
	{on fire "gun"
		{if not work "gun_breech"
			{if rand 0.5 {call "gun_breech_fire"}}
		}
        		{view start "flashbarrel1"}
		{view start "flashbarrel1smoke"}
		{ani_play "fire"}
		{delay 0.8
			{view pause "flashbarrel1"}
		}
		{delay 2.5
			{view pause "flashbarrel1smoke"}
		}
        	{delay 2.5
            		{view stop "smkafire"}
        	}
	}
	{on fire "gun2"    
		{if not work "gun_breech"
			{if rand 0.5 {call "gun_breech_fire"}}
		}                 
		{view start "flashbarrel2s"}
		{delay 0.2
			{view pause "flashbarrel2s"}
		}
		;{view start "flashbarrel"}
	}
	{on "gun_breech_fire"
		{if "turret"
			{spawn "ex_air_big" "turret"}
		else
			{spawn "ex_air_big" "body"}
		}
		{damage_report "internal" "component/gun_breech_broken"}
		{if rand 0.5
			{components "gun_drive" break}
			{damage_report "vertical_drive" "component/vertical_drive_broken"}
		}
		{if rand 0.35
			{components "turret_drive" break}
			{damage_report "turret_drive" "component/turret_drive_broken"}
		}
		{if rand 0.75
			{components "gun" break}
		else rand 0.3
			{components "gun" destroy}
		}
		{if rand 0.3 
			{if not tagged "gun_breech_destroyed"
				{tags add "gun_breech_destroyed"}
				{components "gun_breech" destroy}
				{damage_report "gun_breech" "component/gun_breech_destroyed"}
			}
		}
		("crew_shock" crew_shock_time(10))
                		{if rand 0.75 {kill_crew "charger"}}
                		{if rand 0.2 {kill_crew "driver"}}
                		{if rand 0.75 {kill_crew "gunner"}}
                		{if rand 0.4 {kill_crew "commander"}}
                		{if rand 0.4 {kill_crew "gunner2"}}
		{if  tagged "light_tank"
			("ammunition_loads" rand(0.20) ammo(250))
		else  tagged "medium_tank"
			("ammunition_loads" rand(0.20) ammo(290))
		else  tagged "heavy_tank"
			("ammunition_loads" rand(0.20) ammo(340))
		else
			("ammunition_loads" rand(0.20) ammo(250))
		}
	}	
        {on "criticalhit" overload
        	{if component "body"
        		{if not hit_side front
        			{components "engine" break}
        		}
        	else component "turret"
			{components "gun" break}
        	}
        }
	{on "explosive_broken"
		{if not work "body"
			{delay 0.1 0.1
				{call "explosion"}
				{damage_report "body" "component/empty"}
				{damage_report "engine" "component/empty"}
				{damage_report "trackright" "component/empty"}
				{damage_report "trackleft" "component/empty"}
				{damage_report "turret" "component/empty"}
				{damage_report "gun" "component/empty"}
			}
                }
        }
        {on "burn_hatch"
		{add_view	"smoke_dead_norm2"	"smoke_hatch"	"FXfire3"}
		{view start "smoke_hatch"}
        }
        {on "burn_engine"
		{add_view	"fire_napalm"	"fire_napalm"	"engine"}
		{view start "fire_napalm"}
        }
    
    	{on "rand_burn"
		{if rand 0.1
			{if not burned
				{burn time 17}
				{delay 1
					{call "_burn"}
				}
			}
		}
	}
	{on "burn_crew_mp"
		{if rand 0.6 {kill_crew "gunner"}}
		{if rand 0.6 {kill_crew "charger"}}
		{if rand 0.6 {kill_crew "commander"}}
		{if rand 0.6 {kill_crew "driver"}}
	}
        (define "burn_by_engine"
		{on "burn_by_engine"
        		{if not tagged "burned"
        			{if rand %0
        				{call "_burn"}
        			}
        		}
            	}
        )

;============================================================================
    {on break_armor
                {if name "blast"
                    {if volume "body"
                        {if rand 0.5 {kill_crew "gunner"}}
                        {if rand 0.5 {kill_crew "charger"}}
                        {if rand 0.5 {kill_crew "commander"}}
                        {if rand 0.5 {kill_crew "driver"}}
                        {if rand 0.5 {kill_crew "gunner2"}}
                        
                        {if not tagged "destroyed"
                            {call "mp_destroy"}
                        }
                    else volume "track"
                    }
                    {if volume "explosive"
                        {if rand 0.5 {call "explosive_broken"}}
                    }
                }
                    {if not user_control
                        {if volume "body"
                            {if rand 0.1 {kill_crew "gunner"}}
                            {if rand 0.1 {kill_crew "charger"}}
                            {if rand 0.1 {kill_crew "commander"}}
                            {if rand 0.1 {kill_crew "driver"}}
                        }
                    }
                
                    {if not "no_burn_volumes"
                        {if name "pierce"
                            {if volume "body"
                    ;{burn fx "smoke_dead_tank1" fake}
                            else volume "track"
                ;{burn fx "smoke_dead_tank1" fake}
                            }
                        }
                    }
    }
 
    {on break_armor_again
                {if component "engine"
                    {call "engine fullstop"}
                }
                {if name "blast"
                    {if volume "body"
                        {if not tagged "destroyed"
                            {call "mp_destroy"}
                        }
                    }
                    {if volume "explosive"
                        {if rand 0.8 {call "explosive_broken"}}
                    }
                }
    }
    {on break overload
	{if component "body"
                		{tags add "body_brake"}
                		{chassis_work 0}
           		{view start "smoke_hullcrush"}
		{view start "smoke_hullcrush_engine"}
                		{view start "smoke4"}
		{play_sound "flame" 1}
                		{set "smoke4" 1}
 		{delay 2.3
                        		{view start "smoke4_1"}
                    	}
  	                	{delay 25
                    		{view start "smoke4_2"}
                    		{delay 30
                        			{view stop "smoke4_2"}
                    		}
                		}
		
                		{set "smoke4" 0}
            	else component "engine"
            		{chassis_work 0}
            		{tags add "engine_brake"}
		{call "engine fullstop"}
	else component "shield"
                        ("cut_shield_part" args "shieldr1")
                        ("cut_shield_part" args "shieldr2")
                        ("cut_shield_part" args "shieldr3")
                        ("cut_shield_part" args "shieldr4")
                        ("cut_shield_part" args "shieldr5")
                        ("cut_shield_part" args "shieldr6")
                        ("cut_shield_part" args "shieldr7")
                        ("cut_shield_part" args "shieldl1")
                        ("cut_shield_part" args "shieldl2")
                        ("cut_shield_part" args "shieldl3")
                        ("cut_shield_part" args "shieldl4")
                        ("cut_shield_part" args "shieldl5")
                        ("cut_shield_part" args "shieldl6")
                        ("cut_shield_part" args "shieldl7")
	else component "turret"
                    {tags add "turret_brake"}
	    {tags add "turr_brake"}
	else component "turret2"
	    {tags add "turret2_brake"}
                    {tags add "turr2_brake"}
	else component "turret3"
	    {tags add "turret3_brake"}
                    {tags add "turr3_brake"}
	else component "turret4"
	    {tags add "turret4_brake"}
                    {tags add "turr4_brake"}
	else component "turret5"
	    {tags add "turret5_brake"}
                    {tags add "turr5_brake"}
                else component "trackright"
                    {tags add "chassis_brake"}
                    {chassis_work 0}
                else component "trackleft"
                    {tags add "chassis_brake"}
                    {chassis_work 0}
                else component "gun"
                    {call "update_gun"}
                    {tags add "gun_brake"}
                }
    }
    {on blast
        {if min_energy 50
            {impulse dir 1 cy 0.5}
        }
    }
