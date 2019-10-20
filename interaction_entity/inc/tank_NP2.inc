 ;-------------NP
{"turret2"
	{on spawn
		{call "update_turret2"}
	}
	{on "turret2_break" overload
		{components "turret2" break}
	}
	{on break
		{if component "turret2"
			{if not user_control
				{if rand 0.8 {kill_crew "gunner3"}}
			}
			{tags add "turr2_break"}
			{call "update_turret2"}
			{spawn "tank_die_particle" "Turret2"}
			{spawn "circledust_norm" "Turret2"}
			{view start "smoke7"}
            			{delay 10
    				{view stop "smoke7"}
    				{set "smoke7" 0}
            			}
        		else component "body"
			{spawn "circledust_norm" "Turret2"}
		}
	}
	{on "tear_turret2"
		{if not tagged "turret2_teared"
			{tags add "turret2_teared"}
			{components "turret2" destroy}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret2" id "turret2"
					{impulse dir 0.5 1}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
						{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret2"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{if  tagged "turret2_teared"
			{bone cut "turret2"}
		else
                    		{call "tear_turret2"}
		}
	}
}
{"turret3"
	{on spawn
		{call "update_turret3"}
	}
	{on "turret3_break" overload
		{components "turret3" break}
	}
	{on break
		{if component "turret3"
			{if not user_control
				{if rand 0.8 {kill_crew "gunner4"}}
			}
			{tags add "turr3_break"}
			{call "update_turret3"}
			{spawn "tank_die_particle" "Turret3"}
			{spawn "circledust_norm" "Turret3"}
			{view start "smoke8"}
			{delay 10
    				{view stop "smoke8"}
    				{set "smoke8" 0}
            			}
        		else component "body"
			{spawn "circledust_norm" "Turret3"}
		}
	}
	{on "tear_turret3"
		{if not tagged "turret3_teared"
			{tags add "turret3_teared"}
			{components "turret3" destroy}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret3" id "turret3"
					{impulse dir 0.5 1}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
						{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret3"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{if  tagged "turret3_teared"
			{bone cut "turret3"}
		else
                    		{call "tear_turret3"}
		}
	}
}
{"turret4"
	{on spawn
		{call "update_turret4"}
	}
	{on "turret4_break" overload
		{components "turret4" break}
	}
	{on break
		{if component "turret4"
			{if not user_control
				{if rand 0.6 {kill_crew "gunner5"}}
				{if rand 0.3 {kill_crew "charger5"}}	
			}
			{tags add "turr4_break"}
			{call "update_turret4"}
			{spawn "tank_die_particle" "Turret4"}
			{spawn "circledust_norm" "Turret4"}
			{view start "smoke12"}
		                {delay 10
    				{view stop "smoke12"}
    				{set "smoke12" 0}
            			}
        		else component "body"
			{spawn "circledust_norm" "Turret4"}
		}
	}
	{on "tear_turret4"
		{if not tagged "turret4_teared"
			{tags add "turret4_teared"}
			{components "turret4" destroy}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret4" id "turret4"
					{impulse dir 0.5 1}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
						{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret4"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{if  tagged "turret4_teared"
			{bone cut "turret4"}
		else
                    		{call "tear_turret4"}
		}
	}
}
{"turret5"
	{on spawn
		{call "update_turret5"}
	}
	{on "turret5_break" overload
		{components "turret5" break}
	}
	{on break
		{if component "turret5"
			{if not user_control
				{if rand 0.6 {kill_crew "gunner6"}}
				{if rand 0.3 {kill_crew "charger6"}}	
			}
			{tags add "turr5_break"}
			{call "update_turret5"}
			{spawn "tank_die_particle" "Turret5"}
			{spawn "circledust_norm" "Turret5"}
			{view start "smoke11"}
            			{delay 10
    				{view stop "smoke11"}
    				{set "smoke11" 0}
            			}
        		else component "body"
			{spawn "circledust_norm" "Turret5"}
		}
	}
	{on "tear_turret5"
		{if not tagged "turret5_teared"
			{tags add "turret5_teared"}
			{components "turret5" destroy}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret5" id "turret5"
					{impulse dir 0.5 1}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
						{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret5"
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}
	{on "cut_parts"
		{if  tagged "turret5_teared"
			{bone cut "turret5"}
		else
                    		{call "tear_turret5"}
		}
	}
}
 ;-------------NP
{"multiturret tank"
;   {friction 1}
;   {restitution 0.3}
    (include "../tank/general_scripts_defines.inc")

;MEGA BUILDING BEGIN
=============================================================================================================================================================================
    (define "damage_process_pierce" ;by Svoyak  ;define's call's see in tank-armoredcar.inc, tank-light.inc, tank-medium.inc & tank-heavy.inc.
;=================================
                {if stuff "%staff"
                    ("gun_hit" rand(%pierce_gun))
 ;-------------NP
	    ("gun2_hit" rand(%pierce_gun2))
	    ("gun3_hit" rand(%pierce_gun3))
 ;-------------NP			
                    ("track_hit" max_rand(%pierce_front_back_track) min_rand(%pierce_left_right_track))
                    {if volume "body"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_body__kill_charger {kill_crew "charger"}}
                        {if rand %pierce_body__kill_driver {kill_crew "driver"}}
                        {if rand %pierce_body__kill_gunner {kill_crew "gunner"}}
                        {if rand %pierce_body__kill_commander {kill_crew "commander"}}
                        {if rand %pierce_body__kill_gunner2 {kill_crew "gunner2"}}
 ;-------------NP
	        ;{if rand %pierce_body__kill_radist {kill_crew "radist"}}
	        {if rand %pierce_body__kill_gunner3 {kill_crew "gunner3"}}
	        {if rand %pierce_body__kill_gunner4 {kill_crew "gunner4"}}
	        {if rand %pierce_body__kill_gunner5 {kill_crew "gunner5"}}
	        {if rand %pierce_body__kill_gunner6 {kill_crew "gunner6"}}
	        {if rand %pierce_body__kill_charger5 {kill_crew "charger5"}}
	        {if rand %pierce_body__kill_charger6 {kill_crew "charger6"}}  
 ;-------------NP
                        {if rand %pierce_body__body_brake
                            {if work "body"
                                {components "body" break}
                                {unlink_trailer}
                                {call "stat_body_break"}
                                {damage_report "body" "component/body_break"}
                                {delay 2
                                    {crew_emit}
                                }
                                {delay 4
                                    {crew_emit}
                                }
                                {delay 6
                                    {crew_emit}
                                }
                                {able "select" 0}
								else
									{delay 2
										{crew_emit}
									}
									{delay 4
										{crew_emit}
									}
									{delay 6
										{crew_emit}
									}
                            }
						else rand %pierce_body__body_destroy
							{call "mp_destroy"}
							{if rand 0.35 
								{call "explosive_broken"}
							}
                            {delay 2
								{able "select" 0}
                            }
                        else operatable 
                            {damage_report "body" "component/shock"}
                        else
                            {damage_report "body" "component/body_pierced"}
                        }

                            ;================симул€ци€ контузии
                            {if operatable
                                {if work "mover"
                                        {chassis_work 0}
                                        {tags add "stopped"}
                                }
                                {if work "turret"
                                    {ik_enable "turret" 0}
                                    {tags add "turr_jummed"}
                                }
 ;-------------NP
		{if work "turret2"
                                    {ik_enable "turret2" 0}
                                    {tags add "turr2_jummed"}
                                }
		{if work "turret3"
                                    {ik_enable "turret3" 0}
                                    {tags add "turr3_jummed"}
                                }
		{if work "turret4"
                                    {ik_enable "turret4" 0}
                                    {tags add "turr4_jummed"}
                                }
		{if work "turret5"
                                    {ik_enable "turret5" 0}
                                    {tags add "turr5_jummed"}
                                }
                                ;{weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
		{weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "gun3" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}{weapon_work "mgun4" 0}{weapon_work "mgun5" 0}{weapon_work "mgun6" 0}
 ;-------------NP

                                {delay %crew_shock_time
                                    {if not tagged "gun_brake"
                                        {weapon_work "gun" 1}
                                    }
 ;-------------NP
                                    ;{weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
		{weapon_work "gun2" 1}{weapon_work "gun3" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}{weapon_work "mgun4" 1}{weapon_work "mgun5" 1}{weapon_work "mgun6" 1}
 ;-------------NP
                                    {if tagged "stopped"
                                        {tags remove "stopped"}
                                        {if work "mover"
                                            {if not tagged "engine_brake"
                                                {chassis_work 1}
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
                                            {ik_enable "turret" 1}
                                        }
                                    }
 ;-------------NP
		    {if tagged "turr2_jummed"
                                        {if tagged "turret2_brake"
                                            {tags remove "turr2_jummed"}
                                        else tagged "turret2_stopped_by_body"
                                            {tags remove "turr2_jummed"}
                                        else
                                            {tags remove "turr2_jummed"}
                                            {ik_enable "turret2" 1}
                                        }
                                    }
		    {if tagged "turr3_jummed"
                                        {if tagged "turret3_brake"
                                            {tags remove "turr3_jummed"}
                                        else tagged "turret3_stopped_by_body"
                                            {tags remove "turr3_jummed"}
                                        else
                                            {tags remove "turr3_jummed"}
                                            {ik_enable "turret3" 1}
                                        }
                                    }
		    {if tagged "turr4_jummed"
                                        {if tagged "turret4_brake"
                                            {tags remove "turr4_jummed"}
                                        else tagged "turret4_stopped_by_body"
                                            {tags remove "turr4_jummed"}
                                        else
                                            {tags remove "turr4_jummed"}
                                            {ik_enable "turret4" 1}
                                        }
                                    }
		    {if tagged "turr5_jummed"
                                        {if tagged "turret5_brake"
                                            {tags remove "turr5_jummed"}
                                        else tagged "turret5_stopped_by_body"
                                            {tags remove "turr5_jummed"}
                                        else
                                            {tags remove "turr5_jummed"}
                                            {ik_enable "turret5" 1}
                                        }
                                    }
 ;-------------NP
                                }

                            }

                    else volume "turret"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_turret__explosive
                            {call "stat_break"}
                            {delay 0.5
                                {call "_explosion"}
                            }
                        }
                        {if hit_side front
                           {if rand %pierce_turret_front__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }

                            {if rand %pierce_turret_front__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
		{tags add "turr_break"}
                            }

                        else hit_side back
                            {if rand %pierce_turret_back__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }

                            {if rand %pierce_turret_back__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
		{tags add "turr_break"}
                            }

                        else
                            {if rand %pierce_turret_left_right__gun_brake
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            }
                            {if rand %pierce_turret_left_right__turret_brake
                                {components "turret" break}
                                {ik_enable "turret" 0}
		{tags add "turr_break"}
                            }
                        }
                        {if rand %pierce_turret__kill_charger {kill_crew "charger"}}
                        {if rand %pierce_turret__kill_driver {kill_crew "driver"}}
                        {if rand %pierce_turret__kill_gunner {kill_crew "gunner"}}
                        {if rand %pierce_turret__kill_commander {kill_crew "commander"}}
                        {if rand %pierce_turret__kill_gunner2 {kill_crew "gunner2"}}

                        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret" 0}
                                    {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
                                    {tags add "turr_jummed"}
                                    {delay %crew_shock_time
                                        {if not tagged "gun_brake"
                                            {weapon_work "gun" 1}
                                        }
                                        {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
                                        {if tagged "turr_jummed"
                                                {if tagged "turret_brake"
                                                    {tags remove "turr_jummed"}
                                                else tagged "turret_stopped_by_body"
                                                    {tags remove "turr_jummed"}
                                                else
                                                    {tags remove "turr_jummed"}
                                                    {ik_enable "turret" 1}
                                                }
                                        }
                                    }
                        }
 ;-------------NP
                    else volume "turret2"
                        {burn fx "smoke_dead_tank3" fake}

                         {if hit_side front
                             {if rand %pierce_turret2_front__turret2_brake
                                {components "turret2" break}
                                {ik_enable "turret2" 0}
		{tags add "turr2_break"}
                            }

                        else hit_side back
                            {if rand %pierce_turret2_back__turret2_brake
                                {components "turret2" break}
                                {ik_enable "turret2" 0}
		{tags add "turr2_break"}
                            }

                        else
                            {if rand %pierce_turret2_left_right__turret2_brake
                                {components "turret2" break}
                                {ik_enable "turret2" 0}
		{tags add "turr2_break"}
                            }
                        }
                        {if rand %pierce_turret2__kill_gunner3 {kill_crew "gunner3"}}
                        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret2" 0}
                                    {weapon_work "mgun3" 0}
                                    {tags add "turr2_jummed"}
                                    {delay %crew_shock_time
                                        {weapon_work "mgun3" 1}
                                        {if tagged "turr2_jummed"
                                                {if tagged "turret2_brake"
                                                    {tags remove "turr2_jummed"}
                                                else tagged "turret2_stopped_by_body"
                                                    {tags remove "turr2_jummed"}
                                                else
                                                    {tags remove "turr2_jummed"}
                                                    {ik_enable "turret2" 1}
                                                }
                                        }
                                    }
                        }
                    else volume "turret3"
                        {burn fx "smoke_dead_tank3" fake}

                         {if hit_side front
                             {if rand %pierce_turret3_front__turret3_brake
                                {components "turret3" break}
                                {ik_enable "turret3" 0}
		{tags add "turr3_break"}
                            }

                        else hit_side back
                            {if rand %pierce_turret3_back__turret3_brake
                                {components "turret3" break}
                                {ik_enable "turret3" 0}
		{tags add "turr3_break"}
                            }

                        else
                            {if rand %pierce_turret3_left_right__turret3_brake
                                {components "turret3" break}
                                {ik_enable "turret3" 0}
		{tags add "turr3_break"}
                            }
                        }
                        {if rand %pierce_turret3__kill_gunner4 {kill_crew "gunner4"}}
                        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret3" 0}
                                    {weapon_work "mgun4" 0}
                                    {tags add "turr3_jummed"}
                                    {delay %crew_shock_time
                                        {weapon_work "mgun4" 1}
                                        {if tagged "turr3_jummed"
                                                {if tagged "turret3_brake"
                                                    {tags remove "turr3_jummed"}
                                                else tagged "turret3_stopped_by_body"
                                                    {tags remove "turr3_jummed"}
                                                else
                                                    {tags remove "turr3_jummed"}
                                                    {ik_enable "turret3" 1}
                                                }
                                        }
                                    }
                        }
                    else volume "turret4"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_turret4__explosive
                            {call "stat_break"}
                            {delay 0.5
                                {call "_explosion"}
                            }
                        }
                        {if hit_side front
                           {if rand %pierce_turret4_front__gun2_brake
                                {if work "gun2"
                                    {components "gun2" break}
                                    {damage_report "gun2" "component/gun2_broken"}
                                }
                            }

                            {if rand %pierce_turret4_front__turret4_brake
                                {components "turret4" break}
                                {ik_enable "turret4" 0}
		{tags add "turr4_break"}
                            }

                        else hit_side back
                            {if rand %pierce_turret4_back__gun2_brake
                                {if work "gun2"
                                    {components "gun2" break}
                                    {damage_report "gun2" "component/gun2_broken"}
                                }
                            }

                            {if rand %pierce_turret4_back__turret4_brake
                                {components "turret4" break}
                                {ik_enable "turret4" 0}
		{tags add "turr4_break"}
                            }

                        else
                            {if rand %pierce_turret4_left_right__gun2_brake
                                {if work "gun2"
                                    {components "gun2" break}
                                    {damage_report "gun2" "component/gun2_broken"}
                                }
                            }
                            {if rand %pierce_turret4_left_right__turret4_brake
                                {components "turret4" break}
                                {ik_enable "turret4" 0}
		{tags add "turr4_break"}
                            }
                        }
                        {if rand %pierce_turret4__kill_charger5 {kill_crew "charger5"}}
                        {if rand %pierce_turret4__kill_gunner5 {kill_crew "gunner5"}}
	        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret4" 0}
                                    {weapon_work "gun2" 0}{weapon_work "mgun5" 0}
                                    {tags add "turr4_jummed"}
                                    {delay %crew_shock_time
                                        {if not tagged "gun2_brake"
                                            {weapon_work "gun2" 1}
                                        }
                                       {weapon_work "mgun5" 1}
                                        {if tagged "turr4_jummed"
                                                {if tagged "turret4_brake"
                                                    {tags remove "turr4_jummed"}
                                                else tagged "turret4_stopped_by_body"
                                                    {tags remove "turr4_jummed"}
                                                else
                                                    {tags remove "turr4_jummed"}
                                                    {ik_enable "turret4" 1}
                                                }
                                        }
                                    }
                        }
                    else volume "turret5"
                        {burn fx "smoke_dead_tank3" fake}

                        {if rand %pierce_turret5__explosive
                            {call "stat_break"}
                            {delay 0.5
                                {call "_explosion"}
                            }
                        }
                        {if hit_side front
                           {if rand %pierce_turret5_front__gun3_brake
                                {if work "gun3"
                                    {components "gun3" break}
                                    {damage_report "gun3" "component/gun3_broken"}
                                }
                            }
                            {if rand %pierce_turret5_front__turret5_brake
                                {components "turret5" break}
                                {ik_enable "turret5" 0}
		{tags add "turr5_break"}
                            }

                        else hit_side back
                            {if rand %pierce_turret5_back__gun3_brake
                                {if work "gun3"
                                    {components "gun3" break}
                                    {damage_report "gun3" "component/gun3_broken"}
                                }
                            }

                            {if rand %pierce_turret5_back__turret5_brake
                                {components "turret5" break}
                                {ik_enable "turret5" 0}
		{tags add "turr5_break"}
                            }

                        else
                            {if rand %pierce_turret5_left_right__gun3_brake
                                {if work "gun3"
                                    {components "gun3" break}
                                    {damage_report "gun3" "component/gun3_broken"}
                                }
                            }
                            {if rand %pierce_turret5_left_right__turret5_brake
                                {components "turret5" break}
                                {ik_enable "turret5" 0}
		{tags add "turr5_break"}
                            }
                        }
                        {if rand %pierce_turret5__kill_charger6 {kill_crew "charger6"}}
                        {if rand %pierce_turret5__kill_gunner6 {kill_crew "gunner6"}}
	        ;==============симул€ци€ контузии
                        {if operatable
                                    {ik_enable "turret5" 0}
                                    {weapon_work "gun3" 0}{weapon_work "mgun6" 0}
                                    {tags add "turr5_jummed"}
                                    {delay %crew_shock_time
                                        {if not tagged "gun3_brake"
                                            {weapon_work "gun3" 1}
                                        }
                                       {weapon_work "mgun6" 1}
                                        {if tagged "turr5_jummed"
                                                {if tagged "turret5_brake"
                                                    {tags remove "turr5_jummed"}
                                                else tagged "turret5_stopped_by_body"
                                                    {tags remove "turr5_jummed"}
                                                else
                                                    {tags remove "turr5_jummed"}
                                                    {ik_enable "turret5" 1}
                                                }
                                        }
                                    }
                        }
 ;-------------NP
                    else volume "mantlet"
                           {burn fx "smoke_dead_tank3" fake}

                            {if rand (* %pierce_mantlet__gun_brake 0.7)
                                {if work "gun"
                                    {components "gun" break}
                                    {damage_report "gun" "component/gun_broken"}
                                }
                            else
                                {call "turret_break"}
                            }
                            ;{if rand %pierce_turret_front__turret_brake
                            ;   {components "turret" break}
                            ;}

                    else volume "explosive"
                        {if rand (* %pierce_inventory__explosive 0.4)
                            {call "explosion"}
                        }
                    else volume "engine"
                        {if rand %pierce_engine__engine_brake
                            {if work "engine"
                                {components "engine" break}
                            }
                            {if rand %pierce_engine__engine_burn
                                {delay 3 2
                                    {call "_burn"}
                                }
                            }
                        }
                    }
                };stuff
	{call "update_turret2"}
	{call "update_turret3"}
	{call "update_turret4"}
	{call "update_turret5"}
    )
    (define "damage_process_bullet_hit" ;by Svoyak
;====================================
                    {if stuff "%staff"
                    {impulse dir %imp}
                    ;{if hit_angle > %angle_hit
                        {if volume "body"
                                {if rand %hit_body__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_body__engine_brake
                                    {if work "engine"
                                        {components "engine" break}
                                    }
                                }
                                {if rand %hit_body__body_destroy
                                    {call "mp_destroy"}
                                else rand %hit_body__body_brake
                                    {components "body" break}
                                    {damage_report "body" "component/body_break"}
                                }
                            
                        else volume "engine"
                                {if rand %hit_body__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_engine__engine_brake
                                    {if work "engine"
                                        {components "engine" break}
                                    }
                                }
                                {if rand %hit_body__body_brake
                                    {components "body" break}
                                    {damage_report "body" "component/body_break"}
                                }
                        else volume "turret"
                                {if rand %hit_turret__explosive
                                    {call "explosion"}
                                }
                                {if hit_side front
                                    {if rand %hit_turret_front__gun_brake
                                        {if work "gun"
                                            {components "gun" break}
                                            {damage_report "gun" "component/gun_broken"}
                                        }
                                    }
                                }
                                {if rand %hit_turret__turret_destroy
                                    {components "turret" destroy}
                                else rand %hit_turret__turret_brake
                                    {components "turret" break}
                                }
 ;-------------NP
                        else volume "turret2"
                               {if rand %hit_turret2__turret2_destroy
                                    {components "turret2" destroy}
                                else rand %hit_turret2__turret2_brake
                                    {components "turret2" break}
                                }
                        else volume "turret3"
                               {if rand %hit_turret3__turret3_destroy
                                    {components "turret3" destroy}
                                else rand %hit_turret3__turret3_brake
                                    {components "turret3" break}
                                }
                        else volume "turret4"
                                {if rand %hit_turret4__explosive
                                    {call "explosion"}
                                }
                                {if hit_side front
                                    {if rand %hit_turret4_front__gun2_brake
                                        {if work "gun2"
                                            {components "gun2" break}
                                            {damage_report "gun2" "component/gun2_broken"}
                                        }
                                    }
                                }
                                {if rand %hit_turret4__turret4_destroy
                                    {components "turret4" destroy}
                                else rand %hit_turret4__turret4_brake
                                    {components "turret4" break}
                                }
                        else volume "turret5"
                                {if rand %hit_turret5__explosive
                                    {call "explosion"}
                                }
                                {if hit_side front
                                    {if rand %hit_turret5_front__gun3_brake
                                        {if work "gun3"
                                            {components "gun3" break}
                                            {damage_report "gun3" "component/gun3_broken"}
                                        }
                                    }
                                }
                                {if rand %hit_turret5__turret5_destroy
                                    {components "turret5" destroy}
                                else rand %hit_turret5__turret5_brake
                                    {components "turret5" break}
                                }
 ;-------------NP
                        else volume "mantlet"
                                {if rand %hit_turret__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_turret_front__gun_brake
                                    {if work "gun"
                                        {components "gun" break}
                                        {damage_report "gun" "component/gun_broken"}
                                    }
                                }
                                {if rand %hit_turret__turret_destroy
                                    {components "turret" destroy}
                                else rand %hit_turret__turret_brake
                                    {components "turret" break}
                                }
                        }
                    ;};if hit_angle end
                    }; stuff
;=====================================
    )

    (define "blast_damage_contusion" ;by Svoyak
        {if volume "trackleft"
            ;do nothing
        else volume "trackright"
            ;do nothing
        else volume "roller"
            ;do nothing
        else volume "wheel_work"
            ;do nothing
        else volume "wheel"
            ;do nothing
        else
            {if operatable
                {if not "already_blasted"
            
                    {if min_energy %blast_energy
                        {set "already_blasted" 1}
                        {if rand %blast_rand_contusion
                            {delay 0.5
                                {set "already_blasted" 0}
                            }
                            ;{con "%blast_energy"}
                            {damage_report "body" "component/shock"}
                            {chassis_work 0}
                            {tags add "stopped1"}
                            
                            {if work "turret"
                                {ik_enable "turret" 0}
                                {tags add "turr_jummed1"}
                            }
 ;-------------NP
	           {if work "turret2"     
		{ik_enable "turret2" 0}
                                {tags add "turr2_jummed1"}
                            } 
	            {if work "turret3"
                                {ik_enable "turret3" 0}
                                {tags add "turr3_jummed1"}
                            } 
	            {if work "turret4"
                                {ik_enable "turret4" 0}
                                {tags add "turr4_jummed1"}
                            } 
                            {if work "turret5"
                                {ik_enable "turret5" 0}
                                {tags add "turr5_jummed1"}
                            }
	            {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "gun3" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}{weapon_work "mgun4" 0}{weapon_work "mgun5" 0}{weapon_work "mgun6" 0}	
                            ;{weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
 ;-------------NP
                            {delay %blast_crew_shock_time
                                {if not tagged "gun_brake"
                                    {weapon_work "gun" 1}
                                }
;--------------NP
		{if not tagged "gun2_brake"
                                    {weapon_work "gun2" 1}
                                }
		{if not tagged "gun3_brake"
                                    {weapon_work "gun3" 1}
                                }
                                ;{weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
		{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}{weapon_work "mgun4" 1}{weapon_work "mgun5" 1}{weapon_work "mgun6" 1}
;--------------NP                                
		{if tagged "stopped1"
                                    {tags remove "stopped1"}
                                    {if work "mover"
                                        {if not tagged "engine_brake"
                                            {chassis_work 1}
                                        }
                                    }
                                }
                                {if tagged "turr_jummed1"
                                        {if tagged "turret_brake"
                                            {tags remove "turr_jummed1"}
                                            
                                        else tagged "turret_stopped_by_body"
                                            {tags remove "turr_jummed1"}
                                        else
                                            {tags remove "turr_jummed1"}
                                            {ik_enable "turret" 1}
                                        }
                                }
;--------------NP  
                                {if tagged "turr2_jummed1"
                                        {if tagged "turret2_brake"
                                            {tags remove "turr2_jummed1"}
                                        else tagged "turret2_stopped_by_body"
                                            {tags remove "turr2_jummed1"}
                                        else
                                            {tags remove "turr2_jummed1"}
                                            {ik_enable "turret2" 1}
                                        }
                                }
                                {if tagged "turr3_jummed1"
                                        {if tagged "turret3_brake"
                                            {tags remove "turr3_jummed1"}
                                        else tagged "turret3_stopped_by_body"
                                            {tags remove "turr3_jummed1"}
                                        else
                                            {tags remove "turr3_jummed1"}
                                            {ik_enable "turret3" 1}
                                        }
                                }
		{if tagged "turr4_jummed1"
                                        {if tagged "turret4_brake"
                                            {tags remove "turr4_jummed1"}
                                        else tagged "turret4_stopped_by_body"
                                            {tags remove "turr4_jummed1"}
                                        else
                                            {tags remove "turr4_jummed1"}
                                            {ik_enable "turret4" 1}
                                        }
                                }
                                {if tagged "turr5_jummed1"
                                        {if tagged "turret5_brake"
                                            {tags remove "turr5_jummed1"}
                                        else tagged "turret5_stopped_by_body"
                                            {tags remove "turr5_jummed1"}
                                        else
                                            {tags remove "turr5_jummed1"}
                                            {ik_enable "turret5" 1}
                                        }
                                }
;--------------NP  
                            }
                        else
                            {delay 0.5
                                {set "already_blasted" 0}
                            }
                        }
                    }
                }
            }
        }
        
    )
;MEGA BUILDING END =============================================================================================================================================================================

    {on repair
	    {if component "turret"
    		{view stop "smoke3"}
            {tags remove "turr_break"}
            {call "update_turret"}
            {tags remove "turret_brake"}
;----------------NP
        else component "turret2"
            {view stop "smoke7"}
            {tags remove "turr2_break"}	
            {call "update_turret2"}
            {tags remove "turret2_brake"}
        else component "turret3"
            {view stop "smoke8"}
            {tags remove "turr3_break"}		
            {call "update_turret3"}
            {tags remove "turret3_brake"}
        else component "turret4"
            {view stop "smoke12"}
            {tags remove "turr4_break"}	
            {call "update_turret4"}
            {tags remove "turret4_brake"}
        else component "turret5"
            {view stop "smoke11"}
            {tags remove "turr5_break"}	
            {call "update_turret5"}
            {tags remove "turret5_brake"}
;----------------NP
        else component "body"
            {view stop "smoke4"}
            {call "update_turret"}
            {tags remove "turret_stopped_by_body"}
            {tags remove "body_brake"}
            {able "select" 1}
        else component "engine"
            {tags remove "engine_brake"}
        }
    }
	{on "update_turret"
		{if not tagged "turr_break"
			{if work "body"
				{ik_enable "turret" 1}
			 else
				{ik_enable "turret" 0}
			}
		 else
			{ik_enable "turret" 0}
		}
    	}
;----------------NP
	{on "update_turret2"
		{if not tagged "turr2_break"
			{ik_enable "turret2" 1}
		 else
			{ik_enable "turret2" 0}
		}
    	}
	{on "update_turret3"
		{if not tagged "turr3_break"
			{ik_enable "turret3" 1}
		 else
			{ik_enable "turret3" 0}
		}
    	}
	{on "update_turret4"
		{if not tagged "turr4_break"
			{ik_enable "turret4" 1}
		 else
			{ik_enable "turret4" 0}
		}
    	}
	{on "update_turret5"
		{if not tagged "turr5_break"
			{ik_enable "turret5" 1}
		 else
			{ik_enable "turret5" 0}
		}
    	}
;----------------NP
}; end of "tank"

;----------------NP
{"multiturret tank"
	{inflammation_time 35}
	{on blast_hit
		{if min_energy 30
			{impulse up 1.5 0.1 dir 2.5 0.1}
			{if volume "turret"
				{if rand 0.5
					{call "tear_turret"}
				}
			}
		else min_energy 14
			{impulse up 0.25 0.1 dir 0.35 0.1}
			{if volume "turret"
				{if rand 0.3
					{call "tear_turret"}
				}
			}
		 else min_energy 8
			{impulse up 0.2 0.1 dir 0.3 0.1}
		 else min_energy 3
		 	;{ani_play "hit"}
		}
	}
	{on "_explosion"
                {blastwave c4 15 r0 2.5 r1 10}
		{impulse up 1 1 dir 0.2 0.2}
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
		}
	}
(include "../tank-multiturret.inc")
}
;----------------NP
