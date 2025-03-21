;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:19 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c")
	.dwattr $C$DW$CU, DW_AT_producer("TI TMS320C2000 G3 C/C++ Codegen PC v22.6.0.LTS Copyright (c) 1996-2018 Texas Instruments Incorporated")
	.dwattr $C$DW$CU, DW_AT_TI_version(0x01)
	.dwattr $C$DW$CU, DW_AT_comp_dir("E:\GiaotrinhDH\DATN\SIMULINK\mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw\CCS_Project\Debug")
;**************************************************************
;* CINIT RECORDS                                              *
;**************************************************************
	.sect	".cinit"
	.align	1
	.field  	-1,16
	.field  	_IsrOverrun+0,32
	.bits		0,16
			; _IsrOverrun @ 0

	.sect	".cinit:_isRateRunning"
	.clink
	.align	1
	.field  	-$C$IR_1,16
	.field  	_isRateRunning+0,32
	.bits		0,16
			; _isRateRunning[0] @ 0
	.bits		0,16
			; _isRateRunning[1] @ 16
	.bits		0,16
			; _isRateRunning[2] @ 32
$C$IR_1:	.set	3

	.sect	".cinit:_need2runFlags"
	.clink
	.align	1
	.field  	-$C$IR_2,16
	.field  	_need2runFlags+0,32
	.bits		0,16
			; _need2runFlags[0] @ 0
	.bits		0,16
			; _need2runFlags[1] @ 16
	.bits		0,16
			; _need2runFlags[2] @ 32
$C$IR_2:	.set	3


$C$DW$1	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$1, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep")
	.dwattr $C$DW$1, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep")
	.dwattr $C$DW$1, DW_AT_declaration
	.dwattr $C$DW$1, DW_AT_external
$C$DW$2	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$2, DW_AT_type(*$C$DW$T$34)

	.dwendtag $C$DW$1


$C$DW$3	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$3, DW_AT_name("enableTimer0Interrupt")
	.dwattr $C$DW$3, DW_AT_TI_symbol_name("_enableTimer0Interrupt")
	.dwattr $C$DW$3, DW_AT_declaration
	.dwattr $C$DW$3, DW_AT_external
	.dwendtag $C$DW$3


$C$DW$4	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$4, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_step0")
	.dwattr $C$DW$4, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_step0")
	.dwattr $C$DW$4, DW_AT_declaration
	.dwattr $C$DW$4, DW_AT_external
	.dwendtag $C$DW$4


$C$DW$5	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$5, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_step1")
	.dwattr $C$DW$5, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_step1")
	.dwattr $C$DW$5, DW_AT_declaration
	.dwattr $C$DW$5, DW_AT_external
	.dwendtag $C$DW$5


$C$DW$6	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$6, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_step2")
	.dwattr $C$DW$6, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_step2")
	.dwattr $C$DW$6, DW_AT_declaration
	.dwattr $C$DW$6, DW_AT_external
	.dwendtag $C$DW$6


$C$DW$7	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$7, DW_AT_name("c2000_flash_init")
	.dwattr $C$DW$7, DW_AT_TI_symbol_name("_c2000_flash_init")
	.dwattr $C$DW$7, DW_AT_declaration
	.dwattr $C$DW$7, DW_AT_external
	.dwendtag $C$DW$7


$C$DW$8	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$8, DW_AT_name("init_board")
	.dwattr $C$DW$8, DW_AT_TI_symbol_name("_init_board")
	.dwattr $C$DW$8, DW_AT_declaration
	.dwattr $C$DW$8, DW_AT_external
	.dwendtag $C$DW$8


$C$DW$9	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$9, DW_AT_name("bootloaderInit")
	.dwattr $C$DW$9, DW_AT_TI_symbol_name("_bootloaderInit")
	.dwattr $C$DW$9, DW_AT_declaration
	.dwattr $C$DW$9, DW_AT_external
	.dwendtag $C$DW$9


$C$DW$10	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$10, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts")
	.dwattr $C$DW$10, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts")
	.dwattr $C$DW$10, DW_AT_declaration
	.dwattr $C$DW$10, DW_AT_external
	.dwendtag $C$DW$10


$C$DW$11	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$11, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_initialize")
	.dwattr $C$DW$11, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_initialize")
	.dwattr $C$DW$11, DW_AT_declaration
	.dwattr $C$DW$11, DW_AT_external
	.dwendtag $C$DW$11


$C$DW$12	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$12, DW_AT_name("globalInterruptDisable")
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_globalInterruptDisable")
	.dwattr $C$DW$12, DW_AT_declaration
	.dwattr $C$DW$12, DW_AT_external
	.dwendtag $C$DW$12


$C$DW$13	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$13, DW_AT_name("configureTimer0")
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_configureTimer0")
	.dwattr $C$DW$13, DW_AT_declaration
	.dwattr $C$DW$13, DW_AT_external
$C$DW$14	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$14, DW_AT_type(*$C$DW$T$16)

$C$DW$15	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$15, DW_AT_type(*$C$DW$T$16)

	.dwendtag $C$DW$13


$C$DW$16	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$16, DW_AT_name("config_ePWM_TBSync")
	.dwattr $C$DW$16, DW_AT_TI_symbol_name("_config_ePWM_TBSync")
	.dwattr $C$DW$16, DW_AT_declaration
	.dwattr $C$DW$16, DW_AT_external
	.dwendtag $C$DW$16


$C$DW$17	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$17, DW_AT_name("globalInterruptEnable")
	.dwattr $C$DW$17, DW_AT_TI_symbol_name("_globalInterruptEnable")
	.dwattr $C$DW$17, DW_AT_declaration
	.dwattr $C$DW$17, DW_AT_external
	.dwendtag $C$DW$17


$C$DW$18	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$18, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_terminate")
	.dwattr $C$DW$18, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_terminate")
	.dwattr $C$DW$18, DW_AT_declaration
	.dwattr $C$DW$18, DW_AT_external
	.dwendtag $C$DW$18


$C$DW$19	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$19, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts")
	.dwattr $C$DW$19, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts")
	.dwattr $C$DW$19, DW_AT_declaration
	.dwattr $C$DW$19, DW_AT_external
	.dwendtag $C$DW$19

	.global	_IsrOverrun
_IsrOverrun:	.usect	".ebss",1,1,0
$C$DW$20	.dwtag  DW_TAG_variable
	.dwattr $C$DW$20, DW_AT_name("IsrOverrun")
	.dwattr $C$DW$20, DW_AT_TI_symbol_name("_IsrOverrun")
	.dwattr $C$DW$20, DW_AT_location[DW_OP_addr _IsrOverrun]
	.dwattr $C$DW$20, DW_AT_type(*$C$DW$T$38)
	.dwattr $C$DW$20, DW_AT_external

	.global	_stopRequested
_stopRequested:	.usect	".ebss",1,1,0
$C$DW$21	.dwtag  DW_TAG_variable
	.dwattr $C$DW$21, DW_AT_name("stopRequested")
	.dwattr $C$DW$21, DW_AT_TI_symbol_name("_stopRequested")
	.dwattr $C$DW$21, DW_AT_location[DW_OP_addr _stopRequested]
	.dwattr $C$DW$21, DW_AT_type(*$C$DW$T$41)
	.dwattr $C$DW$21, DW_AT_external

	.global	_runModel
_runModel:	.usect	".ebss",1,1,0
$C$DW$22	.dwtag  DW_TAG_variable
	.dwattr $C$DW$22, DW_AT_name("runModel")
	.dwattr $C$DW$22, DW_AT_TI_symbol_name("_runModel")
	.dwattr $C$DW$22, DW_AT_location[DW_OP_addr _runModel]
	.dwattr $C$DW$22, DW_AT_type(*$C$DW$T$41)
	.dwattr $C$DW$22, DW_AT_external


$C$DW$23	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$23, DW_AT_name("disableTimer0Interrupt")
	.dwattr $C$DW$23, DW_AT_TI_symbol_name("_disableTimer0Interrupt")
	.dwattr $C$DW$23, DW_AT_type(*$C$DW$T$42)
	.dwattr $C$DW$23, DW_AT_declaration
	.dwattr $C$DW$23, DW_AT_external
	.dwendtag $C$DW$23

$C$DW$24	.dwtag  DW_TAG_variable
	.dwattr $C$DW$24, DW_AT_name("mcb_pmsm_foc_qep_dyno_f28069_M")
	.dwattr $C$DW$24, DW_AT_TI_symbol_name("_mcb_pmsm_foc_qep_dyno_f28069_M")
	.dwattr $C$DW$24, DW_AT_type(*$C$DW$T$47)
	.dwattr $C$DW$24, DW_AT_declaration
	.dwattr $C$DW$24, DW_AT_external

	.global	_isRateRunning
_isRateRunning:	.usect	".ebss:_isRateRunning",3,1,0
	.clink ".ebss:_isRateRunning"
$C$DW$25	.dwtag  DW_TAG_variable
	.dwattr $C$DW$25, DW_AT_name("isRateRunning")
	.dwattr $C$DW$25, DW_AT_TI_symbol_name("_isRateRunning")
	.dwattr $C$DW$25, DW_AT_location[DW_OP_addr _isRateRunning]
	.dwattr $C$DW$25, DW_AT_type(*$C$DW$T$40)
	.dwattr $C$DW$25, DW_AT_external

	.global	_need2runFlags
_need2runFlags:	.usect	".ebss:_need2runFlags",3,1,0
	.clink ".ebss:_need2runFlags"
$C$DW$26	.dwtag  DW_TAG_variable
	.dwattr $C$DW$26, DW_AT_name("need2runFlags")
	.dwattr $C$DW$26, DW_AT_TI_symbol_name("_need2runFlags")
	.dwattr $C$DW$26, DW_AT_location[DW_OP_addr _need2runFlags]
	.dwattr $C$DW$26, DW_AT_type(*$C$DW$T$40)
	.dwattr $C$DW$26, DW_AT_external

	.sblock	".ebss"
	.sblock	".ebss:_isRateRunning"
	.sblock	".ebss:_need2runFlags"
;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{5A5822F7-7442-4E85-BAA2-AEFA2A1523E5} 
	.sect	".text"
	.clink
	.global	_rt_OneStep

$C$DW$27	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$27, DW_AT_name("rt_OneStep")
	.dwattr $C$DW$27, DW_AT_low_pc(_rt_OneStep)
	.dwattr $C$DW$27, DW_AT_high_pc(0x00)
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_rt_OneStep")
	.dwattr $C$DW$27, DW_AT_external
	.dwattr $C$DW$27, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c")
	.dwattr $C$DW$27, DW_AT_TI_begin_line(0x19)
	.dwattr $C$DW$27, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$27, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 26,column 1,is_stmt,address _rt_OneStep,isa 0

	.dwfde $C$DW$CIE, _rt_OneStep
;----------------------------------------------------------------------
;  25 | void rt_OneStep(void)                                                  
;  27 | boolean_T eventFlags[3];                                               
;  28 | int_T i;                                                               
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rt_OneStep                   FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_rt_OneStep:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$28	.dwtag  DW_TAG_variable
	.dwattr $C$DW$28, DW_AT_name("eventFlags")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_eventFlags")
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$40)
	.dwattr $C$DW$28, DW_AT_location[DW_OP_breg20 -3]

$C$DW$29	.dwtag  DW_TAG_variable
	.dwattr $C$DW$29, DW_AT_name("i")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_i")
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$39)
	.dwattr $C$DW$29, DW_AT_location[DW_OP_breg20 -4]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 31,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  31 | if (isRateRunning[0]++) {                                              
;----------------------------------------------------------------------
        MOVW      DP,#_isRateRunning    ; [CPU_ARAU] 
        MOV       AL,@$BLOCKED(_isRateRunning) ; [CPU_ALU] |31| 
        INC       @$BLOCKED(_isRateRunning) ; [CPU_ALU] |31| 
        CMPB      AL,#0                 ; [CPU_ALU] |31| 
        B         $C$L1,EQ              ; [CPU_ALU] |31| 
        ; branchcc occurs ; [] |31| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 32,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  32 | IsrOverrun = 1;                                                        
;----------------------------------------------------------------------
        MOVW      DP,#_IsrOverrun       ; [CPU_ARAU] 
        MOVB      @_IsrOverrun,#1,UNC   ; [CPU_ALU] |32| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 33,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  33 | isRateRunning[0]--;                /* allow future iterations to succee
;     | d*/                                                                    
;----------------------------------------------------------------------
        MOVW      DP,#_isRateRunning    ; [CPU_ARAU] 
        DEC       @$BLOCKED(_isRateRunning) ; [CPU_ALU] |33| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 34,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  34 | return;                                                                
;----------------------------------------------------------------------
        B         $C$L11,UNC            ; [CPU_ALU] |34| 
        ; branch occurs ; [] |34| 
$C$L1:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 42,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  42 | mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep(eventFlags);    
;----------------------------------------------------------------------
        MOVZ      AR4,SP                ; [CPU_ALU] |42| 
        SUBB      XAR4,#3               ; [CPU_ARAU] |42| 
        MOVZ      AR4,AR4               ; [CPU_ALU] |42| 
$C$DW$30	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$30, DW_AT_low_pc(0x00)
	.dwattr $C$DW$30, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep")
	.dwattr $C$DW$30, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep ; [CPU_ALU] |42| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep] ; [] |42| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 43,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  43 | enableTimer0Interrupt();                                               
;----------------------------------------------------------------------
$C$DW$31	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$31, DW_AT_low_pc(0x00)
	.dwattr $C$DW$31, DW_AT_name("_enableTimer0Interrupt")
	.dwattr $C$DW$31, DW_AT_TI_call

        LCR       #_enableTimer0Interrupt ; [CPU_ALU] |43| 
        ; call occurs [#_enableTimer0Interrupt] ; [] |43| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 44,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  44 | mcb_pmsm_foc_qep_dyno_f28069m_step0();                                 
;----------------------------------------------------------------------
$C$DW$32	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$32, DW_AT_low_pc(0x00)
	.dwattr $C$DW$32, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_step0")
	.dwattr $C$DW$32, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_step0 ; [CPU_ALU] |44| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_step0] ; [] |44| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 47,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  47 | disableTimer0Interrupt();                                              
;----------------------------------------------------------------------
$C$DW$33	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$33, DW_AT_low_pc(0x00)
	.dwattr $C$DW$33, DW_AT_name("_disableTimer0Interrupt")
	.dwattr $C$DW$33, DW_AT_TI_call

        LCR       #_disableTimer0Interrupt ; [CPU_ALU] |47| 
        ; call occurs [#_disableTimer0Interrupt] ; [] |47| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 48,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  48 | isRateRunning[0]--;                                                    
;----------------------------------------------------------------------
        MOVW      DP,#_isRateRunning    ; [CPU_ARAU] 
        DEC       @$BLOCKED(_isRateRunning) ; [CPU_ALU] |48| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 49,column 8,is_stmt,isa 0
;----------------------------------------------------------------------
;  49 | for (i = 1; i < 3; i++) {                                              
;----------------------------------------------------------------------
        MOVB      *-SP[4],#1,UNC        ; [CPU_ALU] |49| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 49,column 15,is_stmt,isa 0
        MOV       AL,*-SP[4]            ; [CPU_ALU] |49| 
        CMPB      AL,#3                 ; [CPU_ALU] |49| 
        B         $C$L4,GEQ             ; [CPU_ALU] |49| 
        ; branchcc occurs ; [] |49| 
        SETC      SXM                   ; [CPU_ALU] 
$C$L2:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 50,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  50 | if (eventFlags[i]) {                                                   
;----------------------------------------------------------------------
        MOVZ      AR4,SP                ; [CPU_ALU] |50| 
        SUBB      XAR4,#3               ; [CPU_ARAU] |50| 
        MOVZ      AR4,AR4               ; [CPU_ALU] |50| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |50| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |50| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |50| 
        MOV       AL,*+XAR4[0]          ; [CPU_ALU] |50| 
        B         $C$L3,EQ              ; [CPU_ALU] |50| 
        ; branchcc occurs ; [] |50| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 51,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  51 | if (need2runFlags[i]++) {                                              
;----------------------------------------------------------------------
        MOVL      XAR4,#_need2runFlags  ; [CPU_ARAU] |51| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |51| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |51| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |51| 
        MOVB      AH,#1                 ; [CPU_ALU] |51| 
        MOV       AL,*+XAR4[0]          ; [CPU_ALU] |51| 
        ADD       AH,AL                 ; [CPU_ALU] |51| 
        CMPB      AL,#0                 ; [CPU_ALU] |51| 
        MOV       *+XAR4[0],AH          ; [CPU_FPU] |51| 
        B         $C$L3,EQ              ; [CPU_ALU] |51| 
        ; branchcc occurs ; [] |51| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 52,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  52 | IsrOverrun = 1;                                                        
;----------------------------------------------------------------------
        MOVW      DP,#_IsrOverrun       ; [CPU_ARAU] 
        MOVB      @_IsrOverrun,#1,UNC   ; [CPU_ALU] |52| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 53,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  53 | need2runFlags[i]--;            /* allow future iterations to succeed*/ 
;----------------------------------------------------------------------
        MOVL      XAR4,#_need2runFlags  ; [CPU_ARAU] |53| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |53| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |53| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |53| 
        DEC       *+XAR4[0]             ; [CPU_ALU] |53| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 54,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  54 | break;                                                                 
;----------------------------------------------------------------------
        B         $C$L4,UNC             ; [CPU_ALU] |54| 
        ; branch occurs ; [] |54| 
$C$L3:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 49,column 22,is_stmt,isa 0
        INC       *-SP[4]               ; [CPU_ALU] |49| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 49,column 15,is_stmt,isa 0
        MOV       AL,*-SP[4]            ; [CPU_ALU] |49| 
        CMPB      AL,#3                 ; [CPU_ALU] |49| 
        B         $C$L2,LT              ; [CPU_ALU] |49| 
        ; branchcc occurs ; [] |49| 
$C$L4:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 59,column 8,is_stmt,isa 0
;----------------------------------------------------------------------
;  59 | for (i = 1; i < 3; i++) {                                              
;----------------------------------------------------------------------
        MOVB      *-SP[4],#1,UNC        ; [CPU_ALU] |59| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 59,column 15,is_stmt,isa 0
        MOV       AL,*-SP[4]            ; [CPU_ALU] |59| 
        CMPB      AL,#3                 ; [CPU_ALU] |59| 
        B         $C$L11,GEQ            ; [CPU_ALU] |59| 
        ; branchcc occurs ; [] |59| 
$C$L5:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 60,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  60 | if (isRateRunning[i]) {                                                
;----------------------------------------------------------------------
        MOVL      XAR4,#_isRateRunning  ; [CPU_ARAU] |60| 
        SETC      SXM                   ; [CPU_ALU] 
        MOVL      ACC,XAR4              ; [CPU_ALU] |60| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |60| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |60| 
        MOV       AL,*+XAR4[0]          ; [CPU_ALU] |60| 
        B         $C$L11,NEQ            ; [CPU_ALU] |60| 
        ; branchcc occurs ; [] |60| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 62,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  62 | return;                                                                
;----------------------------------------------------------------------
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 65,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  65 | if (need2runFlags[i]) {                                                
;----------------------------------------------------------------------
        MOVL      XAR4,#_need2runFlags  ; [CPU_ARAU] |65| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |65| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |65| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |65| 
        MOV       AL,*+XAR4[0]          ; [CPU_ALU] |65| 
        B         $C$L10,EQ             ; [CPU_ALU] |65| 
        ; branchcc occurs ; [] |65| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 66,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  66 | isRateRunning[i]++;                                                    
;----------------------------------------------------------------------
        MOVL      XAR4,#_isRateRunning  ; [CPU_ARAU] |66| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |66| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |66| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |66| 
        INC       *+XAR4[0]             ; [CPU_ALU] |66| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 67,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  67 | enableTimer0Interrupt();                                               
;----------------------------------------------------------------------
$C$DW$34	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$34, DW_AT_low_pc(0x00)
	.dwattr $C$DW$34, DW_AT_name("_enableTimer0Interrupt")
	.dwattr $C$DW$34, DW_AT_TI_call

        LCR       #_enableTimer0Interrupt ; [CPU_ALU] |67| 
        ; call occurs [#_enableTimer0Interrupt] ; [] |67| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 70,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  70 | switch (i)                                                             
;  72 |  case 1 :                                                              
;----------------------------------------------------------------------
        B         $C$L8,UNC             ; [CPU_ALU] |70| 
        ; branch occurs ; [] |70| 
$C$L6:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 73,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  73 | mcb_pmsm_foc_qep_dyno_f28069m_step1();                                 
;----------------------------------------------------------------------
$C$DW$35	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$35, DW_AT_low_pc(0x00)
	.dwattr $C$DW$35, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_step1")
	.dwattr $C$DW$35, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_step1 ; [CPU_ALU] |73| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_step1] ; [] |73| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 76,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  76 | break;                                                                 
;  78 | case 2 :                                                               
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |76| 
        ; branch occurs ; [] |76| 
$C$L7:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 79,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  79 | mcb_pmsm_foc_qep_dyno_f28069m_step2();                                 
;----------------------------------------------------------------------
$C$DW$36	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$36, DW_AT_low_pc(0x00)
	.dwattr $C$DW$36, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_step2")
	.dwattr $C$DW$36, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_step2 ; [CPU_ALU] |79| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_step2] ; [] |79| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 82,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  82 | break;                                                                 
;  84 | default :                                                              
;  85 | break;                                                                 
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |82| 
        ; branch occurs ; [] |82| 
$C$L8:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 70,column 7,is_stmt,isa 0
        MOV       AL,*-SP[4]            ; [CPU_ALU] |70| 
        CMPB      AL,#1                 ; [CPU_ALU] |70| 
        B         $C$L6,EQ              ; [CPU_ALU] |70| 
        ; branchcc occurs ; [] |70| 
        CMPB      AL,#2                 ; [CPU_ALU] |70| 
        B         $C$L7,EQ              ; [CPU_ALU] |70| 
        ; branchcc occurs ; [] |70| 
$C$L9:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 88,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  88 | disableTimer0Interrupt();                                              
;----------------------------------------------------------------------
$C$DW$37	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$37, DW_AT_low_pc(0x00)
	.dwattr $C$DW$37, DW_AT_name("_disableTimer0Interrupt")
	.dwattr $C$DW$37, DW_AT_TI_call

        LCR       #_disableTimer0Interrupt ; [CPU_ALU] |88| 
        ; call occurs [#_disableTimer0Interrupt] ; [] |88| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 89,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  89 | need2runFlags[i]--;                                                    
;----------------------------------------------------------------------
        SETC      SXM                   ; [CPU_ALU] 
        MOVL      XAR4,#_need2runFlags  ; [CPU_ARAU] |89| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |89| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |89| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |89| 
        DEC       *+XAR4[0]             ; [CPU_ALU] |89| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 90,column 7,is_stmt,isa 0
;----------------------------------------------------------------------
;  90 | isRateRunning[i]--;                                                    
;----------------------------------------------------------------------
        MOVL      XAR4,#_isRateRunning  ; [CPU_ARAU] |90| 
        MOVL      ACC,XAR4              ; [CPU_ALU] |90| 
        ADD       ACC,*-SP[4]           ; [CPU_ALU] |90| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |90| 
        DEC       *+XAR4[0]             ; [CPU_ALU] |90| 
$C$L10:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 59,column 22,is_stmt,isa 0
        INC       *-SP[4]               ; [CPU_ALU] |59| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 59,column 15,is_stmt,isa 0
        MOV       AL,*-SP[4]            ; [CPU_ALU] |59| 
        CMPB      AL,#3                 ; [CPU_ALU] |59| 
        B         $C$L5,LT              ; [CPU_ALU] |59| 
        ; branchcc occurs ; [] |59| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 93,column 1,is_stmt,isa 0
$C$L11:    
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$38	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$38, DW_AT_low_pc(0x00)
	.dwattr $C$DW$38, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$27, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c")
	.dwattr $C$DW$27, DW_AT_TI_end_line(0x5d)
	.dwattr $C$DW$27, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$27

	.sect	".text"
	.clink
	.global	_main

$C$DW$39	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$39, DW_AT_name("main")
	.dwattr $C$DW$39, DW_AT_low_pc(_main)
	.dwattr $C$DW$39, DW_AT_high_pc(0x00)
	.dwattr $C$DW$39, DW_AT_TI_symbol_name("_main")
	.dwattr $C$DW$39, DW_AT_external
	.dwattr $C$DW$39, DW_AT_type(*$C$DW$T$10)
	.dwattr $C$DW$39, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c")
	.dwattr $C$DW$39, DW_AT_TI_begin_line(0x61)
	.dwattr $C$DW$39, DW_AT_TI_begin_column(0x05)
	.dwattr $C$DW$39, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 98,column 1,is_stmt,address _main,isa 0

	.dwfde $C$DW$CIE, _main
;----------------------------------------------------------------------
;  97 | int main(void)                                                         
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _main                         FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_main:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$40	.dwtag  DW_TAG_variable
	.dwattr $C$DW$40, DW_AT_name("modelBaseRate")
	.dwattr $C$DW$40, DW_AT_TI_symbol_name("_modelBaseRate")
	.dwattr $C$DW$40, DW_AT_type(*$C$DW$T$16)
	.dwattr $C$DW$40, DW_AT_location[DW_OP_breg20 -2]

$C$DW$41	.dwtag  DW_TAG_variable
	.dwattr $C$DW$41, DW_AT_name("systemClock")
	.dwattr $C$DW$41, DW_AT_TI_symbol_name("_systemClock")
	.dwattr $C$DW$41, DW_AT_type(*$C$DW$T$16)
	.dwattr $C$DW$41, DW_AT_location[DW_OP_breg20 -4]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 99,column 23,is_stmt,isa 0
;----------------------------------------------------------------------
;  99 | float modelBaseRate = 5.0E-5;                                          
;----------------------------------------------------------------------
        MOV       *-SP[2],#46871        ; [CPU_ALU] |99| 
        MOV       *-SP[1],#14417        ; [CPU_ALU] |99| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 100,column 21,is_stmt,isa 0
;----------------------------------------------------------------------
; 100 | float systemClock = 90;                                                
;----------------------------------------------------------------------
        MOVIZ     R0H,#17076            ; [CPU_FPU] |100| 
        MOV32     *-SP[4],R0H           ; [CPU_FPU] |100| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 103,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 103 | stopRequested = false;                                                 
;----------------------------------------------------------------------
        MOVW      DP,#_stopRequested    ; [CPU_ARAU] 
        MOV       @_stopRequested,#0    ; [CPU_ALU] |103| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 104,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 104 | runModel = false;                                                      
; 105 | HWI_TIC28x_EnablePeripheralInterrupt();                                
;----------------------------------------------------------------------
        MOV       @_runModel,#0         ; [CPU_ALU] |104| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 106,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 106 | c2000_flash_init();                                                    
;----------------------------------------------------------------------
$C$DW$42	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$42, DW_AT_low_pc(0x00)
	.dwattr $C$DW$42, DW_AT_name("_c2000_flash_init")
	.dwattr $C$DW$42, DW_AT_TI_call

        LCR       #_c2000_flash_init    ; [CPU_ALU] |106| 
        ; call occurs [#_c2000_flash_init] ; [] |106| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 107,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 107 | init_board();                                                          
; 109 | #if defined(MW_EXEC_PROFILER_ON) || (defined(MW_EXTMODE_RUNNING) && !de
;     | fined(XCP_TIMESTAMP_BASED_ON_SIMULATION_TIME))                         
; 111 | hardwareTimer1Init();                                                  
; 113 | #endif                                                                 
; 115 | ;                                                                      
;----------------------------------------------------------------------
$C$DW$43	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$43, DW_AT_low_pc(0x00)
	.dwattr $C$DW$43, DW_AT_name("_init_board")
	.dwattr $C$DW$43, DW_AT_TI_call

        LCR       #_init_board          ; [CPU_ALU] |107| 
        ; call occurs [#_init_board] ; [] |107| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 116,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 116 | bootloaderInit();                                                      
;----------------------------------------------------------------------
$C$DW$44	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$44, DW_AT_low_pc(0x00)
	.dwattr $C$DW$44, DW_AT_name("_bootloaderInit")
	.dwattr $C$DW$44, DW_AT_TI_call

        LCR       #_bootloaderInit      ; [CPU_ALU] |116| 
        ; call occurs [#_bootloaderInit] ; [] |116| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 117,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 117 | rtmSetErrorStatus(mcb_pmsm_foc_qep_dyno_f28069_M, 0);                  
;----------------------------------------------------------------------
        MOVW      DP,#_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ARAU] 
        MOVL      XAR4,@_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ALU] |117| 
        MOVB      ACC,#0                ; [CPU_ALU] |117| 
        MOVL      *+XAR4[0],ACC         ; [CPU_ALU] |117| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 118,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 118 | mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts();                  
;----------------------------------------------------------------------
$C$DW$45	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$45, DW_AT_low_pc(0x00)
	.dwattr $C$DW$45, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts")
	.dwattr $C$DW$45, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts ; [CPU_ALU] |118| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts] ; [] |118| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 119,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 119 | mcb_pmsm_foc_qep_dyno_f28069m_initialize();                            
;----------------------------------------------------------------------
$C$DW$46	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$46, DW_AT_low_pc(0x00)
	.dwattr $C$DW$46, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_initialize")
	.dwattr $C$DW$46, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_initialize ; [CPU_ALU] |119| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_initialize] ; [] |119| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 120,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 120 | globalInterruptDisable();                                              
;----------------------------------------------------------------------
$C$DW$47	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$47, DW_AT_low_pc(0x00)
	.dwattr $C$DW$47, DW_AT_name("_globalInterruptDisable")
	.dwattr $C$DW$47, DW_AT_TI_call

        LCR       #_globalInterruptDisable ; [CPU_ALU] |120| 
        ; call occurs [#_globalInterruptDisable] ; [] |120| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 121,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 121 | configureTimer0(modelBaseRate, systemClock);                           
;----------------------------------------------------------------------
        MOV32     R0H,*-SP[2]           ; [CPU_FPU] |121| 
        MOV32     R1H,*-SP[4]           ; [CPU_FPU] |121| 
$C$DW$48	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$48, DW_AT_low_pc(0x00)
	.dwattr $C$DW$48, DW_AT_name("_configureTimer0")
	.dwattr $C$DW$48, DW_AT_TI_call

        LCR       #_configureTimer0     ; [CPU_ALU] |121| 
        ; call occurs [#_configureTimer0] ; [] |121| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 122,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 122 | runModel = rtmGetErrorStatus(mcb_pmsm_foc_qep_dyno_f28069_M) == (NULL);
;----------------------------------------------------------------------
        MOVW      DP,#_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ARAU] 
        MOVL      XAR4,@_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ALU] |122| 
        MOVB      XAR6,#0               ; [CPU_ALU] |122| 
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |122| 
        B         $C$L12,NEQ            ; [CPU_ALU] |122| 
        ; branchcc occurs ; [] |122| 
        MOVB      XAR6,#1               ; [CPU_ALU] |122| 
$C$L12:    
        MOVW      DP,#_runModel         ; [CPU_ARAU] 
        MOV       @_runModel,AR6        ; [CPU_ALU] |122| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 123,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 123 | enableTimer0Interrupt();                                               
;----------------------------------------------------------------------
$C$DW$49	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$49, DW_AT_low_pc(0x00)
	.dwattr $C$DW$49, DW_AT_name("_enableTimer0Interrupt")
	.dwattr $C$DW$49, DW_AT_TI_call

        LCR       #_enableTimer0Interrupt ; [CPU_ALU] |123| 
        ; call occurs [#_enableTimer0Interrupt] ; [] |123| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 124,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 124 | config_ePWM_TBSync();                                                  
;----------------------------------------------------------------------
$C$DW$50	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$50, DW_AT_low_pc(0x00)
	.dwattr $C$DW$50, DW_AT_name("_config_ePWM_TBSync")
	.dwattr $C$DW$50, DW_AT_TI_call

        LCR       #_config_ePWM_TBSync  ; [CPU_ALU] |124| 
        ; call occurs [#_config_ePWM_TBSync] ; [] |124| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 125,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 125 | globalInterruptEnable();                                               
;----------------------------------------------------------------------
$C$DW$51	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$51, DW_AT_low_pc(0x00)
	.dwattr $C$DW$51, DW_AT_name("_globalInterruptEnable")
	.dwattr $C$DW$51, DW_AT_TI_call

        LCR       #_globalInterruptEnable ; [CPU_ALU] |125| 
        ; call occurs [#_globalInterruptEnable] ; [] |125| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 126,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 126 | while (runModel) {                                                     
;----------------------------------------------------------------------
        MOVW      DP,#_runModel         ; [CPU_ARAU] 
        MOV       AL,@_runModel         ; [CPU_ALU] |126| 
        B         $C$L16,EQ             ; [CPU_ALU] |126| 
        ; branchcc occurs ; [] |126| 
$C$L13:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 127,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 127 | stopRequested = !(rtmGetErrorStatus(mcb_pmsm_foc_qep_dyno_f28069_M) ==
;     | (NULL));                                                               
;----------------------------------------------------------------------
        MOVW      DP,#_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ARAU] 
        MOVL      XAR4,@_mcb_pmsm_foc_qep_dyno_f28069_M ; [CPU_ALU] |127| 
        MOVB      XAR7,#0               ; [CPU_ALU] |127| 
        MOVB      XAR6,#0               ; [CPU_ALU] |127| 
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |127| 
        B         $C$L14,NEQ            ; [CPU_ALU] |127| 
        ; branchcc occurs ; [] |127| 
        MOVB      XAR6,#1               ; [CPU_ALU] |127| 
$C$L14:    
        MOV       AL,AR6                ; [CPU_ALU] 
        B         $C$L15,NEQ            ; [CPU_ALU] |127| 
        ; branchcc occurs ; [] |127| 
        MOVB      XAR7,#1               ; [CPU_ALU] |127| 
$C$L15:    
        MOVW      DP,#_stopRequested    ; [CPU_ARAU] 
        MOV       @_stopRequested,AR7   ; [CPU_ALU] |127| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 128,column 3,is_stmt,isa 0
        MOV       AL,@_runModel         ; [CPU_ALU] |128| 
        B         $C$L13,NEQ            ; [CPU_ALU] |128| 
        ; branchcc occurs ; [] |128| 
$C$L16:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 131,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 131 | mcb_pmsm_foc_qep_dyno_f28069m_terminate();                             
;----------------------------------------------------------------------
$C$DW$52	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$52, DW_AT_low_pc(0x00)
	.dwattr $C$DW$52, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_terminate")
	.dwattr $C$DW$52, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_terminate ; [CPU_ALU] |131| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_terminate] ; [] |131| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 132,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 132 | mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts();                
; 133 | HWI_TIC28x_DisablePeripheralInterrupt();                               
;----------------------------------------------------------------------
$C$DW$53	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$53, DW_AT_low_pc(0x00)
	.dwattr $C$DW$53, DW_AT_name("_mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts")
	.dwattr $C$DW$53, DW_AT_TI_call

        LCR       #_mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts ; [CPU_ALU] |132| 
        ; call occurs [#_mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts] ; [] |132| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 134,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 134 | globalInterruptDisable();                                              
;----------------------------------------------------------------------
$C$DW$54	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$54, DW_AT_low_pc(0x00)
	.dwattr $C$DW$54, DW_AT_name("_globalInterruptDisable")
	.dwattr $C$DW$54, DW_AT_TI_call

        LCR       #_globalInterruptDisable ; [CPU_ALU] |134| 
        ; call occurs [#_globalInterruptDisable] ; [] |134| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 135,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
; 135 | return 0;                                                              
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |135| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c",line 136,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$55	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$55, DW_AT_low_pc(0x00)
	.dwattr $C$DW$55, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$39, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/ert_main.c")
	.dwattr $C$DW$39, DW_AT_TI_end_line(0x88)
	.dwattr $C$DW$39, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$39

;**************************************************************
;* UNDEFINED EXTERNAL REFERENCES                              *
;**************************************************************
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep
	.global	_enableTimer0Interrupt
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_step0
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_step1
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_step2
	.global	_c2000_flash_init
	.global	_init_board
	.global	_bootloaderInit
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_initialize
	.global	_globalInterruptDisable
	.global	_configureTimer0
	.global	_config_ePWM_TBSync
	.global	_globalInterruptEnable
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_terminate
	.global	_mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts
	.global	_disableTimer0Interrupt
	.global	_mcb_pmsm_foc_qep_dyno_f28069_M

;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************

$C$DW$T$21	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$21, DW_AT_byte_size(0x03)
$C$DW$56	.dwtag  DW_TAG_member
	.dwattr $C$DW$56, DW_AT_type(*$C$DW$T$20)
	.dwattr $C$DW$56, DW_AT_name("TID")
	.dwattr $C$DW$56, DW_AT_TI_symbol_name("_TID")
	.dwattr $C$DW$56, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$56, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$21


$C$DW$T$22	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$22, DW_AT_byte_size(0x03)
$C$DW$57	.dwtag  DW_TAG_member
	.dwattr $C$DW$57, DW_AT_type(*$C$DW$T$21)
	.dwattr $C$DW$57, DW_AT_name("TaskCounters")
	.dwattr $C$DW$57, DW_AT_TI_symbol_name("_TaskCounters")
	.dwattr $C$DW$57, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$57, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$22

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

$C$DW$58	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$58, DW_AT_type(*$C$DW$T$10)

$C$DW$T$38	.dwtag  DW_TAG_volatile_type
	.dwattr $C$DW$T$38, DW_AT_type(*$C$DW$58)

$C$DW$T$39	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$39, DW_AT_name("int_T")
	.dwattr $C$DW$T$39, DW_AT_type(*$C$DW$T$10)
	.dwattr $C$DW$T$39, DW_AT_language(DW_LANG_C)

$C$DW$T$11	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$11, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$11, DW_AT_name("unsigned int")
	.dwattr $C$DW$T$11, DW_AT_byte_size(0x01)

$C$DW$T$33	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$33, DW_AT_name("boolean_T")
	.dwattr $C$DW$T$33, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$33, DW_AT_language(DW_LANG_C)

$C$DW$T$34	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$34, DW_AT_type(*$C$DW$T$33)
	.dwattr $C$DW$T$34, DW_AT_address_class(0x20)


$C$DW$T$40	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$40, DW_AT_type(*$C$DW$T$33)
	.dwattr $C$DW$T$40, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$40, DW_AT_byte_size(0x03)
$C$DW$59	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$59, DW_AT_upper_bound(0x02)

	.dwendtag $C$DW$T$40

$C$DW$60	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$60, DW_AT_type(*$C$DW$T$33)

$C$DW$T$41	.dwtag  DW_TAG_volatile_type
	.dwattr $C$DW$T$41, DW_AT_type(*$C$DW$60)

$C$DW$T$19	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$19, DW_AT_name("uint16_T")
	.dwattr $C$DW$T$19, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$19, DW_AT_language(DW_LANG_C)


$C$DW$T$20	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$20, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$20, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$20, DW_AT_byte_size(0x03)
$C$DW$61	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$61, DW_AT_upper_bound(0x02)

	.dwendtag $C$DW$T$20

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

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

$C$DW$T$24	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$24, DW_AT_name("char_T")
	.dwattr $C$DW$T$24, DW_AT_type(*$C$DW$T$5)
	.dwattr $C$DW$T$24, DW_AT_language(DW_LANG_C)

$C$DW$62	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$62, DW_AT_type(*$C$DW$T$24)

$C$DW$T$25	.dwtag  DW_TAG_const_type
	.dwattr $C$DW$T$25, DW_AT_type(*$C$DW$62)

$C$DW$T$26	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$26, DW_AT_type(*$C$DW$T$25)
	.dwattr $C$DW$T$26, DW_AT_address_class(0x20)

$C$DW$63	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$63, DW_AT_type(*$C$DW$T$26)

$C$DW$T$27	.dwtag  DW_TAG_volatile_type
	.dwattr $C$DW$T$27, DW_AT_type(*$C$DW$63)

$C$DW$T$42	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$42, DW_AT_encoding(DW_ATE_unsigned_char)
	.dwattr $C$DW$T$42, DW_AT_name("unsigned char")
	.dwattr $C$DW$T$42, DW_AT_byte_size(0x01)


$C$DW$T$28	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$28, DW_AT_name("tag_RTM_mcb_pmsm_foc_qep_dyno_f")
	.dwattr $C$DW$T$28, DW_AT_byte_size(0x06)
$C$DW$64	.dwtag  DW_TAG_member
	.dwattr $C$DW$64, DW_AT_type(*$C$DW$T$27)
	.dwattr $C$DW$64, DW_AT_name("errorStatus")
	.dwattr $C$DW$64, DW_AT_TI_symbol_name("_errorStatus")
	.dwattr $C$DW$64, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$64, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$65	.dwtag  DW_TAG_member
	.dwattr $C$DW$65, DW_AT_type(*$C$DW$T$22)
	.dwattr $C$DW$65, DW_AT_name("Timing")
	.dwattr $C$DW$65, DW_AT_TI_symbol_name("_Timing")
	.dwattr $C$DW$65, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$65, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$28

$C$DW$T$45	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$45, DW_AT_name("RT_MODEL_mcb_pmsm_foc_qep_dyno_")
	.dwattr $C$DW$T$45, DW_AT_type(*$C$DW$T$28)
	.dwattr $C$DW$T$45, DW_AT_language(DW_LANG_C)

$C$DW$T$46	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$46, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$T$46, DW_AT_address_class(0x20)

$C$DW$66	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$66, DW_AT_type(*$C$DW$T$46)

$C$DW$T$47	.dwtag  DW_TAG_const_type
	.dwattr $C$DW$T$47, DW_AT_type(*$C$DW$66)

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

$C$DW$67	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$67, DW_AT_name("AL")
	.dwattr $C$DW$67, DW_AT_location[DW_OP_reg0]

$C$DW$68	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$68, DW_AT_name("AH")
	.dwattr $C$DW$68, DW_AT_location[DW_OP_reg1]

$C$DW$69	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$69, DW_AT_name("PL")
	.dwattr $C$DW$69, DW_AT_location[DW_OP_reg2]

$C$DW$70	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$70, DW_AT_name("PH")
	.dwattr $C$DW$70, DW_AT_location[DW_OP_reg3]

$C$DW$71	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$71, DW_AT_name("SP")
	.dwattr $C$DW$71, DW_AT_location[DW_OP_reg20]

$C$DW$72	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$72, DW_AT_name("XT")
	.dwattr $C$DW$72, DW_AT_location[DW_OP_reg21]

$C$DW$73	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$73, DW_AT_name("T")
	.dwattr $C$DW$73, DW_AT_location[DW_OP_reg22]

$C$DW$74	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$74, DW_AT_name("ST0")
	.dwattr $C$DW$74, DW_AT_location[DW_OP_reg23]

$C$DW$75	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$75, DW_AT_name("ST1")
	.dwattr $C$DW$75, DW_AT_location[DW_OP_reg24]

$C$DW$76	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$76, DW_AT_name("PC")
	.dwattr $C$DW$76, DW_AT_location[DW_OP_reg25]

$C$DW$77	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$77, DW_AT_name("RPC")
	.dwattr $C$DW$77, DW_AT_location[DW_OP_reg26]

$C$DW$78	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$78, DW_AT_name("FP")
	.dwattr $C$DW$78, DW_AT_location[DW_OP_reg28]

$C$DW$79	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$79, DW_AT_name("DP")
	.dwattr $C$DW$79, DW_AT_location[DW_OP_reg29]

$C$DW$80	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$80, DW_AT_name("SXM")
	.dwattr $C$DW$80, DW_AT_location[DW_OP_reg30]

$C$DW$81	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$81, DW_AT_name("PM")
	.dwattr $C$DW$81, DW_AT_location[DW_OP_reg31]

$C$DW$82	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$82, DW_AT_name("OVM")
	.dwattr $C$DW$82, DW_AT_location[DW_OP_regx 0x20]

$C$DW$83	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$83, DW_AT_name("PAGE0")
	.dwattr $C$DW$83, DW_AT_location[DW_OP_regx 0x21]

$C$DW$84	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$84, DW_AT_name("AMODE")
	.dwattr $C$DW$84, DW_AT_location[DW_OP_regx 0x22]

$C$DW$85	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$85, DW_AT_name("EALLOW")
	.dwattr $C$DW$85, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$86	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$86, DW_AT_name("INTM")
	.dwattr $C$DW$86, DW_AT_location[DW_OP_regx 0x23]

$C$DW$87	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$87, DW_AT_name("IFR")
	.dwattr $C$DW$87, DW_AT_location[DW_OP_regx 0x24]

$C$DW$88	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$88, DW_AT_name("IER")
	.dwattr $C$DW$88, DW_AT_location[DW_OP_regx 0x25]

$C$DW$89	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$89, DW_AT_name("V")
	.dwattr $C$DW$89, DW_AT_location[DW_OP_regx 0x26]

$C$DW$90	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$90, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$90, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$91	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$91, DW_AT_name("VOL")
	.dwattr $C$DW$91, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$92	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$92, DW_AT_name("AR0")
	.dwattr $C$DW$92, DW_AT_location[DW_OP_reg4]

$C$DW$93	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$93, DW_AT_name("XAR0")
	.dwattr $C$DW$93, DW_AT_location[DW_OP_reg5]

$C$DW$94	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$94, DW_AT_name("AR1")
	.dwattr $C$DW$94, DW_AT_location[DW_OP_reg6]

$C$DW$95	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$95, DW_AT_name("XAR1")
	.dwattr $C$DW$95, DW_AT_location[DW_OP_reg7]

$C$DW$96	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$96, DW_AT_name("AR2")
	.dwattr $C$DW$96, DW_AT_location[DW_OP_reg8]

$C$DW$97	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$97, DW_AT_name("XAR2")
	.dwattr $C$DW$97, DW_AT_location[DW_OP_reg9]

$C$DW$98	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$98, DW_AT_name("AR3")
	.dwattr $C$DW$98, DW_AT_location[DW_OP_reg10]

$C$DW$99	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$99, DW_AT_name("XAR3")
	.dwattr $C$DW$99, DW_AT_location[DW_OP_reg11]

$C$DW$100	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$100, DW_AT_name("AR4")
	.dwattr $C$DW$100, DW_AT_location[DW_OP_reg12]

$C$DW$101	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$101, DW_AT_name("XAR4")
	.dwattr $C$DW$101, DW_AT_location[DW_OP_reg13]

$C$DW$102	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$102, DW_AT_name("AR5")
	.dwattr $C$DW$102, DW_AT_location[DW_OP_reg14]

$C$DW$103	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$103, DW_AT_name("XAR5")
	.dwattr $C$DW$103, DW_AT_location[DW_OP_reg15]

$C$DW$104	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$104, DW_AT_name("AR6")
	.dwattr $C$DW$104, DW_AT_location[DW_OP_reg16]

$C$DW$105	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$105, DW_AT_name("XAR6")
	.dwattr $C$DW$105, DW_AT_location[DW_OP_reg17]

$C$DW$106	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$106, DW_AT_name("AR7")
	.dwattr $C$DW$106, DW_AT_location[DW_OP_reg18]

$C$DW$107	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$107, DW_AT_name("XAR7")
	.dwattr $C$DW$107, DW_AT_location[DW_OP_reg19]

$C$DW$108	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$108, DW_AT_name("R0H")
	.dwattr $C$DW$108, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$109	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$109, DW_AT_name("R1H")
	.dwattr $C$DW$109, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$110	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$110, DW_AT_name("R2H")
	.dwattr $C$DW$110, DW_AT_location[DW_OP_regx 0x33]

$C$DW$111	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$111, DW_AT_name("R3H")
	.dwattr $C$DW$111, DW_AT_location[DW_OP_regx 0x37]

$C$DW$112	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$112, DW_AT_name("R4H")
	.dwattr $C$DW$112, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$113	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$113, DW_AT_name("R5H")
	.dwattr $C$DW$113, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$114	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$114, DW_AT_name("R6H")
	.dwattr $C$DW$114, DW_AT_location[DW_OP_regx 0x43]

$C$DW$115	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$115, DW_AT_name("R7H")
	.dwattr $C$DW$115, DW_AT_location[DW_OP_regx 0x47]

$C$DW$116	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$116, DW_AT_name("RB")
	.dwattr $C$DW$116, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$117	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$117, DW_AT_name("STF")
	.dwattr $C$DW$117, DW_AT_location[DW_OP_regx 0x28]

$C$DW$118	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$118, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$118, DW_AT_location[DW_OP_reg27]

$C$DW$119	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$119, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$119, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

