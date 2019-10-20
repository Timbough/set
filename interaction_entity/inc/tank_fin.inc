{"ft17_fin tank"
	("t26_sound")
	("burn_by_engine" args 0.3)
}
{"ba10_fin tank"
	("sdkfz234_sound")
	("burn_by_engine" args 0.3)
}
{"np_ba20_fin tank"
	("ba20_sound")
	("burn_by_engine" args 0.2)
}
{"t-26_fin_1931 tank"
	("t26_2_sound")
	("burn_by_engine" args 0.2)
}
{"t-26_fin_1933 tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}
{"bt7_37_1 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}
{"bt5 tank"
	("bt5_sound")
}
{"bt5_fin tank"
	("bt5_sound")
}
{"vickers_fin tank"
	("t26_sound")
	("burn_by_engine" args 0.2) 
} 
{"t28 tank"		
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"t28_fin tank"		
	("mk7_sound")
	("burn_by_engine" args 0.3)
}
{"vickers37_fin tank"
	("t26_sound")
	("burn_by_engine" args 0.2)
}
{"t28_l10_fin tank"		
	{on "init_gun"
		{add_view	"flash_gun_big_vehicle"	"flashbarrel7"	"Foresight7"}
		{add_view	"flash_gun_big_vehicle"	"flashbarrel8"	"Foresight8"}
	}
	("mk7_sound")
	("burn_by_engine" args 0.3)
	{on fire "mgun4"
		{view show  "flashbarrel7"}
		{view start "flashbarrel7"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel7"}
			{view pause	"flashbarrel7"}
			{view pause	"shell"}
		}
	}
	{on fire "mgun5"
		{view show  "flashbarrel8"}
		{view start "flashbarrel8"}
		{delay 0.1 "fire"
			{view hide	"flashbarrel8"}
			{view pause	"flashbarrel8"}
			{view pause	"shell"}
		}
	}
}
{"t50_fin tank"
	{on spawn
		{add_view	"flash_gun_big"	"flashbarrel00"	"shooter00"	}
		{add_view	"flash_gun_big"	"flashbarrel01"	"shooter01"	}
	}
	("t50_sound")
	("burn_by_engine" args 0.2)
	{on fire "mgun" overload
		{if  name "00"
			{view start "flashbarrel00"}
			{delay 0.8
				{view pause "flashbarrel00"}
			}
		else name "01"
			{view start "flashbarrel01"}
			{delay 0.8
				{view pause "flashbarrel01"}
			}
		}
	}
}
{"kv1_41_fin tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"kv1_42_fin tank"
	("kv_sound")
	("burn_by_engine" args 0.2)
}
{"t34_41_fin tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
}
{"t34_42_fin tank"
	("t34_sound")
	("burn_by_engine" args 0.2)
}
{"stug3gfin tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"pz4jfin tank"
	("pz4_sound")
	("burn_by_engine" args 0.3)
}
{"bt42 tank"
	("bt7_sound")
	("burn_by_engine" args 0.3)
}