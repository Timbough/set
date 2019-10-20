(define "instant_test"
	{common
		{unitset
			{value "40|41|42|43|44|45|all^inf"}
		}
		{commandPoints "*=%cp"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1.0"}
			{available "*=0 *=0.5 *=1.0 *=1.5 *=2.0 *=2.5 *=5.0 *=10.0"}
		}
		{budgets
			{vehicle
				{mode "without_update"}
				{resource 
					{start 		50000}
					{finish 	50000}
					{speed 		0}
					{limitmin	2000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
			}
		}
	}
	{bots
		(include "bots_normal.inc")
		("bots_usage" maxmp(25000) units_set("ai_cannon|40|41|42|43|44|45|all^inf"))
	}
)
;------------------------------------------------------------------------------------------------------------
{presets
	{"wu:without_update_400_test"	
		{gameMode "test"}
		{unitMode "test"}
		{specMode "Army_400"}
		{apply "Menu_wot"}
		("instant_test" cp(2500))
	}
}
