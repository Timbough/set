; == CUSTOM ==
(define "instant_41_no_heavy_art"
	{common
		{unitset
			{value "41^inf|heavy_art|rocket|n41"}
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
				{buttons "1941"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_period" maxmp(%start) warperiod(1941) units_set("ai_cannon|41^inf|heavy_art|rocket|n41"))
	}
)
(define "without_payback_41_no_heavy_art"
	{common
		{unitset
			{value "41^inf|heavy_art|rocket|n41"}
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
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
					}
					;{restoreBegin 	1.25}	; points per sec
					;{restoreEnd 	1.25}	; points per sec
					{limitmin	100}
					{limitmax	50000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1941"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1941) units_set("ai_cannon|41^inf|heavy_art|rocket|n41"))
	}
)
(define "payback_41_no_heavy_art"
	{common
		{unitset
			{value "41^inf|heavy_art|rocket|n41"}
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
				{buttons "1941"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_payback" startmp(%start) finishmp(%finish) warperiod(1941) units_set("ai_cannon|41^inf|heavy_art|rocket|n41"))
	}
)
(define "without_payback_plus_41_no_heavy_art"
	{common
		{unitset
			{value "41^inf|heavy_art|rocket|n41"}
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
					{limitmin	100}
                    {limitmax   75000}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
			{time
				{buttons "1941"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1941) units_set("ai_cannon|41^inf|heavy_art|rocket|n41"))
	}
)
{presets
;------------------------------------------------------------------------------------------------------------	
	{"p:without_payback_60_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "squad_60"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(2400) cp(60) army_size(1))
	}
	{"p:without_payback_80_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "platoon_80"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(3200) cp(80) army_size(1))
	}
	{"p:without_payback_100_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "company_100"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(4000) cp(100) army_size(2))
		{ranked}
	}		
	{"p:without_payback_120_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "battalion_120"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(4800) cp(120) army_size(2))
	}
	{"p:without_payback_140_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "regiment_140"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(5600) cp(140) army_size(3))
	}
	{"p:without_payback_160_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "division_160"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(6400)  cp(160) army_size(3))
	}
	{"p:without_payback_200_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "Corps_200"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(10000) cp(200) army_size(4))
	}
	{"p:without_payback_400_41_no_heavy_art"	
		{gameMode "without_payback"}
		{unitMode "41_no_heavy_art"}
		{specMode "Army_400"}
		{apply "Menu_41"}
		("without_payback_41_no_heavy_art" start(160) finish(20000) cp(400) army_size(4))
	}
	{"un:unlimited_41_no_heavy_art"	
		{gameMode "unlimited"}
		{unitMode "41_no_heavy_art"}
		{specMode "unlimited"}
		{apply "Menu_41_wot"}
		("payback_41_no_heavy_art" start(50000) finish(50000) cp(2500) army_size(100))
	}
;------------------------------------------------------------------------------------------------------------
	{"wu:without_update_60_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "squad_60"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(60) army_size(1) start(2400))
	}
	{"wu:without_update_80_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "platoon_80"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(80) army_size(1) start(3200))
	}
	{"wu:without_update_100_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "company_100"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(100) army_size(2) start(4000))
	}
	{"wu:without_update_120_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "battalion_120"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(120) army_size(2) start(4800))
	}
	{"wu:without_update_140_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "regiment_140"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(140) army_size(3) start(5600))
	}
	{"wu:without_update_160_41_no_heavy_art"
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "division_160"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(160) army_size(3) start(6400))
	}
	{"wu:without_update_200_41_no_heavy_art"	
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "Corps_200"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(200) army_size(4) start(10000))
	}
	{"wu:without_update_400_41_no_heavy_art"	
		{gameMode "without_update"}
		{unitMode "41_no_heavy_art"}
		{specMode "Army_400"}
		{apply "Menu_41"}
		("instant_41_no_heavy_art" cp_total(400) army_size(4) start(20000))
	}
;------------------------------------------------------------------------------------------------------------	
	{"wpp:payback_wot_60_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "squad_60"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(7200) cp(60) army_size(1))
	}
	{"wpp:payback_wot_80_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "platoon_80"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(9600) cp(80) army_size(1))
	}
	{"wpp:payback_wot_100_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "company_100"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(12000) cp(100) army_size(2))
	}		
	{"wpp:payback_wot_120_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "battalion_120"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(14400) cp(120) army_size(2))
	}
	{"wpp:payback_wot_140_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "regiment_140"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(16800) cp(140) army_size(3))
	}
	{"wpp:payback_wot_160_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "division_160"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(20400)  cp(160) army_size(3))
	}
	{"wpp:payback_wot_200_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "Corps_200"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(30000) cp(200) army_size(4))
	}
	{"wpp:payback_wot_400_41_no_heavy_art"	
		{gameMode "without_payback_plus_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "Army_400"}
		{apply "Menu_41_wot"}
		("without_payback_plus_41_no_heavy_art" start(160) finish(60000) cp(400) army_size(4))
	}
;------------------------------------------------------------------------------------------------------------
	{"wu:without_update_wot_60_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "squad_60"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(60) army_size(1) start(2400))
	}
	{"wu:without_update_wot_80_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "platoon_80"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(80) army_size(1) start(3200))
	}
	{"wu:without_update_wot_100_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "company_100"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(100) army_size(2) start(4000))
	}
	{"wu:without_update_wot_120_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "battalion_120"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(120) army_size(2) start(4800))
	}
	{"wu:without_update_wot_140_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "regiment_140"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(140) army_size(3) start(5600))
	}
	{"wu:without_update_wot_160_41_no_heavy_art"
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "division_160"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(160) army_size(3) start(6400))
	}
	{"wu:without_update_wot_200_41_no_heavy_art"	
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "Corps_200"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(200) army_size(4) start(10000))
	}
	{"wu:without_update_wot_400_41_no_heavy_art"	
		{gameMode "without_update_wot"}
		{unitMode "41_no_heavy_art"}
		{specMode "Army_400"}
		{apply "Menu_41_wot"}
		("instant_41_no_heavy_art" cp_total(400) army_size(4) start(20000))
	}
}
;-------------------------------------------------------------------------------------------------
