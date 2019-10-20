;-----------------Normand Unit Pack
(define "boat_sound"
	{on "add_movement_sound" overload
		{link_sound "move"				"vehicle/marine/Grebut_veslami"}
		{link_sound "engine"			"vehicle/marine/Grebut_veslami"}
	}
)
{"np_boat"
	("boat_sound")
	{on break
		{call "break_float"}
	}
}
;-----------------Normand Unit Pack
