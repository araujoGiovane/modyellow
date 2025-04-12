PrizeDifferentMenuPtrs:
	dw PrizeMenuMon1Entries, PrizeMenuMon1Cost
	dw PrizeMenuMon2Entries, PrizeMenuMon2Cost
	dw PrizeMenuTMsEntries,  PrizeMenuTMsCost

PrizeMenuMon1Entries:
	db JYNX
	db MR_MIME
	db EEVEE
	db "@"

PrizeMenuMon1Cost:
	bcd2 2200
	bcd2 2200
	bcd2 2680
	db "@"

PrizeMenuMon2Entries:
	db HITMONLEE
	db HITMONCHAN
	db PORYGON
	db "@"

PrizeMenuMon2Cost:
	bcd2 4500
	bcd2 4500
	bcd2 5000
	db "@"

PrizeMenuTMsEntries:
	db DOME_FOSSIL
	db HELIX_FOSSIL
	db TM_HYPER_BEAM
	db "@"

PrizeMenuTMsCost:
	bcd2 4000
	bcd2 4000
	bcd2 3000
	db "@"
