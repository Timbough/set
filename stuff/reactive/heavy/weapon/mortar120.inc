{weapon_bullet
	{tag "mrl gun"}
	{filling "ammo mortar120" 1}
	{fillingVisible "rocket"}

	{fireSound "reactive/mortar"}
	{foresight "foresight"}
	
	{spreading 
		{SpreadRadius 35}
		{radiusFunction
			0.1	0.1
			1	1
			2	2
			3	3
			4	4
			5	5
		}
	}
	{range 150 1000}
	{recoveryTime 6}
	{rechargeTime 6}
	
	
	
	{gravity 4}
	{ZeroingAccuracy 1.0 1.0 1.0 0.95 0.9 0.85 0.8 0.75}
	
	{RelaxationTime 1.2}
	{projectileDamage 20}
	{speed 100}
	{AimingTolerance 0.1}
	{projectileDamageTable {130 20}}
	
	{aimtype curved}
	{cursor "cannon_on_fg"}
	{cursorReloading "cannon_reload_fg"}
	
	{parameters "sm"
		{cursor "cannon_on_sm"}
		{cursorReloading "cannon_reload_sm"}
	}
	
	{parameters "ic"
		{cursor "cannon_on_ic"}
		{cursorReloading "cannon_reload_ic"}
	}
	
	{parameters "wp"
		{cursor "cannon_on_wp"}
		{cursorReloading "cannon_reload_wp"}
        	}
	
	{parameters "fl"
		{cursor "cannon_on_fl"}
		{cursorReloading "cannon_reload_fl"}
	}
}