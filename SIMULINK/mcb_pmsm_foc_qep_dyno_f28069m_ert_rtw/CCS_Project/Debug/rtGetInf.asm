;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:22 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$CU, DW_AT_producer("TI TMS320C2000 G3 C/C++ Codegen PC v22.6.0.LTS Copyright (c) 1996-2018 Texas Instruments Incorporated")
	.dwattr $C$DW$CU, DW_AT_TI_version(0x01)
	.dwattr $C$DW$CU, DW_AT_comp_dir("E:\GiaotrinhDH\DATN\SIMULINK\mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw\CCS_Project\Debug")
;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{19FF0FB8-3C7A-4076-AC55-DB82F14225A9} 
	.sect	".text"
	.clink
	.global	_rtGetInf

$C$DW$1	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$1, DW_AT_name("rtGetInf")
	.dwattr $C$DW$1, DW_AT_low_pc(_rtGetInf)
	.dwattr $C$DW$1, DW_AT_high_pc(0x00)
	.dwattr $C$DW$1, DW_AT_TI_symbol_name("_rtGetInf")
	.dwattr $C$DW$1, DW_AT_external
	.dwattr $C$DW$1, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$1, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$1, DW_AT_TI_begin_line(0x1a)
	.dwattr $C$DW$1, DW_AT_TI_begin_column(0x08)
	.dwattr $C$DW$1, DW_AT_TI_max_frame_size(-10)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 27,column 1,is_stmt,address _rtGetInf,isa 0

	.dwfde $C$DW$CIE, _rtGetInf
;----------------------------------------------------------------------
;  26 | real_T rtGetInf(void)                                                  
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtGetInf                     FR SIZE:   8           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  8 Auto,  0 SOE     *
;***************************************************************

_rtGetInf:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -10
$C$DW$2	.dwtag  DW_TAG_variable
	.dwattr $C$DW$2, DW_AT_name("bitsPerReal")
	.dwattr $C$DW$2, DW_AT_TI_symbol_name("_bitsPerReal")
	.dwattr $C$DW$2, DW_AT_type(*$C$DW$T$30)
	.dwattr $C$DW$2, DW_AT_location[DW_OP_breg20 -2]

$C$DW$3	.dwtag  DW_TAG_variable
	.dwattr $C$DW$3, DW_AT_name("inf")
	.dwattr $C$DW$3, DW_AT_TI_symbol_name("_inf")
	.dwattr $C$DW$3, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$3, DW_AT_location[DW_OP_breg20 -4]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 28,column 22,is_stmt,isa 0
;----------------------------------------------------------------------
;  28 | size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);                
;----------------------------------------------------------------------
        MOVB      ACC,#32               ; [CPU_ALU] |28| 
        MOVL      *-SP[2],ACC           ; [CPU_ALU] |28| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 29,column 14,is_stmt,isa 0
;----------------------------------------------------------------------
;  29 | real_T inf = 0.0;                                                      
;----------------------------------------------------------------------
        ZERO      R0H                   ; [CPU_FPU] |29| 
        MOV32     *-SP[4],R0H           ; [CPU_FPU] |29| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 30,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  30 | if (bitsPerReal == 32U) {                                              
;----------------------------------------------------------------------
        CMPL      ACC,*-SP[2]           ; [CPU_ALU] |30| 
        B         $C$L1,NEQ             ; [CPU_ALU] |30| 
        ; branchcc occurs ; [] |30| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 31,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  31 | inf = rtGetInfF();                                                     
;  32 | } else {                                                               
;  33 | union {                                                                
;  34 |   LittleEndianIEEEDouble bitVal;                                       
;  35 |   real_T fltVal;                                                       
;  36 | } tmpVal;                                                              
;----------------------------------------------------------------------
$C$DW$4	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$4, DW_AT_low_pc(0x00)
	.dwattr $C$DW$4, DW_AT_name("_rtGetInfF")
	.dwattr $C$DW$4, DW_AT_TI_call

        LCR       #_rtGetInfF           ; [CPU_ALU] |31| 
        ; call occurs [#_rtGetInfF] ; [] |31| 
        MOV32     *-SP[4],R0H           ; [CPU_FPU] |31| 
        B         $C$L2,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L1:    

$C$DW$5	.dwtag  DW_TAG_lexical_block
	.dwattr $C$DW$5, DW_AT_low_pc(0x00)
	.dwattr $C$DW$5, DW_AT_high_pc(0x00)
$C$DW$6	.dwtag  DW_TAG_variable
	.dwattr $C$DW$6, DW_AT_name("tmpVal")
	.dwattr $C$DW$6, DW_AT_TI_symbol_name("_tmpVal")
	.dwattr $C$DW$6, DW_AT_type(*$C$DW$T$25)
	.dwattr $C$DW$6, DW_AT_location[DW_OP_breg20 -8]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 38,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  38 | tmpVal.bitVal.words.wordH = 0x7FF00000U;                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |38| 
        MOV       AH,#32752             ; [CPU_ALU] |38| 
        MOVL      *-SP[6],ACC           ; [CPU_ALU] |38| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 39,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  39 | tmpVal.bitVal.words.wordL = 0x00000000U;                               
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |39| 
        MOVL      *-SP[8],ACC           ; [CPU_ALU] |39| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 40,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  40 | inf = tmpVal.fltVal;                                                   
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[8]           ; [CPU_ALU] |40| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |40| 
	.dwendtag $C$DW$5

$C$L2:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 43,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  43 | return inf;                                                            
;----------------------------------------------------------------------
        MOV32     R0H,*-SP[4]           ; [CPU_FPU] |43| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 44,column 1,is_stmt,isa 0
        SUBB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$7	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$7, DW_AT_low_pc(0x00)
	.dwattr $C$DW$7, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$1, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$1, DW_AT_TI_end_line(0x2c)
	.dwattr $C$DW$1, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$1

	.sect	".text"
	.clink
	.global	_rtGetInfF

$C$DW$8	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$8, DW_AT_name("rtGetInfF")
	.dwattr $C$DW$8, DW_AT_low_pc(_rtGetInfF)
	.dwattr $C$DW$8, DW_AT_high_pc(0x00)
	.dwattr $C$DW$8, DW_AT_TI_symbol_name("_rtGetInfF")
	.dwattr $C$DW$8, DW_AT_external
	.dwattr $C$DW$8, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$8, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$8, DW_AT_TI_begin_line(0x32)
	.dwattr $C$DW$8, DW_AT_TI_begin_column(0x0a)
	.dwattr $C$DW$8, DW_AT_TI_max_frame_size(-4)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 51,column 1,is_stmt,address _rtGetInfF,isa 0

	.dwfde $C$DW$CIE, _rtGetInfF
;----------------------------------------------------------------------
;  50 | real32_T rtGetInfF(void)                                               
;  52 | IEEESingle infF;                                                       
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtGetInfF                    FR SIZE:   2           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_rtGetInfF:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -4
$C$DW$9	.dwtag  DW_TAG_variable
	.dwattr $C$DW$9, DW_AT_name("infF")
	.dwattr $C$DW$9, DW_AT_TI_symbol_name("_infF")
	.dwattr $C$DW$9, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$9, DW_AT_location[DW_OP_breg20 -2]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 53,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  53 | infF.wordL.wordLuint = 0x7F800000U;                                    
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |53| 
        MOV       AH,#32640             ; [CPU_ALU] |53| 
        MOVL      *-SP[2],ACC           ; [CPU_ALU] |53| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 54,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  54 | return infF.wordL.wordLreal;                                           
;----------------------------------------------------------------------
        MOV32     R0H,*-SP[2]           ; [CPU_FPU] |54| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 55,column 1,is_stmt,isa 0
        SUBB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$10	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$10, DW_AT_low_pc(0x00)
	.dwattr $C$DW$10, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$8, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$8, DW_AT_TI_end_line(0x37)
	.dwattr $C$DW$8, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$8

	.sect	".text"
	.clink
	.global	_rtGetMinusInf

$C$DW$11	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$11, DW_AT_name("rtGetMinusInf")
	.dwattr $C$DW$11, DW_AT_low_pc(_rtGetMinusInf)
	.dwattr $C$DW$11, DW_AT_high_pc(0x00)
	.dwattr $C$DW$11, DW_AT_TI_symbol_name("_rtGetMinusInf")
	.dwattr $C$DW$11, DW_AT_external
	.dwattr $C$DW$11, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$11, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$11, DW_AT_TI_begin_line(0x3d)
	.dwattr $C$DW$11, DW_AT_TI_begin_column(0x08)
	.dwattr $C$DW$11, DW_AT_TI_max_frame_size(-10)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 62,column 1,is_stmt,address _rtGetMinusInf,isa 0

	.dwfde $C$DW$CIE, _rtGetMinusInf
;----------------------------------------------------------------------
;  61 | real_T rtGetMinusInf(void)                                             
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtGetMinusInf                FR SIZE:   8           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  8 Auto,  0 SOE     *
;***************************************************************

_rtGetMinusInf:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -10
$C$DW$12	.dwtag  DW_TAG_variable
	.dwattr $C$DW$12, DW_AT_name("bitsPerReal")
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_bitsPerReal")
	.dwattr $C$DW$12, DW_AT_type(*$C$DW$T$30)
	.dwattr $C$DW$12, DW_AT_location[DW_OP_breg20 -2]

$C$DW$13	.dwtag  DW_TAG_variable
	.dwattr $C$DW$13, DW_AT_name("minf")
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_minf")
	.dwattr $C$DW$13, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$13, DW_AT_location[DW_OP_breg20 -4]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 63,column 22,is_stmt,isa 0
;----------------------------------------------------------------------
;  63 | size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);                
;----------------------------------------------------------------------
        MOVB      ACC,#32               ; [CPU_ALU] |63| 
        MOVL      *-SP[2],ACC           ; [CPU_ALU] |63| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 64,column 15,is_stmt,isa 0
;----------------------------------------------------------------------
;  64 | real_T minf = 0.0;                                                     
;----------------------------------------------------------------------
        ZERO      R0H                   ; [CPU_FPU] |64| 
        MOV32     *-SP[4],R0H           ; [CPU_FPU] |64| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 65,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  65 | if (bitsPerReal == 32U) {                                              
;----------------------------------------------------------------------
        CMPL      ACC,*-SP[2]           ; [CPU_ALU] |65| 
        B         $C$L3,NEQ             ; [CPU_ALU] |65| 
        ; branchcc occurs ; [] |65| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 66,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  66 | minf = rtGetMinusInfF();                                               
;  67 | } else {                                                               
;  68 | union {                                                                
;  69 |   LittleEndianIEEEDouble bitVal;                                       
;  70 |   real_T fltVal;                                                       
;  71 | } tmpVal;                                                              
;----------------------------------------------------------------------
$C$DW$14	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$14, DW_AT_low_pc(0x00)
	.dwattr $C$DW$14, DW_AT_name("_rtGetMinusInfF")
	.dwattr $C$DW$14, DW_AT_TI_call

        LCR       #_rtGetMinusInfF      ; [CPU_ALU] |66| 
        ; call occurs [#_rtGetMinusInfF] ; [] |66| 
        MOV32     *-SP[4],R0H           ; [CPU_FPU] |66| 
        B         $C$L4,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L3:    

$C$DW$15	.dwtag  DW_TAG_lexical_block
	.dwattr $C$DW$15, DW_AT_low_pc(0x00)
	.dwattr $C$DW$15, DW_AT_high_pc(0x00)
$C$DW$16	.dwtag  DW_TAG_variable
	.dwattr $C$DW$16, DW_AT_name("tmpVal")
	.dwattr $C$DW$16, DW_AT_TI_symbol_name("_tmpVal")
	.dwattr $C$DW$16, DW_AT_type(*$C$DW$T$28)
	.dwattr $C$DW$16, DW_AT_location[DW_OP_breg20 -8]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 73,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  73 | tmpVal.bitVal.words.wordH = 0xFFF00000U;                               
;----------------------------------------------------------------------
        SETC      SXM                   ; [CPU_ALU] 
        MOV       ACC,#-32 << 15        ; [CPU_ALU] |73| 
        MOVL      *-SP[6],ACC           ; [CPU_ALU] |73| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 74,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  74 | tmpVal.bitVal.words.wordL = 0x00000000U;                               
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |74| 
        MOVL      *-SP[8],ACC           ; [CPU_ALU] |74| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 75,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  75 | minf = tmpVal.fltVal;                                                  
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[8]           ; [CPU_ALU] |75| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |75| 
	.dwendtag $C$DW$15

$C$L4:    
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 78,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  78 | return minf;                                                           
;----------------------------------------------------------------------
        MOV32     R0H,*-SP[4]           ; [CPU_FPU] |78| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 79,column 1,is_stmt,isa 0
        SUBB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$17	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$17, DW_AT_low_pc(0x00)
	.dwattr $C$DW$17, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$11, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$11, DW_AT_TI_end_line(0x4f)
	.dwattr $C$DW$11, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$11

	.sect	".text"
	.clink
	.global	_rtGetMinusInfF

$C$DW$18	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$18, DW_AT_name("rtGetMinusInfF")
	.dwattr $C$DW$18, DW_AT_low_pc(_rtGetMinusInfF)
	.dwattr $C$DW$18, DW_AT_high_pc(0x00)
	.dwattr $C$DW$18, DW_AT_TI_symbol_name("_rtGetMinusInfF")
	.dwattr $C$DW$18, DW_AT_external
	.dwattr $C$DW$18, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$18, DW_AT_TI_begin_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$18, DW_AT_TI_begin_line(0x55)
	.dwattr $C$DW$18, DW_AT_TI_begin_column(0x0a)
	.dwattr $C$DW$18, DW_AT_TI_max_frame_size(-4)
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 86,column 1,is_stmt,address _rtGetMinusInfF,isa 0

	.dwfde $C$DW$CIE, _rtGetMinusInfF
;----------------------------------------------------------------------
;  85 | real32_T rtGetMinusInfF(void)                                          
;  87 | IEEESingle minfF;                                                      
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _rtGetMinusInfF               FR SIZE:   2           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_rtGetMinusInfF:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -4
$C$DW$19	.dwtag  DW_TAG_variable
	.dwattr $C$DW$19, DW_AT_name("minfF")
	.dwattr $C$DW$19, DW_AT_TI_symbol_name("_minfF")
	.dwattr $C$DW$19, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$19, DW_AT_location[DW_OP_breg20 -2]

	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 88,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  88 | minfF.wordL.wordLuint = 0xFF800000U;                                   
;----------------------------------------------------------------------
        SETC      SXM                   ; [CPU_ALU] 
        MOV       ACC,#-256 << 15       ; [CPU_ALU] |88| 
        MOVL      *-SP[2],ACC           ; [CPU_ALU] |88| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 89,column 3,is_stmt,isa 0
;----------------------------------------------------------------------
;  89 | return minfF.wordL.wordLreal;                                          
;----------------------------------------------------------------------
        MOV32     R0H,*-SP[2]           ; [CPU_FPU] |89| 
	.dwpsn	file "E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c",line 90,column 1,is_stmt,isa 0
        SUBB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$20	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$20, DW_AT_low_pc(0x00)
	.dwattr $C$DW$20, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$18, DW_AT_TI_end_file("E:/GiaotrinhDH/DATN/SIMULINK/mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw/rtGetInf.c")
	.dwattr $C$DW$18, DW_AT_TI_end_line(0x5a)
	.dwattr $C$DW$18, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$18


;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************

$C$DW$T$20	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$20, DW_AT_byte_size(0x04)
$C$DW$21	.dwtag  DW_TAG_member
	.dwattr $C$DW$21, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$21, DW_AT_name("wordL")
	.dwattr $C$DW$21, DW_AT_TI_symbol_name("_wordL")
	.dwattr $C$DW$21, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$21, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$22	.dwtag  DW_TAG_member
	.dwattr $C$DW$22, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$22, DW_AT_name("wordH")
	.dwattr $C$DW$22, DW_AT_TI_symbol_name("_wordH")
	.dwattr $C$DW$22, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$22, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$20


$C$DW$T$21	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$21, DW_AT_byte_size(0x04)
$C$DW$23	.dwtag  DW_TAG_member
	.dwattr $C$DW$23, DW_AT_type(*$C$DW$T$20)
	.dwattr $C$DW$23, DW_AT_name("words")
	.dwattr $C$DW$23, DW_AT_TI_symbol_name("_words")
	.dwattr $C$DW$23, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$23, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$21

$C$DW$T$23	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$23, DW_AT_name("LittleEndianIEEEDouble")
	.dwattr $C$DW$T$23, DW_AT_type(*$C$DW$T$21)
	.dwattr $C$DW$T$23, DW_AT_language(DW_LANG_C)


$C$DW$T$22	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$22, DW_AT_byte_size(0x02)
$C$DW$24	.dwtag  DW_TAG_member
	.dwattr $C$DW$24, DW_AT_type(*$C$DW$T$27)
	.dwattr $C$DW$24, DW_AT_name("wordL")
	.dwattr $C$DW$24, DW_AT_TI_symbol_name("_wordL")
	.dwattr $C$DW$24, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$24, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$22

$C$DW$T$29	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$29, DW_AT_name("IEEESingle")
	.dwattr $C$DW$T$29, DW_AT_type(*$C$DW$T$22)
	.dwattr $C$DW$T$29, DW_AT_language(DW_LANG_C)


$C$DW$T$25	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$25, DW_AT_byte_size(0x04)
$C$DW$25	.dwtag  DW_TAG_member
	.dwattr $C$DW$25, DW_AT_type(*$C$DW$T$23)
	.dwattr $C$DW$25, DW_AT_name("bitVal")
	.dwattr $C$DW$25, DW_AT_TI_symbol_name("_bitVal")
	.dwattr $C$DW$25, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$25, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$26	.dwtag  DW_TAG_member
	.dwattr $C$DW$26, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$26, DW_AT_name("fltVal")
	.dwattr $C$DW$26, DW_AT_TI_symbol_name("_fltVal")
	.dwattr $C$DW$26, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$26, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$25


$C$DW$T$27	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$27, DW_AT_byte_size(0x02)
$C$DW$27	.dwtag  DW_TAG_member
	.dwattr $C$DW$27, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$27, DW_AT_name("wordLreal")
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_wordLreal")
	.dwattr $C$DW$27, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$27, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$28	.dwtag  DW_TAG_member
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$28, DW_AT_name("wordLuint")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_wordLuint")
	.dwattr $C$DW$28, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$28, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$27


$C$DW$T$28	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$28, DW_AT_byte_size(0x04)
$C$DW$29	.dwtag  DW_TAG_member
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$23)
	.dwattr $C$DW$29, DW_AT_name("bitVal")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_bitVal")
	.dwattr $C$DW$29, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$29, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$30	.dwtag  DW_TAG_member
	.dwattr $C$DW$30, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$30, DW_AT_name("fltVal")
	.dwattr $C$DW$30, DW_AT_TI_symbol_name("_fltVal")
	.dwattr $C$DW$30, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$30, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$28

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

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

$C$DW$T$30	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$30, DW_AT_name("size_t")
	.dwattr $C$DW$T$30, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$30, DW_AT_language(DW_LANG_C)

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

$C$DW$31	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$31, DW_AT_name("AL")
	.dwattr $C$DW$31, DW_AT_location[DW_OP_reg0]

$C$DW$32	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$32, DW_AT_name("AH")
	.dwattr $C$DW$32, DW_AT_location[DW_OP_reg1]

$C$DW$33	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$33, DW_AT_name("PL")
	.dwattr $C$DW$33, DW_AT_location[DW_OP_reg2]

$C$DW$34	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$34, DW_AT_name("PH")
	.dwattr $C$DW$34, DW_AT_location[DW_OP_reg3]

$C$DW$35	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$35, DW_AT_name("SP")
	.dwattr $C$DW$35, DW_AT_location[DW_OP_reg20]

$C$DW$36	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$36, DW_AT_name("XT")
	.dwattr $C$DW$36, DW_AT_location[DW_OP_reg21]

$C$DW$37	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$37, DW_AT_name("T")
	.dwattr $C$DW$37, DW_AT_location[DW_OP_reg22]

$C$DW$38	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$38, DW_AT_name("ST0")
	.dwattr $C$DW$38, DW_AT_location[DW_OP_reg23]

$C$DW$39	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$39, DW_AT_name("ST1")
	.dwattr $C$DW$39, DW_AT_location[DW_OP_reg24]

$C$DW$40	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$40, DW_AT_name("PC")
	.dwattr $C$DW$40, DW_AT_location[DW_OP_reg25]

$C$DW$41	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$41, DW_AT_name("RPC")
	.dwattr $C$DW$41, DW_AT_location[DW_OP_reg26]

$C$DW$42	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$42, DW_AT_name("FP")
	.dwattr $C$DW$42, DW_AT_location[DW_OP_reg28]

$C$DW$43	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$43, DW_AT_name("DP")
	.dwattr $C$DW$43, DW_AT_location[DW_OP_reg29]

$C$DW$44	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$44, DW_AT_name("SXM")
	.dwattr $C$DW$44, DW_AT_location[DW_OP_reg30]

$C$DW$45	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$45, DW_AT_name("PM")
	.dwattr $C$DW$45, DW_AT_location[DW_OP_reg31]

$C$DW$46	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$46, DW_AT_name("OVM")
	.dwattr $C$DW$46, DW_AT_location[DW_OP_regx 0x20]

$C$DW$47	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$47, DW_AT_name("PAGE0")
	.dwattr $C$DW$47, DW_AT_location[DW_OP_regx 0x21]

$C$DW$48	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$48, DW_AT_name("AMODE")
	.dwattr $C$DW$48, DW_AT_location[DW_OP_regx 0x22]

$C$DW$49	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$49, DW_AT_name("EALLOW")
	.dwattr $C$DW$49, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$50	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$50, DW_AT_name("INTM")
	.dwattr $C$DW$50, DW_AT_location[DW_OP_regx 0x23]

$C$DW$51	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$51, DW_AT_name("IFR")
	.dwattr $C$DW$51, DW_AT_location[DW_OP_regx 0x24]

$C$DW$52	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$52, DW_AT_name("IER")
	.dwattr $C$DW$52, DW_AT_location[DW_OP_regx 0x25]

$C$DW$53	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$53, DW_AT_name("V")
	.dwattr $C$DW$53, DW_AT_location[DW_OP_regx 0x26]

$C$DW$54	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$54, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$54, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$55	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$55, DW_AT_name("VOL")
	.dwattr $C$DW$55, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$56	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$56, DW_AT_name("AR0")
	.dwattr $C$DW$56, DW_AT_location[DW_OP_reg4]

$C$DW$57	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$57, DW_AT_name("XAR0")
	.dwattr $C$DW$57, DW_AT_location[DW_OP_reg5]

$C$DW$58	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$58, DW_AT_name("AR1")
	.dwattr $C$DW$58, DW_AT_location[DW_OP_reg6]

$C$DW$59	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$59, DW_AT_name("XAR1")
	.dwattr $C$DW$59, DW_AT_location[DW_OP_reg7]

$C$DW$60	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$60, DW_AT_name("AR2")
	.dwattr $C$DW$60, DW_AT_location[DW_OP_reg8]

$C$DW$61	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$61, DW_AT_name("XAR2")
	.dwattr $C$DW$61, DW_AT_location[DW_OP_reg9]

$C$DW$62	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$62, DW_AT_name("AR3")
	.dwattr $C$DW$62, DW_AT_location[DW_OP_reg10]

$C$DW$63	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$63, DW_AT_name("XAR3")
	.dwattr $C$DW$63, DW_AT_location[DW_OP_reg11]

$C$DW$64	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$64, DW_AT_name("AR4")
	.dwattr $C$DW$64, DW_AT_location[DW_OP_reg12]

$C$DW$65	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$65, DW_AT_name("XAR4")
	.dwattr $C$DW$65, DW_AT_location[DW_OP_reg13]

$C$DW$66	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$66, DW_AT_name("AR5")
	.dwattr $C$DW$66, DW_AT_location[DW_OP_reg14]

$C$DW$67	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$67, DW_AT_name("XAR5")
	.dwattr $C$DW$67, DW_AT_location[DW_OP_reg15]

$C$DW$68	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$68, DW_AT_name("AR6")
	.dwattr $C$DW$68, DW_AT_location[DW_OP_reg16]

$C$DW$69	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$69, DW_AT_name("XAR6")
	.dwattr $C$DW$69, DW_AT_location[DW_OP_reg17]

$C$DW$70	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$70, DW_AT_name("AR7")
	.dwattr $C$DW$70, DW_AT_location[DW_OP_reg18]

$C$DW$71	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$71, DW_AT_name("XAR7")
	.dwattr $C$DW$71, DW_AT_location[DW_OP_reg19]

$C$DW$72	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$72, DW_AT_name("R0H")
	.dwattr $C$DW$72, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$73	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$73, DW_AT_name("R1H")
	.dwattr $C$DW$73, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$74	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$74, DW_AT_name("R2H")
	.dwattr $C$DW$74, DW_AT_location[DW_OP_regx 0x33]

$C$DW$75	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$75, DW_AT_name("R3H")
	.dwattr $C$DW$75, DW_AT_location[DW_OP_regx 0x37]

$C$DW$76	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$76, DW_AT_name("R4H")
	.dwattr $C$DW$76, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$77	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$77, DW_AT_name("R5H")
	.dwattr $C$DW$77, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$78	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$78, DW_AT_name("R6H")
	.dwattr $C$DW$78, DW_AT_location[DW_OP_regx 0x43]

$C$DW$79	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$79, DW_AT_name("R7H")
	.dwattr $C$DW$79, DW_AT_location[DW_OP_regx 0x47]

$C$DW$80	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$80, DW_AT_name("RB")
	.dwattr $C$DW$80, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$81	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$81, DW_AT_name("STF")
	.dwattr $C$DW$81, DW_AT_location[DW_OP_regx 0x28]

$C$DW$82	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$82, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$82, DW_AT_location[DW_OP_reg27]

$C$DW$83	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$83, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$83, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

