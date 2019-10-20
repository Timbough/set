	{any
		{translate_damage 1}		; damage multiplier for landmines
		{cover_hitchance 1}   		; the probability of hitting a soldier behind cover
		{crawl_hitchance 1}  		; the probabiltiy of hitting a soldier in crawl position
		{cover_damage 0.9}  		; damage when protected by cover

		{vehicle_burst 1}			; increase timeout between bursts for all vehicles
		{cover_mgun_burst 1}		; increase bullet count in 1 burst of soldier with mgun in horizontal cover
		{cover_mgun_delay 0.01}		; decrease timeout between bursts of soldier with mgun in horizontal cover

		{cover_efficiency			; how cover efficiency will drop with distance
			0		0
			5		0.15
			15		0.75
			25		1.00
		}
		{blast_crawl 1.6}			; simply lying on the ground
		{blast_cover 1.90}          ; in cover from protected side
		{blast_crawl_prepared 1.9}	; lying on the ground & waiting for explosion
		{blast_cover_prepared 2.00}	; in cover not from protected side, but waiting for explosion
		{blast_squat 1.2}			; on the knees
		
		{mounted_mgun 1.0}
		{death_delay_min 1}		; min bleeding out time in seconds
		{death_delay_max 2}		; max bleeding out time in seconds
		{ai_damage 1.00}
	}