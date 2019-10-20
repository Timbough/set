; == CUSTOM ==
(define "without_payback_tb_39"
	{common
		{unitset
			{value "tank_only|tank_only1|tank_only2|tankmans|tanks^nt|n39|inf_only|inf_only2|inf_only3"}
		}
		{unitLimits "tank_only1=1;tank_only2=2;"}
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
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1939) units_set("tank_only|tank_only1|tank_only2|tankmans|tanks^nt|n39|inf_only|inf_only2|inf_only3"))
	}
)
(define "wo_payback_tb_39"
	{common
		{unitset
			{value "tb|tankmans|tanks^ntb|n39|inf_only|inf_only2|inf_only3"}
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
				{buttons "1939"}
			}
		} 
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage_normal" startmp(%start) finishmp(%finish) warperiod(1939) units_set("tb|tankmans|tanks^ntb|n39|inf_only|inf_only2|inf_only3"))
	}
)
{presets
;------------------------------------------------------------------------------------------------------------	
	{"p:without_payback_tb_60_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "squad_60"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(2400) cp(60))
	}
	{"p:without_payback_tb_80_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "platoon_80"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(3200) cp(80))
	}
	{"p:without_payback_tb_100_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "company_100"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(4000) cp(100))
		{ranked}
	}		
	{"p:without_payback_tb_120_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "battalion_120"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(4800) cp(120))
	}
	{"p:without_payback_tb_140_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "regiment_140"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(5600) cp(140))
	}
	{"p:without_payback_tb_160_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "division_160"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(6400) cp(160))
	}
	{"p:without_payback_tb_200_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "Corps_200"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(10000) cp(200))
	}
	{"p:without_payback_tb_400_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_tb"}
		{specMode "Army_400"}
		{apply "Menu_39_wot"}
		("without_payback_tb_39" start(450) finish(20000) cp(400))
	}
	{"p:wo_payback_tb_60_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "squad_60"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(2400) cp(60))
	}
	{"p:wo_payback_tb_80_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "platoon_80"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(3200) cp(80))
	}
	{"p:wo_payback_tb_100_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "company_100"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(4000) cp(100))
		{ranked}
	}		
	{"p:wo_payback_tb_120_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "battalion_120"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(4800) cp(120))
	}
	{"p:wo_payback_tb_140_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "regiment_140"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(5600) cp(140))
	}
	{"p:wo_payback_tb_160_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "division_160"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(6400) cp(160))
	}
	{"p:wo_payback_tb_200_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "Corps_200"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(10000) cp(200))
	}
	{"p:wo_payback_tb_400_39"	
		{gameMode "without_payback_tanks"}
		{unitMode "39_all_tb"}
		{specMode "Army_400"}
		{apply "Menu_39_wot"}
		("wo_payback_tb_39" start(450) finish(20000) cp(400))
	}
}
