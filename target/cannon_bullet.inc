{selector
  {type "cannon_bullet"}

  {group
    {select {class car}}
    {select {class human}}
    {sort {weapon "fg"}}
    {sort {weapon "ap"}}
	{sort {weapon "apcbc"}}
    {sort {weapon "apcr"}}
    {sort {weapon "apds"}}
	{sort {weapon "cu"}}
    {sort {weapon "sr"}}
    {sort {weapon "wp"}}
    {sort {weapon}}
    {sort distance}
  }

  {group
    {sort {attacking}}
    {sort distance}
  }
}
