;SDL
{"bridge"
	{on hit
		{spawn "spheredust_small_short"}
	}
	{on detonate
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
   		else stuff "big smoke"
       		{spawn "ex_arm_big"}
       		{spawn "smoke_shell"}
		else stuff  "erguotou"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
		else stuff "big sm"		;for smoke shell
			{spawn "ex_arm_big"}
			{spawn "smoke_shell"}
		else stuff "sm"			;for smoke shell
			{spawn "smoke_shell"} 
    	else stuff "nbk"
			{spawn "smoke_shell"}
		else stuff "mortar_flame"
			{spawn "ex_incendiary"}
		else stuff "mortar_ab_light"
			{spawn "mortar_ab_light_ground"}
		else stuff "heat_small"
			{spawn "ex_heat_small"}
		else stuff "heat_medium"
			{spawn "ex_heat_medium"}
		else stuff "heat_big"
			{spawn "ex_heat_big"}
		else stuff "mortar_fg_medium"
			(mod not "mp"
				{spawn "sp_ex_fg_medium_mortar"}
			)
			(mod "mp"
				{spawn "ex_fg_medium_mortar"}
			)
		else stuff "nebel incendiary"
			{spawn "ex_incendiary"}
		else stuff "small_deep_fx"
			{spawn "ex_fg_small_deep"}
			{spawn "crater_norm_land" terrain_texmod}
		else stuff "medium_deep_fx"
			{spawn "ex_fg_medium_deep"}
			{spawn "crater_norm" terrain_texmod}
		else stuff "artillery_explosion_mega"
			{spawn "ex_fg_mega"}
			{spawn "crater_norm_land_big" terrain_texmod}
		else stuff "sturmtiger ammo"
			{spawn "ex_fg_380"}
			{spawn "crater_big" terrain_texmod}
		else stuff "bullet600 ammo"
			{spawn "ex_fg_mega"}
			{spawn "crater_norm_land_big" terrain_texmod}
		else stuff "wp_small"
			{spawn "ex_wp_small"}
		else stuff "wp_medium"
			{spawn "ex_wp_medium"}
		else stuff "wp ammo big"
			{spawn "ex_wp_big"}
		else stuff "wp ammo"
       		{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
       		{spawn "phosphorus_small"}
       		{spawn "ex_wp"}
		else stuff "shrapnel"
        	{spawn "srapnel"}
		else stuff "dynamite"
			{spawn "ex_bomb_big"}
		else stuff "grenade big"
			{spawn "ex_grenade_big"}
		else stuff "grenade"
			{spawn "ex_grenade_sm"}
		else stuff "small bullet"
			{spawn "ex_bul_sm"}
		else stuff "zenite"
			{spawn "ex_bul_zenit"}
		else stuff "bullet"
			{spawn "ex_bul_big"}
		else stuff "big mortar"
			(mod not "mp"
				{spawn "sp_ex_mort_big"}
			)
			(mod "mp"
				{spawn "ex_mort_big"}
			)
		else stuff "mortar_smoke"
			{spawn "mortar_smoke"}
	  		{spawn "spheredust_small_short"}	
		else stuff "mortar"
			{spawn "ex_bomb_big"}
		else stuff "shell size_minimum fg"
	   		{spawn "ex_fg_minimum"}
    	else stuff "shell size_minimum"
			{spawn "ex_ap_minimum"}
    	else stuff "shell size_small fg"
			{spawn "shockwave"}
			{spawn "ex_fg_small"}
	    else stuff "shell size_small"
			{spawn "shockwave"}
			{spawn "ex_ap_small"}
		else stuff "shell size_medium fg"
			(mod not "mp"
				{spawn "sp_ex_fg_medium"}
			)
			(mod "mp"
				{spawn "ex_fg_medium"}
			)
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_medium"
			{spawn "ex_ap_medium"}
		else stuff "shell size_big fg"
			(mod not "mp"
				{spawn "sp_ex_fg_big"}
			)
			(mod "mp"
				{spawn "ex_fg_big"}
			)
			{spawn "crater_norm" terrain_texmod}
		else stuff "shell size_big"
			{spawn "ex_ap_medium"}
   		else stuff "shell size_maximum"
			{spawn "shockwave"}
			{spawn "ex_fg_maximum"}
    	else stuff "ap shell"
   			{spawn "ex_grenade_sm"}
		else stuff "big shell extra"
			{spawn "ex_bomb_big"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big"}
		else stuff "mine antipersonnel"
			{spawn "ex_grenade_big"}
		else stuff "mine antitank"
			{spawn "ex_arm_big"}
		else stuff "mine clockwork"
			{spawn "ex_anti_big"}
		else stuff "dynamite_clockwork"
			{spawn "ex_bomb_big"}
		else stuff "tnt_bag"
			{spawn "ex_bomb_big"}
		else stuff "strike flaer"
			{spawn "ground_target_flaer"}
		else stuff "flaerammo"
			{spawn "artillery_explosion_flaer"}
		}
	}
}

{"bridge_wood"
	{on hit
		{spawn "spheredust_small_short"}
	}
	{on detonate
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
		else stuff "sturmtiger ammo"
			{spawn "ex_fg_380"}
			{spawn "crater_big" terrain_texmod}
		else stuff "wp_small"
			{spawn "ex_wp_small"}
		else stuff "wp_medium"
			{spawn "ex_wp_medium"}
		else stuff "wp ammo big"
			{spawn "ex_wp_big"}
		else stuff "wp ammo"
			{spawn "ex_wp"}
		else stuff "nebel incendiary"
			{spawn "ex_incendiary"}
		else stuff  "erguotou"
			{spawn "ex_molot"}
			{spawn "fire_molot_ground"}
		else stuff "grenade big"
			{spawn "ex_grenade_big"}
		else stuff "grenade"
			{spawn "ex_grenade_sm"}
		else stuff "small bullet"
			{spawn "ex_bul_sm"}
		else stuff "zenite"
			{spawn "ex_bul_zenit"}
		else stuff "bullet"
			{spawn "wood_hit_bul"}
		else stuff "big mortar"
			{spawn "ex_mort_big_wood"}
		else stuff "mortar"
			{spawn "ex_bomb_big_wood"}
		else stuff "mortar_flame"
			{spawn "ex_incendiary"}
		else stuff "big shell extra"
			{spawn "ex_bomb_big_wood"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big_wood"}
		else stuff "big shell fg"
			{spawn "shockwave"}
			{spawn "ex_anti_big_wood"}
		else stuff "big shell ap"
			{spawn "ex_mort_big_wood"}
		else stuff "small shell fg"
			{spawn "shockwave"}
			{spawn "ex_mort_sm_wood"}
		else stuff "shell fg"
			{spawn "shockwave"}
			{spawn "ex_anti_big_wood"}
		else stuff "shell ap"
			{spawn "ex_mort_sm_wood"}
		else stuff "mine antipersonnel"
			{spawn "ex_grenade_big"}
		else stuff "mine antitank"
			{spawn "ex_mort_big_wood"}
		else stuff "mine clockwork"
			{spawn "ex_anti_big_wood"}
		else stuff "dynamite"
			{spawn "ex_bomb_big_wood"}
		else stuff "strike flaer"
			{spawn "ground_target_flaer"}
		else stuff "flaerammo"
			{spawn "artillery_explosion_flaer"}
		else stuff "wp ammo"
            {spawn "ex_molot"}
			{spawn "fire_molot_ground"}
		else stuff "shrapnel"
            {spawn "srapnel"}
		}
	}
}
