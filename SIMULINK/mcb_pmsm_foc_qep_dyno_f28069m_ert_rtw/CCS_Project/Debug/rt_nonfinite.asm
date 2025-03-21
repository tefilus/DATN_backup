;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:22 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$CU, DW_AT_producer("TI TMS320C2000 G3 C/C++ Codegen PC v22.6.0.LTS Copyright (c) 1996-2018 Texas Instruments Incorporated")
	.dwattr $C$DW$CU, DW_AT_TI_version(0x01)
	.dwattr $C$DW$CU, DW_AT_comp_dir("E:\GiaotrinhDH\DATN\SIMULINK\mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw\CCS_Project\Debug")
	.global	_rtInf
_rtInf:	.usect	".ebss",2,1,1
$C$DW$1	.dwtag  DW_TAG_variable
	.dwattr $C$DW$1, DW_AT_name("rtInf")
	.dwattr $C$DW$1, DW_AT_TI_symbol_name("_rtInf")
	.dwattr $C$DW$1, DW_AT_location[DW_OP_addr _rtInf]
	.dwattr $C$DW$1, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$1, DW_AT_external

	.global	_rtMinusInf
_rtMinusInf:	.usect	".ebss",2,1,1
$C$DW$2	.dwtag  DW_TAG_variable
	.dwattr $C$DW$2, DW_AT_name("rtMinusInf")
	.dwattr $C$DW$2, DW_AT_TI_symbol_name("_rtMinusInf")
	.dwattr $C$DW$2, DW_AT_location[DW_OP_addr _rtMinusInf]
	.dwattr $C$DW$2, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$2, DW_AT_external

	.global	_rtNaN
_rtNaN:	.usect	".ebss",2,1,1
$C$DW$3	.dwtag  DW_TAG_variable
	.dwattr $C$DW$3, DW_AT_name("rtNaN")
	.dwattr $C$DW$3, DW_AT_TI_symbol_name("_rtNaN")
	.dwattr $C$DW$3, DW_AT_location[DW_OP_addr _rtNaN]
	.dwattr $C$DW$3, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$3, DW_AT_external

	.global	_rtInfF
_rtInfF:	.usect	".ebss",2,1,1
$C$DW$4	.dwtag  DW_TAG_variable
	.dwattr $C$DW$4, DW_AT_name("rtInfF")
	.dwattr $C$DW$4, DW_AT_TI_symbol_name("_rtInfF")
	.dwattr $C$DW$4, DW_AT_location[DW_OP_addr _rtInfF]
	.dwattr $C$DW$4, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$4, DW_AT_external

	.global	_rtMinusInfF
_rtMinusInfF:	.usect	".ebss",2,1,1
$C$DW$5	.dwtag  DW_TAG_variable
	.dwattr $C$DW$5, DW_AT_name("rtMinusInfF")
	.dwattr $C$DW$5, DW_AT_TI_symbol_name("_rtMinusInfF")
	.dwattr $C$DW$5, DW_AT_location[DW_OP_addr _rtMinusInfF]
	.dwattr $C$DW$5, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$5, DW_AT_external

	.global	_rtNaNF
_rtNaNF:	.usect	".ebss",2,1,1
$C$DW$6	.dwtag  DW_TAG_variable
	.dwattr $C$DW$6, DW_AT_name("rtNaNF")
	.dwattr $C$DW$6, DW_AT_TI_symbol_name("_rtNaNF")
	.dwattr $C$DW$6, DW_AT_location[DW_OP_addr _rtNaNF]
	.dwattr $C$DW$6, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$6, DW_AT_external


$C$DW$7	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$7, DW_AT_name("rtGetNaN")
	.dwattr $C$DW$7, DW_AT_TI_symbol_name("_rtGetNaN")
	.dwattr $C$DW$7, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$7, DW_AT_declaration
	.dwattr $C$DW$7, DW_AT_external
	.dwendtag $C$DW$7


$C$DW$8	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$8, DW_AT_name("rtGetNaNF")
	.dwattr $C$DW$8, DW_AT_TI_symbol_name("_rtGetNaNF")
	.dwattr $C$DW$8, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$8, DW_AT_declaration
	.dwattr $C$DW$8, DW_AT_external
	.dwendtag $C$DW$8


$C$DW$9	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$9, DW_AT_name("rtGetInf")
	.dwattr $C$DW$9, DW_AT_TI_symbol_name("_rtGetInf")
	.dwattr $C$DW$9, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$9, DW_AT_declaration
	.dwattr $C$DW$9, DW_AT_external
	.dwendtag $C$DW$9


$C$DW$10	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$10, DW_AT_name("rtGetInfF")
	.dwattr $C$DW$10, DW_AT_TI_symbol_name("_rtGetInfF")
	.dwattr $C$DW$10, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$10, DW_AT_declaration
	.dwattr $C$DW$10, DW_AT_external
	.dwendtag $C$DW$10


$C$DW$11	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$11, DW_AT_name("rtGetMinusInf")
	.dwattr $C$DW$11, DW_AT_TI_symbol_name("_rtGetMinusInf")
	.dwattr $C$DW$11, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$11, DW_AT_declaration
	.dwattr $C$DW$11, DW_AT_external
	.dwendtag $C$DW$11


$C$DW$12	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$12, DW_AT_name("rtGetMinusInfF")
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_rtGetMinusInfF")
	.dwattr $C$DW$12, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$12, DW_AT_declaration
	.dwattr $C$DW$12, DW_AT_external
	.dwendtag $C$DW$12

	.sblock	".ebss"
;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{A52DBE1C-E65F-476F-A4DD-A96367DA87F2} 
	.sect	".text"
	.clink
	.global	_rt_InitInfAndNaN

$C$DW$13	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$13, DW_AT_name("rt_InitInfAndNaN")
	.dwattr $C$DW$13, DW_AT_low_pc(_rt_InitInfAndNaN)
	.dwattr $C$DW$13, DW_AT_high_pc(0x00)
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_rt_InitInfAndNaN")
	.dwattr $C$DW$13, DW_AT_external
	.dwattr $C$DW$13, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$13, DW_AT_TI_begin_line(0x22)
	.dwattr $C$DW$13, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$13, DW_AT_TI_max_frame_size(-4)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 35,column 1,is_stmt,address _rt_InitInfAndNaN,isa 0

	.dwfde $C$DW$CIE, _rt_InitInfAndNaN
$C$DW$14	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$14, DW_AT_name("realSize")
	.dwattr $C$DW$14, DW_AT_TI_symbol_name("_realSize")
	.dwattr $C$DW$14, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$14, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  34 | void rt_InitInfAndNaN(size_t realSize)                                 
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rt_InitInfAndNaN             FR SIZE:   2           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_rt_InitInfAndNaN:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -4
$C$DW$15	.dwtag  DW_TAG_variable
	.dwattr $C$DW$15, DW_AT_name("realSize")
	.dwattr $C$DW$15, DW_AT_TI_symbol_name("_realSize")
	.dwattr $C$DW$15, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$15, DW_AT_location[DW_OP_breg20 -2]

        MOVL      *-SP[2],ACC           ; [CPU_ALU] |35| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 36,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  36 | (void) (realSize);                                                     
;----------------------------------------------------------------------
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 37,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  37 | rtNaN = rtGetNaN();                                                    
;----------------------------------------------------------------------
$C$DW$16	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$16, DW_AT_low_pc(0x00)
	.dwattr $C$DW$16, DW_AT_name("_rtGetNaN")
	.dwattr $C$DW$16, DW_AT_TI_call

        LCR       #_rtGetNaN            ; [CPU_ALU] |37| 
        ; call occurs [#_rtGetNaN] ; [] |37| 
        MOVW      DP,#_rtNaN            ; [CPU_ARAU] 
        MOV32     @_rtNaN,R0H           ; [CPU_FPU] |37| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 38,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  38 | rtNaNF = rtGetNaNF();                                                  
;----------------------------------------------------------------------
$C$DW$17	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$17, DW_AT_low_pc(0x00)
	.dwattr $C$DW$17, DW_AT_name("_rtGetNaNF")
	.dwattr $C$DW$17, DW_AT_TI_call

        LCR       #_rtGetNaNF           ; [CPU_ALU] |38| 
        ; call occurs [#_rtGetNaNF] ; [] |38| 
        MOVW      DP,#_rtNaNF           ; [CPU_ARAU] 
        MOV32     @_rtNaNF,R0H          ; [CPU_FPU] |38| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 39,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  39 | rtInf = rtGetInf();                                                    
;----------------------------------------------------------------------
$C$DW$18	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$18, DW_AT_low_pc(0x00)
	.dwattr $C$DW$18, DW_AT_name("_rtGetInf")
	.dwattr $C$DW$18, DW_AT_TI_call

        LCR       #_rtGetInf            ; [CPU_ALU] |39| 
        ; call occurs [#_rtGetInf] ; [] |39| 
        MOVW      DP,#_rtInf            ; [CPU_ARAU] 
        MOV32     @_rtInf,R0H           ; [CPU_FPU] |39| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 40,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  40 | rtInfF = rtGetInfF();                                                  
;----------------------------------------------------------------------
$C$DW$19	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$19, DW_AT_low_pc(0x00)
	.dwattr $C$DW$19, DW_AT_name("_rtGetInfF")
	.dwattr $C$DW$19, DW_AT_TI_call

        LCR       #_rtGetInfF           ; [CPU_ALU] |40| 
        ; call occurs [#_rtGetInfF] ; [] |40| 
        MOVW      DP,#_rtInfF           ; [CPU_ARAU] 
        MOV32     @_rtInfF,R0H          ; [CPU_FPU] |40| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 41,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  41 | rtMinusInf = rtGetMinusInf();                                          
;----------------------------------------------------------------------
$C$DW$20	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$20, DW_AT_low_pc(0x00)
	.dwattr $C$DW$20, DW_AT_name("_rtGetMinusInf")
	.dwattr $C$DW$20, DW_AT_TI_call

        LCR       #_rtGetMinusInf       ; [CPU_ALU] |41| 
        ; call occurs [#_rtGetMinusInf] ; [] |41| 
        MOVW      DP,#_rtMinusInf       ; [CPU_ARAU] 
        MOV32     @_rtMinusInf,R0H      ; [CPU_FPU] |41| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 42,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  42 | rtMinusInfF = rtGetMinusInfF();                                        
;----------------------------------------------------------------------
$C$DW$21	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$21, DW_AT_low_pc(0x00)
	.dwattr $C$DW$21, DW_AT_name("_rtGetMinusInfF")
	.dwattr $C$DW$21, DW_AT_TI_call

        LCR       #_rtGetMinusInfF      ; [CPU_ALU] |42| 
        ; call occurs [#_rtGetMinusInfF] ; [] |42| 
        MOVW      DP,#_rtMinusInfF      ; [CPU_ARAU] 
        MOV32     @_rtMinusInfF,R0H     ; [CPU_FPU] |42| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 43,column 1,is_stmt,isa 0
        SUBB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$22	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$22, DW_AT_low_pc(0x00)
	.dwattr $C$DW$22, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$13, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$13, DW_AT_TI_end_line(0x2b)
	.dwattr $C$DW$13, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$13

	.sect	".text"
	.clink
	.global	_rtIsInf

$C$DW$23	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$23, DW_AT_name("rtIsInf")
	.dwattr $C$DW$23, DW_AT_low_pc(_rtIsInf)
	.dwattr $C$DW$23, DW_AT_high_pc(0x00)
	.dwattr $C$DW$23, DW_AT_TI_symbol_name("_rtIsInf")
	.dwattr $C$DW$23, DW_AT_external
	.dwattr $C$DW$23, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$23, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$23, DW_AT_TI_begin_line(0x2e)
	.dwattr $C$DW$23, DW_AT_TI_begin_column(0x0b)
	.dwattr $C$DW$23, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 47,column 1,is_stmt,address _rtIsInf,isa 0

	.dwfde $C$DW$CIE, _rtIsInf
$C$DW$24	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$24, DW_AT_name("value")
	.dwattr $C$DW$24, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$24, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$24, DW_AT_location[DW_OP_regx 0x2b]

;----------------------------------------------------------------------
;  46 | boolean_T rtIsInf(real_T value)                                        
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtIsInf                      FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            2 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_rtIsInf:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$25	.dwtag  DW_TAG_variable
	.dwattr $C$DW$25, DW_AT_name("value")
	.dwattr $C$DW$25, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$25, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$25, DW_AT_location[DW_OP_breg20 -4]

        MOV32     *-SP[4],R0H           ; [CPU_FPU] |47| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 48,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  48 | return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);     
;----------------------------------------------------------------------
        MOVW      DP,#_rtInf            ; [CPU_ARAU] 
        MOV32     R0H,@_rtInf           ; [CPU_FPU] |48| 
        MOV32     R1H,*-SP[4]           ; [CPU_FPU] |48| 
        CMPF32    R1H,R0H               ; [CPU_FPU] |48| 
        MOVST0    ZF, NF                ; [CPU_FPU] |48| 
        B         $C$L1,EQ              ; [CPU_ALU] |48| 
        ; branchcc occurs ; [] |48| 
        MOV32     R0H,@_rtMinusInf      ; [CPU_FPU] |48| 
        CMPF32    R1H,R0H               ; [CPU_FPU] |48| 
        MOVST0    ZF, NF                ; [CPU_FPU] |48| 
        B         $C$L2,NEQ             ; [CPU_ALU] |48| 
        ; branchcc occurs ; [] |48| 
$C$L1:    
        MOVB      AL,#1                 ; [CPU_ALU] |48| 
        B         $C$L3,UNC             ; [CPU_ALU] |48| 
        ; branch occurs ; [] |48| 
$C$L2:    
        MOVB      AL,#0                 ; [CPU_ALU] |48| 
$C$L3:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 49,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$26	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$26, DW_AT_low_pc(0x00)
	.dwattr $C$DW$26, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$23, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$23, DW_AT_TI_end_line(0x31)
	.dwattr $C$DW$23, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$23

	.sect	".text"
	.clink
	.global	_rtIsInfF

$C$DW$27	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$27, DW_AT_name("rtIsInfF")
	.dwattr $C$DW$27, DW_AT_low_pc(_rtIsInfF)
	.dwattr $C$DW$27, DW_AT_high_pc(0x00)
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_rtIsInfF")
	.dwattr $C$DW$27, DW_AT_external
	.dwattr $C$DW$27, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$27, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$27, DW_AT_TI_begin_line(0x34)
	.dwattr $C$DW$27, DW_AT_TI_begin_column(0x0b)
	.dwattr $C$DW$27, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 53,column 1,is_stmt,address _rtIsInfF,isa 0

	.dwfde $C$DW$CIE, _rtIsInfF
$C$DW$28	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$28, DW_AT_name("value")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$28, DW_AT_location[DW_OP_regx 0x2b]

;----------------------------------------------------------------------
;  52 | boolean_T rtIsInfF(real32_T value)                                     
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtIsInfF                     FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            2 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_rtIsInfF:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$29	.dwtag  DW_TAG_variable
	.dwattr $C$DW$29, DW_AT_name("value")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$29, DW_AT_location[DW_OP_breg20 -4]

        MOV32     *-SP[4],R0H           ; [CPU_FPU] |53| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 54,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  54 | return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U)
;     | ;                                                                      
;----------------------------------------------------------------------
        MOVW      DP,#_rtInfF           ; [CPU_ARAU] 
        MOV32     R0H,@_rtInfF          ; [CPU_FPU] |54| 
        MOV32     R1H,*-SP[4]           ; [CPU_FPU] |54| 
        CMPF32    R1H,R0H               ; [CPU_FPU] |54| 
        MOVST0    ZF, NF                ; [CPU_FPU] |54| 
        B         $C$L4,EQ              ; [CPU_ALU] |54| 
        ; branchcc occurs ; [] |54| 
        MOV32     R0H,@_rtMinusInfF     ; [CPU_FPU] |54| 
        CMPF32    R1H,R0H               ; [CPU_FPU] |54| 
        MOVST0    ZF, NF                ; [CPU_FPU] |54| 
        B         $C$L5,NEQ             ; [CPU_ALU] |54| 
        ; branchcc occurs ; [] |54| 
$C$L4:    
        MOVB      AL,#1                 ; [CPU_ALU] |54| 
        B         $C$L6,UNC             ; [CPU_ALU] |54| 
        ; branch occurs ; [] |54| 
$C$L5:    
        MOVB      AL,#0                 ; [CPU_ALU] |54| 
$C$L6:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 55,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$30	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$30, DW_AT_low_pc(0x00)
	.dwattr $C$DW$30, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$27, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$27, DW_AT_TI_end_line(0x37)
	.dwattr $C$DW$27, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$27

	.sect	".text"
	.clink
	.global	_rtIsNaN

$C$DW$31	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$31, DW_AT_name("rtIsNaN")
	.dwattr $C$DW$31, DW_AT_low_pc(_rtIsNaN)
	.dwattr $C$DW$31, DW_AT_high_pc(0x00)
	.dwattr $C$DW$31, DW_AT_TI_symbol_name("_rtIsNaN")
	.dwattr $C$DW$31, DW_AT_external
	.dwattr $C$DW$31, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$31, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$31, DW_AT_TI_begin_line(0x3a)
	.dwattr $C$DW$31, DW_AT_TI_begin_column(0x0b)
	.dwattr $C$DW$31, DW_AT_TI_max_frame_size(-12)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 59,column 1,is_stmt,address _rtIsNaN,isa 0

	.dwfde $C$DW$CIE, _rtIsNaN
$C$DW$32	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$32, DW_AT_name("value")
	.dwattr $C$DW$32, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$32, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$32, DW_AT_location[DW_OP_regx 0x2b]

;----------------------------------------------------------------------
;  58 | boolean_T rtIsNaN(real_T value)                                        
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtIsNaN                      FR SIZE:  10           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter, 10 Auto,  0 SOE     *
;***************************************************************

_rtIsNaN:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#10                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -12
$C$DW$33	.dwtag  DW_TAG_variable
	.dwattr $C$DW$33, DW_AT_name("value")
	.dwattr $C$DW$33, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$33, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$33, DW_AT_location[DW_OP_breg20 -2]

$C$DW$34	.dwtag  DW_TAG_variable
	.dwattr $C$DW$34, DW_AT_name("bitsPerReal")
	.dwattr $C$DW$34, DW_AT_TI_symbol_name("_bitsPerReal")
	.dwattr $C$DW$34, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$34, DW_AT_location[DW_OP_breg20 -4]

$C$DW$35	.dwtag  DW_TAG_variable
	.dwattr $C$DW$35, DW_AT_name("result")
	.dwattr $C$DW$35, DW_AT_TI_symbol_name("_result")
	.dwattr $C$DW$35, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$35, DW_AT_location[DW_OP_breg20 -5]

        MOV32     *-SP[2],R0H           ; [CPU_FPU] |59| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 60,column 20,is_stmt,isa 0
;----------------------------------------------------------------------
;  60 | boolean_T result = (boolean_T) 0;                                      
;----------------------------------------------------------------------
        MOV       *-SP[5],#0            ; [CPU_ALU] |60| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 61,column 22,is_stmt,isa 0
;----------------------------------------------------------------------
;  61 | size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);                
;----------------------------------------------------------------------
        MOVB      ACC,#32               ; [CPU_ALU] |61| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |61| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 62,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  62 | if (bitsPerReal == 32U) {                                              
;----------------------------------------------------------------------
        CMPL      ACC,*-SP[4]           ; [CPU_ALU] |62| 
        B         $C$L7,NEQ             ; [CPU_ALU] |62| 
        ; branchcc occurs ; [] |62| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 63,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  63 | result = rtIsNaNF((real32_T)value);                                    
;  64 | } else {                                                               
;  65 | union {                                                                
;  66 |   LittleEndianIEEEDouble bitVal;                                       
;  67 |   real_T fltVal;                                                       
;  68 | } tmpVal;                                                              
;----------------------------------------------------------------------
$C$DW$36	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$36, DW_AT_low_pc(0x00)
	.dwattr $C$DW$36, DW_AT_name("_rtIsNaNF")
	.dwattr $C$DW$36, DW_AT_TI_call

        LCR       #_rtIsNaNF            ; [CPU_ALU] |63| 
        ; call occurs [#_rtIsNaNF] ; [] |63| 
        MOV       *-SP[5],AL            ; [CPU_ALU] |63| 
        B         $C$L10,UNC            ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L7:    

$C$DW$37	.dwtag  DW_TAG_lexical_block
	.dwattr $C$DW$37, DW_AT_low_pc(0x00)
	.dwattr $C$DW$37, DW_AT_high_pc(0x00)
$C$DW$38	.dwtag  DW_TAG_variable
	.dwattr $C$DW$38, DW_AT_name("tmpVal")
	.dwattr $C$DW$38, DW_AT_TI_symbol_name("_tmpVal")
	.dwattr $C$DW$38, DW_AT_type(*$C$DW$T$25)
	.dwattr $C$DW$38, DW_AT_location[DW_OP_breg20 -10]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 70,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  70 | tmpVal.fltVal = value;                                                 
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[2]           ; [CPU_ALU] |70| 
        MOVL      *-SP[10],ACC          ; [CPU_ALU] |70| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 71,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  71 | result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) == 0x7FF0
;     | 0000 &&                                                                
;  72 |                      ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
;  73 |                       (tmpVal.bitVal.words.wordL != 0) ));             
;----------------------------------------------------------------------
        MOV       PL,#0                 ; [CPU_ALU] |71| 
        MOV       PH,#32752             ; [CPU_ALU] |71| 
        MOVB      XAR6,#0               ; [CPU_ALU] |71| 
        MOVL      ACC,*-SP[8]           ; [CPU_ALU] |71| 
        ANDB      AL,#0                 ; [CPU_ALU] |71| 
        AND       AH,#32752             ; [CPU_ALU] |71| 
        CMPL      ACC,P                 ; [CPU_ALU] |71| 
        B         $C$L9,NEQ             ; [CPU_ALU] |71| 
        ; branchcc occurs ; [] |71| 
        MOVL      ACC,*-SP[8]           ; [CPU_ALU] |71| 
        ANDB      AH,#15                ; [CPU_ALU] |71| 
        TEST      ACC                   ; [CPU_ALU] |71| 
        B         $C$L8,NEQ             ; [CPU_ALU] |71| 
        ; branchcc occurs ; [] |71| 
        MOVL      ACC,*-SP[10]          ; [CPU_ALU] |71| 
        B         $C$L9,EQ              ; [CPU_ALU] |71| 
        ; branchcc occurs ; [] |71| 
$C$L8:    
        MOVB      XAR6,#1               ; [CPU_ALU] |71| 
$C$L9:    
        MOV       *-SP[5],AR6           ; [CPU_ALU] |71| 
	.dwendtag $C$DW$37

$C$L10:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 76,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  76 | return result;                                                         
;----------------------------------------------------------------------
        MOV       AL,*-SP[5]            ; [CPU_ALU] |76| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 77,column 1,is_stmt,isa 0
        SUBB      SP,#10                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$39	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$39, DW_AT_low_pc(0x00)
	.dwattr $C$DW$39, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$31, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$31, DW_AT_TI_end_line(0x4d)
	.dwattr $C$DW$31, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$31

	.sect	".text"
	.clink
	.global	_rtIsNaNF

$C$DW$40	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$40, DW_AT_name("rtIsNaNF")
	.dwattr $C$DW$40, DW_AT_low_pc(_rtIsNaNF)
	.dwattr $C$DW$40, DW_AT_high_pc(0x00)
	.dwattr $C$DW$40, DW_AT_TI_symbol_name("_rtIsNaNF")
	.dwattr $C$DW$40, DW_AT_external
	.dwattr $C$DW$40, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$40, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$40, DW_AT_TI_begin_line(0x50)
	.dwattr $C$DW$40, DW_AT_TI_begin_column(0x0b)
	.dwattr $C$DW$40, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 81,column 1,is_stmt,address _rtIsNaNF,isa 0

	.dwfde $C$DW$CIE, _rtIsNaNF
$C$DW$41	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$41, DW_AT_name("value")
	.dwattr $C$DW$41, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$41, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$41, DW_AT_location[DW_OP_regx 0x2b]

;----------------------------------------------------------------------
;  80 | boolean_T rtIsNaNF(real32_T value)                                     
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtIsNaNF                     FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_rtIsNaNF:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$42	.dwtag  DW_TAG_variable
	.dwattr $C$DW$42, DW_AT_name("value")
	.dwattr $C$DW$42, DW_AT_TI_symbol_name("_value")
	.dwattr $C$DW$42, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$42, DW_AT_location[DW_OP_breg20 -2]

$C$DW$43	.dwtag  DW_TAG_variable
	.dwattr $C$DW$43, DW_AT_name("tmp")
	.dwattr $C$DW$43, DW_AT_TI_symbol_name("_tmp")
	.dwattr $C$DW$43, DW_AT_type(*$C$DW$T$28)
	.dwattr $C$DW$43, DW_AT_location[DW_OP_breg20 -4]

;----------------------------------------------------------------------
;  82 | IEEESingle tmp;                                                        
;----------------------------------------------------------------------
        MOV32     *-SP[2],R0H           ; [CPU_FPU] |81| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 83,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  83 | tmp.wordL.wordLreal = value;                                           
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[2]           ; [CPU_ALU] |83| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |83| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 84,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  84 | return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
;  85 |                    (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );          
;----------------------------------------------------------------------
        MOV       PL,#0                 ; [CPU_ALU] |84| 
        MOV       PH,#32640             ; [CPU_ALU] |84| 
        MOVB      XAR6,#0               ; [CPU_ALU] |84| 
        MOVL      ACC,*-SP[4]           ; [CPU_ALU] |84| 
        ANDB      AL,#0                 ; [CPU_ALU] |84| 
        AND       AH,#32640             ; [CPU_ALU] |84| 
        CMPL      ACC,P                 ; [CPU_ALU] |84| 
        B         $C$L11,NEQ            ; [CPU_ALU] |84| 
        ; branchcc occurs ; [] |84| 
        MOVL      ACC,*-SP[4]           ; [CPU_ALU] |84| 
        ANDB      AH,#127               ; [CPU_ALU] |84| 
        TEST      ACC                   ; [CPU_ALU] |84| 
        B         $C$L11,EQ             ; [CPU_ALU] |84| 
        ; branchcc occurs ; [] |84| 
        MOVB      XAR6,#1               ; [CPU_ALU] |84| 
$C$L11:    
        MOV       AL,AR6                ; [CPU_ALU] |84| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c",line 86,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$44	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$44, DW_AT_low_pc(0x00)
	.dwattr $C$DW$44, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$40, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rt_nonfinite.c")
	.dwattr $C$DW$40, DW_AT_TI_end_line(0x56)
	.dwattr $C$DW$40, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$40

;**************************************************************
;* UNDEFINED EXTERNAL REFERENCES                              *
;**************************************************************
	.global	_rtGetNaN
	.global	_rtGetNaNF
	.global	_rtGetInf
	.global	_rtGetInfF
	.global	_rtGetMinusInf
	.global	_rtGetMinusInfF

;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************

$C$DW$T$20	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$20, DW_AT_byte_size(0x04)
$C$DW$45	.dwtag  DW_TAG_member
	.dwattr $C$DW$45, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$45, DW_AT_name("wordL")
	.dwattr $C$DW$45, DW_AT_TI_symbol_name("_wordL")
	.dwattr $C$DW$45, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$45, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$46	.dwtag  DW_TAG_member
	.dwattr $C$DW$46, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$46, DW_AT_name("wordH")
	.dwattr $C$DW$46, DW_AT_TI_symbol_name("_wordH")
	.dwattr $C$DW$46, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$46, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$20


$C$DW$T$21	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$21, DW_AT_byte_size(0x04)
$C$DW$47	.dwtag  DW_TAG_member
	.dwattr $C$DW$47, DW_AT_type(*$C$DW$T$20)
	.dwattr $C$DW$47, DW_AT_name("words")
	.dwattr $C$DW$47, DW_AT_TI_symbol_name("_words")
	.dwattr $C$DW$47, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$47, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$21

$C$DW$T$23	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$23, DW_AT_name("LittleEndianIEEEDouble")
	.dwattr $C$DW$T$23, DW_AT_type(*$C$DW$T$21)
	.dwattr $C$DW$T$23, DW_AT_language(DW_LANG_C)


$C$DW$T$22	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$22, DW_AT_byte_size(0x02)
$C$DW$48	.dwtag  DW_TAG_member
	.dwattr $C$DW$48, DW_AT_type(*$C$DW$T$27)
	.dwattr $C$DW$48, DW_AT_name("wordL")
	.dwattr $C$DW$48, DW_AT_TI_symbol_name("_wordL")
	.dwattr $C$DW$48, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$48, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$22

$C$DW$T$28	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$28, DW_AT_name("IEEESingle")
	.dwattr $C$DW$T$28, DW_AT_type(*$C$DW$T$22)
	.dwattr $C$DW$T$28, DW_AT_language(DW_LANG_C)


$C$DW$T$25	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$25, DW_AT_byte_size(0x04)
$C$DW$49	.dwtag  DW_TAG_member
	.dwattr $C$DW$49, DW_AT_type(*$C$DW$T$23)
	.dwattr $C$DW$49, DW_AT_name("bitVal")
	.dwattr $C$DW$49, DW_AT_TI_symbol_name("_bitVal")
	.dwattr $C$DW$49, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$49, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$50	.dwtag  DW_TAG_member
	.dwattr $C$DW$50, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$50, DW_AT_name("fltVal")
	.dwattr $C$DW$50, DW_AT_TI_symbol_name("_fltVal")
	.dwattr $C$DW$50, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$50, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$25


$C$DW$T$27	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$27, DW_AT_byte_size(0x02)
$C$DW$51	.dwtag  DW_TAG_member
	.dwattr $C$DW$51, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$51, DW_AT_name("wordLreal")
	.dwattr $C$DW$51, DW_AT_TI_symbol_name("_wordLreal")
	.dwattr $C$DW$51, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$51, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$52	.dwtag  DW_TAG_member
	.dwattr $C$DW$52, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$52, DW_AT_name("wordLuint")
	.dwattr $C$DW$52, DW_AT_TI_symbol_name("_wordLuint")
	.dwattr $C$DW$52, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$52, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$27

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

$C$DW$T$31	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$31, DW_AT_name("boolean_T")
	.dwattr $C$DW$T$31, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$31, DW_AT_language(DW_LANG_C)

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

$C$DW$T$29	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$29, DW_AT_name("size_t")
	.dwattr $C$DW$T$29, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$29, DW_AT_language(DW_LANG_C)

$C$DW$T$19	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$19, DW_AT_name("uint32_T")
	.dwattr $C$DW$T$19, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$19, DW_AT_language(DW_LANG_C)

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

$C$DW$T$26	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$26, DW_AT_name("real32_T")
	.dwattr $C$DW$T$26, DW_AT_type(*$C$DW$T$16)
	.dwattr $C$DW$T$26, DW_AT_language(DW_LANG_C)

$C$DW$T$17	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$17, DW_AT_encoding(DW_ATE_float)
	.dwattr $C$DW$T$17, DW_AT_name("double")
	.dwattr $C$DW$T$17, DW_AT_byte_size(0x02)

$C$DW$T$24	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$24, DW_AT_name("real_T")
	.dwattr $C$DW$T$24, DW_AT_type(*$C$DW$T$17)
	.dwattr $C$DW$T$24, DW_AT_language(DW_LANG_C)

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

$C$DW$53	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$53, DW_AT_name("AL")
	.dwattr $C$DW$53, DW_AT_location[DW_OP_reg0]

$C$DW$54	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$54, DW_AT_name("AH")
	.dwattr $C$DW$54, DW_AT_location[DW_OP_reg1]

$C$DW$55	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$55, DW_AT_name("PL")
	.dwattr $C$DW$55, DW_AT_location[DW_OP_reg2]

$C$DW$56	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$56, DW_AT_name("PH")
	.dwattr $C$DW$56, DW_AT_location[DW_OP_reg3]

$C$DW$57	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$57, DW_AT_name("SP")
	.dwattr $C$DW$57, DW_AT_location[DW_OP_reg20]

$C$DW$58	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$58, DW_AT_name("XT")
	.dwattr $C$DW$58, DW_AT_location[DW_OP_reg21]

$C$DW$59	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$59, DW_AT_name("T")
	.dwattr $C$DW$59, DW_AT_location[DW_OP_reg22]

$C$DW$60	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$60, DW_AT_name("ST0")
	.dwattr $C$DW$60, DW_AT_location[DW_OP_reg23]

$C$DW$61	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$61, DW_AT_name("ST1")
	.dwattr $C$DW$61, DW_AT_location[DW_OP_reg24]

$C$DW$62	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$62, DW_AT_name("PC")
	.dwattr $C$DW$62, DW_AT_location[DW_OP_reg25]

$C$DW$63	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$63, DW_AT_name("RPC")
	.dwattr $C$DW$63, DW_AT_location[DW_OP_reg26]

$C$DW$64	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$64, DW_AT_name("FP")
	.dwattr $C$DW$64, DW_AT_location[DW_OP_reg28]

$C$DW$65	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$65, DW_AT_name("DP")
	.dwattr $C$DW$65, DW_AT_location[DW_OP_reg29]

$C$DW$66	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$66, DW_AT_name("SXM")
	.dwattr $C$DW$66, DW_AT_location[DW_OP_reg30]

$C$DW$67	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$67, DW_AT_name("PM")
	.dwattr $C$DW$67, DW_AT_location[DW_OP_reg31]

$C$DW$68	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$68, DW_AT_name("OVM")
	.dwattr $C$DW$68, DW_AT_location[DW_OP_regx 0x20]

$C$DW$69	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$69, DW_AT_name("PAGE0")
	.dwattr $C$DW$69, DW_AT_location[DW_OP_regx 0x21]

$C$DW$70	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$70, DW_AT_name("AMODE")
	.dwattr $C$DW$70, DW_AT_location[DW_OP_regx 0x22]

$C$DW$71	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$71, DW_AT_name("EALLOW")
	.dwattr $C$DW$71, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$72	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$72, DW_AT_name("INTM")
	.dwattr $C$DW$72, DW_AT_location[DW_OP_regx 0x23]

$C$DW$73	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$73, DW_AT_name("IFR")
	.dwattr $C$DW$73, DW_AT_location[DW_OP_regx 0x24]

$C$DW$74	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$74, DW_AT_name("IER")
	.dwattr $C$DW$74, DW_AT_location[DW_OP_regx 0x25]

$C$DW$75	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$75, DW_AT_name("V")
	.dwattr $C$DW$75, DW_AT_location[DW_OP_regx 0x26]

$C$DW$76	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$76, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$76, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$77	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$77, DW_AT_name("VOL")
	.dwattr $C$DW$77, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$78	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$78, DW_AT_name("AR0")
	.dwattr $C$DW$78, DW_AT_location[DW_OP_reg4]

$C$DW$79	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$79, DW_AT_name("XAR0")
	.dwattr $C$DW$79, DW_AT_location[DW_OP_reg5]

$C$DW$80	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$80, DW_AT_name("AR1")
	.dwattr $C$DW$80, DW_AT_location[DW_OP_reg6]

$C$DW$81	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$81, DW_AT_name("XAR1")
	.dwattr $C$DW$81, DW_AT_location[DW_OP_reg7]

$C$DW$82	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$82, DW_AT_name("AR2")
	.dwattr $C$DW$82, DW_AT_location[DW_OP_reg8]

$C$DW$83	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$83, DW_AT_name("XAR2")
	.dwattr $C$DW$83, DW_AT_location[DW_OP_reg9]

$C$DW$84	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$84, DW_AT_name("AR3")
	.dwattr $C$DW$84, DW_AT_location[DW_OP_reg10]

$C$DW$85	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$85, DW_AT_name("XAR3")
	.dwattr $C$DW$85, DW_AT_location[DW_OP_reg11]

$C$DW$86	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$86, DW_AT_name("AR4")
	.dwattr $C$DW$86, DW_AT_location[DW_OP_reg12]

$C$DW$87	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$87, DW_AT_name("XAR4")
	.dwattr $C$DW$87, DW_AT_location[DW_OP_reg13]

$C$DW$88	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$88, DW_AT_name("AR5")
	.dwattr $C$DW$88, DW_AT_location[DW_OP_reg14]

$C$DW$89	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$89, DW_AT_name("XAR5")
	.dwattr $C$DW$89, DW_AT_location[DW_OP_reg15]

$C$DW$90	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$90, DW_AT_name("AR6")
	.dwattr $C$DW$90, DW_AT_location[DW_OP_reg16]

$C$DW$91	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$91, DW_AT_name("XAR6")
	.dwattr $C$DW$91, DW_AT_location[DW_OP_reg17]

$C$DW$92	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$92, DW_AT_name("AR7")
	.dwattr $C$DW$92, DW_AT_location[DW_OP_reg18]

$C$DW$93	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$93, DW_AT_name("XAR7")
	.dwattr $C$DW$93, DW_AT_location[DW_OP_reg19]

$C$DW$94	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$94, DW_AT_name("R0H")
	.dwattr $C$DW$94, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$95	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$95, DW_AT_name("R1H")
	.dwattr $C$DW$95, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$96	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$96, DW_AT_name("R2H")
	.dwattr $C$DW$96, DW_AT_location[DW_OP_regx 0x33]

$C$DW$97	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$97, DW_AT_name("R3H")
	.dwattr $C$DW$97, DW_AT_location[DW_OP_regx 0x37]

$C$DW$98	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$98, DW_AT_name("R4H")
	.dwattr $C$DW$98, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$99	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$99, DW_AT_name("R5H")
	.dwattr $C$DW$99, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$100	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$100, DW_AT_name("R6H")
	.dwattr $C$DW$100, DW_AT_location[DW_OP_regx 0x43]

$C$DW$101	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$101, DW_AT_name("R7H")
	.dwattr $C$DW$101, DW_AT_location[DW_OP_regx 0x47]

$C$DW$102	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$102, DW_AT_name("RB")
	.dwattr $C$DW$102, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$103	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$103, DW_AT_name("STF")
	.dwattr $C$DW$103, DW_AT_location[DW_OP_regx 0x28]

$C$DW$104	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$104, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$104, DW_AT_location[DW_OP_reg27]

$C$DW$105	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$105, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$105, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

