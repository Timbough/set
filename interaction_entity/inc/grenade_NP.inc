{"grenade"
	{on spawn
		{add_view "grenade_tail" "trace" "root"}
	}
	{on "onThrow"
		{view start "trace"}
		{volumes "body" disable contact}
	}
	{on "onThrowActivate"
		{volumes "body" enable contact}
	}
	{on contact
		{view stop "trace"}
		{if stuff_activated
			{if effector "human"
				{call "fall_down"}
			else effector "cannon"
				{link_grenade_to_nearest_human teleport}
			}
		}
	}
	{on "in_hole"
		{break_window_in_hole}
		{link_grenade_to_nearest_human}
	}
	{on ground_hit
		{view stop "trace"}
	}
	{on "fall_down"
		{volumes disable contact}
		{fall_down}
	}
}

{"grenade training"
	{on spawn
		{tags add "grenade"}
	}
}

{"grenade contact"
	{on ground_hit
		{if stuff_activated
			{if not name "water"
				{call "ground_detonate"}
			}
		}
	}
	{on "in_hole" overload}
	{on contact
		{if stuff_activated
			{call "contact_detonate"}
		}
	}
	{on "ground_detonate"
		{call "detonate"}
	}
	{on "contact_detonate"
		{call "detonate"}
	}
	{on "detonate"
		{stuff_detonate}
	}
	{on "fall_down" overload}
}

{"grenade smoke"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke"
		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 60
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 62
			{hide 1}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}


{"grenade smoke yellow"
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
}

{"grenade smoke mortar_smoke"
	{on spawn
		{volumes disable touch select}
		{call "activate"}
	}
}

{"molotov_coctail"
	{on bullet_hit
		{fire radius 1.5 time 2 heating 6 effector}
		{call "detonate"}
	}
	{on blast
		{if min_energy 0.3
			{fire radius 1.5 time 2 heating 6 effector}
			{call "detonate"}
		}
	}
	{on "ground_detonate"
		{fire radius 2 time 15}
	}
	{on "contact_detonate" overload
		{if effector "construction"
			{volumes disable bullet contact blast}
			{fire radius 1.5 time 2 heating 6 effector}
			{delay 0.1
				{call "detonate"}
			}
		else
		;	{fire radius 1.5 time 2 heating 20 effector follow}
			{fire radius 0.7 time 0.7 heating 30 effector}
			{call "detonate"}
                 }
	}
}

{"grenade_m24flaml"
	{on bullet_hit
		{fire radius 1.5 time 2 heating 6 effector}
		{call "detonate"}
	}
	{on blast
		{if min_energy 0.3
			{fire radius 1.5 time 2 heating 6 effector}
			{call "detonate"}
		}
	}
	{on "ground_detonate"
		{fire radius 2 time 5}
	}
	{on "contact_detonate" overload
		{if effector "construction"
			{volumes disable bullet contact blast}
			{fire radius 1.5 time 2 heating 6 effector}
			{delay 0.1
				{call "detonate"}
			}
		else
		;	{fire radius 1.5 time 2 heating 20 effector follow}
			{fire radius 0.7 time 0.7 heating 30 effector}
			{call "detonate"}
		}
	}
}

{"smoke_shell"	;для дымовых БП
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
		{call "activate"}
	}
	{on "add_smoke"
		{add_view "smoke_cover-up_small"	"smoke1" "root"}
		{add_view "smoke_cover-up_norm"		"smoke2" "root"}
		{add_view "smoke_cover-up_big"		"smoke3" "root"}
	}	
	{on "activate"
		{volumes disable touch select}
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 30
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 32
			{hide 1}
		}
	}
}
{"ita_paradropammo"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 10
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 12
			{hide 1}
            		{spawn "ita_paradrop_ammo"}
			{start_sound "world/ambient/bomber_flyby.wav"}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"ita_paradropammo_heavy"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 10
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 12
			{hide 1}
            		{spawn "ita_paradrop_ammo_heavy"}
			{start_sound "world/ambient/bomber_flyby.wav"}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"fr_paradropammo"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 10
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 12
			{hide 1}
            		{spawn "fr_paradrop_ammo"}
			{start_sound "world/ambient/bomber_flyby.wav"}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
{"fr_paradropammo_heavy"
	{on spawn
		{call "add_smoke"}
		{link_sound "smoke" "detonation/grenade_smoke/grenade_smoke"}
	}
	{on "add_smoke" overload
		{add_view "smoke_yellow_small"	"smoke1" "root"}
		{add_view "smoke_yellow_norm"	"smoke2" "root"}
		{add_view "smoke_yellow_big"	"smoke3" "root"}
	}
	{on "onThrow"
		{volumes disable touch select}
	}
	{on "activate"
		{play_sound "smoke" 1}
		{tags add "smoke"}
		{view stop "smoke1"}
		{view start "smoke2"}
		{volumes "smoke1" enable visible}
		{update_visibility_patch}
		{delay 2
			{view stop "smoke2"}
			{view start "smoke3"}
			{volumes "smoke1" disable visible}
			{volumes "smoke2" enable visible}
			{update_visibility_patch}
		}
		{delay 5
			{volumes "smoke2" disable visible}
			{volumes "smoke3" enable visible}
			{update_visibility_patch}
		}
		{delay 10
			{view stop "smoke3"}
			{stop_sound "smoke"}
		}
		{delay 12
			{hide 1}
            		{spawn "fr_paradrop_ammo_heavy"}
			{start_sound "world/ambient/bomber_flyby.wav"}
		}
	}
	{on ground_hit
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{if under_water
					{hide 1}
				else
					{delay 3
						{call "activate"}
					}
				}
			}
		}
	}
	{on contact
		{if stuff_activated
			{if not "activated"
				{set "activated" 1}
				{delay 3
					{call "activate"}
				}
			}
		}
	}
}
