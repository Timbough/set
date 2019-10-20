{on pierce
;///////////////////////////////////////////////////////// hmgun
    ("damage_process_pierce"
        staff(bullet)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.1)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.05)
        pierce_gun3(0.05)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(0.08)
        pierce_left_right_track(0.04)
        pierce_inventory__explosive(0)
    ;--------------------------
        pierce_body__body_brake(0.4)
        pierce_body__body_destroy(0.3)
    ;--------------------------
		  crew_shock_time(0)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(0.5)
        pierce_turret_back__turret_brake(0.4)
        pierce_turret_left_right__turret_brake(0.5)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(0.5)
        pierce_turret2_back__turret2_brake(0.4)
        pierce_turret2_left_right__turret2_brake(0.5)
        pierce_turret3_front__turret3_brake(0.5)
        pierce_turret3_back__turret3_brake(0.4)
        pierce_turret3_left_right__turret3_brake(0.5)
        pierce_turret4_front__turret4_brake(0.5)
        pierce_turret4_back__turret4_brake(0.4)
        pierce_turret4_left_right__turret4_brake(0.5)
        pierce_turret5_front__turret5_brake(0.5)
        pierce_turret5_back__turret5_brake(0.4)
        pierce_turret5_left_right__turret5_brake(0.5)
        pierce_turret4_front__gun2_brake(0.2)   pierce_mantlet2__gun2_brake(0.5)
        pierce_turret4_back__gun2_brake(0.2)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.2)   pierce_mantlet3__gun3_brake(0.5)
        pierce_turret5_back__gun3_brake(0.2)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.2)   pierce_mantlet__gun_brake(0.5)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(0.2)
        pierce_engine__engine_burn(0.1)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.05)
        pierce_body__kill_gunner(0.05)
        pierce_body__kill_driver(0.05)
        pierce_body__kill_commander(0)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0)
        pierce_turret__kill_radist(0.05)

        pierce_body__kill_gunner3(0)
        pierce_turret2__kill_gunner3(0.15)
        pierce_body__kill_gunner4(0)
        pierce_turret3__kill_gunner4(0.15)
        pierce_body__kill_gunner5(0)
        pierce_turret4__kill_gunner5(0.15)
        pierce_body__kill_charger5(0)
        pierce_turret4__kill_charger5(0.15)
        pierce_body__kill_gunner6(0)
        pierce_turret5__kill_gunner6(0.15)
        pierce_body__kill_charger6(0)
        pierce_turret5__kill_charger6(0.15)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.05)
        pierce_turret__kill_gunner(0.05)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0)
        pierce_turret__kill_gunner2(0)

    )
    ;///////////////////////////////////////////////////////// ptr
   ("damage_process_pierce"
        staff(ptr)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.6)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.6)
        pierce_gun3(0.6)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(0.6)
        pierce_left_right_track(0.4)
        pierce_inventory__explosive(0.1)
    ;--------------------------
        pierce_body__body_brake(0.6)
        pierce_body__body_destroy(0.4)
    ;--------------------------
		  crew_shock_time(3)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(0.8)
        pierce_turret_back__turret_brake(0.8)
        pierce_turret_left_right__turret_brake(0.8)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(0.8)
        pierce_turret2_back__turret2_brake(0.8)
        pierce_turret2_left_right__turret2_brake(0.8)
        pierce_turret3_front__turret3_brake(0.8)
        pierce_turret3_back__turret3_brake(0.8)
        pierce_turret3_left_right__turret3_brake(0.8)
        pierce_turret4_front__turret4_brake(0.8)
        pierce_turret4_back__turret4_brake(0.8)
        pierce_turret4_left_right__turret4_brake(0.8)
        pierce_turret5_front__turret5_brake(0.8)
        pierce_turret5_back__turret5_brake(0.8)
        pierce_turret5_left_right__turret5_brake(0.8)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.3)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.3)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.3)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.2)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.25)
        pierce_body__kill_gunner(0.2)
        pierce_body__kill_driver(0.3)
        pierce_body__kill_commander(0.1)
        pierce_body__kill_gunner2(0.1)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.1)
        pierce_turret__kill_radist(0.3)

        pierce_body__kill_gunner3(0.1)
        pierce_turret2__kill_gunner3(0.3)
        pierce_body__kill_gunner4(0.1)
        pierce_turret3__kill_gunner4(0.3)
        pierce_body__kill_gunner5(0.1)
        pierce_turret4__kill_gunner5(0.3)
        pierce_body__kill_charger5(0.1)
        pierce_turret4__kill_charger5(0.3)
        pierce_body__kill_gunner6(0.1)
        pierce_turret5__kill_gunner6(0.3)
        pierce_body__kill_charger6(0.1)
        pierce_turret5__kill_charger6(0.3)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.15)
        pierce_turret__kill_gunner(0.3)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.3)
        pierce_turret__kill_gunner2(0.25)
    )
    ;///////////////////////////////////////////////////////// 20mm
   ("damage_process_pierce"
        staff(20mm)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.3)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.3)
        pierce_gun3(0.3)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(0.15)
        pierce_left_right_track(0.1)
        pierce_inventory__explosive(0.15)
    ;--------------------------
        pierce_body__body_brake(0.4)
        pierce_body__body_destroy(0.4)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(0.8)
        pierce_turret_back__turret_brake(0.8)
        pierce_turret_left_right__turret_brake(0.8)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(0.8)
        pierce_turret2_back__turret2_brake(0.8)
        pierce_turret2_left_right__turret2_brake(0.8)
        pierce_turret3_front__turret3_brake(0.8)
        pierce_turret3_back__turret3_brake(0.8)
        pierce_turret3_left_right__turret3_brake(0.8)
        pierce_turret4_front__turret4_brake(0.8)
        pierce_turret4_back__turret4_brake(0.8)
        pierce_turret4_left_right__turret4_brake(0.8)
        pierce_turret5_front__turret5_brake(0.8)
        pierce_turret5_back__turret5_brake(0.8)
        pierce_turret5_left_right__turret5_brake(0.8)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.3)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.3)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.3)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.2)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.35)
        pierce_body__kill_gunner(0.3)
        pierce_body__kill_driver(0.4)
        pierce_body__kill_commander(0.3)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.1)
        pierce_turret__kill_radist(0.3)

        pierce_body__kill_gunner3(0.1)
        pierce_turret2__kill_gunner3(0.3)
        pierce_body__kill_gunner4(0.1)
        pierce_turret3__kill_gunner4(0.3)
        pierce_body__kill_gunner5(0.1)
        pierce_turret4__kill_gunner5(0.3)
        pierce_body__kill_charger5(0.1)
        pierce_turret4__kill_charger5(0.3)
        pierce_body__kill_gunner6(0.1)
        pierce_turret5__kill_gunner6(0.3)
        pierce_body__kill_charger6(0.1)
        pierce_turret5__kill_charger6(0.3)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.25)
        pierce_turret__kill_gunner(0.4)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.4)
        pierce_turret__kill_gunner2(0.35)
    )

    ;///////////////////////////////////////////////////////// 37to47
   ("damage_process_pierce"
        staff(shell_minimum)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.4)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.4)
        pierce_gun3(0.4)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(0.6)
        pierce_left_right_track(0.3)
        pierce_inventory__explosive(0.2)
    ;--------------------------
        pierce_body__body_brake(0.5)
        pierce_body__body_destroy(0.6)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(0.5)
        pierce_turret_back__turret_brake(0.5)
        pierce_turret_left_right__turret_brake(0.5)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(0.5)
        pierce_turret2_back__turret2_brake(0.5)
        pierce_turret2_left_right__turret2_brake(0.5)
        pierce_turret3_front__turret3_brake(0.5)
        pierce_turret3_back__turret3_brake(0.5)
        pierce_turret3_left_right__turret3_brake(0.5)
        pierce_turret4_front__turret4_brake(0.5)
        pierce_turret4_back__turret4_brake(0.5)
        pierce_turret4_left_right__turret4_brake(0.5)
        pierce_turret5_front__turret5_brake(0.5)
        pierce_turret5_back__turret5_brake(0.5)
        pierce_turret5_left_right__turret5_brake(0.5)
        pierce_turret4_front__gun2_brake(0.2)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.2)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.2)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.2)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.2) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.2)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.4)
        pierce_body__kill_gunner(0.45)
        pierce_body__kill_driver(0.45)
        pierce_body__kill_commander(0.25)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.4)
        pierce_turret__kill_radist(0.45)

        pierce_body__kill_gunner3(0.1)
        pierce_turret2__kill_gunner3(0.45)
        pierce_body__kill_gunner4(0.1)
        pierce_turret3__kill_gunner4(0.45)
        pierce_body__kill_gunner5(0.1)
        pierce_turret4__kill_gunner5(0.45)
        pierce_body__kill_charger5(0.1)
        pierce_turret4__kill_charger5(0.45)
        pierce_body__kill_gunner6(0.1)
        pierce_turret5__kill_gunner6(0.45)
        pierce_body__kill_charger6(0.1)
        pierce_turret5__kill_charger6(0.45)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.3)
        pierce_turret__kill_gunner(0.45)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.45)
        pierce_turret__kill_gunner2(0.4)
    )
    ;///////////////////////////////////////////////////////// 50to57
   ("damage_process_pierce"
        staff(shell_small)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.5)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.5)
        pierce_gun3(0.5)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(0.8)
        pierce_left_right_track(0.3)
        pierce_inventory__explosive(0.2)
    ;--------------------------
        pierce_body__body_brake(0.5)
        pierce_body__body_destroy(0.7)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(0.8)
        pierce_turret_back__turret_brake(0.8)
        pierce_turret_left_right__turret_brake(0.8)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(0.8)
        pierce_turret2_back__turret2_brake(0.8)
        pierce_turret2_left_right__turret2_brake(0.8)
        pierce_turret3_front__turret3_brake(0.8)
        pierce_turret3_back__turret3_brake(0.8)
        pierce_turret3_left_right__turret3_brake(0.8)
        pierce_turret4_front__turret4_brake(0.8)
        pierce_turret4_back__turret4_brake(0.8)
        pierce_turret4_left_right__turret4_brake(0.8)
        pierce_turret5_front__turret5_brake(0.8)
        pierce_turret5_back__turret5_brake(0.8)
        pierce_turret5_left_right__turret5_brake(0.8)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.3)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.3)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.3)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.2)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.45)
        pierce_body__kill_gunner(0.4)
        pierce_body__kill_driver(0.4)
        pierce_body__kill_commander(0.3)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.4)
        pierce_turret__kill_radist(0.5)

        pierce_body__kill_gunner3(0.1)
        pierce_turret2__kill_gunner3(0.5)
        pierce_body__kill_gunner4(0.1)
        pierce_turret3__kill_gunner4(0.5)
        pierce_body__kill_gunner5(0.1)
        pierce_turret4__kill_gunner5(0.5)
        pierce_body__kill_charger5(0.1)
        pierce_turret4__kill_charger5(0.5)
        pierce_body__kill_gunner6(0.1)
        pierce_turret5__kill_gunner6(0.5)
        pierce_body__kill_charger6(0.1)
        pierce_turret5__kill_charger6(0.5)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.35)
        pierce_turret__kill_gunner(0.5)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.5)
        pierce_turret__kill_gunner2(0.45)
    )
    ;///////////////////////////////////////////////////////// 75to76
   ("damage_process_pierce"
        staff(shell_medium)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.5)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.5)
        pierce_gun3(0.5)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(0.5)
        pierce_inventory__explosive(0.35)
    ;--------------------------
        pierce_body__body_brake(0.4)
        pierce_body__body_destroy(1)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(1)
        pierce_turret_left_right__turret_brake(1)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(1)
        pierce_turret2_left_right__turret2_brake(1)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(1)
        pierce_turret3_left_right__turret3_brake(1)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(1)
        pierce_turret4_left_right__turret4_brake(1)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(1)
        pierce_turret5_left_right__turret5_brake(1)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.3)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.3)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.3)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.25)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.5)
        pierce_body__kill_gunner(0.45)
        pierce_body__kill_driver(0.6)
        pierce_body__kill_commander(0.35)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.45)
        pierce_turret__kill_radist(0.6)

        pierce_body__kill_gunner3(0.1)
        pierce_turret2__kill_gunner3(0.6)
        pierce_body__kill_gunner4(0.1)
        pierce_turret3__kill_gunner4(0.6)
        pierce_body__kill_gunner5(0.1)
        pierce_turret4__kill_gunner5(0.6)
        pierce_body__kill_charger5(0.1)
        pierce_turret4__kill_charger5(0.6)
        pierce_body__kill_gunner6(0.1)
        pierce_turret5__kill_gunner6(0.6)
        pierce_body__kill_charger6(0.1)
        pierce_turret5__kill_charger6(0.6)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.45)
        pierce_turret__kill_gunner(0.6)
        pierce_turret__kill_driver(0)
        pierce_turret__kill_commander(0.55)
        pierce_turret__kill_gunner2(0.5)
    )

    ;///////////////////////////////////////////////////////// 85to105
   ("damage_process_pierce"
        staff(shell_big)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(0.6)
;///////Engineer_Den + ////////////////	
        pierce_gun2(0.6)
        pierce_gun3(0.6)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(0.5)
        pierce_inventory__explosive(0.6)
    ;--------------------------
        pierce_body__body_brake(0.3)
        pierce_body__body_destroy(1)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(1)
        pierce_turret_left_right__turret_brake(1)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(1)
        pierce_turret2_left_right__turret2_brake(1)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(1)
        pierce_turret3_left_right__turret3_brake(1)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(1)
        pierce_turret4_left_right__turret4_brake(1)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(1)
        pierce_turret5_left_right__turret5_brake(1)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.8)
        pierce_turret4_back__gun2_brake(0.3)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.8)
        pierce_turret5_back__gun3_brake(0.3)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.8)
        pierce_turret_back__gun_brake(0.3)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.3)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.7)
        pierce_body__kill_gunner(0.7)
        pierce_body__kill_driver(0.7)
        pierce_body__kill_commander(0.5)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.5)
        pierce_turret__kill_radist(0.6)

        pierce_body__kill_gunner3(0.2)
        pierce_turret2__kill_gunner3(1)
        pierce_body__kill_gunner4(0.2)
        pierce_turret3__kill_gunner4(1)
        pierce_body__kill_gunner5(0.2)
        pierce_turret4__kill_gunner5(1)
        pierce_body__kill_charger5(0.2)
        pierce_turret4__kill_charger5(1)
        pierce_body__kill_gunner6(0.2)
        pierce_turret5__kill_gunner6(1)
        pierce_body__kill_charger6(0.2)
        pierce_turret5__kill_charger6(1)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.7)
        pierce_turret__kill_gunner(0.7)
        pierce_turret__kill_driver(0.3)
        pierce_turret__kill_commander(0.6)
        pierce_turret__kill_gunner2(0.6)
    )
    ;///////////////////////////////////////////////////////// 122to128
   ("damage_process_pierce"
        staff(shell_verybig)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1)
;///////Engineer_Den + ////////////////	
        pierce_gun2(1)
        pierce_gun3(1)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(0.7)
        pierce_inventory__explosive(1)
    ;--------------------------
        pierce_body__body_brake(0)
        pierce_body__body_destroy(1)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0)
         pierce_turret5__explosive(0)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(0.9)
        pierce_turret_left_right__turret_brake(0.7)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(0.9)
        pierce_turret2_left_right__turret2_brake(0.7)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(0.9)
        pierce_turret3_left_right__turret3_brake(0.7)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(0.9)
        pierce_turret4_left_right__turret4_brake(0.7)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(0.9)
        pierce_turret5_left_right__turret5_brake(0.7)
        pierce_turret4_front__gun2_brake(1)   pierce_mantlet2__gun2_brake(1)
        pierce_turret4_back__gun2_brake(0.8)
        pierce_turret4_left_right__gun2_brake(0.6)
        pierce_turret5_front__gun3_brake(1)   pierce_mantlet3__gun3_brake(1)
        pierce_turret5_back__gun3_brake(0.8)
        pierce_turret5_left_right__gun3_brake(0.6)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(1) pierce_mantlet__gun_brake(1)
        pierce_turret_back__gun_brake(0.8)
        pierce_turret_left_right__gun_brake(0.6)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.4)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.6)
        pierce_body__kill_gunner(0.5)
        pierce_body__kill_driver(0.9)
        pierce_body__kill_commander(0.5)
        pierce_body__kill_gunner2(0)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.6)
        pierce_turret__kill_radist(0.8)

  pierce_body__kill_gunner3(0.3)
        pierce_turret2__kill_gunner3(1)
        pierce_body__kill_gunner4(0.3)
        pierce_turret3__kill_gunner4(1)
        pierce_body__kill_gunner5(0.3)
        pierce_turret4__kill_gunner5(1)
        pierce_body__kill_charger5(0.3)
        pierce_turret4__kill_charger5(1)
        pierce_body__kill_gunner6(0.3)
        pierce_turret5__kill_gunner6(1)
        pierce_body__kill_charger6(0.3)
        pierce_turret5__kill_charger6(1)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.8)
        pierce_turret__kill_gunner(1)
        pierce_turret__kill_driver(0.4)
        pierce_turret__kill_commander(1)
        pierce_turret__kill_gunner2(0.8)
    )
    ;///////////////////////////////////////////////////////// 150to152
   ("damage_process_pierce"
        staff(shell_maximum)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1)
;///////Engineer_Den + ////////////////	
        pierce_gun2(1)
        pierce_gun3(1)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(1)
        pierce_inventory__explosive(1)
    ;--------------------------
        pierce_body__body_brake(0)
        pierce_body__body_destroy(1)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0.9)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0.9)
         pierce_turret5__explosive(0.9)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(1)
        pierce_turret_left_right__turret_brake(1)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(1)
        pierce_turret2_left_right__turret2_brake(1)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(1)
        pierce_turret3_left_right__turret3_brake(1)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(1)
        pierce_turret4_left_right__turret4_brake(1)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(1)
        pierce_turret5_left_right__turret5_brake(1)
        pierce_turret4_front__gun2_brake(1)   pierce_mantlet2__gun2_brake(1)
        pierce_turret4_back__gun2_brake(1)
        pierce_turret4_left_right__gun2_brake(1)
        pierce_turret5_front__gun3_brake(1)   pierce_mantlet3__gun3_brake(1)
        pierce_turret5_back__gun3_brake(1)
        pierce_turret5_left_right__gun3_brake(1)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(1) pierce_mantlet__gun_brake(1)
        pierce_turret_back__gun_brake(1)
        pierce_turret_left_right__gun_brake(1)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.4)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(1)
        pierce_body__kill_gunner(1)
        pierce_body__kill_driver(1)
        pierce_body__kill_commander(0.8)
        pierce_body__kill_gunner2(0.8)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.8)
        pierce_turret__kill_radist(1)

  pierce_body__kill_gunner3(0.5)
        pierce_turret2__kill_gunner3(1)
        pierce_body__kill_gunner4(0.5)
        pierce_turret3__kill_gunner4(1)
        pierce_body__kill_gunner5(0.5)
        pierce_turret4__kill_gunner5(1)
        pierce_body__kill_charger5(0.5)
        pierce_turret4__kill_charger5(1)
        pierce_body__kill_gunner6(0.5)
        pierce_turret5__kill_gunner6(1)
        pierce_body__kill_charger6(0.5)
        pierce_turret5__kill_charger6(1)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(1)
        pierce_turret__kill_gunner(1)
        pierce_turret__kill_driver(0.5)
        pierce_turret__kill_commander(1)
        pierce_turret__kill_gunner2(1)
    )
    ;///////////////////////////////////////////////////////// rocketlauncher
   ("damage_process_pierce"
        staff(cumulative)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1)
;///////Engineer_Den + ////////////////	
        pierce_gun2(1)
        pierce_gun3(1)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(0.7)
        pierce_inventory__explosive(0)
    ;--------------------------
        pierce_body__body_brake(1)
        pierce_body__body_destroy(0.3)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0.3)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0.3)
         pierce_turret5__explosive(0.3)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(1)
        pierce_turret_left_right__turret_brake(1)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(1)
        pierce_turret2_left_right__turret2_brake(1)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(1)
        pierce_turret3_left_right__turret3_brake(1)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(1)
        pierce_turret4_left_right__turret4_brake(1)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(1)
        pierce_turret5_left_right__turret5_brake(1)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.5)
        pierce_turret4_back__gun2_brake(0.2)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.5)
        pierce_turret5_back__gun3_brake(0.2)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.5)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.5)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.8)
        pierce_body__kill_gunner(0.8)
        pierce_body__kill_driver(0.8)
        pierce_body__kill_commander(0.8)
        pierce_body__kill_gunner2(0.5)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.8)
        pierce_turret__kill_radist(0.5)

  pierce_body__kill_gunner3(0.2)
        pierce_turret2__kill_gunner3(1)
        pierce_body__kill_gunner4(0.2)
        pierce_turret3__kill_gunner4(1)
        pierce_body__kill_gunner5(0.2)
        pierce_turret4__kill_gunner5(1)
        pierce_body__kill_charger5(0.2)
        pierce_turret4__kill_charger5(1)
        pierce_body__kill_gunner6(0.2)
        pierce_turret5__kill_gunner6(1)
        pierce_body__kill_charger6(0.2)
        pierce_turret5__kill_charger6(1)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.8)
        pierce_turret__kill_gunner(0.8)
        pierce_turret__kill_driver(0.5)
        pierce_turret__kill_commander(0.8)
        pierce_turret__kill_gunner2(0.8)
    )
	;///////////////////////////////////////////////////////// AT grenade
   ("damage_process_pierce"
        staff(cumulative_grenade)

    ;Probability component brake\destroy (Name_of_Event__Consequences) for this stuff=========
        pierce_gun(1)
;///////Engineer_Den + ////////////////	
        pierce_gun2(1)
        pierce_gun3(1)
;///////Engineer_Den - ////////////////
        pierce_front_back_track(1)
        pierce_left_right_track(0.7)
        pierce_inventory__explosive(0)
    ;--------------------------
        pierce_body__body_brake(1)
        pierce_body__body_destroy(0.3)
    ;--------------------------
		  crew_shock_time(6)
    ;--------------------------
        pierce_turret__explosive(0.3)
;///////Engineer_Den + ////////////////
         pierce_turret4__explosive(0.3)
         pierce_turret5__explosive(0.3)	
;///////Engineer_Den - ////////////////
        pierce_turret_front__turret_brake(1)
        pierce_turret_back__turret_brake(1)
        pierce_turret_left_right__turret_brake(1)
;///////Engineer_Den + ////////////////
        pierce_turret2_front__turret2_brake(1)
        pierce_turret2_back__turret2_brake(1)
        pierce_turret2_left_right__turret2_brake(1)
        pierce_turret3_front__turret3_brake(1)
        pierce_turret3_back__turret3_brake(1)
        pierce_turret3_left_right__turret3_brake(1)
        pierce_turret4_front__turret4_brake(1)
        pierce_turret4_back__turret4_brake(1)
        pierce_turret4_left_right__turret4_brake(1)
        pierce_turret5_front__turret5_brake(1)
        pierce_turret5_back__turret5_brake(1)
        pierce_turret5_left_right__turret5_brake(1)
        pierce_turret4_front__gun2_brake(0.4)   pierce_mantlet2__gun2_brake(0.5)
        pierce_turret4_back__gun2_brake(0.2)
        pierce_turret4_left_right__gun2_brake(0.2)
        pierce_turret5_front__gun3_brake(0.4)   pierce_mantlet3__gun3_brake(0.5)
        pierce_turret5_back__gun3_brake(0.2)
        pierce_turret5_left_right__gun3_brake(0.2)
;///////Engineer_Den - ////////////////
        pierce_turret_front__gun_brake(0.4) pierce_mantlet__gun_brake(0.5)
        pierce_turret_back__gun_brake(0.2)
        pierce_turret_left_right__gun_brake(0.2)

    ;---------------------------
        pierce_engine__engine_brake(1)
        pierce_engine__engine_burn(0.4)

    ;Probability crew die
    ;--------------------------
        pierce_body__kill_charger(0.8)
        pierce_body__kill_gunner(0.8)
        pierce_body__kill_driver(0.8)
        pierce_body__kill_commander(0.8)
        pierce_body__kill_gunner2(0.5)
;///////Engineer_Den+ ////////////////
        pierce_body__kill_radist(0.5)
        pierce_turret__kill_radist(0.8)

  pierce_body__kill_gunner3(0.2)
        pierce_turret2__kill_gunner3(1)
        pierce_body__kill_gunner4(0.2)
        pierce_turret3__kill_gunner4(1)
        pierce_body__kill_gunner5(0.2)
        pierce_turret4__kill_gunner5(1)
        pierce_body__kill_charger5(0.2)
        pierce_turret4__kill_charger5(1)
        pierce_body__kill_gunner6(0.2)
        pierce_turret5__kill_gunner6(1)
        pierce_body__kill_charger6(0.2)
        pierce_turret5__kill_charger6(1)
;///////Engineer_Den - ////////////////	
    ;--------------------------
        pierce_turret__kill_charger(0.8)
        pierce_turret__kill_gunner(0.8)
        pierce_turret__kill_driver(0.5)
        pierce_turret__kill_commander(0.8)
        pierce_turret__kill_gunner2(0.8)
    )

}; end of pierce
;=================================================================================================================================================
{on bullet_hit

                    ;{if stuff "big shell extra"
                    ;    ;{ani_play "hit"}
                    ;else stuff "big shell"
                    ;    ;{ani_play "hit"}
                    ;}
    ;///////////////////////////////////////////////////////// 88to105
    ("damage_process_bullet_hit"
       staff(shell_big)

        ;Bullet hit
        angle_hit(44) ;degrees

        hit_body__explosive(0)
        hit_body__engine_brake(0)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)
        ;--------------------------
        hit_engine__engine_brake(0)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
;///////Engineer_Den+ ////////////////
       hit_turret4__explosive(0)
       hit_turret5__explosive(0)
        hit_turret4_front__gun2_brake(0)
        hit_turret5_front__gun3_brake(0)
        hit_turret2__turret2_destroy(0)
        hit_turret2__turret2_brake(0)
        hit_turret3__turret3_destroy(0)
        hit_turret3__turret3_brake(0)
        hit_turret4__turret4_destroy(0)
        hit_turret4__turret4_brake(0)
        hit_turret5__turret5_destroy(0)
        hit_turret5__turret5_brake(0)       
;///////Engineer_Den- ////////////////
        imp(0)
    )
    ;///////////////////////////////////////////////////////// 122to128
    ("damage_process_bullet_hit"
       staff(shell_verybig)

        angle_hit(44) ;degrees

        hit_body__explosive(0)
        hit_body__engine_brake(0)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)
        ;--------------------------
        hit_engine__engine_brake(0)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
;///////Engineer_Den+ ////////////////
       hit_turret4__explosive(0)
       hit_turret5__explosive(0)
        hit_turret4_front__gun2_brake(0)
        hit_turret5_front__gun3_brake(0)
        hit_turret2__turret2_destroy(0)
        hit_turret2__turret2_brake(0)
        hit_turret3__turret3_destroy(0)
        hit_turret3__turret3_brake(0)
        hit_turret4__turret4_destroy(0)
        hit_turret4__turret4_brake(0)
        hit_turret5__turret5_destroy(0)
        hit_turret5__turret5_brake(0)       
;///////Engineer_Den- ////////////////
        imp(0)
    )
    ;///////////////////////////////////////////////////////// 150to152
    ("damage_process_bullet_hit"
       staff(shell_maximum)

        angle_hit(44) ;degrees

        hit_body__explosive(0)
        hit_body__engine_brake(0)
        hit_body__body_destroy(0)
        hit_body__body_brake(0)
        ;--------------------------
        hit_engine__engine_brake(0)
        ;--------------------------
        hit_turret__explosive(0)
        hit_turret_front__gun_brake(0)
        hit_turret__turret_destroy(0)
        hit_turret__turret_brake(0)
;///////Engineer_Den+ ////////////////
       hit_turret4__explosive(0)
       hit_turret5__explosive(0)
        hit_turret4_front__gun2_brake(0)
        hit_turret5_front__gun3_brake(0)
        hit_turret2__turret2_destroy(0)
        hit_turret2__turret2_brake(0)
        hit_turret3__turret3_destroy(0)
        hit_turret3__turret3_brake(0)
        hit_turret4__turret4_destroy(0)
        hit_turret4__turret4_brake(0)
        hit_turret5__turret5_destroy(0)
        hit_turret5__turret5_brake(0)       
;///////Engineer_Den- ////////////////
        imp(0)
    )
}; end of bullet_hit

{on blast ;higher energy must be first
    ("blast_damage_contusion"
	blast_rand_contusion(1)
	blast_energy(5)
	blast_crew_shock_time(8)
    )
    ("blast_damage_contusion"
	blast_rand_contusion(1)
	blast_energy(4)
	blast_crew_shock_time(5)
    )
    ("blast_damage_contusion"
	blast_rand_contusion(1)
	blast_energy(2.5)
	blast_crew_shock_time(4)
    )
	("blast_damage_contusion"
	blast_rand_contusion(0.6)
	blast_energy(1)
	blast_crew_shock_time(3)
    )
}