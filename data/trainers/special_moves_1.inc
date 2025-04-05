; Yellow entry format:
;	db trainerclass, trainerid
;	repeat { db partymon location, partymon move, move id }
;	db 0

SpecialTrainerMoves:
	db BUG_CATCHER, 15
	db 2, 2, TACKLE
	db 2, 3, STRING_SHOT
	db 0

	db YOUNGSTER, 14
	db 1, 4, FISSURE
	db 0

;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db BROCK, 1 ; 10, OMANYTE, 10, KABUTO, 10, AERODACTYL, 11, GEODUDE, 11, GEODUDE, 12, ONIX, 0
    ; não precisa reduzier nivel
    ; 10, OMANYTE 
    db 1, 1, WATER_GUN 
    db 1, 2, ICE_BEAM  ; remove
    db 1, 3, DOUBLE_TEAM ; remove
    db 1, 4, REST 

    ; 10, KABUTO 
    db 2, 1, WATER_GUN  
    db 2, 2, ICE_BEAM  
    db 2, 3, BODY_SLAM  
    db 2, 4, MIMIC  ; remove

    ; 10, AERODACTYL 
    db 3, 1, FLY  
    db 3, 2, RAGE  
    db 3, 3, WHIRLWIND 
    db 3, 4, MIMIC  ; remove

    ; 11, GEODUDE 
    db 4, 1, ROCK_SLIDE  
    db 4, 2, DIG  
    db 4, 3, COUNTER 
    db 4, 4, SUBSTITUTE 

    ; 11, GEODUDE 
    db 5, 1, BODY_SLAM  
    db 5, 2, DOUBLE_TEAM  
    db 5, 3, DEFENSE_CURL ; LV 11
    db 5, 4, REST  

    ; 12, ONIX 
    db 6, 1, ROCK_SLIDE 
    db 6, 2, EARTHQUAKE 
    db 6, 3, BODY_SLAM
    db 6, 4, SCREECH ; LV 1

    db 0  ; Finaliza a lista


	db MISTY, 1 ; 18, STARYU, 19, HORSEA, 18, PSYDUCK, 19, GOLDEEN, 20, GYARADOS, 21, STARMIE, 0
    ; não precisa reduzir nivel
    ; 18, STARYU 
    db 1, 1, BUBBLEBEAM  
    db 1, 2, PSYCHIC_M  
    db 1, 3, THUNDER_WAVE  
    db 1, 4, SUBSTITUTE  

    ; 19, HORSEA 
    db 2, 1, BUBBLEBEAM  
    db 2, 2, SWIFT  
    db 2, 3, SMOKESCREEN ; LV 19 
    db 2, 4, MIMIC  

    ; 18, PSYDUCK 
    db 3, 1, BUBBLEBEAM  
    db 3, 2, DIG  
    db 3, 3, SEISMIC_TOSS  
    db 3, 4, COUNTER  

    ; 19, GOLDEEN 
    db 4, 1, BUBBLEBEAM  
    db 4, 2, ICE_BEAM  ; remove
    db 4, 3, SWIFT  
    db 4, 4, SUPERSONIC ; LV 19

    ; 20, GYARADOS 
    db 5, 1, BUBBLEBEAM  
    db 5, 2, ICE_BEAM  
    db 5, 3, BITE ; LV 20
    db 5, 4, THUNDER  ; remove

    ; 21, STARMIE 
    db 6, 1, BUBBLEBEAM  
    db 6, 2, ICE_BEAM  
    db 6, 3, PSYCHIC_M  
    db 6, 4, THUNDER_WAVE  

    db 0  ; Finaliza a lista


	db LT_SURGE, 1 ; 26, VOLTORB, 26, MAGNEMITE, 25, ELECTABUZZ, 25, ELECTABUZZ, 25, ELECTABUZZ, 28, RAICHU, 0
    ; maior nivel 26
    ; 26, VOLTORB 
    db 1, 1, THUNDERBOLT  
    db 1, 2, EXPLOSION  
    db 1, 3, THUNDER_WAVE  
    db 1, 4, DOUBLE_TEAM  

    ; 26, MAGNEMITE 
    db 2, 1, THUNDERBOLT  
    db 2, 2, SONICBOOM ; LV 21
    db 2, 3, THUNDER_WAVE  
    db 2, 4, DOUBLE_TEAM  

    ; 25, ELECTABUZZ 
    db 3, 1, THUNDERBOLT  
    db 3, 2, PSYCHIC_M  
    db 3, 3, SUBMISSION  
    db 3, 4, DOUBLE_TEAM  

    ; 25, ELECTABUZZ 
    db 4, 1, THUNDERBOLT  
    db 4, 2, PSYCHIC_M  
    db 4, 3, THUNDER_WAVE  
    db 4, 4, DOUBLE_TEAM  

    ; 25, ELECTABUZZ 
    db 5, 1, THUNDERBOLT  
    db 5, 2, PSYCHIC_M  
    db 5, 3, DOUBLE_TEAM  
    db 5, 4, SUBSTITUTE  

    ; 28, RAICHU 
    db 6, 1, THUNDERBOLT  
    db 6, 2, SUBMISSION  
    db 6, 3, BODY_SLAM  
    db 6, 4, DOUBLE_TEAM  

    db 0  ; Finaliza a lista


	db ERIKA, 1 ; 30, EXEGGUTOR, 30, PARASECT, 30, TANGELA, 30, EXEGGUTOR, 32, GLOOM, 32, WEEPINBELL, 0

    ; 30, EXEGGUTOR 
    db 1, 1, MEGA_DRAIN  
    db 1, 2, PSYCHIC_M  
    db 1, 3, LEECH_SEED ; PRE LV 28
    db 1, 4, HYPER_BEAM  

    ; 30, PARASECT 
    db 2, 1, MEGA_DRAIN  
    db 2, 2, BODY_SLAM  
    db 2, 3, SPORE ; PRE LV 27
    db 2, 4, STUN_SPORE ; PRE LV 13

    ; 30, TANGELA 
    db 3, 1, MEGA_DRAIN  
    db 3, 2, SWORDS_DANCE  
    db 3, 3, BODY_SLAM  
    db 3, 4, BIND ; LV 24

    ; 30, EXEGGUTOR 
    db 4, 1, MEGA_DRAIN  
    db 4, 2, PSYCHIC_M  
    db 4, 3, EXPLOSION  
    db 4, 4, HYPNOSIS ; PRE LV 1

    ; 32, GLOOM 
    db 5, 1, MEGA_DRAIN  
    db 5, 2, DOUBLE_EDGE  
    db 5, 3, SLEEP_POWDER ; PRE LV 19
    db 5, 4, STUN_SPORE ; LV PRE 17

    ; 32, WEEPINBELL 
    db 6, 1, MEGA_DRAIN  
    db 6, 2, WRAP ; PRE LV 13 
    db 6, 3, SLEEP_POWDER ; PRE LV 18
    db 6, 4, GROWTH ; PRE LV 1

    db 0  ; Finaliza a lista


	db KOGA, 1 ; 46, TENTACRUEL, 46, TENTACRUEL, 48, BEEDRILL, 48, GOLBAT, 48, ARBOK, 50, VENOMOTH, 0
    ;level max 40
    ; 46, TENTACRUEL 
    db 1, 1, TOXIC  
    db 1, 2, SURF  
    db 1, 3, ICE_BEAM  
    db 1, 4, BARRIER ; PRE LV 33

    ; 46, TENTACRUEL 
    db 2, 1, SURF  
    db 2, 2, ICE_BEAM  
    db 2, 3, BARRIER ; PRE LV 33
    db 2, 4, SCREECH ; PRE LV 40

    ; 48, BEEDRILL 
    db 3, 1, TWINEEDLE ; LV 20
    db 3, 2, HYPER_BEAM  
    db 3, 3, SWORDS_DANCE  
    db 3, 4, AGILITY ; LV 35

    ; 48, GOLBAT 
    db 4, 1, TOXIC  
    db 4, 2, DOUBLE_EDGE  
    db 4, 3, CONFUSE_RAY ; LV 21
    db 4, 4, WHIRLWIND  

    ; 48, ARBOK 
    db 5, 1, WRAP ; PRE LV 1
    db 5, 2, EARTHQUAKE  
    db 5, 3, HYPER_BEAM  
    db 5, 4, GLARE ; PRE LV 24

    ; 50, VENOMOTH 
    db 6, 1, TOXIC  
    db 6, 2, PSYCHIC_M  
    db 6, 3, SLEEP_POWDER ; PRE LV 38 
    db 6, 4, SUBSTITUTE  

    db 0  ; Finaliza a lista


	db BLAINE, 1 ; 50, NINETALES, 50, RAPIDASH, 48, MAGMAR, 48, MAGMAR, 48, MAGMAR, 54, ARCANINE, 0
    ;max 47
    ; 50, NINETALES 
    db 1, 1, FLAMETHROWER ; PRE LV 35
    db 1, 2, FIRE_SPIN ; PRE LV 42
    db 1, 3, CONFUSE_RAY ; PRE LV 28
    db 1, 4, ROAR ; PRE LV 21

    ; 50, RAPIDASH 
    db 2, 1, FIRE_BLAST
    db 2, 2, FIRE_SPIN ; PRE LV 39
    db 2, 3, HORN_DRILL
    db 2, 4, AGILITY ; PRE LV 48

    ; 48, MAGMAR 
    db 3, 1, FIRE_PUNCH ; LV 43
    db 3, 2, PSYCHIC_M
    db 3, 3, HYPER_BEAM
    db 3, 4, CONFUSE_RAY ; LV 39

    ; 48, MAGMAR 
    db 4, 1, FIRE_BLAST
    db 4, 2, PSYCHIC_M
    db 4, 3, SMOKESCREEN ; LV 48
    db 4, 4, REST

    ; 48, MAGMAR 
    db 5, 1, FIRE_BLAST
    db 5, 2, PSYCHIC_M
    db 5, 3, CONFUSE_RAY ; LV 39
    db 5, 4, SMOKESCREEN ; LV 48

    ; 54, ARCANINE 
    db 6, 1, FIRE_BLAST
    db 6, 2, BODY_SLAM
    db 6, 3, DRAGON_RAGE
    db 6, 4, ROAR ; PRE LV 1

    db 0  ; Finaliza a lista

