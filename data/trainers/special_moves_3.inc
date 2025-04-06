	db RIVAL2, 7 ; Silph Co - 38, TAUROS, 38, EXEGGUTTE, 35, PIKACHU, 37, GROWLITE, 35, KADABRA, 40, VAPOREON, 0
    ; 38, TAUROS
    db 1, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 1, 2, STOMP ; LV 21
    db 1, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 1, 4, SKULL_BASH ; TM 40 SÓ TEM UM NO JOGO

    ; 38, EXEGGUTTE 
    db 2, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 2, 2, LEECH_SEED ; LV 28
    db 2, 3, EXPLOSION ; TM 36 SÓ TEM UM NO JOGO
    db 2, 4, STUN_SPORE ; LV 32
 
    ; 35, PIKACHU
    db 3, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 3, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 3, 3, THUNDER_WAVE ; LV 8
    db 3, 4, DOUBLE_TEAM ; TM 32

    ; 37, GROWLITE
    db 4, 1, EMBER ; LV 18
    db 4, 2, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 4, 3, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 4, 4, REFLECT ; TM 33 PODE SER COMPRADO

    ; 35, KADABRA
    db 5, 1, PSYBEAM ; LV 27
    db 5, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 40, VAPOREON
    db 6, 1, SURF ; HM 3
    db 6, 2, AURORA_BEAM ; LV 36
    db 6, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 6, 4, REST ; TM 44 SÓ TEM UM NO JOGO

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db RIVAL2, 8 ; Route 22 - 47, TAUROS, 48, EXEGGUTOR, 50, ARCANINE, 50, STARMIE, 47, ALAKAZAN, 53, JOLTEON, 0
    ; 47, TAUROS
    db 1, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 1, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 1, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 1, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 48, EXEGGUTOR
    db 2, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 2, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 2, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 2, 4, SLEEP_POWDER ; PRE LV 48

    ; 50, ARCANINE
    db 3, 1, FLAMETHROWER ; PRE LV 50
    db 3, 2, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 3, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 3, 4, SUBSTITUTE ; TM 50 PODE SER COMPRADO

    ; 50, STARMIE
    db 4, 1, SURF ; HM 3
    db 4, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 4, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 4, 4, RECOVER ; PRE LV 27
 
    ; 47, ALAKAZAN
    db 5, 1, PSYCHIC_M; LV 38
    db 5, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; PRE LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 53, JOLTEON
    db 6, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 6, 2, DOUBLE_KICK ; LV 30
    db 6, 3, THUNDER_WAVE ; LV 42
    db 6, 4, DOUBLE_TEAM ;TM 32 PODE SER COMPRADO

    db 0  ; Finaliza a lista

	db RIVAL2, 9 ; Route 22 - 47, TAUROS, 48, EXEGGUTOR, 50, STARMIE, 50, RAICHU, 47, ALAKAZAN, 53, FLAREON, 0
    ; 47, TAUROS
    db 1, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 1, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 1, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 1, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 48, EXEGGUTOR
    db 2, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 2, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 2, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 2, 4, SLEEP_POWDER ; PRE LV 48

    ; 50, STARMIE
    db 3, 1, SURF ; HM 3
    db 3, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 3, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 3, 4, RECOVER ; PRE LV 27

    ; 50, RAICHU
    db 4, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 4, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 4, 3, THUNDER_WAVE ; LV 8
    db 4, 4, DOUBLE_TEAM ; TM 32

    ; 47, ALAKAZAN
    db 5, 1, PSYCHIC_M; LV 38
    db 5, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; PRE LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 53, FLAREON
    db 6, 1, FLAMETHROWER ; LV 52
    db 6, 2, DOUBLE_EDGE ; TM 10 SÓ TEM UM NO JOGO
    db 6, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 6, 4, SAND_ATTACK ; PRE LV 8

    db 0  ; Finaliza a lista

	db RIVAL2, 10 ; Route 22 - 47, TAUROS, 48, EXEGGUTOR, 50, RAICHU, 50, ARCANINE, 47, ALAKAZAN, 53, VAPOREON, 0
    ; 47, TAUROS
    db 1, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 1, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 1, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 1, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 48, EXEGGUTOR
    db 2, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 2, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 2, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 2, 4, SLEEP_POWDER ; PRE LV 48

    ; 47, RAICHU
    db 3, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 3, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 3, 3, THUNDER_WAVE ; LV 8
    db 3, 4, DOUBLE_TEAM ; TM 32

    ; 50, ARCANINE
    db 4, 1, FLAMETHROWER ; PRE LV 50
    db 4, 2, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 4, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 4, 4, SUBSTITUTE ; TM 50 PODE SER COMPRADO

    ; 47, ALAKAZAN
    db 5, 1, PSYCHIC_M; LV 38
    db 5, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; PRE LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 53, VAPOREON
    db 6, 1, SURF ; HM 3
    db 6, 2, ICE_BEAM ; TM 13
    db 6, 3, ACID_ARMOR ; LV 47
    db 6, 4, REST ; TM 44

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db RIVAL3, 1 ; Champion - 59, STARMIE , 59, ARCANINE, 58, ALAKAZAM, 58, EXEGGUTOR, 58, TAUROS, 60, JOLTEON, 0
    ; 59, STARMIE 
    db 1, 1, SURF ; HM 3
    db 1, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 1, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 1, 4, RECOVER ; PRE LV 27

    ; 59, ARCANINE
    db 2, 1, FLAMETHROWER ; PRE LV 50
    db 2, 2, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 2, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 2, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO

    ; 58, ALAKAZAM
    db 3, 1, PSYCHIC_M; LV 38
    db 3, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 3, 3, RECOVER ; PRE LV 31
    db 3, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 58, EXEGGUTOR
    db 4, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 4, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 4, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 4, 4, SLEEP_POWDER ; PRE LV 48

    ; 58, TAUROS
    db 5, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 5, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 5, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 5, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 60, JOLTEON
    db 6, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 6, 2, DOUBLE_KICK ; LV 30
    db 6, 3, THUNDER_WAVE ; LV 42
    db 6, 4, DOUBLE_TEAM ;TM 32 PODE SER COMPRADO

    db 0  ; Finaliza a lista

	db RIVAL3, 2 ; Champion - 59, RAICHU, 59, STARMIE , 58, ALAKAZAM, 58, EXEGGUTOR, 58, TAUROS, 60, FLAREON, 0
    ; 59, RAICHU
    db 1, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 1, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 1, 3, THUNDER_WAVE ; LV 8
    db 1, 4, DOUBLE_TEAM ; TM 32

    ; 59, STARMIE 
    db 2, 1, SURF ; HM 3
    db 2, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 2, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 2, 4, RECOVER ; PRE LV 27

    ; 58, ALAKAZAM
    db 3, 1, PSYCHIC_M; LV 38
    db 3, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 3, 3, RECOVER ; PRE LV 31
    db 3, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 58, EXEGGUTOR
    db 4, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 4, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 4, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 4, 4, SLEEP_POWDER ; PRE LV 48

    ; 58, TAUROS
    db 5, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 5, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 5, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 5, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 60, FLAREON
    db 6, 1, FLAMETHROWER ; LV 52
    db 6, 2, DOUBLE_EDGE ; TM 10 SÓ TEM UM NO JOGO
    db 6, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 6, 4, SAND_ATTACK ; PRE LV 8

    db 0  ; Finaliza a lista

	db RIVAL3, 3 ; Champion - 59, ARCANINE, 59, RAICHU, 58, ALAKAZAM, 58, EXEGGUTOR, 58, TAUROS, 60, VAPOREON, 0
    ; 59, ARCANINE
    db 1, 1, FLAMETHROWER ; PRE LV 50
    db 1, 2, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 1, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 1, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO

    ; 59, RAICHU
    db 2, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 2, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 2, 3, THUNDER_WAVE ; LV 8
    db 2, 4, DOUBLE_TEAM ; TM 32

    ; 58, ALAKAZAM
    db 3, 1, PSYCHIC_M; LV 38
    db 3, 2, PSYWAVE ; TM 46 SÓ TEM UM NO JOGO
    db 3, 3, RECOVER ; PRE LV 31
    db 3, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 58, EXEGGUTOR
    db 4, 1, PSYCHIC_M; TM 29 SÓ TEM UM NO JOGO
    db 4, 2, MEGA_DRAIN ;TM 21 SÓ TEM UM NO JOGO
    db 4, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 4, 4, SLEEP_POWDER ; PRE LV 48

    ; 58, TAUROS
    db 5, 1, BODY_SLAM ; TM 8 SÓ TEM UM NO JOGO
    db 5, 2, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 5, 3, EARTHQUAKE ; TM 26 SÓ TEM UM NO JOGO
    db 5, 4, BLIZZARD ; TM 14 SÓ TEM UM NO JOGO

    ; 60, VAPOREON
    db 6, 1, SURF ; HM 3
    db 6, 2, ICE_BEAM ; TM 13
    db 6, 3, ACID_ARMOR ; LV 47
    db 6, 4, REST ; TM 44

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db -1 ; end
