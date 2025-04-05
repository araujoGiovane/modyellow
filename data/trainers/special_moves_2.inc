	db SABRINA, 1 ; 48, KADABRA, 46, MR_MIME, 46, SLOWBRO, 48, HYPNO, 48, HYPNO, 50, ALAKAZAM, 0
    ;max 43
    ; 48, KADABRA 
    db 1, 1, PSYCHIC_M
    db 1, 2, THUNDER_WAVE
    db 1, 3, RECOVER ; LV 31
    db 1, 4, KINESIS ; LV 1

    ; 46, MR_MIME 
    db 2, 1, PSYCHIC_M
    db 2, 2, PSYWAVE
    db 2, 3, BARRIER ; LV 1
    db 2, 4, THUNDER_WAVE

    ; 46, SLOWBRO 
    db 3, 1, PSYCHIC_M
    db 3, 2, SURF
    db 3, 3, AMNESIA ; PRE LV 40
    db 3, 4, REST

    ; 48, HYPNO 
    db 4, 1, PSYCHIC_M
    db 4, 2, DOUBLE_EDGE
    db 4, 3, HYPNOSIS ; LV 1
    db 4, 4, REST

    ; 48, HYPNO 
    db 5, 1, PSYCHIC_M
    db 5, 2, TRI_ATTACK 
    db 5, 3, HYPNOSIS ; LV 1
    db 5, 4, THUNDER_WAVE

    ; 50, ALAKAZAM 
    db 6, 1, PSYWAVE
    db 6, 2, PSYCHIC_M
    db 6, 3, REFLECT
    db 6, 4, RECOVER ; PRE LV 31

    db 0  ; Finaliza a lista


	db GIOVANNI, 3 ; 53, DUGTRIO, 53, SANDSLASH, 53, MAROWAK, 54, NIDOKING, 54, NIDOQUEEN, 55, RHYDON, 0
    ; max 52
    ; 53, DUGTRIO 
    db 1, 1, FISSURE
    db 1, 2, EARTHQUAKE
    db 1, 3, SLASH ; PRE LV 31 
    db 1, 4, SAND_ATTACK ; PRE LV 24

    ; 53, SANDSLASH 
    db 2, 1, EARTHQUAKE
    db 2, 2, SLASH ; PRE LV 17
    db 2, 3, SAND_ATTACK ; PRE LV 10
    db 2, 4, SUBSTITUTE

    ; 53, MAROWAK 
    db 3, 1, EARTHQUAKE
    db 3, 2, BODY_SLAM
    db 3, 3, BLIZZARD
    db 3, 4, SUBSTITUTE

    ; 54, NIDOKING 
    db 4, 1, EARTHQUAKE
    db 4, 2, BLIZZARD
    db 4, 3, THUNDER
    db 4, 4, DOUBLE_TEAM

    ; 54, NIDOQUEEN 
    db 5, 1, EARTHQUAKE
    db 5, 2, BLIZZARD
    db 5, 3, THUNDER
    db 5, 4, DOUBLE_TEAM

    ; 55, RHYDON 
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


	db BRUNO, 1 ; 57, HITMONLEE, 57, HITMONCHAN, 56, PRIMEAPE, 56, POLIWRATH, 56, POLIWRATH, 58, MACHAMP, 0

    ; 57, HITMONLEE 
    db 1, 1, HI_JUMP_KICK ; LV 48
    db 1, 2, BODY_SLAM
    db 1, 3, DOUBLE_TEAM
    db 1, 4, MEDITATE ; LV 1

    ; 57, HITMONCHAN 
    db 2, 1, SUBMISSION 
    db 2, 2, BODY_SLAM
    db 2, 3, AGILITY ; LV 1
    db 2, 4, DOUBLE_TEAM

    ; 56, PRIMEAPE 
    db 3, 1, SUBMISSION
    db 3, 2, KARATE_CHOP ; PRE LV 15
    db 3, 3, THUNDERBOLT
    db 3, 4, ROCK_SLIDE

    ; 56, POLIWRATH 
    db 4, 1, SURF
    db 4, 2, EARTHQUAKE
    db 4, 3, AMNESIA ; PRE LV 38
    db 4, 4, HYPNOSIS ; PRE LV 16

    ; 56, POLIWRATH 
    db 5, 1, SUBMISSION
    db 5, 2, SURF
    db 5, 3, AMNESIA ; PRE LV 38
    db 5, 4, HYPNOSIS ; PRE LV 16

    ; 58, MACHAMP 
    db 6, 1, SUBMISSION
    db 6, 2, EARTHQUAKE
    db 6, 3, HYPER_BEAM
    db 6, 4, ROCK_SLIDE

    db 0  ; Finaliza a lista


	db AGATHA, 1 ; 59, GASTLY, 58, HAUNTER, 58, HAUNTER, 58, HAUNTER, 58, HAUNTER, 60, GENGAR, 0

    ; 59, GASTLY 
    db 1, 1, PSYCHIC_M
    db 1, 2, MEGA_DRAIN
    db 1, 3, HYPNOSIS ; LV 27
    db 1, 4, CONFUSE_RAY ; LV 1

    ; 58, HAUNTER 
    db 2, 1, PSYCHIC_M
    db 2, 2, EXPLOSION
    db 2, 3, HYPNOSIS ; PRE LV 27
    db 2, 4, CONFUSE_RAY ; PRE LV 1

    ; 58, HAUNTER 
    db 3, 1, PSYCHIC_M
    db 3, 2, THUNDERBOLT
    db 3, 3, HYPNOSIS ; PRE LV 27
    db 3, 4, CONFUSE_RAY ; PRE LV 1

    ; 58, HAUNTER 
    db 4, 1, NIGHT_SHADE
    db 4, 2, HYPNOSIS ; PRE LV 27
    db 4, 3, CONFUSE_RAY ; PRE LV 1
    db 4, 4, SUBSTITUTE

    ; 58, HAUNTER 
    db 5, 1, MEGA_DRAIN
    db 5, 2, PSYCHIC_M
    db 5, 3, THUNDERBOLT
    db 5, 4, CONFUSE_RAY ; PRE LV 1

    ; 60, GENGAR 
    db 6, 1, NIGHT_SHADE
    db 6, 2, PSYCHIC_M
    db 6, 3, HYPNOSIS ; PRE LV 27
    db 6, 4, CONFUSE_RAY ; PRE LV 1

    db 0  ; Finaliza a lista


	db LANCE, 1 ; 61, DRATINI, 60, DRAGONAIR, 60, DRAGONAIR, 60, DRAGONAIR, 60, DRAGONAIR, 62, DRAGONITE, 0

    ; 61, DRATINI 
    db 1, 1, WRAP ; LV 1
    db 1, 2, BLIZZARD
    db 1, 3, AGILITY ; LV 20
    db 1, 4, THUNDER_WAVE

    ; 60, DRAGONAIR 
    db 2, 1, WRAP ; PRE LV 1
    db 2, 2, THUNDERBOLT
    db 2, 3, THUNDER_WAVE
    db 2, 4, AGILITY ; PRE LV 20

    ; 60, DRAGONAIR 
    db 3, 1, WRAP ; PRE LV 1
    db 3, 2, THUNDERBOLT
    db 3, 3, ICE_BEAM
    db 3, 4, THUNDER_WAVE

    ; 60, DRAGONAIR 
    db 4, 1, WRAP ; PRE LV 1
    db 4, 2, HYPER_BEAM
    db 4, 3, BLIZZARD
    db 4, 4, THUNDER_WAVE

    ; 60, DRAGONAIR 
    db 5, 1, HYPER_BEAM
    db 5, 2, BLIZZARD
    db 5, 3, THUNDERBOLT
    db 5, 4, THUNDER_WAVE

    ; 62, DRAGONITE 
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
    db 1, 3, NO_MOVE
    db 1, 4, NO_MOVE    
    
    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
    db RIVAL1, 2 ; Route 22 - 9, SPEAROW, 9, MANKEY, 8, EEVEE, 0
    ; 9, SPEAROW
    db 1, 1, PECK ; LV 1
    db 1, 2, GROWL ; LV 1
    db 1, 3, LEER ; LV 9
    db 1, 4, NO_MOVE

    ; 9, MANKEY
    db 2, 1, LOW_KICK ; LV 9
    db 2, 2, SCRATCH ; LV 1
    db 2, 3, LEER ; LV 1
    db 2, 4, NO_MOVE 

    ; 8, EEVEE
    db 3, 1, TACKLE ; LV 1
    db 3, 2, TAIL_WHIP ; LV 1
    db 3, 3, SAND_ATTACK ; LV 8
    db 3, 4, NO_MOVE

    db 0  ; Finaliza a lista

