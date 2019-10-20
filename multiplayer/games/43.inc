; == CUSTOM ==
(define "instant_43"
	{common
		{unitset
			{value "43^inf|n43"}
		}
		{commandPoints "*=%cp_total"}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
					{finish 	50000}
					{speed 		0}
					{limitmin	2000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1943"}
			}
		}
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_period" maxmp(%start) warperiod(1943) units_set("ai_cannon|43^inf|n43"))
	}
)
(define "without_payback_43"
	{common
		{unitset
			{value "43^inf|n43"}
		}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
					{growTime	1800}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1943"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1943) units_set("ai_cannon|43^inf|n43"))
	}
)
(define "payback_43"
	{common
		{unitset
			{value "43^inf|n43"}
		}
		{commandPoints "*=%cp"}
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
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1943"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_payback" startmp(%start) finishmp(%finish) warperiod(1943) units_set("ai_cannon|43^inf|n43"))
	}
)
(define "without_payback_plus_43"
	{common
		{unitset
			{value "43^inf|n43"}
		}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
                    {limitmax   75000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1943"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1943) units_set("ai_cannon|43^inf|n43"))
	}
)
{presets
;------------------------------------------------------------------------------------------------------------	
	{"p:without_payback_60_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "squad_60"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(2400) cp(60))
	}
	{"p:without_payback_80_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "platoon_80"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(3200) cp(80))
	}
	{"p:without_payback_100_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "company_100"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(4000) cp(100))
		{ranked}
	}		
	{"p:without_payback_120_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "battalion_120"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(4800) cp(120))
	}
	{"p:without_payback_140_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "regiment_140"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(5600) cp(140))
	}
	{"p:without_payback_160_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "division_160"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(6400) cp(160))
	}
	{"p:without_payback_200_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "Corps_200"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(10000) cp(200))
	}
	{"p:without_payback_400_43"	
		{gameMode "without_payback"}
		{unitMode "43"}
		{specMode "Army_400"}
		{apply "Menu_43"}
		("without_payback_43" start(160) finish(20000) cp(400))
	}
;------------------------------------------------------------------------------------------------------------	
	{"wpp:payback_wot_60_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "squad_60"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(7200) cp(60))
	}
	{"wpp:payback_wot_80_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "platoon_80"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(9600) cp(80))
	}
	{"wpp:payback_wot_100_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "company_100"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(12000) cp(100))
	}		
	{"wpp:payback_wot_120_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "battalion_120"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(14400) cp(120))
	}
	{"wpp:payback_wot_140_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "regiment_140"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(16800) cp(140))
	}
	{"wpp:payback_wot_160_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "division_160"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(20400) cp(160))
	}
	{"wpp:payback_wot_200_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "Corps_200"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(30000) cp(200))
	}
	{"un:unlimited_43"	
		{gameMode "unlimited"}
		{unitMode "43"}
		{specMode "unlimited"}
		{apply "Menu_43_wot"}
		("payback_43" start(50000) finish(50000) cp(2500))
	}
	{"wpp:payback_wot_400_43"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "43"}
		{specMode "Army_400"}
		{apply "Menu_43_wot"}
		("without_payback_plus_43" start(160) finish(60000) cp(400))
	}
;------------------------------------------------------------------------------------------------------------
	{"wu:without_update_wot_60_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "squad_60"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(60) start(2400))
	}
	{"wu:without_update_wot_80_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "platoon_80"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(80) start(3200))
	}
	{"wu:without_update_wot_100_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "company_100"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(100) start(4000))
	}
	{"wu:without_update_wot_120_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "battalion_120"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(120) start(4800))
	}
	{"wu:without_update_wot_140_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "regiment_140"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(140) start(5600))
	}
	{"wu:without_update_wot_160_43"
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "division_160"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(160) start(6400))
	}
	{"wu:without_update_wot_200_43"	
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "Corps_200"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(200) start(10000))
	}
	{"wu:without_update_wot_400_43"	
		{gameMode "without_update_wot"}
		{unitMode "43"}
		{specMode "Army_400"}
		{apply "Menu_43_wot"}
		("instant_43" cp_total(400) start(20000))
	}
}
;-------------------------------------------------------------------------------------------------
