;-----------------------------Normand Pack
(define "shell_ejection"
	{on fire "gun"
		{ani_play "fire"}
		{call "spawn_shell_vehicle"}
	}
	{on fire "gun_indirect"
		{ani_play "fire"}
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
)
{"turret2_rotator"
	{on spawn
		{set "rotate_turret2" 0}
	}
	{on ik begin "turret2"
		{kill_delay "rotate_turret2"}
		{if not "rotate_turret2"
			{play_sound "rotate_turret2" 1}
			{set "rotate_turret2" 1}
		}
	}
	{on ik end "turret2"
		{delay 0.5 "rotate_turret2"
			{stop_sound "rotate_turret2"}
			{set "rotate_turret2" 0}
		}
	}
}

{"turret3_rotator"
	{on spawn
		{set "rotate_turret3" 0}
	}
	{on ik begin "turret3"
		{kill_delay "rotate_turret3"}
		{if not "rotate_turret3"
			{play_sound "rotate_turret3" 1}
			{set "rotate_turret3" 1}
		}
	}
	{on ik end "turret3"
		{delay 0.5 "rotate_turret3"
			{stop_sound "rotate_turret3"}
			{set "rotate_turret3" 0}
		}
	}
}
{"turret4_rotator"
	{on spawn
		{set "rotate_turret4" 0}
	}
	{on ik begin "turret4"
		{kill_delay "rotate_turret4"}
		{if not "rotate_turret4"
			{play_sound "rotate_turret4" 1}
			{set "rotate_turret4" 1}
		}
	}
	{on ik end "turret4"
		{delay 0.5 "rotate_turret4"
			{stop_sound "rotate_turret4"}
			{set "rotate_turret4" 0}
		}
	}
}

{"turret5_rotator"
	{on spawn
		{set "rotate_turret5" 0}
	}
	{on ik begin "turret5"
		{kill_delay "rotate_turret5"}
		{if not "rotate_turret5"
			{play_sound "rotate_turret5" 1}
			{set "rotate_turret5" 1}
		}
	}
	{on ik end "turret5"
		{delay 0.5 "rotate_turret5"
			{stop_sound "rotate_turret5"}
			{set "rotate_turret5" 0}
		}
	}
}
{"dymopusk"
	{on "init_gun"
		{call	"smoke_link"}
		{link_sound "smokecaller" "detonation/grenade_smoke"}
	}
	{on "smoke_link"
		{add_view	"smoke_cover-up_small"	"smoke10"	"FXfire5"}
		{add_view	"smoke_cover-up_small"	"smoke11"	"FXfire6"}
		{add_view	"smoke_cover-up_norm"	"smoke12"	"FXfire5"}
		{add_view	"smoke_cover-up_norm"	"smoke13"	"FXfire6"}
		{add_view	"smoke_cover-up_big"	"smoke14"	"FXfire5"}
		{add_view	"smoke_cover-up_big"	"smoke15"	"FXfire6"}
	}
	{on fire "mgun16"
		{play_sound "smokecaller" 1}
		{tags add "smoke"}
		{view start "smoke10"}
		{view start "smoke11"}
		{volumes "smoke10" enable visible}
		{volumes "smoke11" enable visible}
		{update_visibility_patch}
		{delay 1
			{view stop "smoke10"}
			{view stop "smoke11"}
			{view start "smoke12"}
			{view start "smoke13"}
			{volumes "smoke10" disable visible}
			{volumes "smoke11" disable visible}
			{volumes "smoke12" enable visible}
			{volumes "smoke13" enable visible}
			{update_visibility_patch}
		}
		{delay 3
			{view start "smoke14"}
			{view start "smoke15"}
			{volumes "smoke12" disable visible}
			{volumes "smoke13" disable visible}
			{volumes "smoke14" enable visible}
			{volumes "smoke15" enable visible}
			{update_visibility_patch}
		}
		{delay 35
			{volumes "smoke14" disable visible}
			{volumes "smoke15" disable visible}
			{view stop "smoke12"}
			{view stop "smoke13"}
			{view stop "smoke14"}
			{view stop "smoke15"}
			{update_visibility_patch}
			{stop_sound "smokecaller"}
			{call "smoke_link"}
		}
	}
}
{"towing_rope"		
	{on "check_water_level"			
		{if tagged "cargo_inside"				
			{if tagged "car_linked" 
				{spawn "tow_informer" "link1" 
					{tags add "car_linked"}
				}
			else tagged "btr_linked" 
				{spawn "tow_informer" "link1" 
					{tags add "btr_linked"}
				}
			else tagged "light_tank_linked" 
				{spawn "tow_informer" "link1" 
					{tags add "light_tank_linked"}
				}
			else tagged "tank_linked" 
				{spawn "tow_informer" "link1" 
					{tags add "tank_linked"}
				}
			}
		}
	}		
	{on "load_heavy_vehicle"			
		{tags add "cargo_inside"}			
		{call "check_sinking"}			
		{if not tagged "place1_busy"				
			{delay 0.1 
				{ani_play "vehicle1_in" callback}
			}				
			{tags add "link_place1"} 
			{delay 3 
				{tags remove "link_place1"}
			}				
			{tags add "place1_busy"}
		}
	}		
	{on "script_update_cargo_anim"			
		{if tagged "place1_busy" 
			{ani_wind "vehicle1_in" end} 
		else 
			{ani_wind "vehicle1_in" begin}
		}
	}		
	{on "open_cargo" overload			
		{unlink_trailer}			
		{if not tagged "cargo_open"				
			{volumes "vehicle" enable overlap}
		}			  
		{if tagged "cargo_inside"				
			{tags remove "cargo_inside"}				
			{if tagged "place1_busy"					
				{volumes disable overlap} 
				{ani_play "vehicle1_unload" callback}
			}				
			{tags remove "place1_busy"}
		else 
			{volumes "vehicle" enable overlap}
		}
	}		
	{on animation_end "vehicle1_unload" overload			
		{call "open"}
	}		
	{on "open"			
		{bone cut "vehicle1"}			
		{spawn "tow_rope" "open_point" 
			{impulse up 0.01 com}
		}			
		{delete}
	}
}	
{"tow_informer"		
	{on spawn 			
		{impulse up 0.1 com} 
			{delay 0.5 
			{delete}
		}
	}		
	{on contact				
		(define "load_type"				
			{call "update_moveability"}				
			{tags add "%type"}				
			{delay 1 				
				{tags remove "%type"} 
				{call "update_moveability"}
			}
		)
		{if effector "heavy_tractor"
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
				}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					("load_type" type(normal))
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					("load_type" type(heavy))
					{with_effector}
				}
			}
		else effector "medium_tractor"				
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
			}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(normal))
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					("load_type" type(heavy))
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			}
		else effector "car"				
			{if tagged "car_linked" 
				{with_effector ("load_type" type(heavy))
					{with_effector}
				}
			else tagged "btr_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			}
		else effector "armored_car"				
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(normal)) 
					{with_effector}
				}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(heavy)) 
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			}
		else effector "tank light"				
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
			}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(normal))
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					("load_type" type(heavy))
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					{unlink_trailer} 
					{with_effector}
				}
			}
		else effector "tank medium"				
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
			}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
				}
			else tagged "light_tank_linked" 
			{with_effector 
					("load_type" type(normal))
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					("load_type" type(heavy))
					{with_effector}
				}
			}
		else effector "tank heavy"				
			{if tagged "car_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
				}
			else tagged "btr_linked" 
				{with_effector 
					("load_type" type(light))
					{with_effector}
				}
			else tagged "light_tank_linked" 
				{with_effector 
					("load_type" type(normal))
					{with_effector}
				}
			else tagged "tank_linked" 
				{with_effector 
					("load_type" type(heavy))
					{with_effector}
				}
			}
	    }		    
		{delay 0.1 
			{delete}
		}
	}
}
		
;-----------------------------Normand Pack