{selector
  {type "cannon_bullet_aa"}

  {group
    {sort {class attacker}}
    {sort {class fighter}}
    {sort {class transport}}
    {select {class car}}
    {select {class human}}
    {sort {weapon "zenite"}}
    {sort {weapon "fg"}}
    {sort {weapon "ap"}}
    {sort {weapon "apcr"}}
    {sort {weapon}}
    {sort distance}
  }

  {group
    {sort {attacking}}
    {sort distance}
  }
}
