(define "firing"
	{welrod 0.0}
	{nagan_pb 0.0}
	{delisle 0.0}
	{hdm 0.0}
	{sten_v_silencer 0.0}
	{knife_ger 0}
	{knife_rus 0}
	{knife_union 0}
	{knife_japan 0}
	{axe 0}	
	{crow_bar 0}
	{smoke 0.0}
	{smoke_paradrop_ammo 0}
	{smoke_paradrop_ammo_heavy 0}
	{f1 0}
	{m24 0}
	{m39 0}
	{m61 0}
	{mk1 0}
	{satchel 0}
	{type97 0}
	{type99 0}
	{m24x5 0}
	{molotov_coctail 0}
	{n73at 0}
	{pwm1 0}
	{rg42x3 0}
	{rpg40 0}
	{rpg43 0}
	{type3at 0}
	{type3at_a 0}
	{type99at 0}
)
(define "vision"
	{cover 0.5
		{stand 0.5
			{stealth 0.3}		; 50%
		}
		{squat 0.45
			{stealth 0.25}		; 50%
		}
		{crawl 0.23
			{stealth 0.03}		; 50%
		}
    }
    {squat 0.55
        {stealth 0.35}			; 50%
	}
    {crawl 0.33
        {stealth 0.1}			; 50%
        {still 0.23
            {stealth 0.03}		; 50%
        }
    }
    {still 0.77}
    {visible 0.87}
)

(define "cannon"
        {cannon_01 1.2
            {firing 0.1} ;The range at which a vehicle is revealed when firing INFRONT of another vehicles FOV
            {visible 0.75}
            {still 0.75}
        }
        {cannon_02 1.3
            {firing 0.2}
            {visible 0.8}
            {still 0.8}
        }
        {cannon_03 1.4
            {firing 0.3}
            {visible 0.85}
            {still 0.85}
        }
        {cannon_04 1.5
            {firing 0.4}
            {visible 0.9}
            {still 0.9}
        }
        {cannon_05 1.6
            {firing 0.5}
            {visible 0.95}
            {still 0.95}
        }
)
(define "tank"
       {vehicle_01 1.2
            {firing 3.3}
            {visible 1.1}
            {still 1.1}
        }
        {vehicle_02 1.3
            {firing 3.45}
            {visible 1.15}
            {still 1.15}
        }
        {vehicle_03 1.4
            {firing 3.6}
            {visible 1.2}
            {still 1.2}
        }
        {vehicle_04 1.5
            {firing 3.75}
            {visible 1.25}
            {still 1.25}
        }
        {vehicle_05 1.6
            {firing 3.9}
            {visible 1.3}
            {still 1.3}
        }
        {air 4.0
            {firing 6}
            {visible 3.0}
            {still 1.4}
        }
)