;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
    db RIVAL1, 3 ; Cerulean City - 17, SPEAROW, 18, MANKEY, 15, SANDSHREW, 15, RATTATA, 17, EEVEE, 0
    ; 18, SPEAROW
    db 1, 1, PECK ; LV 1
    db 1, 2, RAZOR_WIND ; TM 02 NÃO SEI QUANTAS TEM NO JOGO 
    db 1, 3, LEER ; LV 9
    db 1, 4, GROWL ; LV 1

    ; 18, MANKEY
    db 2, 1, LOW_KICK ; LV 9
    db 2, 2, KARATE_CHOP ; LV 15
    db 2, 3, SCRATCH ; LV 1
    db 2, 4, LEER ; LV 1        

    ; 15, SANDSHREW
    db 3, 1, ROCK_SLIDE ; TM 48 SÓ TEM UM NO JOGO
    db 3, 2, SCRATCH ; LV 1
    db 3, 3, SAND_ATTACK ; LV 10
    db 3, 4, NO_MOVE

    ; 15, RATTATA
    db 4, 1, HYPER_FANG ; LV 14
    db 4, 2, QUICK_ATTACK ; LV 7
    db 4, 3, WATER_GUN ; TM 12 SÓ TEM UM NO JOGO
    db 4, 4, TAIL_WHIP ; LV 1

    ; 17, EEVEE
    db 5, 1, TACKLE ; LV 1
    db 5, 2, TAIL_WHIP ; LV 1
    db 5, 3, SAND_ATTACK ; LV 8
    db 5, 4, GROWL ; LV 16

    db 0  ; Finaliza a lista 
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db RIVAL2, 1 ; SS Anne 2F - 19, MANKEY, 16, RATTATA, 19, SPEAROW, 18, SANDSHREW, 20, EEVEE, 0
    ; 19, MANKEY
    db 1, 1, LOW_KICK ; LV 9
    db 1, 2, KARATE_CHOP ; LV 15
    db 1, 3, SCRATCH ; LV 1
    db 1, 4, LEER ; LV 1 

    ; 16, RATTATA
    db 2, 1, HYPER_FANG ; LV 14
    db 2, 2, QUICK_ATTACK ; LV 7
    db 2, 3, WATER_GUN ; TM 12 SÓ TEM UM NO JOGO
    db 2, 4, TAIL_WHIP ; LV 1

    ; 19, SPEAROW
    db 3, 1, PECK ; LV 1
    db 3, 2, RAZOR_WIND ; TM 02 NÃO SEI QUANTAS TEM NO JOGO 
    db 3, 3, LEER ; LV 9
    db 3, 4, GROWL ; LV 1

    ; 18, SANDSHREW
    db 4, 1, DIG ; TM 28 SÓ TEM UM NO JOGO
    db 4, 2, ROCK_SLIDE ; TM 48 SÓ TEM UM NO JOGO
    db 4, 3, SLASH ; LV 17
    db 4, 4, SAND_ATTACK ; LV 10

    ; 20, EEVEE
    db 5, 1, TACKLE ; LV 1
    db 5, 2, TAIL_WHIP ; LV 1
    db 5, 3, SAND_ATTACK ; LV 8
    db 5, 4, GROWL ; LV 16

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db RIVAL2, 2 ; Pokémon Tower 2F - 22, ABRA, 28, FEARROW, 23, RATICATE, 28, PRIMEAPE, 22, SANDSLASH, 25, EEVEE, 0
    ; 22, ABRA
    db 1, 1, TRI_ATTACK ; TM 48 SÓ TEM UM NO JOGO
    db 1, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 1, 3, THUNDER_WAVE ; TM 24 SÓ TEM UM NO JOGO
    db 1, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO

    ; 28, FEARROW
    db 2, 1, FLY ; HM 2
    db 2, 2, PECK ; PRE LV 1
    db 2, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 2, 4, LEER ; PRE LV 9

    ; 23, RATICATE
    db 3, 1, HYPER_FANG ; PRE LV 14
    db 3, 2, QUICK_ATTACK ; PRE LV 7
    db 3, 3, WATER_GUN ; TM 12 SÓ TEM UM NO JOGO
    db 3, 4, TAIL_WHIP ; PRE LV 1

    ; 28, PRIMEAPE
    db 4, 1, SUBMISSION ; TM 17 PODE SER COMPRADO
    db 4, 2, LOW_KICK ; PRE LV 9
    db 4, 3, KARATE_CHOP ; PRE LV 15
    db 4, 4, LEER ; PRE LV 1

    ; 22, SANDSLASH
    db 5, 1, DIG ; TM 28 SÓ TEM UM NO JOGO
    db 5, 2, ROCK_SLIDE ; TM 48 SÓ TEM UM NO JOGO
    db 5, 3, SLASH ; PRE LV 17
    db 5, 4, SAND_ATTACK ; PRE LV 10

    ; 25, EEVEE
    db 6, 1, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 6, 2, QUICK_ATTACK ; LV 23
    db 6, 3, REFLECT ; TM 32
    db 6, 4, SAND_ATTACK ; LV 8

    db 0  ; Finaliza a lista

	db RIVAL2, 3 ; Pokémon Tower 2F - 22, ABRA, 28, FEARROW, 23, RATICATE, 28, PRIMEAPE, 22, SANDSLASH, 25, EEVEE, 0
    ; 22, ABRA
    db 1, 1, TRI_ATTACK ; TM 48 SÓ TEM UM NO JOGO
    db 1, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 1, 3, THUNDER_WAVE ; TM 24 SÓ TEM UM NO JOGO
    db 1, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO

    ; 28, FEARROW
    db 2, 1, FLY ; HM 2
    db 2, 2, PECK ; PRE LV 1
    db 2, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 2, 4, LEER ; PRE LV 9

    ; 23, RATICATE
    db 3, 1, HYPER_FANG ; PRE LV 14
    db 3, 2, QUICK_ATTACK ; PRE LV 7
    db 3, 3, WATER_GUN ; TM 12 SÓ TEM UM NO JOGO
    db 3, 4, TAIL_WHIP ; PRE LV 1

    ; 28, PRIMEAPE
    db 4, 1, SUBMISSION ; TM 17 PODE SER COMPRADO
    db 4, 2, LOW_KICK ; PRE LV 9
    db 4, 3, KARATE_CHOP ; PRE LV 15
    db 4, 4, LEER ; PRE LV 1

    ; 22, SANDSLASH
    db 5, 1, DIG ; TM 28 SÓ TEM UM NO JOGO
    db 5, 2, ROCK_SLIDE ; TM 48 SÓ TEM UM NO JOGO
    db 5, 3, SLASH ; PRE LV 17
    db 5, 4, SAND_ATTACK ; PRE LV 10

    ; 25, EEVEE
    db 6, 1, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 6, 2, QUICK_ATTACK ; LV 23
    db 6, 3, REFLECT ; TM 32
    db 6, 4, SAND_ATTACK ; LV 8

    db 0  ; Finaliza a lista

	db RIVAL2, 4 ; Pokémon Tower 2F - 22, ABRA, 28, FEARROW, 23, RATICATE, 28, PRIMEAPE, 22, SANDSLASH, 25, EEVEE, 0
    ; 22, ABRA
    db 1, 1, TRI_ATTACK ; TM 48 SÓ TEM UM NO JOGO
    db 1, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 1, 3, THUNDER_WAVE ; TM 24 SÓ TEM UM NO JOGO
    db 1, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO

    ; 28, FEARROW
    db 2, 1, FLY ; HM 2
    db 2, 2, PECK ; PRE LV 1
    db 2, 3, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 2, 4, LEER ; PRE LV 9

    ; 23, RATICATE
    db 3, 1, HYPER_FANG ; PRE LV 14
    db 3, 2, QUICK_ATTACK ; PRE LV 7
    db 3, 3, WATER_GUN ; TM 12 SÓ TEM UM NO JOGO
    db 3, 4, TAIL_WHIP ; PRE LV 1

    ; 28, PRIMEAPE
    db 4, 1, SUBMISSION ; TM 17 PODE SER COMPRADO
    db 4, 2, LOW_KICK ; PRE LV 9
    db 4, 3, KARATE_CHOP ; PRE LV 15
    db 4, 4, LEER ; PRE LV 1

    ; 22, SANDSLASH
    db 5, 1, DIG ; TM 28 SÓ TEM UM NO JOGO
    db 5, 2, ROCK_SLIDE ; TM 48 SÓ TEM UM NO JOGO
    db 5, 3, SLASH ; PRE LV 17
    db 5, 4, SAND_ATTACK ; PRE LV 10

    ; 25, EEVEE
    db 6, 1, TAKE_DOWN ; TM 9 PODE SER COMPRADO
    db 6, 2, QUICK_ATTACK ; LV 23
    db 6, 3, REFLECT ; TM 32
    db 6, 4, SAND_ATTACK ; LV 8

    db 0  ; Finaliza a lista
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
;-------------------------------------------------------------------------------------------------------------------------------------------
	db RIVAL2, 5 ; Silph Co - 38, TAUROS, 38, EXEGGUTTE, 35, GROWLITE, 37, STARYU, 35, KADABRA, 40, JOLTEON, 0
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

    ; 35, GROWLITE
    db 3, 1, EMBER ; LV 18
    db 3, 2, ROAR ; LV 1
    db 3, 3, DRAGON_RAGE ; TM 23 PODE SER COMPRADO
    db 3, 4, REFLECT ; TM 33 PODE SER COMPRADO
    
    ; 37, STARYU
    db 4, 1, SURF ; HM 3
    db 4, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 4, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 4, 4, RECOVER ; LV 27

    ; 35, KADABRA
    db 5, 1, PSYBEAM ; LV 27
    db 5, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 40, JOLTEON
    db 6, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 6, 2, DOUBLE_KICK ; LV 30 
    db 6, 3, PIN_MISSILE ; LV 36
    db 6, 4, DOUBLE_TEAM ; TM 32 PODE SER COMPRADO
    
    db 0  ; Finaliza a lista

	db RIVAL2, 6 ; Silph Co - 38, TAUROS, 38, EXEGGUTTE, 35, STARYU, 37, PIKACHU, 35, KADABRA, 40, FLAREON, 0
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

    ; 35, STARYU
    db 3, 1, SURF ; HM 3
    db 3, 2, ICE_BEAM ; TM 13 SÓ TEM UM NO JOGO
    db 3, 3, THUNDER ; TM 25 SÓ TEM UM NO JOGO
    db 3, 4, RECOVER ; LV 27
 
    ; 37, PIKACHU
    db 4, 1, THUNDERBOLT ; TM 24 SÓ TEM UM NO JOGO
    db 4, 2, SEISMIC_TOSS ; TM 19 SÓ TEM UM NO JOGO
    db 4, 3, THUNDER_WAVE ; LV 8
    db 4, 4, DOUBLE_TEAM ; TM 32

    ; 35, KADABRA
    db 5, 1, PSYBEAM ; LV 27
    db 5, 2, COUNTER ; TM 18 SÓ TEM UM NO JOGO
    db 5, 3, RECOVER ; LV 31
    db 5, 4, THUNDER_WAVE ; TM 45 SÓ TEM UM NO JOGO

    ; 40, FLAREON
    db 6, 1, FIRE_SPIN ; LV 36 
    db 6, 2, DOUBLE_EDGE ; TM 10 SÓ TEM UM NO JOGO
    db 6, 3, HYPER_BEAM ; TM 15 PODE SER COMPRADO
    db 6, 4, SAND_ATTACK ; PRE LV 8

    db 0  ; Finaliza a lista


