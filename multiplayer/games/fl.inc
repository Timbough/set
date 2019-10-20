(define "without_update_fl"
	{common
		{unitset
			{value "fl|deminer^heavy|heavyart|sheavy|arcade|nfl"}
		}
		{commandPoints "*=%cp_total"}
		{unitLimits "flamer=3;sniper=2;officer=1;heavyaa=1;one_only=1;one_only1=1;one_only2=1;paratroopers=1;persize=%army_size;persize_spg=%army_size;persize_heavy=%army_size;"}
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
					{restoreBegin 	1.25}	; points per sec
					{restoreEnd 	1.25}	; points per sec
					{limitmin	1000}
                    {limitmax   75000}
					;{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
		}
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage" maxmp(%start) units_set("ai_cannon|fl|deminer^heavy|heavyart|sheavy|mines|arcade|nfl"))
	}
)
{presets
	{"fl:without_update_fl_200"	
		{gameMode "without_update"}
		{unitMode "ww2"}
		{specMode "Army_200"}
		{apply "Menu_39-45_wot"}
		("without_update_fl" cp_total(200) army_size(4) start(10000) finish(30000))
	}
}
