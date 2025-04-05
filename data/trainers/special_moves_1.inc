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
	db BROCK, 1 ; 9, OMANYTE , 10, KABUTO, 10, AERODACTYL, 11, GEODUDE, 11, GEODUDE, 12, ONIX, 0
    ; 9, OMANYTE  
    db 1, 1, WATER_GUN 
    db 1, 2, BODY_SLAM
    db 1, 3, WITHDRAW
    db 1, 4, REST 

    ; 10, KABUTO 
    db 2, 1, WATER_GUN  
    db 2, 2, ICE_BEAM  
    db 2, 3, BODY_SLAM  
    db 2, 4, HARDEN

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


	db MISTY, 1 ; 18, KRABBY, 19, HORSEA, 18, PSYDUCK, 19, GOLDEEN, 20, GYARADOS, 21, STARMIE, 0
    ; 18, KRABBY
    db 1, 1, BUBBLEBEAM  
    db 1, 2, ICE_BEAM  
    db 1, 3, CUT
    db 1, 4, TAKE_DOWN

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

    ; 20, GYARADOS 
    db 5, 1, BUBBLEBEAM  
    db 5, 2, ICE_BEAM  
    db 5, 3, STRENGHT
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
    db 3, 1, THUNDERBOLT  
    db 3, 2, PSYCHIC_M  
    db 3, 3, SUBMISSION  
    db 3, 4, DOUBLE_TEAM  

    ; 23, ELECTABUZZ 
    db 4, 1, THUNDERBOLT  
    db 4, 2, PSYCHIC_M  
    db 4, 3, THUNDER_WAVE  
    db 4, 4, DOUBLE_TEAM  

    ; 23, ELECTABUZZ 
    db 5, 1, THUNDERBOLT  
    db 5, 2, PSYCHIC_M  
    db 5, 3, DOUBLE_TEAM  
    db 5, 4, SUBSTITUTE  

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
    db 4, 4, WHIRLWIND  

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


	db BLAINE, 1 ; 48, NINETALES, 48, RAPIDASH, 46, MAGMAR, 46, MAGMAR, 46, MAGMAR, 50, ARCANINE, 0
    ; 48, NINETALES 
    db 1, 1, FLAMETHROWER ; PRE LV 35
    db 1, 2, FIRE_SPIN ; PRE LV 42
    db 1, 3, CONFUSE_RAY ; PRE LV 28
    db 1, 4, ROAR ; PRE LV 21

    ; 48, RAPIDASH 
    db 2, 1, FIRE_BLAST
    db 2, 2, FIRE_SPIN ; PRE LV 39
    db 2, 3, HORN_DRILL
    db 2, 4, AGILITY ; PRE LV 48

    ; 46, MAGMAR 
    db 3, 1, FIRE_PUNCH ; LV 43
    db 3, 2, PSYCHIC_M
    db 3, 3, HYPER_BEAM
    db 3, 4, CONFUSE_RAY ; LV 39

    ; 46, MAGMAR 
    db 4, 1, FIRE_BLAST
    db 4, 2, PSYCHIC_M
    db 4, 3, SMOKESCREEN ; LV 48
    db 4, 4, REST

    ; 46, MAGMAR 
    db 5, 1, FIRE_BLAST
    db 5, 2, PSYCHIC_M
    db 5, 3, CONFUSE_RAY ; LV 39
    db 5, 4, SMOKESCREEN ; LV 48

    ; 50, ARCANINE 
    db 6, 1, FIRE_BLAST
    db 6, 2, BODY_SLAM
    db 6, 3, DRAGON_RAGE
    db 6, 4, ROAR ; PRE LV 1

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
    ; max 52
    ; 53, DUGTRIO 
    db 1, 1, FISSURE
    db 1, 2, EARTHQUAKE
    db 1, 3, SLASH ; PRE LV 31 
    db 1, 4, SAND_ATTACK ; PRE LV 24

    ; 52, SANDSLASH 
    db 2, 1, EARTHQUAKE
    db 2, 2, SLASH ; PRE LV 17
    db 2, 3, SAND_ATTACK ; PRE LV 10
    db 2, 4, SUBSTITUTE

    ; 52, MAROWAK 
    db 3, 1, EARTHQUAKE
    db 3, 2, BODY_SLAM
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
    db 6, 3, BLIZZARD
    db 6, 4, SUBSTITUTE

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;ELITE 4

	db LORELEI, 1 ; 55, CLOYSTER, 54, JYNX, 54, JYNX, 54, JYNX, 55, DEWGONG, 56, LAPRAS, 0

    ; 55, CLOYSTER 
    db 1, 1, BLIZZARD
    db 1, 2, SURF
    db 1, 3, DOUBLE_EDGE
    db 1, 4, EXPLOSION

    ; 54, JYNX 
    db 2, 1, BLIZZARD
    db 2, 2, PSYCHIC_M
    db 2, 3, LOVELY_KISS ; LV 1
    db 2, 4, SUBSTITUTE

    ; 54, JYNX 
    db 3, 1, BLIZZARD
    db 3, 2, PSYCHIC_M
    db 3, 3, COUNTER
    db 3, 4, LOVELY_KISS ; LV 1

    ; 54, JYNX 
    db 4, 1, ICE_BEAM
    db 4, 2, PSYCHIC_M
    db 4, 3, LOVELY_KISS ; LV 1
    db 4, 4, SUBSTITUTE

    ; 55, DEWGONG 
    db 5, 1, BLIZZARD
    db 5, 2, SURF
    db 5, 3, REST 
    db 5, 4, DOUBLE_TEAM

    ; 56, LAPRAS 
    db 6, 1, BLIZZARD
    db 6, 2, SURF
    db 6, 3, THUNDERBOLT
    db 6, 4, REST

    db 0  ; Finaliza a lista


	db BRUNO, 1 ; 56, HITMONLEE, 56, HITMONCHAN, 55, PRIMEAPE, 55, POLIWRATH, 55, POLIWRATH, 57, MACHAMP, 0

    ; 56, HITMONLEE 
    db 1, 1, HI_JUMP_KICK ; LV 48
    db 1, 2, BODY_SLAM
    db 1, 3, DOUBLE_TEAM
    db 1, 4, MEDITATE ; LV 1

    ; 56, HITMONCHAN 
    db 2, 1, SUBMISSION 
    db 2, 2, BODY_SLAM
    db 2, 3, AGILITY ; LV 1
    db 2, 4, DOUBLE_TEAM

    ; 55, PRIMEAPE 
    db 3, 1, SUBMISSION
    db 3, 2, KARATE_CHOP ; PRE LV 15
    db 3, 3, THUNDERBOLT
    db 3, 4, ROCK_SLIDE

    ; 55, POLIWRATH 
    db 4, 1, SURF
    db 4, 2, EARTHQUAKE
    db 4, 3, AMNESIA ; PRE LV 38
    db 4, 4, HYPNOSIS ; PRE LV 16

    ; 55, POLIWRATH 
    db 5, 1, SUBMISSION
    db 5, 2, SURF
    db 5, 3, AMNESIA ; PRE LV 38
    db 5, 4, HYPNOSIS ; PRE LV 16

    ; 57, MACHAMP 
    db 6, 1, SUBMISSION
    db 6, 2, EARTHQUAKE
    db 6, 3, HYPER_BEAM
    db 6, 4, ROCK_SLIDE

    db 0  ; Finaliza a lista


	db AGATHA, 1 ; 57, GASTLY, 56, HAUNTER, 56, HAUNTER, 56, HAUNTER, 56, HAUNTER, 58, GENGAR, 0

    ; 57, GASTLY 
    db 1, 1, PSYCHIC_M
    db 1, 2, MEGA_DRAIN
    db 1, 3, HYPNOSIS ; LV 27
    db 1, 4, CONFUSE_RAY ; LV 1

    ; 56, HAUNTER 
    db 2, 1, PSYCHIC_M
    db 2, 2, EXPLOSION
    db 2, 3, HYPNOSIS ; PRE LV 27
    db 2, 4, CONFUSE_RAY ; PRE LV 1

    ; 56, HAUNTER 
    db 3, 1, PSYCHIC_M
    db 3, 2, THUNDERBOLT
    db 3, 3, HYPNOSIS ; PRE LV 27
    db 3, 4, CONFUSE_RAY ; PRE LV 1

    ; 56, HAUNTER 
    db 4, 1, NIGHT_SHADE
    db 4, 2, HYPNOSIS ; PRE LV 27
    db 4, 3, CONFUSE_RAY ; PRE LV 1
    db 4, 4, SUBSTITUTE

    ; 56, HAUNTER 
    db 5, 1, MEGA_DRAIN
    db 5, 2, PSYCHIC_M
    db 5, 3, THUNDERBOLT
    db 5, 4, CONFUSE_RAY ; PRE LV 1

    ; 58, GENGAR 
    db 6, 1, NIGHT_SHADE
    db 6, 2, PSYCHIC_M
    db 6, 3, HYPNOSIS ; PRE LV 27
    db 6, 4, CONFUSE_RAY ; PRE LV 1

    db 0  ; Finaliza a lista


	db LANCE, 1 ; 58, DRATINI, 57, DRAGONAIR, 57, DRAGONAIR, 57, DRAGONAIR, 57, DRAGONAIR, 59, DRAGONITE, 0

    ; 58, DRATINI 
    db 1, 1, WRAP ; LV 1
    db 1, 2, BLIZZARD
    db 1, 3, AGILITY ; LV 20
    db 1, 4, THUNDER_WAVE

    ; 57, DRAGONAIR 
    db 2, 1, WRAP ; PRE LV 1
    db 2, 2, THUNDERBOLT
    db 2, 3, THUNDER_WAVE
    db 2, 4, AGILITY ; PRE LV 20

    ; 57, DRAGONAIR 
    db 3, 1, WRAP ; PRE LV 1
    db 3, 2, THUNDERBOLT
    db 3, 3, ICE_BEAM
    db 3, 4, THUNDER_WAVE

    ; 57, DRAGONAIR 
    db 4, 1, WRAP ; PRE LV 1
    db 4, 2, HYPER_BEAM
    db 4, 3, BLIZZARD
    db 4, 4, THUNDER_WAVE

    ; 57, DRAGONAIR 
    db 5, 1, HYPER_BEAM
    db 5, 2, BLIZZARD
    db 5, 3, THUNDERBOLT
    db 5, 4, THUNDER_WAVE

    ; 59, DRAGONITE 
    db 6, 1, DRAGON_RAGE
    db 6, 2, HYPER_BEAM
    db 6, 3, THUNDERBOLT
    db 6, 4, BLIZZARD

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;GARY

    db RIVAL1, 1 ; Oak's Lab - 5, EEVEE, 0
    ; 5, EEVEE
    db 1, 1, TACKLE ; LV 1
    db 1, 2, TAIL_WHIP ; LV 1
    
    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
    db RIVAL1, 2 ; Route 22 - 9, SPEAROW, 9, MANKEY, 8, EEVEE, 0
    ; 9, SPEAROW
    db 1, 1, PECK ; LV 1
    db 1, 2, GROWL ; LV 1
    db 1, 3, LEER ; LV 9

    ; 9, MANKEY
    db 2, 1, LOW_KICK ; LV 9
    db 2, 2, SCRATCH ; LV 1
    db 2, 3, LEER ; LV 1

    ; 8, EEVEE
    db 3, 1, TACKLE ; LV 1
    db 3, 2, TAIL_WHIP ; LV 1
    db 3, 3, SAND_ATTACK ; LV 8

    db 0  ; Finaliza a lista

