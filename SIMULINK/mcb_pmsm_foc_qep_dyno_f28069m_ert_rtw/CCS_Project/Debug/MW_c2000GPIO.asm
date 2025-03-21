;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:15 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$CU, DW_AT_producer("TI TMS320C2000 G3 C/C++ Codegen PC v22.6.0.LTS Copyright (c) 1996-2018 Texas Instruments Incorporated")
	.dwattr $C$DW$CU, DW_AT_TI_version(0x01)
	.dwattr $C$DW$CU, DW_AT_comp_dir("E:\GiaotrinhDH\DATN\SIMULINK\mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw\CCS_Project\Debug")

$C$DW$1	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$1, DW_AT_name("Set_GPIOPin")
	.dwattr $C$DW$1, DW_AT_TI_symbol_name("_Set_GPIOPin")
	.dwattr $C$DW$1, DW_AT_declaration
	.dwattr $C$DW$1, DW_AT_external
$C$DW$2	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$2, DW_AT_type(*$C$DW$T$19)

$C$DW$3	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$3, DW_AT_type(*$C$DW$T$19)

$C$DW$4	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$4, DW_AT_type(*$C$DW$T$19)

$C$DW$5	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$5, DW_AT_type(*$C$DW$T$19)

$C$DW$6	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$6, DW_AT_type(*$C$DW$T$19)

	.dwendtag $C$DW$1


$C$DW$7	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$7, DW_AT_name("GPIO_WritePin")
	.dwattr $C$DW$7, DW_AT_TI_symbol_name("_GPIO_WritePin")
	.dwattr $C$DW$7, DW_AT_declaration
	.dwattr $C$DW$7, DW_AT_external
$C$DW$8	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$8, DW_AT_type(*$C$DW$T$19)

$C$DW$9	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$9, DW_AT_type(*$C$DW$T$19)

	.dwendtag $C$DW$7


$C$DW$10	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$10, DW_AT_name("GPIO_ReadPin")
	.dwattr $C$DW$10, DW_AT_TI_symbol_name("_GPIO_ReadPin")
	.dwattr $C$DW$10, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$10, DW_AT_declaration
	.dwattr $C$DW$10, DW_AT_external
$C$DW$11	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$11, DW_AT_type(*$C$DW$T$19)

	.dwendtag $C$DW$10

;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{D78C105B-C8A6-4131-959F-AD0D4ED9DB8F} 
	.sect	".text"
	.clink
	.global	_MW_digitalIOPin_open

$C$DW$12	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$12, DW_AT_name("MW_digitalIOPin_open")
	.dwattr $C$DW$12, DW_AT_low_pc(_MW_digitalIOPin_open)
	.dwattr $C$DW$12, DW_AT_high_pc(0x00)
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_MW_digitalIOPin_open")
	.dwattr $C$DW$12, DW_AT_external
	.dwattr $C$DW$12, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$12, DW_AT_TI_begin_line(0x13)
	.dwattr $C$DW$12, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$12, DW_AT_TI_max_frame_size(-8)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 20,column 1,is_stmt,address _MW_digitalIOPin_open,isa 0

	.dwfde $C$DW$CIE, _MW_digitalIOPin_open
$C$DW$13	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$13, DW_AT_name("pin")
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$13, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$13, DW_AT_location[DW_OP_reg0]

$C$DW$14	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$14, DW_AT_name("direction")
	.dwattr $C$DW$14, DW_AT_TI_symbol_name("_direction")
	.dwattr $C$DW$14, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$14, DW_AT_location[DW_OP_reg12]

;----------------------------------------------------------------------
;  19 | void MW_digitalIOPin_open(Uint32 pin, Uint16 direction)                
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_digitalIOPin_open         FR SIZE:   6           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            1 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_MW_digitalIOPin_open:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -8
$C$DW$15	.dwtag  DW_TAG_variable
	.dwattr $C$DW$15, DW_AT_name("pin")
	.dwattr $C$DW$15, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$15, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$15, DW_AT_location[DW_OP_breg20 -4]

$C$DW$16	.dwtag  DW_TAG_variable
	.dwattr $C$DW$16, DW_AT_name("direction")
	.dwattr $C$DW$16, DW_AT_TI_symbol_name("_direction")
	.dwattr $C$DW$16, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$16, DW_AT_location[DW_OP_breg20 -5]

        MOV       *-SP[5],AR4           ; [CPU_ALU] |20| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |20| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 21,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  21 | if (direction == GPIO_OUTPUT)                                          
;----------------------------------------------------------------------
        MOV       AL,*-SP[5]            ; [CPU_ALU] |21| 
        CMPB      AL,#1                 ; [CPU_ALU] |21| 
        B         $C$L1,NEQ             ; [CPU_ALU] |21| 
        ; branchcc occurs ; [] |21| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 23,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  23 | Set_GPIOPin(pin, GPIO_MUX_CPU1, 0, GPIO_OUTPUT, GPIO_PULLUP);          
;  25 | else                                                                   
;----------------------------------------------------------------------
        MOVB      *-SP[1],#1,UNC        ; [CPU_ALU] |23| 
        MOVB      XAR4,#0               ; [CPU_ALU] |23| 
        MOVB      XAR5,#1               ; [CPU_ALU] |23| 
        MOVB      AH,#0                 ; [CPU_ALU] |23| 
        MOV       AL,*-SP[4]            ; [CPU_ALU] |23| 
$C$DW$17	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$17, DW_AT_low_pc(0x00)
	.dwattr $C$DW$17, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$17, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |23| 
        ; call occurs [#_Set_GPIOPin] ; [] |23| 
        B         $C$L2,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L1:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 27,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  27 | Set_GPIOPin(pin, GPIO_MUX_CPU1, 0, GPIO_INPUT, GPIO_SYNC);             
;----------------------------------------------------------------------
        MOV       *-SP[1],#0            ; [CPU_ALU] |27| 
        MOVB      AH,#0                 ; [CPU_ALU] |27| 
        MOVB      XAR4,#0               ; [CPU_ALU] |27| 
        MOVB      XAR5,#0               ; [CPU_ALU] |27| 
        MOV       AL,*-SP[4]            ; [CPU_ALU] |27| 
$C$DW$18	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$18, DW_AT_low_pc(0x00)
	.dwattr $C$DW$18, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$18, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |27| 
        ; call occurs [#_Set_GPIOPin] ; [] |27| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 29,column 1,is_stmt,isa 0
$C$L2:    
        SUBB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$19	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$19, DW_AT_low_pc(0x00)
	.dwattr $C$DW$19, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$12, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$12, DW_AT_TI_end_line(0x1d)
	.dwattr $C$DW$12, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$12

	.sect	".text"
	.clink
	.global	_MW_digitalIOPin_read

$C$DW$20	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$20, DW_AT_name("MW_digitalIOPin_read")
	.dwattr $C$DW$20, DW_AT_low_pc(_MW_digitalIOPin_read)
	.dwattr $C$DW$20, DW_AT_high_pc(0x00)
	.dwattr $C$DW$20, DW_AT_TI_symbol_name("_MW_digitalIOPin_read")
	.dwattr $C$DW$20, DW_AT_external
	.dwattr $C$DW$20, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$20, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$20, DW_AT_TI_begin_line(0x20)
	.dwattr $C$DW$20, DW_AT_TI_begin_column(0x08)
	.dwattr $C$DW$20, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 33,column 1,is_stmt,address _MW_digitalIOPin_read,isa 0

	.dwfde $C$DW$CIE, _MW_digitalIOPin_read
$C$DW$21	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$21, DW_AT_name("pin")
	.dwattr $C$DW$21, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$21, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$21, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  32 | Uint16 MW_digitalIOPin_read(Uint32 pin)                                
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_digitalIOPin_read         FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  3 Auto,  0 SOE     *
;***************************************************************

_MW_digitalIOPin_read:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$22	.dwtag  DW_TAG_variable
	.dwattr $C$DW$22, DW_AT_name("pin")
	.dwattr $C$DW$22, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$22, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$22, DW_AT_location[DW_OP_breg20 -2]

$C$DW$23	.dwtag  DW_TAG_variable
	.dwattr $C$DW$23, DW_AT_name("ret")
	.dwattr $C$DW$23, DW_AT_TI_symbol_name("_ret")
	.dwattr $C$DW$23, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$23, DW_AT_location[DW_OP_breg20 -3]

        MOVL      *-SP[2],ACC           ; [CPU_ALU] |33| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 34,column 16,is_stmt,isa 0
;----------------------------------------------------------------------
;  34 | Uint16 ret = 0;                                                        
;----------------------------------------------------------------------
        MOV       *-SP[3],#0            ; [CPU_ALU] |34| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 35,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  35 | ret = GPIO_ReadPin(pin);                                               
;----------------------------------------------------------------------
        MOV       AL,*-SP[2]            ; [CPU_ALU] |35| 
$C$DW$24	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$24, DW_AT_low_pc(0x00)
	.dwattr $C$DW$24, DW_AT_name("_GPIO_ReadPin")
	.dwattr $C$DW$24, DW_AT_TI_call

        LCR       #_GPIO_ReadPin        ; [CPU_ALU] |35| 
        ; call occurs [#_GPIO_ReadPin] ; [] |35| 
        MOV       *-SP[3],AL            ; [CPU_ALU] |35| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 36,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  36 | return ret;                                                            
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 37,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$25	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$25, DW_AT_low_pc(0x00)
	.dwattr $C$DW$25, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$20, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$20, DW_AT_TI_end_line(0x25)
	.dwattr $C$DW$20, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$20

	.sect	".text"
	.clink
	.global	_MW_digitalIOPin_write

$C$DW$26	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$26, DW_AT_name("MW_digitalIOPin_write")
	.dwattr $C$DW$26, DW_AT_low_pc(_MW_digitalIOPin_write)
	.dwattr $C$DW$26, DW_AT_high_pc(0x00)
	.dwattr $C$DW$26, DW_AT_TI_symbol_name("_MW_digitalIOPin_write")
	.dwattr $C$DW$26, DW_AT_external
	.dwattr $C$DW$26, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$26, DW_AT_TI_begin_line(0x28)
	.dwattr $C$DW$26, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$26, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 41,column 1,is_stmt,address _MW_digitalIOPin_write,isa 0

	.dwfde $C$DW$CIE, _MW_digitalIOPin_write
$C$DW$27	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$27, DW_AT_name("pin")
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$27, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$27, DW_AT_location[DW_OP_reg0]

$C$DW$28	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$28, DW_AT_name("value")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$28, DW_AT_location[DW_OP_reg12]

;----------------------------------------------------------------------
;  40 | void MW_digitalIOPin_write(Uint32 pin, Uint16 value)                   
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_digitalIOPin_write        FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  3 Auto,  0 SOE     *
;***************************************************************

_MW_digitalIOPin_write:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$29	.dwtag  DW_TAG_variable
	.dwattr $C$DW$29, DW_AT_name("pin")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$29, DW_AT_location[DW_OP_breg20 -2]

$C$DW$30	.dwtag  DW_TAG_variable
	.dwattr $C$DW$30, DW_AT_name("value")
	.dwattr $C$DW$30, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$30, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$30, DW_AT_location[DW_OP_breg20 -3]

        MOV       *-SP[3],AR4           ; [CPU_ALU] |41| 
        MOVL      *-SP[2],ACC           ; [CPU_ALU] |41| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 42,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  42 | GPIO_WritePin(pin, value);                                             
;----------------------------------------------------------------------
        MOV       AL,*-SP[2]            ; [CPU_ALU] |42| 
        MOV       AH,*-SP[3]            ; [CPU_ALU] |42| 
$C$DW$31	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$31, DW_AT_low_pc(0x00)
	.dwattr $C$DW$31, DW_AT_name("_GPIO_WritePin")
	.dwattr $C$DW$31, DW_AT_TI_call

        LCR       #_GPIO_WritePin       ; [CPU_ALU] |42| 
        ; call occurs [#_GPIO_WritePin] ; [] |42| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 43,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$32	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$32, DW_AT_low_pc(0x00)
	.dwattr $C$DW$32, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$26, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$26, DW_AT_TI_end_line(0x2b)
	.dwattr $C$DW$26, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$26

	.sect	".text"
	.clink
	.global	_MW_digitalIOPin_close

$C$DW$33	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$33, DW_AT_name("MW_digitalIOPin_close")
	.dwattr $C$DW$33, DW_AT_low_pc(_MW_digitalIOPin_close)
	.dwattr $C$DW$33, DW_AT_high_pc(0x00)
	.dwattr $C$DW$33, DW_AT_TI_symbol_name("_MW_digitalIOPin_close")
	.dwattr $C$DW$33, DW_AT_external
	.dwattr $C$DW$33, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$33, DW_AT_TI_begin_line(0x2e)
	.dwattr $C$DW$33, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$33, DW_AT_TI_max_frame_size(-4)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 47,column 1,is_stmt,address _MW_digitalIOPin_close,isa 0

	.dwfde $C$DW$CIE, _MW_digitalIOPin_close
$C$DW$34	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$34, DW_AT_name("pin")
	.dwattr $C$DW$34, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$34, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$34, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  46 | void MW_digitalIOPin_close(Uint32 pin)                                 
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_digitalIOPin_close        FR SIZE:   2           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_MW_digitalIOPin_close:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -4
$C$DW$35	.dwtag  DW_TAG_variable
	.dwattr $C$DW$35, DW_AT_name("pin")
	.dwattr $C$DW$35, DW_AT_TI_symbol_name("_pin")
	.dwattr $C$DW$35, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$35, DW_AT_location[DW_OP_breg20 -2]

        MOVL      *-SP[2],ACC           ; [CPU_ALU] |47| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c",line 48,column 1,is_stmt,isa 0
        SUBB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$36	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$36, DW_AT_low_pc(0x00)
	.dwattr $C$DW$36, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$33, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c2000GPIO.c")
	.dwattr $C$DW$33, DW_AT_TI_end_line(0x30)
	.dwattr $C$DW$33, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$33

;**************************************************************
;* UNDEFINED EXTERNAL REFERENCES                              *
;**************************************************************
	.global	_Set_GPIOPin
	.global	_GPIO_WritePin
	.global	_GPIO_ReadPin

;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************
$C$DW$T$2	.dwtag  DW_TAG_unspecified_type
	.dwattr $C$DW$T$2, DW_AT_name("void")

$C$DW$T$4	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$4, DW_AT_encoding(DW_ATE_boolean)
	.dwattr $C$DW$T$4, DW_AT_name("bool")
	.dwattr $C$DW$T$4, DW_AT_byte_size(0x01)

$C$DW$T$5	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$5, DW_AT_encoding(DW_ATE_signed_char)
	.dwattr $C$DW$T$5, DW_AT_name("signed char")
	.dwattr $C$DW$T$5, DW_AT_byte_size(0x01)

$C$DW$T$6	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$6, DW_AT_encoding(DW_ATE_unsigned_char)
	.dwattr $C$DW$T$6, DW_AT_name("unsigned char")
	.dwattr $C$DW$T$6, DW_AT_byte_size(0x01)

$C$DW$T$7	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$7, DW_AT_encoding(DW_ATE_signed_char)
	.dwattr $C$DW$T$7, DW_AT_name("wchar_t")
	.dwattr $C$DW$T$7, DW_AT_byte_size(0x01)

$C$DW$T$8	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$8, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$8, DW_AT_name("short")
	.dwattr $C$DW$T$8, DW_AT_byte_size(0x01)

$C$DW$T$9	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$9, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$9, DW_AT_name("unsigned short")
	.dwattr $C$DW$T$9, DW_AT_byte_size(0x01)

$C$DW$T$10	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$10, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$10, DW_AT_name("int")
	.dwattr $C$DW$T$10, DW_AT_byte_size(0x01)

$C$DW$T$11	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$11, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$11, DW_AT_name("unsigned int")
	.dwattr $C$DW$T$11, DW_AT_byte_size(0x01)

$C$DW$T$19	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$19, DW_AT_name("Uint16")
	.dwattr $C$DW$T$19, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$19, DW_AT_language(DW_LANG_C)

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

$C$DW$T$24	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$24, DW_AT_name("Uint32")
	.dwattr $C$DW$T$24, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$24, DW_AT_language(DW_LANG_C)

$C$DW$T$14	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$14, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$14, DW_AT_name("long long")
	.dwattr $C$DW$T$14, DW_AT_byte_size(0x04)

$C$DW$T$15	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$15, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$15, DW_AT_name("unsigned long long")
	.dwattr $C$DW$T$15, DW_AT_byte_size(0x04)

$C$DW$T$16	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$16, DW_AT_encoding(DW_ATE_float)
	.dwattr $C$DW$T$16, DW_AT_name("float")
	.dwattr $C$DW$T$16, DW_AT_byte_size(0x02)

$C$DW$T$17	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$17, DW_AT_encoding(DW_ATE_float)
	.dwattr $C$DW$T$17, DW_AT_name("double")
	.dwattr $C$DW$T$17, DW_AT_byte_size(0x02)

$C$DW$T$18	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$18, DW_AT_encoding(DW_ATE_float)
	.dwattr $C$DW$T$18, DW_AT_name("long double")
	.dwattr $C$DW$T$18, DW_AT_byte_size(0x04)

	.dwattr $C$DW$CU, DW_AT_language(DW_LANG_C)

;***************************************************************
;* DWARF CIE ENTRIES                                           *
;***************************************************************

$C$DW$CIE	.dwcie 26
	.dwcfi	cfa_register, 20
	.dwcfi	cfa_offset, 0
	.dwcfi	same_value, 28
	.dwcfi	same_value, 6
	.dwcfi	same_value, 7
	.dwcfi	same_value, 8
	.dwcfi	same_value, 9
	.dwcfi	same_value, 10
	.dwcfi	same_value, 11
	.dwcfi	same_value, 59
	.dwcfi	same_value, 63
	.dwcfi	same_value, 67
	.dwcfi	same_value, 71
	.dwendentry

;***************************************************************
;* DWARF REGISTER MAP                                          *
;***************************************************************

$C$DW$37	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$37, DW_AT_name("AL")
	.dwattr $C$DW$37, DW_AT_location[DW_OP_reg0]

$C$DW$38	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$38, DW_AT_name("AH")
	.dwattr $C$DW$38, DW_AT_location[DW_OP_reg1]

$C$DW$39	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$39, DW_AT_name("PL")
	.dwattr $C$DW$39, DW_AT_location[DW_OP_reg2]

$C$DW$40	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$40, DW_AT_name("PH")
	.dwattr $C$DW$40, DW_AT_location[DW_OP_reg3]

$C$DW$41	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$41, DW_AT_name("SP")
	.dwattr $C$DW$41, DW_AT_location[DW_OP_reg20]

$C$DW$42	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$42, DW_AT_name("XT")
	.dwattr $C$DW$42, DW_AT_location[DW_OP_reg21]

$C$DW$43	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$43, DW_AT_name("T")
	.dwattr $C$DW$43, DW_AT_location[DW_OP_reg22]

$C$DW$44	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$44, DW_AT_name("ST0")
	.dwattr $C$DW$44, DW_AT_location[DW_OP_reg23]

$C$DW$45	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$45, DW_AT_name("ST1")
	.dwattr $C$DW$45, DW_AT_location[DW_OP_reg24]

$C$DW$46	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$46, DW_AT_name("PC")
	.dwattr $C$DW$46, DW_AT_location[DW_OP_reg25]

$C$DW$47	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$47, DW_AT_name("RPC")
	.dwattr $C$DW$47, DW_AT_location[DW_OP_reg26]

$C$DW$48	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$48, DW_AT_name("FP")
	.dwattr $C$DW$48, DW_AT_location[DW_OP_reg28]

$C$DW$49	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$49, DW_AT_name("DP")
	.dwattr $C$DW$49, DW_AT_location[DW_OP_reg29]

$C$DW$50	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$50, DW_AT_name("SXM")
	.dwattr $C$DW$50, DW_AT_location[DW_OP_reg30]

$C$DW$51	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$51, DW_AT_name("PM")
	.dwattr $C$DW$51, DW_AT_location[DW_OP_reg31]

$C$DW$52	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$52, DW_AT_name("OVM")
	.dwattr $C$DW$52, DW_AT_location[DW_OP_regx 0x20]

$C$DW$53	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$53, DW_AT_name("PAGE0")
	.dwattr $C$DW$53, DW_AT_location[DW_OP_regx 0x21]

$C$DW$54	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$54, DW_AT_name("AMODE")
	.dwattr $C$DW$54, DW_AT_location[DW_OP_regx 0x22]

$C$DW$55	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$55, DW_AT_name("EALLOW")
	.dwattr $C$DW$55, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$56	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$56, DW_AT_name("INTM")
	.dwattr $C$DW$56, DW_AT_location[DW_OP_regx 0x23]

$C$DW$57	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$57, DW_AT_name("IFR")
	.dwattr $C$DW$57, DW_AT_location[DW_OP_regx 0x24]

$C$DW$58	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$58, DW_AT_name("IER")
	.dwattr $C$DW$58, DW_AT_location[DW_OP_regx 0x25]

$C$DW$59	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$59, DW_AT_name("V")
	.dwattr $C$DW$59, DW_AT_location[DW_OP_regx 0x26]

$C$DW$60	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$60, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$60, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$61	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$61, DW_AT_name("VOL")
	.dwattr $C$DW$61, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$62	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$62, DW_AT_name("AR0")
	.dwattr $C$DW$62, DW_AT_location[DW_OP_reg4]

$C$DW$63	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$63, DW_AT_name("XAR0")
	.dwattr $C$DW$63, DW_AT_location[DW_OP_reg5]

$C$DW$64	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$64, DW_AT_name("AR1")
	.dwattr $C$DW$64, DW_AT_location[DW_OP_reg6]

$C$DW$65	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$65, DW_AT_name("XAR1")
	.dwattr $C$DW$65, DW_AT_location[DW_OP_reg7]

$C$DW$66	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$66, DW_AT_name("AR2")
	.dwattr $C$DW$66, DW_AT_location[DW_OP_reg8]

$C$DW$67	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$67, DW_AT_name("XAR2")
	.dwattr $C$DW$67, DW_AT_location[DW_OP_reg9]

$C$DW$68	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$68, DW_AT_name("AR3")
	.dwattr $C$DW$68, DW_AT_location[DW_OP_reg10]

$C$DW$69	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$69, DW_AT_name("XAR3")
	.dwattr $C$DW$69, DW_AT_location[DW_OP_reg11]

$C$DW$70	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$70, DW_AT_name("AR4")
	.dwattr $C$DW$70, DW_AT_location[DW_OP_reg12]

$C$DW$71	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$71, DW_AT_name("XAR4")
	.dwattr $C$DW$71, DW_AT_location[DW_OP_reg13]

$C$DW$72	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$72, DW_AT_name("AR5")
	.dwattr $C$DW$72, DW_AT_location[DW_OP_reg14]

$C$DW$73	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$73, DW_AT_name("XAR5")
	.dwattr $C$DW$73, DW_AT_location[DW_OP_reg15]

$C$DW$74	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$74, DW_AT_name("AR6")
	.dwattr $C$DW$74, DW_AT_location[DW_OP_reg16]

$C$DW$75	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$75, DW_AT_name("XAR6")
	.dwattr $C$DW$75, DW_AT_location[DW_OP_reg17]

$C$DW$76	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$76, DW_AT_name("AR7")
	.dwattr $C$DW$76, DW_AT_location[DW_OP_reg18]

$C$DW$77	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$77, DW_AT_name("XAR7")
	.dwattr $C$DW$77, DW_AT_location[DW_OP_reg19]

$C$DW$78	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$78, DW_AT_name("R0H")
	.dwattr $C$DW$78, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$79	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$79, DW_AT_name("R1H")
	.dwattr $C$DW$79, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$80	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$80, DW_AT_name("R2H")
	.dwattr $C$DW$80, DW_AT_location[DW_OP_regx 0x33]

$C$DW$81	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$81, DW_AT_name("R3H")
	.dwattr $C$DW$81, DW_AT_location[DW_OP_regx 0x37]

$C$DW$82	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$82, DW_AT_name("R4H")
	.dwattr $C$DW$82, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$83	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$83, DW_AT_name("R5H")
	.dwattr $C$DW$83, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$84	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$84, DW_AT_name("R6H")
	.dwattr $C$DW$84, DW_AT_location[DW_OP_regx 0x43]

$C$DW$85	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$85, DW_AT_name("R7H")
	.dwattr $C$DW$85, DW_AT_location[DW_OP_regx 0x47]

$C$DW$86	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$86, DW_AT_name("RB")
	.dwattr $C$DW$86, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$87	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$87, DW_AT_name("STF")
	.dwattr $C$DW$87, DW_AT_location[DW_OP_regx 0x28]

$C$DW$88	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$88, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$88, DW_AT_location[DW_OP_reg27]

$C$DW$89	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$89, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$89, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

