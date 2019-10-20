{selector
	{type "tank_aa"}
	{group
		{select {weapon "zenite"}}
		{select {weapon "hmgun"}}
		{select {weapon "bullet"}}
		{select {weapon "ap"}}
		{select {weapon "fg"}}		
		{sort {weapon "zenite"}}
		{sort {weapon "ap"} {attacking} {class tank}}
		{sort {weapon "ap"} {attacking}}
		{sort {weapon "ap"} {threating} {class tank}}
		{sort {weapon "ap"} {threating}}
		{sort {weapon "ap"} {class tank}}
		{sort {weapon "ap"}}
		{sort {weapon "hmgun"}}
		{sort {weapon "bullet"}}
		{sort {weapon "fg"} {attacking}}
		{sort {weapon "fg"} {threating}}
		{sort {weapon "fg"}}
		{sort {weapon}}
		{sort time_to_aim}
	}
	{group
		{sort {class attacker}}
		{sort {class fighter}}
		{sort {class transport}}
		{sort {class tank}}
		{sort {class armoredcar}}
		{sort {class car}}
		{sort time_to_aim}
	}
}
