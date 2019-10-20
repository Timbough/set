(define "bots_usage"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.25} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.25} {mp 1.75} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 2.50} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 4.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
)
(define "bots_usage_period"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.25} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.25} {mp 1.75} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 2.50} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 4.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %maxmp 10)}
				{finish	%maxmp}
				{growTime	21600}		; in seconds
				{growTable 	"0.016"}
				;{growTime	2100}		; in seconds
				;{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
)
(define "bots_usage_normal"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.25} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.25} {mp 1.75} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 2.50} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 4.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
)
(define "bots_usage_ww2"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.25} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.25} {mp 1.75} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 2.50} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.50} {mp 4.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	%startmp}
				{finish	%finishmp}
				{growTime	2400}		; in seconds
				{growTable 	"3.20 3.20 3.30 3.40 3.40 3.50 3.60 3.60 3.70 3.80 3.80 3.80 3.90 4.00 4.00 4.00 4.10 4.20 4.30 4.40 4.40 4.50 4.60 4.70 4.80"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
)

(define "bots_usage_payback"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime  9600}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime  7200}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus{cp 1.0} {mp 1.00} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime  4800}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime   2400}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6 %warperiod"}
		}
	}
}
)
(define "bots_usage_payback_ww2"
{easy
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 1.00} }
	{chargeFactors
		{value "*=1"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime   9600}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{normal
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 2.00} }
	{chargeFactors
		{value "*=0.5"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime  7200}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{hard
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 4.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime  4800}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
{heroic
	{unitset
		{value %units_set}
	}
	{unitLimits ""}
	{balancingFactorBonus {cp 1.0} {mp 1.00} {payback 8.00} }
	{chargeFactors
		{value "*=0"}
	}
	{budgets
		{vehicle
			{mode "custom"}
			{resource 
				{start 	(/ %finishmp 150)}
				{finish	%finishmp}
				{growTime   2400}
				{growTable 	"0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.95 0.95 0.95 0.95 1.00 1.00 1.00 1.00 1.00 1.10 1.10 1.10 1.10 1.10 1.10 1.20"}
				{payback
					{cp 		"0		25		50 		60		70		80		90"}  
					{restore 	"1.50	1.25	0.75	0.50	0.40	0.30	0.20"}
				}
			} 
			{buttons "squad1 squad2 v1 v2 v7 v3 v4 v5 v6"}
		}
	}
}
)