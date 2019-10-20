{selector
	{type "tank_sup"}
	{group
		{ignore {class airborne}}
		{sort {threating}}
		{sort time_to_aim}
	}
	{group
		{sort {class cannon}}
		{sort {class car}}
		{sort {class human}}
		{sort {class armoredcar}}
		{sort {class tank}}
		{sort {threating}}
		{sort distance}
	}

}
