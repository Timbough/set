;SDL
{"air"
	{on detonate
		{if stuff "molotov_coctail"
			{spawn "ex_molot"}
		else stuff "dynamite"
			{spawn "ex_bomb_big"}
		else stuff "grenade"
			{spawn "ex_air_big"}
		else stuff "big shell fg bomb"
			{spawn "ex_bomb_big"}
		else stuff "size_maximum"
			{spawn "ex_air_big2"}
;------------------Normand Pack		
		else stuff "big sm"			;for smoke shell
			{spawn "metal_hit_br"}
			{spawn "smoke_shell"}
		else stuff "small sm"			;for smoke shell
			{spawn "smoke_shell"}
		else stuff "nbk"
			{spawn "smoke_shell"}
		else stuff  "erguotou"
			{spawn "ex_molot"}
		else stuff "shrapnel"
      			{spawn "ex_air_big"}
;------------------Normand Pack
		}
	}
}
