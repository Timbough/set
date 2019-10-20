{selector
	{unit "human" "bullet"}

	{group
		{ignore {class airborne}}
		{ignore {class attacker}}
		{ignore {class fighter}}
		{ignore {class transport}}
		{sort 	{in_range 10}}
		{sort	{attacking}}
		{sort	{class human} {weapon "bullet"}}
		{sort	{class human} {weapon}}
		{sort	{class human}}
		{sort	{threating}}
		{sort	distance}
	}
}