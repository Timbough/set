{"barbed_wire"
	{on "cut_pieces"
		{start_sound "crush/small/wire"}
	}
	{on break_armor
		{if name "blast"
			{if min_energy 25
				{call "cut_pieces"}
			}
		}
	}
	{on bullet_hit
		{if stuff "shell"
			{call "cut_pieces"}
			{if volume "piece"
				{if stuff "fg"
					{bullet_detonate}
					{call "cut_pieces"}
				else stuff "grenade"
					{bullet_detonate}
					{call "cut_pieces"}
				}
			}
		}
	}
}

{"spawner_trench_small_foxhole_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_sit_2" "trench1" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_sit_2" "trench1" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_sit_2" "trench1" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_sit_2" "trench1" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_sit_2" "trench1" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_sit_2" "trench1" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_small_foxhole_shallow"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_lie_1" "trench1" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_lie_1" "trench1" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_lie_1" "trench1" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_lie_1" "trench1" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_lie_1" "trench1" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_lie_1" "trench1" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_medium_mortar_foxhole_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_low2" "trench1" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_low2" "trench1" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_low2" "trench1" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_medium_foxhole_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_low2" "trench1" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_low2" "trench1" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_low2" "trench1" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_low2" "trench1" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_medium_mgun_foxhole_shallow"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_low_mgun" "trench1" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_medium_cannon_pit_shallow"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "win1" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "win1" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "sand" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "grass" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_cannon_2_ls" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_cannon_2_rs" "trench3" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_large_flak_pit_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "snow" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "sand" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "grass" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_gun_pit_small" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_ground_exit2" "trench2" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_large_infantry_deep"
        {on spawn
                {delay 0.2
                        {spawn "spheredust_norm" "basis"}
                        {if terrain_fx "country_road"	
                                {spawn "trench_low" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "ground" 0.1}}
                        else terrain_fx "snow"
                                {spawn "trench_low" "trench1" x {tex_morph "snow" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "snow" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "snow" 0.1}}
                        else terrain_fx "sand"
                                {spawn "trench_low" "trench1" x {tex_morph "sand" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "sand" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "sand" 0.1}}
                        else terrain_fx "grass"
                                {spawn "trench_low" "trench1" x {tex_morph "grass" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "grass" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "grass" 0.1}}
                        else terrain_fx "ground"
                                {spawn "trench_low" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "ground" 0.1}}
                        else
                                {spawn "trench_low" "trench1" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench2" x {tex_morph "ground" 0.1}}
                                {spawn "trench_low_exit" "trench3" x {tex_morph "ground" 0.1}}
                        }
                }
        }
}
{"spawner_trench_large_tank_deep"
        {on spawn
                {delay 0.2	
                        {if terrain_fx "snow"
                                {if rand 0.6
                                        {spawn "trench_tank_2_rs" "trench1" x {tex_morph "win1" 0.1}}
                                        {spawn "trench_tank_2_ls" "trench2" x {tex_morph "win1" 0.1}}
                                else rand 0.4
                                        {spawn "trench_tank_2_rs" "trench1" x {tex_morph "1" 0.1}}
                                        {spawn "trench_tank_2_ls" "trench2" x {tex_morph "1" 0.1}}
                                }
                        else
                                {spawn "trench_tank_2_rs" "trench1" x}
                                {spawn "trench_tank_2_ls" "trench2" x}
                        }
                }
        }
}