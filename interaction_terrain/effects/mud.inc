;SDL
{"mud"
  {on hit
    {if min_mass 100
      {spawn "spheredust_small"}
    else min_mass 10
      {spawn "spheredust_small_short"}
    }
  }
  {on detonate
    {if stuff "molotov_coctail"
      {spawn "ex_molot"}
;-------------- Normand Pack
    else stuff  "erguotou"
       {spawn "ex_molot"}
    else stuff "big sm"		;for smoke
	{spawn "ex_arm_big"}
	{spawn "smoke_shell"}
    else stuff "sm"		;for smoke
	{spawn "smoke_shell"}
   else stuff "nbk"
	{spawn "smoke_shell"}
   else stuff "mortar_ab_light"
	{spawn "mortar_ab_light_ground"}
   else stuff "heat_small"
		{spawn "ex_heat_small"}
      	{spawn "crater_small_land" terrain_texmod}
	else stuff "heat_medium"
		{spawn "ex_heat_medium"}
    	{spawn "crater_small_land" terrain_texmod}
	else stuff "heat_big"
		{spawn "ex_heat_big"}
      	{spawn "crater_small" terrain_texmod}
	else stuff "nebel incendiary"
		{spawn "ex_incendiary"}
    else stuff "mortar_fg_medium"
			(mod not "mp"
				{spawn "sp_ex_fg_medium_mortar"}
			)
			(mod "mp"
				{spawn "ex_fg_medium_mortar"}
			)
		{spawn "grenade_at_shellhole" terrain_texmod}
	else stuff "mortar_flame"
		{spawn "ex_incendiary"}
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
    else stuff "big smoke"
		{spawn "ex_arm_big"}
		{spawn "smoke_shell"}
    else stuff "dynamite"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "grenade big"
      {spawn "ex_grenade_big"}
      {spawn "grenade_at_shellhole" terrain_texmod}
    else stuff "grenade"
      {spawn "ex_grenade_sm"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "small bullet"
      {spawn "ex_bul_sm2"}
	else stuff "zenite fg"
      {spawn "ex_fg_zenite"}
      {spawn "grenade_shellhole" terrain_texmod}
    else stuff "zenite"
      {spawn "ex_bul_zenit"}
      {spawn "shellhole_small"}
    else stuff "bullet hmgun"
      {spawn "ex_bul_heavy"}
    else stuff "bullet"
      {spawn "ex_bul_big2"}
    else stuff "mortar"
			(mod not "mp"
				{spawn "sp_ex_mort_big"}
			)
			(mod "mp"
				{spawn "ex_mort_big"}
			)
      {spawn "shellhole_big"}
	else stuff "shell_big_mortar"
			(mod not "mp"
				{spawn "sp_ex_fg_big_mortar"}
			)
			(mod "mp"
				{spawn "ex_fg_big_mortar"}
			)
      {spawn "crater_norm_land" terrain_texmod}
	else stuff "big mortar_smoke"
	  {spawn "mortar_smoke"}
	  {spawn "spheredust_small_short"}
    else stuff "big shell extra"
      {spawn "ex_bomb_big"}
      {spawn "crater_norm"}
    else stuff "big shell fg bomb no_crater small"
      {spawn "shockwave"}
      {spawn "ex_anti_big"}
      {spawn "shellhole4d3"}
    else stuff "big shell fg bomb no_crater"
      {spawn "ex_bomb_big"}
      {spawn "shellhole4d2"}
    else stuff "big shell fg bomb"
      {spawn "ex_bomb_big"}
      {spawn "crater_norm"}
    else stuff "big shell fg"
      {spawn "shockwave"}
      {spawn "ex_anti_big"}
      {spawn "crater_norm"}
    else stuff "big shell ap"
      {spawn "ex_arm_big"}
      {spawn "crater_small"}
    else stuff "small shell fg"
      {spawn "shockwave"}
      {spawn "ex_anti_small"}
      {spawn "shellhole_big_ground"}
    else stuff "shell fg"
      {spawn "shockwave"}
      {spawn "ex_anti_big"}
      {spawn "crater_norm"}
    else stuff "shell ap"
      {spawn "ex_arm_sm"}
      {spawn "crater_small"}
    else stuff "mine antipersonnel"
      {spawn "ex_grenade_big"}
      {spawn "shellhole_medium"}
    else stuff "mine antitank"
	  {spawn "ex_arm_big"}
      {spawn "shellhole_big"}
	else stuff "mine clockwork"
		{spawn "ex_anti_big"}
		{spawn "shellhole_big"}
    else stuff "dynamite_clockwork"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "tnt_bag"
      {spawn "ex_bomb_big"}
      {spawn "shellhole_big"}
    else stuff "strike flaer"
	{spawn "ground_target_flaer"}
    else stuff "flaerammo"
	  {spawn "artillery_explosion_flaer"}
    }
  }
}
