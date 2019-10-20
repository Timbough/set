; == sea battle ==
(define "without_payback_sea_battle"
	{common
		{unitset
			{value "seacombat|airborne|sailors^nseacombat|inf_only|inf_only2|inf_only3"}
		}
		{commandPoints "*=%cp"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1.0"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime   2100}
					{growTable  "3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_ww2" startmp(%start) finishmp(%finish) units_set("seacombat|airborne|sailors^nseacombat|inf_only|inf_only2|inf_only3"))
	}
)
{presets
;------------------------------------------------------------------------------------------------------------	
	{"p:without_payback_sea_battle_60"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "squad_60"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(2400) cp(60))
	}
	{"p:without_payback_sea_battle_80"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "platoon_80"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(3200) cp(80))
	}
	{"p:without_payback_sea_battle_100"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "company_100"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(4000) cp(100))
		{ranked}
	}		
	{"p:without_payback_sea_battle_120"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "battalion_120"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(4800) cp(120))
	}
	{"p:without_payback_sea_battle_140"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "regiment_140"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(5600) cp(140))
	}
	{"p:without_payback_sea_battle_160"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "division_160"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(6400) cp(160))
	}
	{"p:without_payback_sea_battle_200"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "Corps_200"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(10000) cp(200))
	}
	{"p:without_payback_sea_battle_400"	
		{gameMode "without_payback_sea_battle"}
		{unitMode "sea_battle"}
		{specMode "Army_400"}
		{apply "Menu_seacombat"}
		("without_payback_sea_battle" start(700) finish(20000) cp(400))
	}
}
