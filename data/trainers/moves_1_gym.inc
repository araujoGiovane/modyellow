; Yellow entry format:
;	db trainerclass, trainerid
;	repeat { db partymon location, partymon move, move id }
;	db 0

SpecialTrainerMoves:

;Regular trainers
	db BUG_CATCHER, 15
	db 2, 2, TACKLE
	db 2, 3, STRING_SHOT
	db 0

	db YOUNGSTER, 14
	db 1, 4, FISSURE
	db 0

;Gym leaders

	db BROCK, 1 ; 9, OMANYTE , 10, KABUTO, 10, AERODACTYL, 11, GEODUDE, 11, GEODUDE, 12, ONIX, 0
    ; 9, OMANYTE  
    db 1, 1, WATER_GUN 
    db 1, 2, BODY_SLAM
    db 1, 3, WITHDRAW ; LV 1
    db 1, 4, REST 

    ; 10, KABUTO 
    db 2, 1, WATER_GUN  
    db 2, 2, ICE_BEAM  
    db 2, 3, BODY_SLAM
    db 2, 4, HARDEN ; LV 1

    ; 10, AERODACTYL 
    db 3, 1, FLY
    db 3, 2, RAGE  
    db 3, 3, BIDE
    db 3, 4, REFLECT

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
    db 6, 2, BIDE
    db 6, 3, EARTHQUAKE
    db 6, 4, BODY_SLAM

    db 0  ; Finaliza a lista


	db MISTY, 1 ; 19, HORSEA, 18, PSYDUCK, 19, GOLDEEN, 18, KRABBY, 20, GYARADOS, 21, STARMIE, 0
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
    db 4, 2, ICE_BEAM
    db 4, 3, SWIFT  
    db 4, 4, SUPERSONIC ; LV 19

    ; 18, KRABBY
    db 1, 1, BUBBLEBEAM  
    db 1, 2, ICE_BEAM  
    db 1, 3, CUT
    db 1, 4, TAKE_DOWN

    ; 20, GYARADOS 
    db 5, 1, BUBBLEBEAM  
    db 5, 2, ICE_BEAM  
    db 5, 3, STRENGTH
    db 5, 4, REFLECT

    ; 21, STARMIE 
    db 6, 1, BUBBLEBEAM  
    db 6, 2, ICE_BEAM  
    db 6, 3, PSYCHIC_M  
    db 6, 4, THUNDER_WAVE  

    db 0  ; Finaliza a lista


	db LT_SURGE, 1 ; 25, VOLTORB, 25, MAGNEMITE, 23, ELECTABUZZ, 23, ELECTABUZZ, 23, ELECTABUZZ, 26, RAICHU, 0
    ; 25, VOLTORB 
    db 1, 1, THUNDERBOLT  
    db 1, 2, EXPLOSION  
    db 1, 3, THUNDER_WAVE  
    db 1, 4, DOUBLE_TEAM  

    ; 25, MAGNEMITE 
    db 2, 1, THUNDERBOLT  
    db 2, 2, SONICBOOM ; LV 21
    db 2, 3, THUNDER_WAVE  
    db 2, 4, DOUBLE_TEAM  

    ; 23, ELECTABUZZ 
    db 5, 1, THUNDERBOLT  
    db 5, 2, PSYCHIC_M  
    db 5, 3, SUBSTITUTE
    db 5, 4, FLASH

    ; 23, ELECTABUZZ 
    db 4, 1, THUNDERBOLT  
    db 4, 2, PSYCHIC_M  
    db 4, 3, THUNDER_WAVE  
    db 4, 4, REFLECT  

    ; 23, ELECTABUZZ 
    db 3, 1, THUNDERBOLT  
    db 3, 2, PSYCHIC_M  
    db 3, 3, SUBMISSION  
    db 3, 4, REFLECT

    ; 26, RAICHU 
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
    db 1, 4, DOUBLE_EDGE

    ; 30, PARASECT 
    db 2, 1, MEGA_DRAIN  
    db 2, 2, BODY_SLAM  
    db 2, 3, SUBSTITUTE
    db 2, 4, SPORE ; PRE LV 27

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


	db KOGA, 1 ; 36, TENTACRUEL, 36, TENTACRUEL, 38, BEEDRILL, 38, GOLBAT, 38, ARBOK, 40, VENOMOTH, 0
    ; 36, TENTACRUEL 
    db 1, 1, TOXIC  
    db 1, 2, SURF  
    db 1, 3, ICE_BEAM  
    db 1, 4, BARRIER ; PRE LV 33

    ; 36, TENTACRUEL 
    db 2, 1, SURF  
    db 2, 2, ICE_BEAM  
    db 2, 3, BARRIER ; PRE LV 33
    db 2, 4, REST

    ; 38, BEEDRILL 
    db 3, 1, TWINEEDLE ; LV 20
    db 3, 2, HYPER_BEAM  
    db 3, 3, SWORDS_DANCE  
    db 3, 4, AGILITY ; LV 35

    ; 38, GOLBAT 
    db 4, 1, TOXIC  
    db 4, 2, DOUBLE_EDGE  
    db 4, 3, CONFUSE_RAY ; LV 21
    db 4, 4, DOUBLE_TEAM 

    ; 38, ARBOK 
    db 5, 1, WRAP ; PRE LV 1
    db 5, 2, EARTHQUAKE  
    db 5, 3, ROCK_SLIDE
    db 5, 4, GLARE ; PRE LV 24

    ; 40, VENOMOTH 
    db 6, 1, TOXIC  
    db 6, 2, PSYCHIC_M  
    db 6, 3, SLEEP_POWDER ; PRE LV 38 
    db 6, 4, SUBSTITUTE  

    db 0  ; Finaliza a lista


	db BLAINE, 1 ; 46, MAGMAR, 46, MAGMAR, 46, MAGMAR, 48, NINETALES, 48, RAPIDASH, 50, ARCANINE, 0
    ; 46, MAGMAR 
    db 3, 1, FIRE_PUNCH ; LV 43
    db 3, 2, PSYCHIC_M
    db 3, 3, HYPER_BEAM
    db 3, 4, CONFUSE_RAY ; LV 39

    ; 46, MAGMAR 
    db 4, 1, FIRE_BLAST
    db 4, 2, PSYCHIC_M
    db 4, 3, SUBSTITUTE
    db 4, 4, REST

    ; 46, MAGMAR 
    db 5, 1, FIRE_BLAST
    db 5, 2, BODY_SLAM
    db 5, 3, CONFUSE_RAY ; LV 39
    db 5, 4, DOUBLE_TEAM
    
    ; 48, NINETALES 
    db 1, 1, FLAMETHROWER ; PRE LV 35
    db 1, 2, FIRE_SPIN ; PRE LV 42
    db 1, 3, BODY_SLAM
    db 1, 4, CONFUSE_RAY ; PRE LV 28

    ; 48, RAPIDASH 
    db 2, 1, FIRE_BLAST
    db 2, 2, FIRE_SPIN ; PRE LV 39
    db 2, 3, HORN_DRILL
    db 2, 4, AGILITY ; PRE LV 48

    ; 50, ARCANINE 
    db 6, 1, FIRE_BLAST
    db 6, 2, BODY_SLAM
    db 6, 3, DRAGON_RAGE
    db 6, 4, DOUBLE_TEAM

    db 0  ; Finaliza a lista


	db SABRINA, 1 ; 41, KADABRA, 40, MR_MIME, 40, SLOWBRO, 42, ABRA, 41, HYPNO, 43, ALAKAZAM, 0
    ; 41, KADABRA 
    db 1, 1, PSYCHIC_M
    db 1, 2, THUNDER_WAVE
    db 1, 3, RECOVER ; LV 31
    db 1, 4, KINESIS ; LV 1

    ; 40, MR_MIME 
    db 2, 1, PSYCHIC_M
    db 2, 2, PSYWAVE
    db 2, 3, BARRIER ; LV 1
    db 2, 4, THUNDER_WAVE

    ; 40, SLOWBRO 
    db 3, 1, PSYCHIC_M
    db 3, 2, SURF
    db 3, 3, AMNESIA ; PRE LV 40
    db 3, 4, REST

    ; 42, ABRA
    db 4, 1, PSYCHIC_M
    db 4, 2, COUNTER
    db 4, 3, THUNDER_WAVE
    db 4, 4, FLASH

    ; 41, HYPNO 
    db 5, 1, PSYCHIC_M
    db 5, 2, TRI_ATTACK 
    db 5, 3, HYPNOSIS ; LV 1
    db 5, 4, THUNDER_WAVE

    ; 43, ALAKAZAM 
    db 6, 1, PSYWAVE
    db 6, 2, PSYCHIC_M
    db 6, 3, REFLECT
    db 6, 4, RECOVER ; PRE LV 31

    db 0  ; Finaliza a lista


	db GIOVANNI, 3 ; 52, DUGTRIO, 52, SANDSLASH, 52, MAROWAK, 52, NIDOKING, 52, NIDOQUEEN, 53, RHYDON, 0
    ; 52, DUGTRIO 
    db 1, 1, FISSURE
    db 1, 2, EARTHQUAKE
    db 1, 3, SLASH ; PRE LV 31 
    db 1, 4, SAND_ATTACK ; PRE LV 24

    ; 52, SANDSLASH 
    db 2, 1, EARTHQUAKE
    db 2, 2, SLASH ; PRE LV 17
    db 2, 3, ROCK_SLIDE
    db 2, 4, SAND_ATTACK ; PRE LV 10

    ; 52, MAROWAK 
    db 3, 1, EARTHQUAKE
    db 3, 2, ROCK_SLIDE
    db 3, 3, BLIZZARD
    db 3, 4, SUBSTITUTE

    ; 52, NIDOKING 
    db 4, 1, EARTHQUAKE
    db 4, 2, BLIZZARD
    db 4, 3, THUNDER
    db 4, 4, DOUBLE_TEAM

    ; 52, NIDOQUEEN 
    db 5, 1, EARTHQUAKE
    db 5, 2, BLIZZARD
    db 5, 3, THUNDER
    db 5, 4, DOUBLE_TEAM

    ; 53, RHYDON 
    db 6, 1, FISSURE
    db 6, 2, EARTHQUAKE
    db 6, 3, ROCK_SLIDE
    db 6, 4, SUBSTITUTE

    db 0  ; Finaliza a lista

