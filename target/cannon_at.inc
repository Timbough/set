{selector
	{type "cannon_at"}
	{group
		{ignore {class airborne}}
		{ignore {class human}}
		{select {weapon "ap"}}
		{select {weapon "zenite"}}	
		{select {weapon "apcr"}}
		{select {weapon "apcbc"}}
		{select {weapon "apds"}}
		{select {weapon "cu"}}
		{select {weapon "cua"}}
		{select {weapon "cub"}}
		{sort {weapon "ap"} {attacking} {class tank}}
		{sort {weapon "ap"} {threating}}
		{sort {weapon "ap"}}
		{sort {weapon "apcr"} {class tank}}
		{sort {weapon "apcbc"} {class tank}}
		{sort {weapon "apds"} {class tank}}
		{sort {weapon "cu"} {class tank}}
		{sort {weapon "cua"} {class tank}}
		{sort {weapon "cub"} {class tank}}
		{sort {weapon "fg"}}
		{sort {threating}}
		{sort time_to_aim}
	}
	{group
		{sort {class tank}}
		{sort {class armoredcar}}
		{sort {class car}}
		{sort {threating}}
		{sort distance}
	}
}
