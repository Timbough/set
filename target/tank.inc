{selector
	{type "tank"}
	{group
		{ignore {class airborne}}
		{ignore {class attacker}}
		{ignore {class fighter}}
		{ignore {class transport}}
		{select {weapon "ap"}}
		{select {weapon "fg"}}		
		{select {weapon "apcr"}}
		{select {weapon "apcbc"}}
		{select {weapon "apds"}}
		{select {weapon "cu"}}
		{select {weapon "sr"}}
		{select {weapon "wp"}}
		{sort {weapon "ap"} {attacking} {class tank}}
		{sort {weapon "ap"} {attacking}}
		{sort {weapon "ap"} {threating} {class tank}}
		{sort {weapon "ap"} {threating}}
		{sort {weapon "ap"} {class tank}}
		{sort {weapon "ap"}}
		{sort {weapon "apcbc"} {attacking} {class tank}}
		{sort {weapon "apcbc"} {attacking}}
		{sort {weapon "apcbc"} {threating} {class tank}}
		{sort {weapon "apcbc"} {threating}}
		{sort {weapon "apcbc"} {class tank}}
		{sort {weapon "apcbc"}}
		{sort {weapon "apds"} {attacking} {class tank}}
		{sort {weapon "apds"} {attacking}}
		{sort {weapon "apds"} {threating} {class tank}}
		{sort {weapon "apds"} {threating}}
		{sort {weapon "apds"} {class tank}}
		{sort {weapon "apds"}}
		{sort {weapon "cu"} {attacking} {class tank}}
		{sort {weapon "cu"} {attacking}}
		{sort {weapon "cu"} {threating} {class tank}}
		{sort {weapon "cu"} {threating}}
		{sort {weapon "cu"} {class tank}}
		{sort {weapon "cu"}}
		{sort {weapon "fg"} {attacking}}
		{sort {weapon "fg"} {threating}}
		{sort {weapon "fg"}}
		{sort {weapon "wp"} {attacking}}
		{sort {weapon "wp"} {threating}}
		{sort {weapon "wp"}}
		{sort {weapon "sr"} {attacking}}
		{sort {weapon "sr"} {threating}}
		{sort {weapon "sr"}}
		{sort time_to_aim}
	}
	{group
		{sort {class tank}}
		{sort {class armoredcar}}
		{sort {class car}}
		{sort time_to_aim}
	}

}
