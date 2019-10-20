; == CUSTOM ==
(define "instant_39_no_heavy"
	{common
		{unitset
			{value "39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"}
		}
		{commandPoints "*=%cp_total"}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;persize=%army_size;persize_spg=%army_size;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_period" maxmp(%start) warperiod(1939) units_set("ai_cannon|39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"))
	}
)
(define "without_payback_39_no_heavy"
	{common
		{unitset
			{value "39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"}
		}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;persize=%army_size;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
					{growTime	1800}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					;{restoreBegin 	1.25}	; points per sec
					;{restoreEnd 	1.25}	; points per sec
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1939) units_set("ai_cannon|39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"))
	}
)
(define "payback_39_no_heavy"
	{common
		{unitset
			{value "39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"}
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
					{restoreBegin 	1.25}	 points per sec
					{restoreEnd 	1.25}	 points per sec
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_payback" startmp(%start) finishmp(%finish) warperiod(1939) units_set("ai_cannon|39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"))
	}
)
(define "without_payback_plus_39_no_heavy"
	{common
		{unitset
			{value "39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"}
		}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;airborne=2;persize=%army_size;rare1=1;rare2=1;rare3=1;rare4=1;"}
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
					{growTime   2100}
					{growTable  "3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					;{restoreBegin 	1.25}	; points per sec
					;{restoreEnd 	1.25}	; points per sec
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
					{limitmin	100}
                    {limitmax   75000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1939) units_set("ai_cannon|39^inf|heavy|sheavy|heavy_art|rocket|airborne|n39"))
	}
)
{presets
;------------------------------------------------------------------------------------------------------------	
	{"p:without_payback_60_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "squad_60"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(2400) cp(60) army_size(1))
	}
	{"p:without_payback_80_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "platoon_80"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(3200) cp(80) army_size(1))
	}
	{"p:without_payback_100_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "company_100"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(4000) cp(100) army_size(2))
		{ranked}
	}		
	{"p:without_payback_120_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "battalion_120"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(4800) cp(120) army_size(2))
	}
	{"p:without_payback_140_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "regiment_140"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(5600) cp(140) army_size(3))
	}
	{"p:without_payback_160_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "division_160"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(6400) cp(160) army_size(3))
	}
	{"p:without_payback_200_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "Corps_200"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(10000) cp(200) army_size(4))
	}
	{"p:without_payback_400_39_no_heavy"	
		{gameMode "without_payback"}
		{unitMode "39_no_heavy"}
		{specMode "Army_400"}
		{apply "Menu_39"}
		("without_payback_39_no_heavy" start(160) finish(20000) cp(400) army_size(4))
	}
;------------------------------------------------------------------------------------------------------------	
	{"wpp:payback_wot_60_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "squad_60"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(7200) cp(60) army_size(1))
	}
	{"wpp:payback_wot_80_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "platoon_80"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(9600) cp(80) army_size(1))
	}
	{"wpp:payback_wot_100_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "company_100"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(12000) cp(100) army_size(2))
	}		
	{"wpp:payback_wot_120_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "battalion_120"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(14400) cp(120) army_size(2))
	}
	{"wpp:payback_wot_140_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "regiment_140"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(16800) cp(140) army_size(3))
	}
	{"wpp:payback_wot_160_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "division_160"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(20400) cp(160) army_size(3))
	}
	{"wpp:payback_wot_200_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "Corps_200"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(30000) cp(200) army_size(4))
	}
	{"un:unlimited_39_no_heavy"	
		{gameMode "unlimited"}
		{unitMode "39_no_heavy"}
		{specMode "unlimited"}
		{apply "Menu_39_wot"}
		("payback_39_no_heavy" start(50000) finish(50000) cp(2500) army_size(100))
	}
	{"wpp:payback_wot_400_39_no_heavy"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "39_no_heavy"}
		{specMode "Army_400"}
		{apply "Menu_39_wot"}
		("without_payback_plus_39_no_heavy" start(160) finish(60000) cp(400) army_size(4))
	}
;------------------------------------------------------------------------------------------------------------	
	{"wu:without_update_wot_60_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "squad_60"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(60) army_size(1) start(2400))
	}
	{"wu:without_update_wot_80_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "platoon_80"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(80) army_size(1) start(3200))
	}
	{"wu:without_update_wot_100_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "company_100"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(100) army_size(2) start(4000))
	}
	{"wu:without_update_wot_120_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "battalion_120"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(120) army_size(2) start(4800))
	}
	{"wu:without_update_wot_140_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "regiment_140"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(140) army_size(3) start(5600))
	}
	{"wu:without_update_wot_160_39_no_heavy"
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "division_160"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(160) army_size(3) start(6400))
	}
	{"wu:without_update_wot_200_39_no_heavy"	
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "Corps_200"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(200) army_size(4) start(10000))
	}
	{"wu:without_update_wot_400_39_no_heavy"	
		{gameMode "without_update_wot"}
		{unitMode "39_no_heavy"}
		{specMode "Army_400"}
		{apply "Menu_39_wot"}
		("instant_39_no_heavy" cp_total(400) army_size(4) start(20000))
	}
}
;-------------------------------------------------------------------------------------------------
