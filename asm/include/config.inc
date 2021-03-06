@include
;-------------------------------------------------------------------------------
; GIEPY config file
;
;   GIEPY requires some free rams.
;   prease set these parameters.
;
;   === NOTICE ===
;   - Don't set "$" before address.
;-------------------------------------------------------------------------------
!__config_inc ?= 0
if 0 == !__config_inc
!__config_inc := 1



;---------------------------------------
; Memory config
;   Please chenge these when memory
;   conflict occurs.
;---------------------------------------

;---
; mem spec legend
;-------------------------------------------------
; mem name ... <LoRom Requires>(<SA-1 Requires>) bytes
;   description ...........................
;-------------------------------------------------


;================ SPRITE TOOL CONFIG =============

;-------------------------------------------------
; Extra bits  ... 12(22) bytes
;   This ram will be used for save the "Extra info".
;-------------------------------------------------
!_extra_bits		= 7fab10
!_extra_bits_sa1	= 400040


;-------------------------------------------------
; New code flag ... 1 byte
;-------------------------------------------------
!_new_code_flag		= 7fab1c
!_new_code_flag_sa1	= 400056


;-------------------------------------------------
; Extra prop 1 ... 12(22) bytes
;-------------------------------------------------
!_extra_prop_1		= 7fab28
!_extra_prop_1_sa1	= 400057


;-------------------------------------------------
; Extra prop 2 ... 12(22) bytes
;-------------------------------------------------
!_extra_prop_2		= 7fab34
!_extra_prop_2_sa1	= 40006d


;-------------------------------------------------
; New sprite number ... 12(22) bytes
;-------------------------------------------------
!_new_sprite_num	= 7fab9e
!_new_sprite_num_sa1	= 400083



;================= GIEPY CONFIG ==================


;-------------------------------------------------
; Shooter extra bits ... 8 bytes
;-------------------------------------------------
!_extra_bits_sh		= 7fabaa
!_extra_bits_sh_sa1	= 400099


;-------------------------------------------------
; Generator extra bits ... 1 byte
;-------------------------------------------------
!_extra_bits_gen	= 7fabb2
!_extra_bits_gen_sa1	= 4000a1


;-------------------------------------------------
; Layer1 Scroller extra bits ... 1 byte
;-------------------------------------------------
!_extra_bits_l1scr	= 7fabb3
!_extra_bits_l1scr_sa1	= 4000a2


;-------------------------------------------------
; Layer2 Scroller extra bits ... 1 byte
;-------------------------------------------------
!_extra_bits_l2scr	= 7fabb4
!_extra_bits_l2scr_sa1	= 4000a3



;================== PIXI CONFIG ==================


;-------------------------------------------------
; Extra byte 1 ... 12(22) bytes
;-------------------------------------------------
!_extra_byte_1		= 7fab40
!_extra_byte_1_sa1	= 4000a4


;-------------------------------------------------
; Extra byte 2 ... 12(22) bytes
;-------------------------------------------------
!_extra_byte_2		= 7fab4c
!_extra_byte_2_sa1	= 4000ba


;-------------------------------------------------
; Extra byte 3 ... 12(22) bytes
;-------------------------------------------------
!_extra_byte_3		= 7fab58
!_extra_byte_3_sa1	= 4000d0


;-------------------------------------------------
; Extra byte 4 ... 12(22) bytes
;-------------------------------------------------
!_extra_byte_4		= 7fab64
!_extra_byte_4_sa1	= 4000e6



;================= GIEPY CONFIG ==================

;-------------------------------------------------
; Shooter extra byte ... 8 bytes
;-------------------------------------------------
!_extra_byte_sh		= 7fab70
!_extra_byte_sh_sa1	= 41c800


;-------------------------------------------------
; Generator extra byte ... 1 byte
;-------------------------------------------------
!_extra_byte_gen	= 7fab71
!_extra_byte_gen_sa1	= 4000fc


;-------------------------------------------------
; Scroller extra byte ... 1 byte
;-------------------------------------------------
!_extra_byte_scr	= 7fab72
!_extra_byte_scr_sa1	= 4000fd

;
;           :
;           :
;        and more ...
;           :
;           :
endif
