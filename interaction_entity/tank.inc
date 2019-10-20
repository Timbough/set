{"tank"
;   {friction 1}
;   {restitution 0.3}
    (include "tank/general_scripts_defines.inc")

;MEGA BUILDING BEGIN
=============================================================================================================================================================================
    (define "damage_process_pierce" ;by Svoyak  ;define's call's see in tank-armoredcar.inc, tank-light.inc, tank-medium.inc & tank-heavy.inc.
;=================================
        {if stuff "%staff"
	{if not stuff "capped"
		{if rand %shell_shatter
			{tags add "shell_shattered"}
			{bullet_detonate}
			{damage_report "body" "component/shell_shatter"}
			{delay 0.1
				{tags remove "shell_shattered"}
			}
		else
			{set "penetrated" 1}
			{delay 0.2
				{set "penetrated" 0}
			}
		}
	}
	{if not tagged "shell_shattered"
		{if stuff "shell"
			{if volume "body"
				{damage_report "penetration" "component/penetration_body"}
			else volume "turret"
				{damage_report "penetration" "component/penetration_turret"}
			else volume "engine"
				{damage_report "penetration" "component/penetration_engine"}
			else volume "gun"
				{damage_report "penetration" "component/penetration_gun"}
			else volume "mantlet"
				{damage_report "penetration" "component/penetration_mantlet"}
			}
		}
		{set "penetrated" 1}
		{delay 0.2
			{set "penetrated" 0}
		}
            ("gun_hit" rand(%pierce_gun))
            ("track_hit" max_rand(%pierce_front_back_track) min_rand(%pierce_left_right_track))
            {if volume "body"
				{if "internal_fire"
					{burn fx "smoke_dead_tank1"}
				}
                {burn fx "smoke_dead_tank3" fake}

                {if rand %pierce_body__kill_charger {kill_crew "charger"}}
                {if rand %pierce_body__kill_driver {kill_crew "driver"}}
                {if rand %pierce_body__kill_gunner {kill_crew "gunner"}}
                {if rand %pierce_body__kill_commander {kill_crew "commander"}}
                {if rand %pierce_body__kill_gunner2 {kill_crew "gunner2"}}
				{if rand (* %pierce_engine__fuel_leak 0.1)
					{call "fuel_leak"}
				}
				{If tagged "light_tank"
					("ammunition_loads" rand(%pierce_body__ammo_fire) ammo(250))
				else tagged "medium_tank"
					("ammunition_loads" rand(%pierce_body__ammo_fire) ammo(290))
				else tagged "heavy_tank"
					("ammunition_loads" rand(%pierce_body__ammo_fire) ammo(340))
				else
					("ammunition_loads" rand(%pierce_body__ammo_fire) ammo(250))
				}
				{if rand (* %pierce_internal_damage 0.9)
					{if not tagged "internal_damage"
						{tags add "internal_damage"}
						{reset_manual_control}
						{able select 0}
						{able repaired 0}
						{call "notify_break"}
						{damage_report "internal" "component/internal_destroyed"}
						{delay 3 1
							{call "engine stop view"}
							{crew_emit}
							{delay 2{crew_emit}}
							{delay 4{crew_emit}}
							{delay 6{crew_emit}}
						}
					}
				}
				{if "turret"
					{if rand (* %pierce_turret_drive_break 0.2)
						{if not tagged "turret_drive_destroyed"
							{tags add "turret_drive_destroyed"}
							{components "turret_drive" destroy}
							{damage_report "turret_drive" "component/turret_drive_destroyed"}
							{ik_enable "turret" 0}
						}
					else rand (* %pierce_turret_drive_break 0.5)
						{if work "turret_drive"
							{components "turret_drive" break}
							{damage_report "turret_drive" "component/turret_drive_broken"}
							{ik_enable "turret" 0}
						}
					}
					{if rand (* %pierce_gun_breech 0.4)
						{if work "gun_breech"
							{components "gun_breech" break}
							{damage_report "gun_breech" "component/gun_breech_broken"}
						}
					}
				}
				{if not "turret"
					{if rand %pierce_gun_breech
						{if work "gun_breech"
							{components "gun_breech" break}
							{damage_report "gun_breech" "component/gun_breech_broken"}
						}
					}
				}
                {if hit_side front
					{if rand (* %pierce_transmission_break 0.4)
						{if not tagged "transmission_destroyed"
							{tags add "transmission_destroyed"}
							{call "transmission_break"}
						}
					else rand %pierce_transmission_break
						{if work "transmission"
							{call "transmission_break"}
						}
					}
				else hit_side back
					{if rand (* %pierce_transmission_break 0.4)
						{if work "transmission"
							{call "transmission_break"}
						}
					}
				else
					{if rand (* %pierce_transmission_break 0.6)
						{if work "transmission"
							{call "transmission_break"}
						}
					}
				}
				{if rand %pierce_body__body_brake
					{if work "body"
						{components "body" break}
						{unlink_trailer}
						{call "stat_body_break"}
						{damage_report "body" "component/body_break"}
						{set "armor_heavydamage" 1}
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
				else rand (* %pierce_body__body_destroy 0.75)
						{call "mp_destroy"}
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
            else volume "turret"						
				{if "internal_fire"
					{burn fx "smoke_dead_tank1"}
				}
                {burn fx "smoke_dead_tank3" fake}
                {if rand %pierce_turret__explosive
                    {call "stat_break"}
                    {delay 0.2
                        {call "_explosion"}
                    }
                }
				{if rand %pierce_turret__tear
					{if not "turret_teared"
						{call "tear_turret_ap"}
						{view stop "smoke4_7"}
						{view stop "smoke4_5"}
					}
				}
				{If tagged "light_tank"
					("ammunition_loads" rand(%pierce_turret__ammo_fire) ammo(250))
				else tagged "medium_tank"
					("ammunition_loads" rand(%pierce_turret__ammo_fire) ammo(290))
				else tagged "heavy_tank"
					("ammunition_loads" rand(%pierce_turret__ammo_fire) ammo(340))
				else
					("ammunition_loads" rand(%pierce_turret__ammo_fire) ammo(250))
				}
				{if rand (* %pierce_internal_damage 0.8)
					{if not tagged "internal_damage"
						{tags add "internal_damage"}
						{reset_manual_control}
						{call "engine stop view"}
						{able select 0}
						{able repaired 0}
						{call "notify_break"}
						{damage_report "internal" "component/internal_destroyed"}
						{delay 3 1
							{call "engine stop view"}
							{crew_emit}
							{delay 2{crew_emit}}
							{delay 4{crew_emit}}
							{delay 6{crew_emit}}
						}
					}
				}
				{if "turret"
					{if rand (* %pierce_turret_drive_break 0.4)
						{if not tagged "turret_drive_destroyed"
							{tags add "turret_drive_destroyed"}
							{components "turret_drive" destroy}
							{damage_report "turret_drive" "component/turret_drive_destroyed"}
							{ik_enable "turret" 0}
						}
					else rand %pierce_turret_drive_break
						{if work "turret_drive"
							{components "turret_drive" break}
							{damage_report "turret_drive" "component/turret_drive_broken"}
							{ik_enable "turret" 0}
						}
					}
					{if rand %pierce_gun_breech
						{if work "gun_breech"
							{components "gun_breech" break}
							{damage_report "gun_breech" "component/gun_breech_broken"}
						}
					}
				}
				{if rand (* %pierce_gun_drive_break 0.4)
					{if not tagged "vertical_drive_destroyed"
						{tags add "vertical_drive_destroyed"}
						{components "turret_drive" destroy}
						{damage_report "vertical_drive" "component/vertical_drive_destroyed"}
						{ik_enable "gun_rot" 0}
					}
				else rand %pierce_gun_drive_break
					{if work "vertical_drive"
						{components "vertical_drive" break}
						{damage_report "vertical_drive" "component/vertical_drive_broken"}
						{ik_enable "gun_rot" 0}
					}
				}
				{if hit_side front
                    {if rand (* %pierce_turret_front__gun_brake 0.5)
                        {if work "gun"
                            {components "gun" break}
                            {damage_report "gun" "component/gun_broken"}
                        }
                    }
                    {if rand (* %pierce_turret_front__turret_brake 0.5)
                        {components "turret" break}
						{set "turretarmor_heavydamage" 1}
						{ik_enable "turret" 0}
						{tags add "turr_break"}
					}
                else hit_side back
                    {if rand (* %pierce_turret_back__gun_brake 0.5)
                        {if work "gun"
                            {components "gun" break}
                            {damage_report "gun" "component/gun_broken"}
                        }
                    }
                    {if rand (* %pierce_turret_back__turret_brake 0.6)
                        {components "turret" break}
						{set "turretarmor_heavydamage" 1}
                        {ik_enable "turret" 0}
						{tags add "turr_break"}
                    }
                else
                    {if rand (* %pierce_turret_left_right__gun_brake 0.75)
						{if work "gun"
                            {components "gun" break}
                            {damage_report "gun" "component/gun_broken"}
                        }
                    }
                    {if rand (* %pierce_turret_left_right__turret_brake 0.6)
                        {components "turret" break}
						{set "turretarmor_heavydamage" 1}
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
								{if work "turret_drive"
                                   	{ik_enable "turret" 1}
								}
                            }
                        }
                    }
                }
			else volume "mantlet"
                {burn fx "smoke_dead_tank3" fake}
			    {if rand %pierce_mantlet__gun_destroy
					{if not tagged "gun_destroyed"
						{tags add "gun_destroyed"}
						{components "gun" destroy}
						{damage_report "gun" "component/gun_destroyed"}
					}
				else rand (* %pierce_mantlet__gun_brake 0.7)
                    {if work "gun"
                        {components "gun" break}
                        {damage_report "gun" "component/gun_broken"}
                    }
                else
                    {call "turret_break"}
                }
            else volume "explosive"
				{if rand (* %pierce_inventory__explosive 0.8)
                    {call "explosion"}
			        {damage_report "body" "component/inventory_broken"}
                }
            else volume "engine"
				{if rand (* %pierce_engine__fuel_leak 0.7)
					{call "fuel_leak"}
				}
                {if rand (* %pierce_engine__engine_brake 0.3)
                    {if work "engine"
                        {components "engine" destroy}
						{damage_report "engine" "component/engine_destroyed"}
						{call "engine fullstop"}
                    }
                else rand %pierce_engine__engine_brake
					{if work "engine"
                        {components "engine" break}
						{call "engine fullstop"}
                    }
                    {if rand %pierce_engine__engine_burn
                        {delay 3 2
                    }
                }
            }
        }
		{if tagged "transmission_destroyed"
			{if tagged "turret_drive_destroyed"
				{if not tagged "internal_damage"
					{tags add "internal_damage"}
					{reset_manual_control}
					{call "engine stop view"}
					{able select 0}
					{able repaired 0}
					{call "notify_break"}
					{damage_report "components" "component/beyond_repair"}
					{delay 3 1
						{call "engine stop view"}
						{crew_emit}
						{delay 2{crew_emit}}
						{delay 4{crew_emit}}
						{delay 6{crew_emit}}
					}
				}
			}
		}
		}
	}

    )
    (define "damage_process_bullet_hit" ;by Svoyak
;====================================
	(define "armor_spall"
		{if not "armor_hit"
				{if "armor_spall"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{tags remove "ammo_overload"}
					{tags remove "ammo_normal_load"}
					{if stuff "%staff"
					{If tagged "light_tank"
						("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
					else tagged "medium_tank"
						("ammunition_loads" rand(%hit_body__ammo_fire) ammo(290))
					else tagged "heavy_tank"
						("ammunition_loads" rand(%hit_body__ammo_fire) ammo(340))
					else
						("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
					}
					}
				else "armor_heavydamage"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{delay 0.01 {damage_report "body" "component/armor_spall"}}
					{set "armor_spall" 1}
					{call "mp_destroy"}
				else "armor_damage"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{set "armor_heavydamage" 1}
					{delay 0.01 {damage_report "body" "component/armor_heavydamage"}}
					{components "body" break}
					{unlink_trailer}
					{call "stat_body_break"}
					{reset_manual_control}
					{able select 0}
					{crew_emit}
					{delay 2{crew_emit}}
					{delay 4{crew_emit}}
					{delay 6{crew_emit}}
				else
					{set "armor_damage" 1}
					{damage_report "body" "component/armor_damage"}
				}
		}
		{if not "penetrated"
			{set "armor_hit" 1}
			{delay 0.2 {set "armor_hit" 0}}
		}
	)
	(define "turret_armor_spall"
		{if not "armor_hit"
				{if "turretarmor_spall"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{tags remove "ammo_overload"}
					{tags remove "ammo_normal_load"}
					{if stuff "%staff"
					{If tagged "light_tank"
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(250))
					else tagged "medium_tank"
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(290))
					else tagged "heavy_tank"
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(340))
					else
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(250))
					}
					}
				else "turretarmor_heavydamage"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{delay 0.01 {damage_report "body" "component/turretarmor_spall"}}
					{set "turretarmor_spall" 1}
					{components "turret" destroy}
				else "turretarmor_damage"
                       			{if rand 0.3 {kill_crew "charger"}}
                        		{if rand 0.3 {kill_crew "driver"}}
                        		{if rand 0.3 {kill_crew "gunner"}}
                        		{if rand 0.3 {kill_crew "commander"}}
                        		{if rand 0.3 {kill_crew "gunner2"}}
					{set "turretarmor_heavydamage" 1}
					{delay 0.01 {damage_report "body" "component/turretarmor_heavydamage"}}
					{components "turret" break}

				else
					{set "turretarmor_damage" 1}
					{damage_report "body" "component/turretarmor_damage"}
				}
		}
		{if not "penetrated"
			{set "armor_hit" 1}
			{delay 0.2 {set "armor_hit" 0}}
		}
	)
;=========================================================
		    {if stuff "size_minimum"
			{if not stuff "heat"
			{if stuff "pierce"
				{delay 0.1
					{if not "penetrated"
						{if rand 0.05
							{start_sound "hit/medium/metal_whistle2"}
						}
					}
				}
			}
			}
		    }
		    {if stuff "size_small"
			{if not stuff "heat"
			{if stuff "pierce"
				{delay 0.1
					{if not "penetrated"
						{if rand 0.1
							{start_sound "hit/medium/metal_whistle2"}
						}
					}
				}
			}
			}
		    }
		    {if stuff "highvel_big"
			{if not stuff "heat"
			{if stuff "pierce"
				{delay 0.1
					{if not "penetrated"
						{if rand 0.1
							{start_sound "hit/big/metal_whistle2"}
						}
					}
				}
			}
			}
			{if stuff "fg" {spawn "dust_shot_big" 	"basis"}}
			{if not "armor_hit"
			{if volume "body"
				{If tagged "light_tank" {if rand 0.3 ("armor_spall")("crew_shock" crew_shock_time(14))}
				else tagged "medium_tank" {if rand 0.15 ("armor_spall")("crew_shock" crew_shock_time(12))}
				else tagged "heavy_tank" {if rand 0.05 ("armor_spall")("crew_shock" crew_shock_time(10))}
				else "super_heavy_tank" {if rand 0.01 ("armor_spall")("crew_shock" crew_shock_time(6))}
				else {if rand 0.15 ("armor_spall")("crew_shock" crew_shock_time(12))}
				}
			}
			{if volume "turret"
				{If tagged "light_tank" {if rand 0.4 ("turret_armor_spall")("crew_shock" crew_shock_time(14))}
				else tagged "medium_tank" {if rand 0.2 ("turret_armor_spall")("crew_shock" crew_shock_time(12))}
				else tagged "heavy_tank" {if rand 0.03 ("turret_armor_spall")("crew_shock" crew_shock_time(10))}
				else "super_heavy_tank" {if rand 0.01 ("turret_armor_spall")("crew_shock" crew_shock_time(6))}
				else {if rand 0.2 ("turret_armor_spall")("crew_shock" crew_shock_time(12))}
				}
			}
		    	}
		    }
		    {if stuff "shell_verybig"
			{if not stuff "heat"
			{if stuff "pierce"
				{delay 0.1
					{if not "penetrated"
						{if rand 0.1
							{start_sound "hit/big/metal_whistle2"}
						}
					}
				}
			}
			}
			{if stuff "fg" {spawn "dust_shot_big" 	"basis"}}
			{if not "armor_hit"
			{if volume "body"
				{If tagged "light_tank" {if rand 0.4 ("armor_spall")("crew_shock" crew_shock_time(15))}
				else tagged "medium_tank" {if rand 0.2 ("armor_spall")("crew_shock" crew_shock_time(13))}
				else tagged "heavy_tank" {if rand 0.1 ("armor_spall")("crew_shock" crew_shock_time(11))}
				else "super_heavy_tank" {if rand 0.05 ("armor_spall")("crew_shock" crew_shock_time(7))}
				else {if rand 0.2 ("armor_spall")("crew_shock" crew_shock_time(13))}
				}
			}
			{if volume "turret"
				{If tagged "light_tank" {if rand 0.5 ("turret_armor_spall")("crew_shock" crew_shock_time(15))}
				else tagged "medium_tank" {if rand 0.3 ("turret_armor_spall")("crew_shock" crew_shock_time(13))}
				else tagged "heavy_tank" {if rand 0.15 ("turret_armor_spall")("crew_shock" crew_shock_time(11))}
				else "super_heavy_tank" {if rand 0.07 ("turret_armor_spall")("crew_shock" crew_shock_time(7))}
				else {if rand 0.3 ("turret_armor_spall")("crew_shock" crew_shock_time(13))}
				}
			}
			}
		    }
		    {if stuff "shell_maximum"
			{if stuff "fg" {spawn "dust_shot_big" 	"basis"}}
			{if not "armor_hit"
			{if volume "body"
				{If tagged "light_tank" {if rand 0.6 ("armor_spall")("crew_shock" crew_shock_time(15))}
				else tagged "medium_tank" {if rand 0.3 ("armor_spall")("crew_shock" crew_shock_time(14))}
				else tagged "heavy_tank" {if rand 0.2 ("armor_spall")("crew_shock" crew_shock_time(12))}
				else "super_heavy_tank" {if rand 0.05 ("armor_spall")("crew_shock" crew_shock_time(8))}
				else {if rand 0.3 ("armor_spall")("crew_shock" crew_shock_time(14))}
				}
			}
			{if volume "turret"
				{If tagged "light_tank" {if rand 0.7 ("turret_armor_spall")("crew_shock" crew_shock_time(15))}
				else tagged "medium_tank" {if rand 0.4 ("turret_armor_spall")("crew_shock" crew_shock_time(14))}
				else tagged "heavy_tank" {if rand 0.25 ("turret_armor_spall")("crew_shock" crew_shock_time(12))}
				else "super_heavy_tank" {if rand 0.07 ("turret_armor_spall")("crew_shock" crew_shock_time(8))}
				else {if rand 0.4 ("turret_armor_spall")("crew_shock" crew_shock_time(14))}
				}
			}
			}
		    }
                    {if stuff "%staff"
		    {impulse dir %imp}
                    ;{if hit_angle > %angle_hit
                        {if volume "body"
				{if hit_side front
					{if rand (* %hit_tank__inter_spall 0.8)
						{damage_report "spall" "component/internal_spalling"}
                       				{if rand %hit_tank__kill_charger {kill_crew "charger"}}
                        			{if rand %hit_tank__kill_gunner {kill_crew "gunner"}}
                        			{if rand %hit_tank__kill_driver {kill_crew "driver"}}
                        			{if rand %hit_tank__kill_commander {kill_crew "commander"}}
                        			{if rand %hit_tank__kill_gunner2 {kill_crew "gunner2"}}
						{tags remove "ammo_overload"}
						{tags remove "ammo_normal_load"}
						{tags add "instant_explosion"}
						{If tagged "light_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						else tagged "medium_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(290))
						else tagged "heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(340))
						else "super_heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							{if rand 0.5 ("ammunition_loads" rand(%hit_body__ammo_fire) ammo(380))}
						else
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						}
					}
				else hit_side back
					{if rand (* %hit_tank__inter_spall 1.1)
						{damage_report "spall" "component/internal_spalling"}
                       				{if rand %hit_tank__kill_charger {kill_crew "charger"}}
                        			{if rand %hit_tank__kill_gunner {kill_crew "gunner"}}
                        			{if rand %hit_tank__kill_driver {kill_crew "driver"}}
                        			{if rand %hit_tank__kill_commander {kill_crew "commander"}}
                        			{if rand %hit_tank__kill_gunner2 {kill_crew "gunner2"}}
						{tags remove "ammo_overload"}
						{tags remove "ammo_normal_load"}
						{tags add "instant_explosion"}
						{If tagged "light_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						else tagged "medium_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(290))
						else tagged "heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(340))
						else "super_heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							{if rand 0.5 ("ammunition_loads" rand(%hit_body__ammo_fire) ammo(380))}
						else
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						}
					}
				else
					{if rand (* %hit_tank__inter_spall 1.0)
						{damage_report "spall" "component/internal_spalling"}
                       				{if rand %hit_tank__kill_charger {kill_crew "charger"}}
                        			{if rand %hit_tank__kill_gunner {kill_crew "gunner"}}
                        			{if rand %hit_tank__kill_driver {kill_crew "driver"}}
                        			{if rand %hit_tank__kill_commander {kill_crew "commander"}}
                        			{if rand %hit_tank__kill_gunner2 {kill_crew "gunner2"}}
						{tags remove "ammo_overload"}
						{tags remove "ammo_normal_load"}
						{tags add "instant_explosion"}
						{If tagged "light_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						else tagged "medium_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(290))
						else tagged "heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(340))
						else "super_heavy_tank"
							("crew_shock" crew_shock_time(%crew_shock_time))
							{if rand 0.5 ("ammunition_loads" rand(%hit_body__ammo_fire) ammo(380))}
						else
							("crew_shock" crew_shock_time(%crew_shock_time))
							("ammunition_loads" rand(%hit_body__ammo_fire) ammo(250))
						}
					}
				}
                                {if rand %hit_body__explosive
                                    {call "explosion"}
                                }
                                {if rand %hit_body__engine_brake
                                    {if work "engine"
                                        {components "engine" break}
                                    }
                                }
                                {if rand %hit_body__body_destroy
				    {set "armor_spall" 1}
                                    {call "mp_destroy"}
                                else rand %hit_body__body_brake
				    {set "armor_heavydamage" 1}
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
					{call "engine fullstop"}
                                    }
                                }
                                {if rand %hit_body__body_brake
                                    {components "body" break}
                                    {damage_report "body" "component/body_break"}
                                }
                        else volume "turret"
				{if rand (* %hit_tank__inter_spall 1.1)
					{damage_report "spall" "component/internal_spalling"}
                       			{if rand %hit_tank__kill_charger {kill_crew "charger"}}
                        		{if rand %hit_tank__kill_gunner {kill_crew "gunner"}}
                        		{if rand %hit_tank__kill_driver {kill_crew "driver"}}
                        		{if rand %hit_tank__kill_commander {kill_crew "commander"}}
                        		{if rand %hit_tank__kill_gunner2 {kill_crew "gunner2"}}
					{tags remove "ammo_overload"}
					{tags remove "ammo_normal_load"}
					{tags add "instant_explosion"}
					{If tagged "light_tank"
						("crew_shock" crew_shock_time(%crew_shock_time))
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(250))
					else tagged "medium_tank"
						("crew_shock" crew_shock_time(%crew_shock_time))
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(290))
					else tagged "heavy_tank"
						("crew_shock" crew_shock_time(%crew_shock_time))
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(340))
					else "super_heavy_tank"
						("crew_shock" crew_shock_time(%crew_shock_time))
						{if rand 0.5 ("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(380))}
					else
						("crew_shock" crew_shock_time(%crew_shock_time))
						("ammunition_loads" rand(%hit_turret__ammo_fire) ammo(250))
					}
				}
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
				    {set "turretarmor_spall" 1}
                                    {components "turret" destroy}
                                else rand %hit_turret__turret_brake
				    {set "turretarmor_heavydamage" 1}
                                    {components "turret" break}
                                }
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
                            {weapon_work "gun" 0}{weapon_work "gun2" 0}{weapon_work "mgun" 0}{weapon_work "mgun1" 0}{weapon_work "mgun2" 0}{weapon_work "mgun3" 0}
                            {delay %blast_crew_shock_time
                                {if not tagged "gun_brake"
                                    {weapon_work "gun" 1}
                                }
                                {weapon_work "gun2" 1}{weapon_work "mgun" 1}{weapon_work "mgun1" 1}{weapon_work "mgun2" 1}{weapon_work "mgun3" 1}
                                {if tagged "stopped1"
                                    {tags remove "stopped1"}
                                    {if work "mover"
                                        {if not tagged "engine_brake"
					    {if "engine_on"
                                            	{chassis_work 1}
					    }
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
					    {if work "turret_drive"
                                           	{ik_enable "turret" 1}
					    }
                                        }
                                }
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
	{on blast_hit
		{if not able "exploded"
		{if min_energy 24
			{if not "super_heavy_tank"
				{call "explosion"}
			}
		else min_energy 19
			{if not "heavy_tank"
				{if not "super_heavy_tank"
					{call "explosion"}
				}
			}
		else min_energy 15
			{if not "super_heavy_tank"
				{if not "heavy_tank"
					{if not "medium_tank"
						{call "explosion"}
					}
				}
			}
		}
		}
	}
;MEGA BUILDING END =============================================================================================================================================================================

    {on repair
	{if component "turret"
    		{view stop "smoke4_2"}
    		{view stop "smoke4_1"}
		{view stop "smoke4_13"}
		{view stop "smoke4_16"}
		{stop_sound "flame"}
		{set "smoke4_1" 0}
		{view stop "smoke3"}
             		{tags remove "turr_break"}
             		{call "update_turret"}
            		{tags remove "turret_brake"}
	else component "transmission"
		{if work "mover"
			{if not tagged "engine_brake"
				{if "engine_on"
					{if work "trackleft" {if work "trackright" {chassis_work 1}}}
				}
			}
		}
	else component "turret_drive"
		{view stop "smoke4_2"}
    		{view stop "smoke4_1"}
		{view stop "smoke4_13"}
		{view stop "smoke4_16"}
		{set "smoke4_1" 0}
		{stop_sound "flame"}
		{call "update_turret"}
	else component "vertical_drive"
		{ik_enable "gun_rot"}
        	else component "body"
			{view stop "smoke4_2"}
    			{view stop "smoke4_1"}
			{view stop "smoke4_13"}
			{view stop "smoke4_16"}
			{set "smoke4_1" 0}
            		{view stop "smoke4"}
		{stop_sound "flame"}
            		{call "update_turret"}
            		{tags remove "turret_stopped_by_body"}
            		{tags remove "body_brake"}
            		{able "select" 1}
        	else component "engine"
            		{tags remove "engine_brake"}
        }
    }
    {on "update_turret"
		{if work "turret"
			{if work "body"
				{if work "turret_drive"
					{ik_enable "turret" 1}
				else
					{ik_enable "turret" 0}
				}
			 else
				{ik_enable "turret" 0}
			}
		 else
			{ik_enable "turret" 0}
		}
    }

}; end of "tank"


{"opened tank"
        {on "explosive_broken" overload
                {call "explosion"}
        }
}

{"m4a3c"
        {on fire "gun2"
                {spawn "startsmoke_cali"}
        }
}

{"m4a4_tulip"
        {on fire "gun2"
                {spawn "startsmoke_cali"}
        }
}

{"bm_8_24"
        {on fire "gun"
                {spawn "startsmoke_cali"}
        }
}

{"m4calliope"	; must be placed before	the props "turret"
	{on break_armor             
		{if volume "guns"           
			{call "tear_guns"}
		}
	}
	{on break_armor_again
		{if volume "guns"           
			{call "tear_guns"}
		}
	}
	{on "tear_turret"
		{if "roof_broken"
			{bone cut "gun"}
		else
			{call "tear_gun"}
		}
	}
	{on "tear_guns"
		{if not "roof_broken"
			{weapon_work "gun2" 0}
			{set "roof_broken" 1}
			{components "guns" destroy}
			{delay 0.5
				{bone cut "gun2"}
			}
			{delay_ex 0
				(define "teargun"
					{tear "piece_large_steel" bone "%gun"
						{impulse up 5 2.3 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 no_position}
						{add_view "smoke_black" "smoke" "basis"}
						{view start "smoke"}
						{delay_effect 20 5 "pause"}
					}
				)
				("teargun" gun(guns1))
				("teargun" gun(guns2))
				("teargun" gun(guns3))
				("teargun" gun(guns4))
				("teargun" gun(guns5))
				("teargun" gun(gun2))
			}
		}
	}
}

{"turret"
	{on spawn
		{call "update_turret"}
		{set "turret" 1}
	}
	{on "turret_break" overload
		{components "turret" break}
	}
	{on break
		{if component "turret"
			{if not user_control
				{if rand 0.5 {kill_crew "gunner"}}
				{if rand 0.5 {kill_crew "charger"}}
				{if rand 0.5 {kill_crew "commander"}}
			}
			{tags add "turr_break"}
			{call "update_turret"}
			{spawn "tank_die_particle" "Turret"}
			{spawn "circledust_norm" "Turret"}
;			{ani_play "open" -1.0 resume}
			{view start "smoke3"}
            {delay 10
    			{view stop "smoke3"}
    			{set "smoke3" 0}
            }
        else component "body"
			{spawn "circledust_norm" "Turret"}
			{call "update_turret"}
		}
	}
	{on "tear_turret"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{components "turret" destroy}
			{call "notify_break"}
			{call "mp_destroy"}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse up 5 2.3 dir 3 1.5 cx 5 2 cy 5 2 rnd_dir 10 0.5 no_position}
					{if rand 0.8
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
					{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "tear_turret_low"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{components "turret" destroy}
			{call "notify_break"}
			{call "mp_destroy"}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse up 3.5 2.3 dir 2.5 1.5 cx 3.5 2 cy 3.5 2 rnd_dir 8 0.5 no_position}
					{if rand 0.8
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
					{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "tear_turret_high"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{components "turret" destroy}
			{call "notify_break"}
			{call "mp_destroy"}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse up 5 3 dir 3 1.5 cx 5 3 cy 5 3 rnd_dir 10 0.5 no_position}
					{if rand 0.8
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
					{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "tear_turret_ap"
		{if not "turret_teared"
			{set "turret_teared" 1}
			{components "turret" destroy}
			{call "notify_break"}
			{call "mp_destroy"}
			{add_view "smoke_black_big5" "smoke_turret" "basis"}
			{view start "smoke_turret"}
			{delay 60 15
				{view stop "smoke_turret"}
			}
			{delay_ex 0
				{tear "piece_large_steel" bone "turret" id "turret"
					{impulse up 1 0.2 dir 1 0.2 cx 1 0.2 cy 1 0.2 rnd_dir 7 0.5 no_position}
					{if rand 0.2
						{add_view "smoke_dead_norm" "smoke" "basis"}
					else
					{add_view "smoke_black" "smoke" "basis"}
					}
					{view start "smoke"}
					{delay_effect 30 5 "pause"}
					{delay 0.1
						{volumes "gun" disable obstacle}
					}
				}
			}
		}
	}
	{on "slice_load"
		{if name "turret"
			{call "notify_break"}
			{with_effector
				{add_view "smoke_black" "smoke" "basis"}
			}
		}
	}

	{on "cut_parts"
		{if "turret_teared"
			{bone cut "turret"}
		}
	}
}

{"light tank turret"
	{on bullet_hit
		{if volume "turret"
			{if stuff "big shell fg"
				{if rand 0.8
					{call "tear_turret"}
				}
			}
		}
	}
}

{"light_turret" ; turret for btr, car, ...
	{on bullet_hit
		{if volume "turret"
			{if stuff "shell"
				{call "tear_turret"}
			}
		}
	}
}

{"armored_car"
	{on blast_hit
		{if min_energy 10
			{if explosive_amount 1
				{call "explosion"}
			else explosive_amount 0
				{tags add "energy_overload"}
				{call "destroy_energy_overload"}
				{impulse up 0.1 0.1 dir 1 0.2}
			}
		 else min_energy 5
			{if explosive_amount 1
				{call "explosion"}
			else explosive_amount 0
				{tags add "energy_overload"}
				{call "destroy_energy_overload"}
			}
		 else min_energy 4
			{if rand 0.5
				{if explosive_amount 1
					{call "explosion"}
				else explosive_amount 0
					{tags add "energy_overload"}
					{call "destroy_energy_overload"}
				}
			}
			{impulse up 0.1 0.1 dir 0.4 0.2}
		 else min_energy 0.7
		 	{ani_play "hit"}
		}
	}
	{on "_explosion"
		{blastwave c4 3 r0 2.5 r1 10}
		{impulse up 0.1 0.1 dir 0.2 0.1}
	}
	{on "cut_parts"
		{if not tagged "energy_overload"
			{add_view "smoke_black_big2a" "deathfx" "basis"}
			{view start "deathfx"}
		}
	}
	{on contact
		{if effector "light tank"
			{if effector_velocity 22
				{if rand 0.4 {components "engine" break}}
			}
		}
		{if effector "medium tank"
			{if effector_velocity 24
				;{damage_report "body" "component/shock"}
				{if rand 0.5 {components "engine" break}}
				{if rand 0.4 {components "body" break}}
			else effector_velocity 16
				;{damage_report "body" "component/shock"}
				{if rand 0.5 {components "engine" break}}
				{if rand 0.1 {components "body" break}}
			}
		}
		{if effector "heavy tank"
			{if effector_velocity 20
				;{damage_report "body" "component/shock"}
				{if rand 0.7 {components "engine" break}}
				{if rand 0.5 {components "body" break}}
			else effector_velocity 12
				;{damage_report "body" "componenets/shock"}
				{if rand 0.3 {components "engine" break}}
				{if rand 0.1 {components "body" break}}
			}
		}
	}
	{on "install_tow"			
		{if work "engine"
			{if "engine_on"
				{call "engine fullstop"}
			}
		}
		{spawn "towing_rope" "basis" x   
			{if not tagged "cargo_inside"					
				{call "load_heavy_vehicle"} 
				{tags add "btr_linked"}
			}
		}
		{tags add "link_to_place1"} 
		{delay 3 
			{tags remove "link_to_place1"}
		}	
	}
(include "tank/tank_armoredcar.inc")

}
{"light tank"
	{on spawn
		{tags add "light tank"}
	}
	{on blast_hit
		{if min_energy 30
			{if explosive_amount 1
				{call "explosion"}
			else explosive_amount 0
				;{call "tear_turret_low"}
				{tags add "energy_overload"}
				{call "destroy_energy_overload"}
				{impulse up 0.1 0.1 dir 6 0.1}
			}
		else min_energy  9
			{if explosive_amount 1
				{call "explosion"}
			else
				;{call "tear_turret_low"}
				{tags add "energy_overload"}
				{call "destroy_energy_overload"}
				{impulse up 0.1 0.1 dir 1 0.2}
			}
		 else min_energy 6
			;{if rand 0.6 {call "tear_turret_low"}}
			{if rand 0.5
				{if explosive_amount 1
					{call "explosion"}
				else explosive_amount 0
					{tags add "energy_overload"}
					{call "destroy_energy_overload"}
				}
			}
			{impulse up 0.1 0.1 dir 0.7 0.2}
		 else min_energy 1
		 	{ani_play "hit"}
		}
	}
	{on "_explosion"
		{damage_report "ammo" "component/ammo_destroyed"}
		{blastwave c4 5 r0 2.5 r1 10 offset 0 0 60}
		{impulse up 0.1}
		{if tagged "ammo_overload"
			{blastwave c4 2 r0 10 r1 20 offset 0 0 60}
		else tagged "ammo_normal_load"
			{blastwave c4 2 r0 6 r1 12 offset 0 0 60}
		}
	}
	{on "cut_parts"
		{if tagged "ammo_overload"
			{call "tear_turret_high"}
		else tagged "ammo_normal_load"
			{call "tear_turret_low"}
		}
		{if not tagged "energy_overload"
			{add_view "smoke_black_big2a" "deathfx" "basis"}
			{view start "deathfx"}
		}
	}
	{on contact
		{if effector "light tank"
			{if effector_velocity 26
				{if rand 0.4 {components "trackleft" break}}
				{if rand 0.4 {components "trackright" break}}
			}
		}
		{if effector "medium tank"
			{if effector_velocity 30
				;{damage_report "body" "component/shock"}
				{if rand 0.5 {components "body" break}}
				{if rand 0.5 {components "engine" break}}
				{if rand 0.8 {components "trackleft" break}}
				{if rand 0.8 {components "trackright" break}}
			else effector_velocity 24
				;{damage_report "body" "component/shock"}
				{if rand 0.5 {components "engine" break}}
				{if rand 0.6 {components "trackleft" break}}
				{if rand 0.6 {components "trackright" break}}
			else effector_velocity 16
				;{damage_report "body" "component/shock"}
				{if rand 0.2 {components "engine" break}}
				{if rand 0.35 {components "trackleft" break}}
				{if rand 0.35 {components "trackright" break}}
			}
		}
		{if effector "heavy tank"
			{if effector_velocity 20
				;{damage_report "body" "component/shock"}
				{if rand 0.7 {components "engine" break}}
				{if rand 0.5 {components "body" break}}
				{if rand 0.7 {components "trackleft" break}}
				{if rand 0.7 {components "trackright" break}}
			else effector_velocity 16
				;{damage_report "body" "componenets/shock"}
				{if rand 0.2 {components "engine" break}}
				{if rand 0.2 {components "body" break}}
				{if rand 0.5 {components "trackleft" break}}
				{if rand 0.5 {components "trackright" break}}
			else effector_velocity 12
				;{damage_report "body" "componenets/shock"}
				{if rand 0.35 {components "trackleft" break}}
				{if rand 0.35 {components "trackright" break}}
			}
		}
	}
	{on "install_tow"			
		{if work "engine"
			{if "engine_on"
				{call "engine fullstop"}
			}
		}
		{spawn "towing_rope" "basis" x   
			{if not tagged "cargo_inside"					
				{call "load_heavy_vehicle"} 
				{tags add "light_tank_linked"}
			}
		}
		{tags add "link_to_place1"} 
		{delay 3 
			{tags remove "link_to_place1"}
		}	
	}
(include "tank/tank_light.inc")
}

{"medium tank"
	{on spawn
		{tags add "medium_tank"}
	}
	{inflammation_time 30}
	{on blast_hit
		{if min_energy 30
			{impulse up 0.1 0.1 dir 4 0.1}
			{if volume "turret"
				{if rand 0.8
					{call "tear_turret"}
				}
			}
		else min_energy 12
			{impulse up 0.1 0.1 dir 1.5 0.2}
			{if volume "turret"
				{if rand 0.5
					{call "tear_turret"}
				}
			}
		 else min_energy 9
			{impulse up 0.1 0.1 dir 1 0.2}
		 else min_energy 7
			{impulse up 0.1 0.1 dir 0.4 0.1}
		 else min_energy 1
		 	;{ani_play "hit"}
		}
	}
	{on "_explosion"
		{damage_report "ammo" "component/ammo_destroyed"}
		{blastwave c4 10 r0 2.5 r1 10 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.2 0.1}
		{if tagged "ammo_overload"
			{blastwave c4 2 r0 15 r1 25 offset 0 0 75}
		else tagged "ammo_normal_load"
			{blastwave c4 2 r0 10 r1 15 offset 0 0 75}
		}
	}
	{on "cut_parts"
		{if tagged "ammo_overload"
			{spawn "tank_die_2" "basis"}
			{call "tear_turret_high"}
		else tagged "ammo_normal_load"
			{spawn "tank_die_3" "basis"}
			{call "tear_turret_low"}
		}
		{if "turret_teared"
			{add_view "smoke_black_big2" "deathfx" "basis"}
		else
			{add_view "smoke_black_big2a" "deathfx" "basis"}
		}
		{view start "deathfx"}
	}
	{on "check_water_level" overload
		{if water_level 1.6
			{able "sinking" 1}
		}
	}
	{on contact
		{if effector "medium tank"
			{if effector_velocity 30
				;{damage_report "body" "component/shock"}
				{if rand 0.5 {components "engine" break}}
				{if rand 0.8 {components "trackleft" break}}
				{if rand 0.8 {components "trackright" break}}
			else effector_velocity 24
				;{damage_report "body" "component/shock"}
				{if rand 0.4 {components "engine" break}}
				{if rand 0.6 {components "trackleft" break}}
				{if rand 0.6 {components "trackright" break}}
			else effector_velocity 16
				;{damage_report "body" "component/shock"}
				{if rand 0.4 {components "trackleft" break}}
				{if rand 0.4 {components "trackright" break}}
			}
		}
		{if effector "heavy tank"
			{if effector_velocity 20
				;{damage_report "body" "component/shock"}
				{if rand 0.4 {components "engine" break}}
				{if rand 0.7 {components "trackleft" break}}
				{if rand 0.7 {components "trackright" break}}
			else effector_velocity 17
				;{damage_report "body" "component/shock"}
				{if rand 0.3 {components "engine" break}}
				{if rand 0.6 {components "trackleft" break}}
				{if rand 0.6 {components "trackright" break}}
			else effector_velocity 13
				;{damage_report "body" "componenets/shock"}
				{if rand 0.45 {components "trackleft" break}}
				{if rand 0.45 {components "trackright" break}}
			}
		}
	}
	{on "install_tow"			
		{if work "engine"
			{if "engine_on"
				{call "engine fullstop"}
			}
		}
		{spawn "towing_rope" "basis" x   
			{if not tagged "cargo_inside"					
				{call "load_heavy_vehicle"} 
				{tags add "tank_linked"}		       
			}
		}
		{tags add "link_to_place1"} 
		{delay 3 
			{tags remove "link_to_place1"}
		}	
	}
(include "tank/tank_medium.inc")
}
{"heavy tank"
	{on spawn
		{tags add "heavy_tank"}
	}
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
		{damage_report "ammo" "component/ammo_destroyed"}
        	{blastwave c4 15 r0 2.5 r1 10 offset 0 0 75}
		{impulse up 0.1 0.1 dir 0.1 0.1}
		{if tagged "ammo_overload"
			{blastwave c4 2 r0 20 r1 30 offset 0 0 75}
		else tagged "ammo_normal_load"
			{blastwave c4 2 r0 10 r1 20 offset 0 0 75}
		}
	}
	{on "cut_parts"
		{if tagged "ammo_overload"
			{call "tear_turret_high"}
			{spawn "tank_die_2" "basis"}
		else tagged "ammo_normal_load"
			{call "tear_turret_low"}
			{spawn "tank_die_3" "basis"}
		}
		{if "turret_teared"
			{add_view "smoke_black_big2" "deathfx" "basis"}
		else
			{add_view "smoke_black_big2a" "deathfx" "basis"}
		}
		{view start "deathfx"}
	}
	{on "check_water_level" overload
		{if water_level 1.8
			{able "sinking" 1}
		}
	}
	{on contact
		{if effector "medium tank"
			{if effector_velocity 30
				;{damage_report "body" "component/shock"}
				{if rand 0.15 {components "engine" break}}
				{if rand 0.8 {components "trackleft" break}}
				{if rand 0.8 {components "trackright" break}}
			else effector_velocity 24
				;{damage_report "body" "component/shock"}
				{if rand 0.05 {components "engine" break}}
				{if rand 0.6 {components "trackleft" break}}
				{if rand 0.6 {components "trackright" break}}
			else effector_velocity 18
				;{damage_report "body" "component/shock"}
				{if rand 0.35 {components "trackleft" break}}
				{if rand 0.35 {components "trackright" break}}
			}
		}
		{if effector "heavy tank"
			{if effector_velocity 22
				;{damage_report "body" "component/shock"}
				{if rand 0.1 {components "engine" break}}
				{if rand 0.8 {components "trackleft" break}}
				{if rand 0.8 {components "trackright" break}}
			else effector_velocity 18
				;{damage_report "body" "component/shock"}
				{if rand 0.6 {components "trackleft" break}}
				{if rand 0.6 {components "trackright" break}}
			else effector_velocity 14
				;{damage_report "body" "componenets/shock"}
				{if rand 0.35 {components "trackleft" break}}
				{if rand 0.35 {components "trackright" break}}
			}
		}
	}
	{on "install_tow"			
		{if work "engine"
			{if "engine_on"
				{call "engine fullstop"}
			}
		}
		{spawn "towing_rope" "basis" x   
			{if not tagged "cargo_inside"					
				{call "load_heavy_vehicle"} 
				{tags add "tank_linked"}
			}
		}
		{tags add "link_to_place1"} 
		{delay 3 
			{tags remove "link_to_place1"}
		}	
	}
(include "tank/tank_heavy.inc")
}
;---------------------Normand Pack
(include "inc/tank_NP2.inc")
;---------------------Normand Pack
{"mine_exploder"
	{on spawn
		{bone hide "wheel_work"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work1"}
		{add_view "dustrun_sand_big"	"wheel_work_dust"	"FXWheel_Work2"}
		{volumes "wheel_work" disable all}
		{ani_play "wheel_stop"}
	}
	{on move on
		{bone hide "wheel"}
		{bone show "wheel_work"}
		{view start "wheel_work_dust"}
		{volumes "wheel_work" enable all}
		{volumes "wheel" disable all}
	}
	{on move off
		{bone hide "wheel_work"}
		{bone show "wheel"}
		{ani_play "wheel_stop"}
		{view pause "wheel_work_dust"}
		{volumes "wheel_work" disable all}
		{volumes "wheel" enable all}
	}
	{on blast overload
		{if not volume "wheel_work"
			{inherited}
		else
			{ani_play "explosion"}
		}
	}
}
{"pz1b tank"
	{on spawn
		{add_view	"flash_gun_big_vehicle"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel01"	"shooter01"	}
		{link_sound "move"				"vehicle/tracks/pz1"	}
		{link_sound "engine"			"vehicle/engine/pz1"	}
		{link_sound "engine_end"		"vehicle/engine/pz1_end"}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/pz1_up"	}
		{link_sound "idle"			"vehicle/engine/pz1_idle"}
	}
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.5
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.5
				{view pause "flashbarrel01"}
			}
		}
	}
	("burn_by_engine" args 0.3)
}
(define "pz1_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz1"}
		{link_sound "engine"			"vehicle/engine/pz1"		}
		{link_sound "engine_end"		"vehicle/engine/pz1_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz1_up"	}
		{link_sound "idle"			"vehicle/engine/pz1_idle"}
	}
)
{"pz1 tank"
	("pz1_sound")
	("burn_by_engine" args 0.3)
}
{"pz1b tank"
	("pz1_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz303 tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/engine/dodge_move_new"	}
		{link_sound "engine"			"vehicle/wheels/valami"	}
		{link_sound "engine_end"		"vehicle/engine/pz1_end"}
		{link_sound "exhaust"			"vehicle/engine/Dodge_end"}
		{link_sound "idle"			"vehicle/engine/valami"}
	}
	{on fire "charge"
		{call "explosion"}
	}
	{on "explosion"
		{delete}
	}
	("burn_by_engine" args 0.3)
}
(define "t26_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"			}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/t26_end"	}
		{link_sound "exhaust"			"vehicle/engine/t26_up"	}
		{link_sound "idle"			"vehicle/engine/t26"}
	}
)
(define "lt_turret_sound"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
	}
)
{"t26 tank"
	("t26_sound")
	("burn_by_engine" args 0.3)
}
(define "su76_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t-70"}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/bt_end"	}
		{link_sound "exhaust"			"vehicle/engine/bt_up"	}
		{link_sound "idle"			"vehicle/engine/t26"}
	}
)
{"su76 tank"
	("su76_sound")
	("burn_by_engine" args 0.3)
}
{"zis_30 tank"
	("su76_sound")
	("burn_by_engine" args 0.3)
}
{"t20 tank"
	("su76_sound")
	("burn_by_engine" args 0.3)
}
(define "t70_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/t-70"}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		}
		{link_sound "engine"			"vehicle/engine/t26"		}
		{link_sound "engine_end"		"vehicle/engine/bt_end"	}
		{link_sound "exhaust"			"vehicle/engine/bt_up"	}
		{link_sound "idle"			"vehicle/engine/t26"}
	}
)
{"t70 tank"
	("t70_sound")
	("burn_by_engine" args 0.3)
}
{"t60 tank"
	("t70_sound")
	("burn_by_engine" args 0.3)
}
{"bm_8_24 tank"
	("t70_sound")
	("burn_by_engine" args 0.3)
}
{"zsu37 tank"
	("t70_sound")
	("burn_by_engine" args 0.3)
}
{"bt7a tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bt"		}
		{link_sound "engine"			"vehicle/engine/bt"		}
		{link_sound "engine_end"		"vehicle/engine/bt_end"	}
		{link_sound "exhaust"			"vehicle/engine/bt_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "idle"			"vehicle/engine/bt"}
	}
	("burn_by_engine" args 0.3)
}

(define "kv_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "engine"			"vehicle/engine/kv"			}
		{link_sound "engine_end"		"vehicle/engine/kv_end"		}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/kv_idle"		}
	}
)
(define "is_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/is"		}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy1"		}
		{link_sound "engine"			"vehicle/engine/is"		}
		{link_sound "engine_end"		"vehicle/engine/is_end"		}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/is2_idle"		}
	}
)
{"kv1 tank"
	("kv_sound")
	("burn_by_engine" args 0.3)
}
{"kv2 tank"
	("kv_sound")
	("burn_by_engine" args 0.3)
}
{"kv85 tank"
	("kv_sound")
	("burn_by_engine" args 0.3)
}
{"is1 tank"
	("is_sound")
	("burn_by_engine" args 0.3)
}
{"is2 tank"
	("is_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"is3 tank"
	("is_sound")
	("burn_by_engine" args 0.3)
}
{"m26_pershing tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m26"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pershing"		}
		{link_sound "engine"			"vehicle/engine/m26"		}
		{link_sound "engine_end"		"vehicle/engine/m4a2_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m26_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"m26e4 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m26"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pershing"		}
		{link_sound "engine"			"vehicle/engine/m26"		}
		{link_sound "engine_end"		"vehicle/engine/m4a2_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m26_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"isu152 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/isu"		}
		{link_sound "engine_end"		"vehicle/engine/isu_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/isu_idle"		}
	}
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"isu122 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/isu"		}
		{link_sound "engine_end"		"vehicle/engine/isu_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"		}
		{link_sound "idle"			"vehicle/engine/isu_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "t34_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/t34"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium"		}
		{link_sound "engine"			"vehicle/engine/t34"		}
		{link_sound "engine_end"		"vehicle/engine/t34_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"		}
		{link_sound "idle"			"vehicle/engine/t34_idle"		}
	}
)
{"t34_0 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"t34_1 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"t34_2 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"su85 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"su122 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"su100 tank"
	("t34_sound")
	("burn_by_engine" args 0.3)
}
{"t34_3 tank"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/t34"	}
		{link_sound "rotate_turret" 	"vehicle/turret/t34"		}
		{link_sound "engine"			"vehicle/engine/t3485"		}
		{link_sound "engine_end"		"vehicle/engine/t3485_end"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/t34_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "pz5g_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/jugdpanther"		}
		{link_sound "engine"			"vehicle/engine/jugdpanther"		}
		{link_sound "engine_end"		"vehicle/engine/jugdpanther_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy"	}
		{link_sound "exhaust"			"vehicle/engine/jugdpanther_up"	}
		{link_sound "idle"			"vehicle/engine/pz5_idle"		}
	}
)
(define "ho-ri_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/tracks/is"		}
		{link_sound "engine"			"vehicle/engine/jugdpanther"		}
		{link_sound "engine_end"		"vehicle/engine/jugdpanther_end"	}
		{link_sound "rotate_turret" 		"vehicle/turret/heavy"	}
		{link_sound "exhaust"			"vehicle/engine/jugdpanther_up"	}
		{link_sound "idle"			"vehicle/engine/pz5_idle"		}
	}
)

{"pz5g tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
}

{"jugdpanther tank"
	("pz5g_sound")
	("burn_by_engine" args 0.3)
}

{"ho-ri tank"
	("ho-ri_sound")
	("burn_by_engine" args 0.3)
}

{"ho-ri_1 tank"
	("ho-ri_sound")
	("burn_by_engine" args 0.3)
}

{"chi-ri tank"
	("ho-ri_sound")
	("burn_by_engine" args 0.3)
}

(define "m8_sound"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/wheels/m8grayhound"		}
		{link_sound "engine"			"vehicle/engine/m8grayhound"		}
		{link_sound "engine_end"		"vehicle/engine/m8grayhound_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/m8grayhound_up" 	}
		{link_sound "idle"			"vehicle/engine/m8grayhound"		}
	}
)
{"m3stuart tank"
	("m8_sound")
	("burn_by_engine" args 0.3)
}
{"mk2 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"		}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "mk7_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk7"	}
		{link_sound "engine"			"vehicle/engine/mk7"		}
		{link_sound "engine_end"		"vehicle/engine/mk7_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/mk7_turret"		}
		{link_sound "exhaust"			"vehicle/engine/mk7_up" 	}
		{link_sound "idle"			"vehicle/engine/mk7"		}
	}
)
{"mk7 tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"mk2a tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"universal_carrier tank"
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
(define "bishop_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/bishop"	}
		{link_sound "engine"			"vehicle/engine/bishop"		}
		{link_sound "engine_end"		"vehicle/engine/bishop_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"		}
		{link_sound "exhaust"			"vehicle/engine/bishop_up" 	}
		{link_sound "idle"			"vehicle/engine/bishop"		}
	}
)
{"bishop tank"
	("bishop_sound")
	("burn_by_engine" args 0.3)
}
{"mk3 tank"
	("bishop_sound")
	("burn_by_engine" args 0.3)
}
(define "mk6_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/crusader"	}
		{link_sound "engine"			"vehicle/engine/crusader"		}
		{link_sound "engine_end"		"vehicle/engine/crusader_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"		}
		{link_sound "exhaust"			"vehicle/engine/crusader_up" 	}
		{link_sound "idle"			"vehicle/engine/crusader"		}
	}
)
{"mk6 tank"
	("mk6_sound")
	("burn_by_engine" args 0.3)
}
{"crusaderaa1 tank"
	("mk6_sound")
	("burn_by_engine" args 0.3)
}
{"crusaderaa2 tank"
	("mk6_sound")
	("burn_by_engine" args 0.3)
}
{"mk4 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)
}
{"cromwell_mk_vi tank"
	{on "add_movement_sound" overload
		{link_sound "move"		    	"vehicle/tracks/cromwell"	}
		{link_sound "engine"			"vehicle/engine/cromwell"		}
		{link_sound "engine_end"		"vehicle/engine/cromwell_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/cromwell_up"	}
		{link_sound "idle"			"vehicle/engine/cromwell_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"cromwell_mk_vii tank"
	{on "add_movement_sound" overload
		{link_sound "move"		    	"vehicle/tracks/cromwell"	}
		{link_sound "engine"			"vehicle/engine/cromwell"		}
		{link_sound "engine_end"		"vehicle/engine/cromwell_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/cromwell_up"	}
		{link_sound "idle"			"vehicle/engine/cromwell_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"m4a3m tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m4a2"  }
		{link_sound "engine"			"vehicle/engine/m4a2"		}
		{link_sound "engine_end"		"vehicle/engine/m4a2_end"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "m4_sound"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4a2"			}
		{link_sound "engine"				"vehicle/engine/m4"			}
		{link_sound "engine_end"			"vehicle/engine/m4_end"		}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"		}
		{link_sound "rotate_turret"     	"vehicle/turret/sherman"   	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
)
(define "m4_turret_sound"
	{on "add_movement_sound"
		{link_sound "rotate_turret"     	"vehicle/turret/sherman"   	}
	}
)
{"m4a3_75 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a4 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a4_tulip tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3_105 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3e8 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m4a3c tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
{"m12gmc tank"
	("m4_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"m4a4_firefly tank"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4a2"		}
		{link_sound "engine"				"vehicle/engine/m4"		}
		{link_sound "engine_end"			"vehicle/engine/m4_end"	}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	    "vehicle/turret/sherman"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"m4a3e2_jumbo tank"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4a2"		}
		{link_sound "engine"				"vehicle/engine/m4"		}
		{link_sound "engine_end"			"vehicle/engine/m4_end"	}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	    "vehicle/turret/sherman"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"m4a3e2_jumbo_76 tank"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4a2"		}
		{link_sound "engine"				"vehicle/engine/m4"		}
		{link_sound "engine_end"			"vehicle/engine/m4_end"	}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	    "vehicle/turret/sherman"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"lvt4 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
(define "m7_sound"
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m7"		}
		{link_sound "engine"				"vehicle/engine/m7"		}
		{link_sound "engine_end"			"vehicle/engine/m7_end"	}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"	}
		{link_sound "rotate_turret" 	    "vehicle/turret/sherman"	}
		{link_sound "idle"			"vehicle/engine/m4a2_idle"		}
	}
)
{"m7 tank"
	("m7_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"m7_eng tank"
	("m7_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"m19 tank"
	("m7_sound")
	("burn_by_engine" args 0.3)
}
{"m8 tank"
	("m7_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"jagdpanther tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/jugdpanther"  		}
		{link_sound "engine"			"vehicle/engine/jugdpanther"		}
		{link_sound "engine_end"		"vehicle/engine/jugdpanther_end"	}
		{link_sound "exhaust"			"vehicle/engine/jugdpanther_up" 	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"	}
		{link_sound "idle"			"vehicle/engine/pz5_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "pz6_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz6"	}
		{link_sound "engine"			"vehicle/engine/pz6"		}
		{link_sound "engine_end"		"vehicle/engine/pz6_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pz6"	}
		{link_sound "exhaust"			"vehicle/engine/pz6_up"	}
		{link_sound "idle"			"vehicle/engine/pz6_idle"		}
	}
)
{"pz6bh tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/jugdpanther"	}
		{link_sound "engine"			"vehicle/engine/jagdtiger"		}
		{link_sound "engine_end"		"vehicle/engine/jagdtiger_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/pz6"	}
		{link_sound "exhaust"			"vehicle/engine/pz6_up"	}
		{link_sound "idle"			"vehicle/engine/pz6_idle"		}
	}
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"pz6e tank"
	("pz6_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"veteran_tiger tank"
	("pz6_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"elefant tank"
	("pz6_sound")
	("burn_by_engine" args 0.3)
}
{"jagdtiger tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/jugdpanther"	}
		{link_sound "engine"			"vehicle/engine/jagdtiger"		}
		{link_sound "engine_end"		"vehicle/engine/jagdtiger_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz6_up"	}
		{link_sound "idle"			"vehicle/engine/pz6_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"hetzer tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/hetzer"	}
		{link_sound "engine"			"vehicle/engine/hetzer"		}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"	}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/hetzer_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"ba64 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"	}
		{link_sound "engine"			"vehicle/engine/ba11"		}
		{link_sound "engine_end"		"vehicle/engine/ba11_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/ba11_up"	}
		{link_sound "idle"			"vehicle/engine/ba11_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"pz2l tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz2"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"pz2f tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz2"	}
		{link_sound "engine"			"vehicle/engine/pz2"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "pz3_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz3"	}
		{link_sound "engine"			"vehicle/engine/pz3"		}
		{link_sound "engine_end"		"vehicle/engine/pz3_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"	}
		{link_sound "exhaust"			"vehicle/engine/pz3_up"	}
		{link_sound "idle"			"vehicle/engine/pz3_idle"		}
	}
)
{"steyr_rso tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz2"	}
		{link_sound "engine"			"vehicle/engine/pz1"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up" 	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"pz3f tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"pz3 tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"pz3n tank"
	("pz3_sound")
	("burn_by_engine" args 0.3)
}
{"stug3g tank"
	("pz3_sound")
	{on "gunner_hatch_open" overload
		{ani_play "close"}
	}
	("burn_by_engine" args 0.3)
}
{"stuh42 tank"
	("pz3_sound")
	{on "gunner_hatch_open" overload
		{ani_play "open2"}
	}
	("burn_by_engine" args 0.3)
}
{"pz3m tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz3"	}
		{link_sound "engine"			"vehicle/engine/pz3"		}
		{link_sound "engine_end"		"vehicle/engine/pz3_end"	}
		{link_sound "exhaust"			"vehicle/engine/pz3_up" 	}
		{link_sound "idle"			"vehicle/engine/pz3_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "pz4_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz4"	}
		{link_sound "engine"			"vehicle/engine/pz4"		}
		{link_sound "engine_end"		"vehicle/engine/pz4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"	}
		{link_sound "exhaust"			"vehicle/engine/pz4_up"	  	}
		{link_sound "idle"			"vehicle/engine/pz4_idle"		}
	}
)
(define "wespe_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/pz3"	}
		{link_sound "engine"			"vehicle/engine/hetzer"		}
		{link_sound "engine_end"		"vehicle/engine/pz2_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"	}
		{link_sound "exhaust"			"vehicle/engine/pz2_up"	  	}
		{link_sound "idle"			"vehicle/engine/pz2_idle"		}
	}
)
{"wespe tank"
	("wespe_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"marder_3h tank"
	("wespe_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"pz4d tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"jagdpanzer_iv tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"welberwind tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"ostwind tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4g tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4h tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"hummel tank"
	("pz4_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"nashorn tank"
	("pz4_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
(define "sdkfz_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/sdkfz232"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz232_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz232_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz222_idle"		}
	}
)
{"sdkfz222 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz223 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
{"sdkfz232 tank"
	("sdkfz_sound")
	("burn_by_engine" args 0.3)
}
(define "sdkfz234_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz234"		}
		{link_sound "engine"			"vehicle/engine/sdkfz234"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/heavy1"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"		}
	}
)
{"sdkfz234 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"ba11 tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"type93scout tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
(define "m8grayhound_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/m8grayhound"	}
		{link_sound "engine"			"vehicle/engine/m8grayhound"		}
		{link_sound "engine_end"		"vehicle/engine/m8grayhound_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"	}
		{link_sound "exhaust"			"vehicle/engine/m8grayhound_up"	}
		{link_sound "idle"			"vehicle/engine/m8grayhound"		}
	}
)
{"m8grayhound tank"
	("m8grayhound_sound")
	("burn_by_engine" args 0.3)
}
{"m20 tank"
	("m8grayhound_sound")
	("burn_by_engine" args 0.3)
}
{"mk2daimler"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/wheels/wheels"			}
		{link_sound "engine"			"vehicle/engine/sdkfz234"		}
		{link_sound "engine_end"		"vehicle/engine/sdkfz234_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"			}
		{link_sound "exhaust"			"vehicle/engine/sdkfz234_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"		}
	}
	("burn_by_engine" args 0.3)
}
(define "hanomag_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz251"	}
		{link_sound "engine"			"vehicle/engine/sdkfz251"	}
		{link_sound "engine_end"		"vehicle/engine/sdkfz251_end"}
		{link_sound "rotate_turret" 	"vehicle/turret/light1"		}
		{link_sound "exhaust"			"vehicle/engine/sdkfz251_up"	}
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"		}
	}
)
{"sdkfz4 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/sdkfz10"	 }
		{link_sound "engine"			"vehicle/engine/sdkfz250"	 }
		{link_sound "engine_end"		"vehicle/engine/sdkfz250_end"}
		{link_sound "rotate_turret" 	"vehicle/turret/light"		 }
		{link_sound "exhaust"			"vehicle/engine/sdkfz250_up" }
		{link_sound "idle"			"vehicle/engine/sdkfz_idle"		}
	}
	("burn_by_engine" args 0.3)
}
{"sdkfz251_1 tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
{"ho-ha3mgun tank"
	("hanomag_sound")
	("burn_by_engine" args 0.3)
}
(define "m3_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3a1"	}
		{link_sound "engine"			"vehicle/engine/m3a1"		}
		{link_sound "engine_end"		"vehicle/engine/m3a1_end"	}
;		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/m3a1_up"	}
		{link_sound "idle"			"vehicle/engine/m3a1"		}
	}
)
{"m3 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"m3_usa tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"m3_eng tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"m16 tank"
	("m3_sound")
	("burn_by_engine" args 0.3)
}
{"grant_m3 tank"
	("m4_sound")
	("burn_by_engine" args 0.3)
}
(define "cometa34_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/kv"	}
		{link_sound "engine"			"vehicle/engine/m7"		}
		{link_sound "engine_end"		"vehicle/engine/m7_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/t34"	}
		{link_sound "exhaust"			"vehicle/engine/t26_up"	}
		{link_sound "idle"			"vehicle/engine/m7"		}
	}
)
{"cometa34 tank"
	("cometa34_sound")
	("burn_by_engine" args 0.3)
}
{"centurion tank"
	("cometa34_sound")
	("burn_by_engine" args 0.3)
}
(define "m10wolverine_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/m10wolverine"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/sherman"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m10wolverine"		}
	}
)
{"m10wolverine tank"
	("m10wolverine_sound")
	{on "gunner_hatch_open" overload
		{ani_play "close"}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"m36 tank"
	("m10wolverine_sound")
	{on "gunner_hatch_open" overload
		{ani_play "close"}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"m18 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/mk2"	}
		{link_sound "engine"			"vehicle/engine/m18hellcat"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/sherman"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m18hellcat"		}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"achilles tank"
	("m10wolverine_sound")
	{on "gunner_hatch_open" overload
		{ani_play "close"}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"archer tank"
	("bishop_sound")
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"203b4 tank"
	("bishop_sound")
	("burn_by_engine" args 0.3)
}
{"m24 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m18hellcat"		}
		{link_sound "engine_end"		"vehicle/engine/m4_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/sherman"	}
		{link_sound "exhaust"			"vehicle/engine/m4a2_up"	}
		{link_sound "idle"			"vehicle/engine/m18hellcat"		}
	}
	("burn_by_engine" args 0.3)
}
{"m5a1 tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/m3stuart"	}
		{link_sound "engine"			"vehicle/engine/m3stuart"		}
		{link_sound "engine_end"		"vehicle/engine/tankengine_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "exhaust"			"vehicle/engine/tankengine_up"	}
		{link_sound "idle"			"vehicle/engine/m3stuart"		}
	}
	("burn_by_engine" args 0.3)
}
{"m4a2_76w tank"
	("m4_turret_sound")
	("burn_by_engine" args 0.3)
}
{"sturmtiger tank"
	("pz6_sound")
	("burn_by_engine" args 0.3)
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 15 heating 10}
	}
	{on fire "gun"
		{spawn "sturmtiger_fire" inv_normal}
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
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_extra_big" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
;	{on pierce
;		{if volume "gun" 
;			{if hit_side front            
;				{if rand 0.4
;					{call "stat_break"}
;					{call "__explosion"}
;				} 
;			}
;		}
;	}
}
{"chi-ri tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/heavy2"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/heavy"	}
		{link_sound "engine_end"		"vehicle/engine/heavy_end"}
		{link_sound "exhaust"			"vehicle/engine/heavy_up"	}
		{link_sound "idle"			"vehicle/engine/heavy"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-ha120 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-ha47 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-ha57 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"ha-go tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/pz1"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/mb_end"}
		{link_sound "exhaust"			"vehicle/engine/mb_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"ke-nu tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/m26"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/mb_end"}
		{link_sound "exhaust"			"vehicle/engine/mb_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-he tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/medium"	}
		{link_sound "move"				"vehicle/tracks/m26"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/tank_end"}
		{link_sound "exhaust"			"vehicle/engine/tank_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-nu tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/mb_end"}
		{link_sound "exhaust"			"vehicle/engine/mb_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"chi-to tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/medium1"	}
		{link_sound "move"				"vehicle/tracks/mk7"	}
		{link_sound "engine"			"vehicle/engine/mk7"	}
		{link_sound "engine_end"		"vehicle/engine/mk7_end"}
		{link_sound "exhaust"			"vehicle/engine/mk7_up"	}
		{link_sound "idle"			"vehicle/engine/mk7"	}
	}
	("burn_by_engine" args 0.3)
}
{"ho-i tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/medium3"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/t34"	}
		{link_sound "engine_end"		"vehicle/engine/t34_end"}
		{link_sound "exhaust"			"vehicle/engine/t34_up"	}
		{link_sound "idle"			"vehicle/engine/t34_idle"	}
	}
	("burn_by_engine" args 0.3)
}
{"ho-ni1 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"ho-ni2 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"ho-ni_3 tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("burn_by_engine" args 0.3)
}
{"ho-ro tank"
	{on "add_movement_sound" overload
		{link_sound "rotate_turret" 	"vehicle/turret/light"	}
		{link_sound "move"				"vehicle/tracks/chi-ha"	}
		{link_sound "engine"			"vehicle/engine/chi-ha"	}
		{link_sound "engine_end"		"vehicle/engine/hetzer_end"}
		{link_sound "exhaust"			"vehicle/engine/hetzer_up"	}
		{link_sound "idle"			"vehicle/engine/chi-ha"	}
	}
	("shell_ejection_tank")
	("burn_by_engine" args 0.3)
}
{"churchill_avre tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)
}
{"churchill_mk_vii tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)
}
{"churchill_mk_vii tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)
}
{"black_prince tank"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/t34"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)
}
{"ss-d tank"
	{on spawn	
		{add_view "flamer_fire" "flame1" "foresight9"}
		{add_view "flamer_fire" "flame2" "foresight10"}
		{add_view "flamer_fire" "flame3" "foresight13"}
		{add_view "flamer_fire" "flame4" "foresight12"}
		{add_view "flamer_fire" "flame5" "foresight11"}
		
		{add_view "flamer_fire_barrel" "fire1" "foresight9"}
		{add_view "flamer_fire_barrel" "fire2" "foresight10"}
		{add_view "flamer_fire_barrel" "fire3" "foresight13"}
		{add_view "flamer_fire_barrel" "fire4" "foresight12"}
		{add_view "flamer_fire_barrel" "fire5" "foresight11"}
	
		{view show	"fire1"}
		{view show	"fire2"}
		{view show	"fire3"}
		{view show	"fire4"}
		{view show	"fire5"}
		
		{view start	"fire1"}
		{view start	"fire2"}
		{view start	"fire3"}
		{view start	"fire4"}
		{view start	"fire5"}
	}
	{on break_armor
		{if name "pierce"
			{if rand 0.3
				{if volume "body"
					{call "explosion"}
				}
                        }
                else name "blast"
			{if volume "body"
				{call "explosion"}
			}
                }
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 8 time 15 heating 10}
	}
	
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	{on fire "flamer2"
		{view start	"flame2"}
		{kill_delay "fire2"}
		{delay 0.5 "fire2"
			{view pause	"flame2"}
		}
	}
	{on fire "flamer3"
		{view start	"flame3"}
		{kill_delay "fire3"}
		{delay 0.5 "fire3"
			{view pause	"flame3"}
		}
	}
	{on fire "flamer4"
		{view start	"flame4"}
		{kill_delay "fire4"}
		{delay 0.5 "fire4"
			{view pause	"flame4"}
		}
	}
	{on fire "flamer5"
		{view start	"flame5"}
		{kill_delay "fire5"}
		{delay 0.5 "fire5"
			{view pause	"flame5"}
		}
	}
		
}
{"churchill_crocodile tank"
	{on spawn
		{add_view "flamer_fire" "flame1" "foresight4"}
		{add_view "flamer_fire_barrel" "fire1" "foresight4"}
		{view show	"fire1"}

		{view start	"fire1"}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/tracks/churchill"		}
		{link_sound "engine"			"vehicle/engine/churchill"		}
		{link_sound "engine_end"		"vehicle/engine/churchill_end"	}
		{link_sound "rotate_turret" 	"vehicle/turret/churchill_turret"	}
		{link_sound "exhaust"			"vehicle/engine/churchill_up" 	}
		{link_sound "idle"			"vehicle/engine/churchill"		}
	}
	("burn_by_engine" args 0.3)	
}
{"m4a3_zippo tank"
	{on spawn
		{add_view "flamer_fire" "flame1" "foresight5"}
		{add_view "flamer_fire_barrel" "fire1" "foresight5"}
		{view show	"fire1"}

		{view start	"fire1"}
	}
	{on operatable on	
		{view start	"fire1"}
	}	
	{on operatable off		
		{view stop	"fire1"}
	}
	{on "_explosion"
		{spawn "fuel_die"}
		{blastwave c4 5 r0 4 r1 15}
		{fire radius 5 time 15 heating 10}
	}
	{on fire "flamer1"
		{view start	"flame1"}
		{kill_delay "fire1"}
		{delay 0.5 "fire1"
			{view pause	"flame1"}
		}
	}
	{on "add_movement_sound" overload
		{link_sound "move"					"vehicle/tracks/m4"			}
		{link_sound "engine"				"vehicle/engine/m4"			}
		{link_sound "engine_end"			"vehicle/engine/m4_end"		}
		{link_sound "exhaust"				"vehicle/engine/m4a2_up"		}
		{link_sound "rotate_turret"     	"vehicle/turret/sherman"   	}
		{link_sound "idle"				"vehicle/engine/m4"			}
	}
	("burn_by_engine" args 0.3)	
}


;================	special
(define "snowman"
	{on "add_movement_sound" overload
		{link_sound "move"			"vehicle/engine/dodge_move_new"	}
		{link_sound "engine"			"vehicle/wheels/valami"	}
		{link_sound "engine_end"		"vehicle/engine/pz1_end"}
		{link_sound "exhaust"			"vehicle/engine/Dodge_end"}
	}
	{on pierce overload
		{if volume "body"
			{if rand 0.125
				{call "stat_break"}
				{call "__explosion"}
			}
		}
	}
	{on "__explosion"
		{spawn "tank_die" "basis"}
		{delete}
	}
	{on "explosion"
		{delete}
	}
	("burn_by_engine" args 0.3)
)

{"evil_snowman_1 tank"
	("snowman")
}
{"evil_snowman_2 tank"
	("snowman")
}
{"evil_snowman_3 tank"
	("snowman")
}
{"evil_snowman_4 tank"
	("snowman")
}
;---------------------Normand Pack
(include "inc/tank_NP.inc")
(include "inc/tank_ita.inc")
(include "inc/tank_fra.inc")
(include "inc/tank_hun.inc")
(include "inc/tank_pol.inc")
(include "inc/tank_fin.inc")
(include "inc/tank_chn.inc")
(include "inc/tank_rom.inc")
(include "inc/tank_grc.inc")
(include "inc/tank_bul.inc")
(include "inc/tank_nkr.inc")