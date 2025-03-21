;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:14 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
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
	.dwattr $C$DW$7, DW_AT_name("SPI_init")
	.dwattr $C$DW$7, DW_AT_TI_symbol_name("_SPI_init")
	.dwattr $C$DW$7, DW_AT_type(*$C$DW$T$69)
	.dwattr $C$DW$7, DW_AT_declaration
	.dwattr $C$DW$7, DW_AT_external
$C$DW$8	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$8, DW_AT_type(*$C$DW$T$70)

	.dwendtag $C$DW$7

;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{EA513466-027E-4B86-A223-C75082E869FE} 
	.sect	".text"
	.clink
	.global	_MW_SPI_Open

$C$DW$9	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$9, DW_AT_name("MW_SPI_Open")
	.dwattr $C$DW$9, DW_AT_low_pc(_MW_SPI_Open)
	.dwattr $C$DW$9, DW_AT_high_pc(0x00)
	.dwattr $C$DW$9, DW_AT_TI_symbol_name("_MW_SPI_Open")
	.dwattr $C$DW$9, DW_AT_external
	.dwattr $C$DW$9, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$9, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$9, DW_AT_TI_begin_line(0x08)
	.dwattr $C$DW$9, DW_AT_TI_begin_column(0x10)
	.dwattr $C$DW$9, DW_AT_TI_max_frame_size(-10)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 9,column 1,is_stmt,address _MW_SPI_Open,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_Open
$C$DW$10	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$10, DW_AT_name("SPIModule")
	.dwattr $C$DW$10, DW_AT_TI_symbol_name("_SPIModule")
	.dwattr $C$DW$10, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$10, DW_AT_location[DW_OP_reg0]

$C$DW$11	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$11, DW_AT_name("MosiPin")
	.dwattr $C$DW$11, DW_AT_TI_symbol_name("_MosiPin")
	.dwattr $C$DW$11, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$11, DW_AT_location[DW_OP_breg20 -12]

$C$DW$12	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$12, DW_AT_name("MisoPin")
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_MisoPin")
	.dwattr $C$DW$12, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$12, DW_AT_location[DW_OP_breg20 -14]

$C$DW$13	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$13, DW_AT_name("ClockPin")
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_ClockPin")
	.dwattr $C$DW$13, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$13, DW_AT_location[DW_OP_breg20 -16]

$C$DW$14	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$14, DW_AT_name("SlaveSelectPin")
	.dwattr $C$DW$14, DW_AT_TI_symbol_name("_SlaveSelectPin")
	.dwattr $C$DW$14, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$14, DW_AT_location[DW_OP_breg20 -18]

$C$DW$15	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$15, DW_AT_name("ActiveLowSSPin")
	.dwattr $C$DW$15, DW_AT_TI_symbol_name("_ActiveLowSSPin")
	.dwattr $C$DW$15, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$15, DW_AT_location[DW_OP_reg12]

$C$DW$16	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$16, DW_AT_name("spi_device_type")
	.dwattr $C$DW$16, DW_AT_TI_symbol_name("_spi_device_type")
	.dwattr $C$DW$16, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$16, DW_AT_location[DW_OP_reg14]

;----------------------------------------------------------------------
;   8 | MW_Handle_Type MW_SPI_Open(uint32_T SPIModule, uint32_T MosiPin, uint32
;     | _T MisoPin, uint32_T ClockPin, uint32_T SlaveSelectPin, uint8_T ActiveL
;     | owSSPin, uint8_T spi_device_type)                                      
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_Open                  FR SIZE:   8           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            1 Parameter,  7 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_Open:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -10
$C$DW$17	.dwtag  DW_TAG_variable
	.dwattr $C$DW$17, DW_AT_name("SPIModule")
	.dwattr $C$DW$17, DW_AT_TI_symbol_name("_SPIModule")
	.dwattr $C$DW$17, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$17, DW_AT_location[DW_OP_breg20 -4]

$C$DW$18	.dwtag  DW_TAG_variable
	.dwattr $C$DW$18, DW_AT_name("mySpi")
	.dwattr $C$DW$18, DW_AT_TI_symbol_name("_mySpi")
	.dwattr $C$DW$18, DW_AT_type(*$C$DW$T$69)
	.dwattr $C$DW$18, DW_AT_location[DW_OP_breg20 -6]

$C$DW$19	.dwtag  DW_TAG_variable
	.dwattr $C$DW$19, DW_AT_name("ActiveLowSSPin")
	.dwattr $C$DW$19, DW_AT_TI_symbol_name("_ActiveLowSSPin")
	.dwattr $C$DW$19, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$19, DW_AT_location[DW_OP_breg20 -7]

$C$DW$20	.dwtag  DW_TAG_variable
	.dwattr $C$DW$20, DW_AT_name("spi_device_type")
	.dwattr $C$DW$20, DW_AT_TI_symbol_name("_spi_device_type")
	.dwattr $C$DW$20, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$20, DW_AT_location[DW_OP_breg20 -8]

;----------------------------------------------------------------------
;  10 | #ifndef MATLAB_MEX_FILE                                                
;  11 | MW_SpiHandle mySpi;                                                    
;----------------------------------------------------------------------
        MOV       *-SP[8],AR5           ; [CPU_ALU] |9| 
        MOV       *-SP[7],AR4           ; [CPU_ALU] |9| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |9| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 12,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  12 | mySpi = SPI_init(SPIModule);                                           
;  13 | #ifndef MW_F281X                                                       
;----------------------------------------------------------------------
$C$DW$21	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$21, DW_AT_low_pc(0x00)
	.dwattr $C$DW$21, DW_AT_name("_SPI_init")
	.dwattr $C$DW$21, DW_AT_TI_call

        LCR       #_SPI_init            ; [CPU_ALU] |12| 
        ; call occurs [#_SPI_init] ; [] |12| 
        MOVL      *-SP[6],XAR4          ; [CPU_ALU] |12| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 14,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  14 | if(SlaveSelectPin != MW_UNDEFINED_VALUE)                               
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |14| 
        SUBB      ACC,#1                ; [CPU_ALU] |14| 
        CMPL      ACC,*-SP[18]          ; [CPU_ALU] |14| 
        B         $C$L1,EQ              ; [CPU_ALU] |14| 
        ; branchcc occurs ; [] |14| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 16,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  16 | Set_GPIOPin(SlaveSelectPin, GPIO_MUX_CPU1, 0, GPIO_OUTPUT, GPIO_PULLUP|
;     | GPIO_ASYNC);                                                           
;  18 | #endif                                                                 
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |16| 
        MOV       AL,*-SP[18]           ; [CPU_ALU] |16| 
        MOVB      XAR4,#0               ; [CPU_ALU] |16| 
        MOVB      XAR5,#1               ; [CPU_ALU] |16| 
        MOVB      AH,#0                 ; [CPU_ALU] |16| 
$C$DW$22	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$22, DW_AT_low_pc(0x00)
	.dwattr $C$DW$22, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$22, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |16| 
        ; call occurs [#_Set_GPIOPin] ; [] |16| 
$C$L1:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 19,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  19 | return (MW_Handle_Type)mySpi;                                          
;  20 | #else                                                                  
;  21 | return (MW_Handle_Type)NULL;                                           
;  22 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |19| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 23,column 1,is_stmt,isa 0
        SUBB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$23	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$23, DW_AT_low_pc(0x00)
	.dwattr $C$DW$23, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$9, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$9, DW_AT_TI_end_line(0x17)
	.dwattr $C$DW$9, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$9

	.sect	".text"
	.clink
	.global	_MW_SPI_SetFormat

$C$DW$24	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$24, DW_AT_name("MW_SPI_SetFormat")
	.dwattr $C$DW$24, DW_AT_low_pc(_MW_SPI_SetFormat)
	.dwattr $C$DW$24, DW_AT_high_pc(0x00)
	.dwattr $C$DW$24, DW_AT_TI_symbol_name("_MW_SPI_SetFormat")
	.dwattr $C$DW$24, DW_AT_external
	.dwattr $C$DW$24, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$24, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$24, DW_AT_TI_begin_line(0x1d)
	.dwattr $C$DW$24, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$24, DW_AT_TI_max_frame_size(-12)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 30,column 1,is_stmt,address _MW_SPI_SetFormat,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_SetFormat
$C$DW$25	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$25, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$25, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$25, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$25, DW_AT_location[DW_OP_reg12]

$C$DW$26	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$26, DW_AT_name("targetprecision")
	.dwattr $C$DW$26, DW_AT_TI_symbol_name("_targetprecision")
	.dwattr $C$DW$26, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$26, DW_AT_location[DW_OP_reg0]

$C$DW$27	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$27, DW_AT_name("spi_mode")
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_spi_mode")
	.dwattr $C$DW$27, DW_AT_type(*$C$DW$T$53)
	.dwattr $C$DW$27, DW_AT_location[DW_OP_reg1]

$C$DW$28	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$28, DW_AT_name("TargetFirstBitToTransfer")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_TargetFirstBitToTransfer")
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$51)
	.dwattr $C$DW$28, DW_AT_location[DW_OP_reg14]

;----------------------------------------------------------------------
;  29 | MW_SPI_Status_Type MW_SPI_SetFormat(MW_Handle_Type SPIModuleHandle, uin
;     | t8_T targetprecision, MW_SPI_Mode_type spi_mode, MW_SPI_FirstBitTransfe
;     | r_Type TargetFirstBitToTransfer)                                       
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_SetFormat             FR SIZE:  10           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter, 10 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_SetFormat:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#10                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -12
$C$DW$29	.dwtag  DW_TAG_variable
	.dwattr $C$DW$29, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$29, DW_AT_location[DW_OP_breg20 -2]

$C$DW$30	.dwtag  DW_TAG_variable
	.dwattr $C$DW$30, DW_AT_name("mySpi")
	.dwattr $C$DW$30, DW_AT_TI_symbol_name("_mySpi")
	.dwattr $C$DW$30, DW_AT_type(*$C$DW$T$69)
	.dwattr $C$DW$30, DW_AT_location[DW_OP_breg20 -4]

$C$DW$31	.dwtag  DW_TAG_variable
	.dwattr $C$DW$31, DW_AT_name("targetprecision")
	.dwattr $C$DW$31, DW_AT_TI_symbol_name("_targetprecision")
	.dwattr $C$DW$31, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$31, DW_AT_location[DW_OP_breg20 -5]

$C$DW$32	.dwtag  DW_TAG_variable
	.dwattr $C$DW$32, DW_AT_name("spi_mode")
	.dwattr $C$DW$32, DW_AT_TI_symbol_name("_spi_mode")
	.dwattr $C$DW$32, DW_AT_type(*$C$DW$T$53)
	.dwattr $C$DW$32, DW_AT_location[DW_OP_breg20 -6]

$C$DW$33	.dwtag  DW_TAG_variable
	.dwattr $C$DW$33, DW_AT_name("TargetFirstBitToTransfer")
	.dwattr $C$DW$33, DW_AT_TI_symbol_name("_TargetFirstBitToTransfer")
	.dwattr $C$DW$33, DW_AT_type(*$C$DW$T$51)
	.dwattr $C$DW$33, DW_AT_location[DW_OP_breg20 -7]

;----------------------------------------------------------------------
;  31 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOV       *-SP[7],AR5           ; [CPU_ALU] |30| 
        MOV       *-SP[6],AH            ; [CPU_ALU] |30| 
        MOV       *-SP[5],AL            ; [CPU_ALU] |30| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |30| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 32,column 24,is_stmt,isa 0
;----------------------------------------------------------------------
;  32 | MW_SpiHandle mySpi = (MW_SpiHandle)SPIModuleHandle;                    
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[2]           ; [CPU_ALU] |32| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |32| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 33,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  33 | if((mySpi->spi_clk_mode == (Uint16)spi_mode) && (mySpi->charLength == t
;     | argetprecision))                                                       
;  35 |     // Do nothing when there is no change in the parameters            
;----------------------------------------------------------------------
        MOVZ      AR6,*+XAR4[2]         ; [CPU_ALU] |33| 
        MOVU      ACC,*-SP[6]           ; [CPU_ALU] |33| 
        CMPL      ACC,XAR6              ; [CPU_ALU] |33| 
        B         $C$L2,NEQ             ; [CPU_ALU] |33| 
        ; branchcc occurs ; [] |33| 
        MOVZ      AR6,*+XAR4[3]         ; [CPU_ALU] |33| 
        MOVU      ACC,*-SP[5]           ; [CPU_ALU] |33| 
        CMPL      ACC,XAR6              ; [CPU_ALU] |33| 
        B         $C$L2,NEQ             ; [CPU_ALU] |33| 
        ; branchcc occurs ; [] |33| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 36,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  36 | return MW_SPI_SUCCESS;                                                 
;  38 | else                                                                   
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |36| 
        B         $C$L7,UNC             ; [CPU_ALU] |36| 
        ; branch occurs ; [] |36| 
$C$L2:    

$C$DW$34	.dwtag  DW_TAG_lexical_block
	.dwattr $C$DW$34, DW_AT_low_pc(0x00)
	.dwattr $C$DW$34, DW_AT_high_pc(0x00)
$C$DW$35	.dwtag  DW_TAG_variable
	.dwattr $C$DW$35, DW_AT_name("SPI")
	.dwattr $C$DW$35, DW_AT_TI_symbol_name("_SPI")
	.dwattr $C$DW$35, DW_AT_type(*$C$DW$T$48)
	.dwattr $C$DW$35, DW_AT_location[DW_OP_breg20 -10]

	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 40,column 39,is_stmt,isa 0
;----------------------------------------------------------------------
;  40 | volatile struct SPI_REGS *SPI = (struct SPI_REGS *)mySpi->spi_base_addr
;     | ess;                                                                   
;  41 | // Update the SPI clock mode and Charecter length                      
;----------------------------------------------------------------------
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |40| 
        MOVL      *-SP[10],ACC          ; [CPU_ALU] |40| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 42,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  42 | mySpi->charLength = targetprecision;                                   
;----------------------------------------------------------------------
        MOV       AL,*-SP[5]            ; [CPU_ALU] |42| 
        MOV       *+XAR4[3],AL          ; [CPU_ALU] |42| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 43,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  43 | mySpi->spi_clk_mode = (Uint16)spi_mode;                                
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[4]          ; [CPU_ALU] |43| 
        MOV       AL,*-SP[6]            ; [CPU_ALU] |43| 
        MOV       *+XAR4[2],AL          ; [CPU_ALU] |43| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 45,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  45 | (*SPI).SPICCR.bit.SPISWRESET = 0;                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |45| 
        AND       *+XAR4[0],#0xff7f     ; [CPU_ALU] |45| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 46,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  46 | if (mySpi->spi_clk_mode == MW_SPI_MODE_0)                              
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[4]          ; [CPU_ALU] |46| 
        MOV       AL,*+XAR4[2]          ; [CPU_ALU] |46| 
        B         $C$L3,NEQ             ; [CPU_ALU] |46| 
        ; branchcc occurs ; [] |46| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 48,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  48 | (*SPI).SPICCR.bit.CLKPOLARITY = 0;                                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |48| 
        AND       *+XAR4[0],#0xffbf     ; [CPU_ALU] |48| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 49,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  49 | (*SPI).SPICTL.bit.CLK_PHASE = 0;                                       
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |49| 
        AND       *+XAR4[1],#0xfff7     ; [CPU_ALU] |49| 
        B         $C$L6,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L3:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 51,column 14,is_stmt,isa 0
;----------------------------------------------------------------------
;  51 | else if (mySpi->spi_clk_mode == MW_SPI_MODE_1)                         
;----------------------------------------------------------------------
        MOV       AL,*+XAR4[2]          ; [CPU_ALU] |51| 
        CMPB      AL,#1                 ; [CPU_ALU] |51| 
        B         $C$L4,NEQ             ; [CPU_ALU] |51| 
        ; branchcc occurs ; [] |51| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 53,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  53 | (*SPI).SPICCR.bit.CLKPOLARITY = 0;                                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |53| 
        AND       *+XAR4[0],#0xffbf     ; [CPU_ALU] |53| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 54,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  54 | (*SPI).SPICTL.bit.CLK_PHASE = 1;                                       
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |54| 
        OR        *+XAR4[1],#0x0008     ; [CPU_ALU] |54| 
        B         $C$L6,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L4:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 56,column 14,is_stmt,isa 0
;----------------------------------------------------------------------
;  56 | else if (mySpi->spi_clk_mode == MW_SPI_MODE_2)                         
;----------------------------------------------------------------------
        MOV       AL,*+XAR4[2]          ; [CPU_ALU] |56| 
        CMPB      AL,#2                 ; [CPU_ALU] |56| 
        B         $C$L5,NEQ             ; [CPU_ALU] |56| 
        ; branchcc occurs ; [] |56| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 58,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  58 | (*SPI).SPICCR.bit.CLKPOLARITY = 1;                                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |58| 
        OR        *+XAR4[0],#0x0040     ; [CPU_ALU] |58| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 59,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  59 | (*SPI).SPICTL.bit.CLK_PHASE = 0;                                       
;  61 | else                                                                   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |59| 
        AND       *+XAR4[1],#0xfff7     ; [CPU_ALU] |59| 
        B         $C$L6,UNC             ; [CPU_ALU] 
        ; branch occurs ; [] 
$C$L5:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 63,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  63 | (*SPI).SPICCR.bit.CLKPOLARITY = 1;                                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |63| 
        OR        *+XAR4[0],#0x0040     ; [CPU_ALU] |63| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 64,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
;  64 | (*SPI).SPICTL.bit.CLK_PHASE = 1;                                       
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |64| 
        OR        *+XAR4[1],#0x0008     ; [CPU_ALU] |64| 
$C$L6:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 66,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  66 | (*SPI).SPICCR.bit.SPICHAR = (uint16_T)((mySpi->charLength) - 1);       
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[4]          ; [CPU_ALU] |66| 
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |66| 
        MOV       AL,*+XAR5[3]          ; [CPU_ALU] |66| 
        AND       AH,*+XAR4[0],#0xfff0  ; [CPU_ALU] |66| 
        ADDB      AL,#-1                ; [CPU_ALU] |66| 
        ANDB      AL,#0x0f              ; [CPU_ALU] |66| 
        OR        AL,AH                 ; [CPU_ALU] |66| 
        MOV       *+XAR4[0],AL          ; [CPU_ALU] |66| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 67,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  67 | (*SPI).SPICCR.bit.SPISWRESET = 1;                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |67| 
        OR        *+XAR4[0],#0x0080     ; [CPU_ALU] |67| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 69,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
;  69 | return MW_SPI_SUCCESS;                                                 
;  71 | #else                                                                  
;  72 | return MW_SPI_SUCCESS;                                                 
;  73 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |69| 
        B         $C$L7,UNC             ; [CPU_ALU] |69| 
        ; branch occurs ; [] |69| 
	.dwendtag $C$DW$34

$C$L7:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 74,column 1,is_stmt,isa 0
        SUBB      SP,#10                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$36	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$36, DW_AT_low_pc(0x00)
	.dwattr $C$DW$36, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$24, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$24, DW_AT_TI_end_line(0x4a)
	.dwattr $C$DW$24, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$24

	.sect	".text"
	.clink
	.global	_MW_SPI_SetBusSpeed

$C$DW$37	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$37, DW_AT_name("MW_SPI_SetBusSpeed")
	.dwattr $C$DW$37, DW_AT_low_pc(_MW_SPI_SetBusSpeed)
	.dwattr $C$DW$37, DW_AT_high_pc(0x00)
	.dwattr $C$DW$37, DW_AT_TI_symbol_name("_MW_SPI_SetBusSpeed")
	.dwattr $C$DW$37, DW_AT_external
	.dwattr $C$DW$37, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$37, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$37, DW_AT_TI_begin_line(0x4d)
	.dwattr $C$DW$37, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$37, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 78,column 1,is_stmt,address _MW_SPI_SetBusSpeed,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_SetBusSpeed
$C$DW$38	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$38, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$38, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$38, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$38, DW_AT_location[DW_OP_reg12]

$C$DW$39	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$39, DW_AT_name("BusSpeedInHz")
	.dwattr $C$DW$39, DW_AT_TI_symbol_name("_BusSpeedInHz")
	.dwattr $C$DW$39, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$39, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  77 | MW_SPI_Status_Type MW_SPI_SetBusSpeed(MW_Handle_Type SPIModuleHandle, u
;     | int32_T BusSpeedInHz)                                                  
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_SetBusSpeed           FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_SetBusSpeed:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$40	.dwtag  DW_TAG_variable
	.dwattr $C$DW$40, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$40, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$40, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$40, DW_AT_location[DW_OP_breg20 -2]

$C$DW$41	.dwtag  DW_TAG_variable
	.dwattr $C$DW$41, DW_AT_name("BusSpeedInHz")
	.dwattr $C$DW$41, DW_AT_TI_symbol_name("_BusSpeedInHz")
	.dwattr $C$DW$41, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$41, DW_AT_location[DW_OP_breg20 -4]

;----------------------------------------------------------------------
;  79 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |78| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |78| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 80,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  80 | return MW_SPI_SUCCESS;                                                 
;  81 | #else                                                                  
;  82 | return MW_SPI_SUCCESS;                                                 
;  83 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |80| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 84,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$42	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$42, DW_AT_low_pc(0x00)
	.dwattr $C$DW$42, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$37, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$37, DW_AT_TI_end_line(0x54)
	.dwattr $C$DW$37, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$37

	.sect	".text"
	.clink
	.global	_MW_SPI_SetSlaveSelect

$C$DW$43	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$43, DW_AT_name("MW_SPI_SetSlaveSelect")
	.dwattr $C$DW$43, DW_AT_low_pc(_MW_SPI_SetSlaveSelect)
	.dwattr $C$DW$43, DW_AT_high_pc(0x00)
	.dwattr $C$DW$43, DW_AT_TI_symbol_name("_MW_SPI_SetSlaveSelect")
	.dwattr $C$DW$43, DW_AT_external
	.dwattr $C$DW$43, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$43, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$43, DW_AT_TI_begin_line(0x57)
	.dwattr $C$DW$43, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$43, DW_AT_TI_max_frame_size(-8)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 88,column 1,is_stmt,address _MW_SPI_SetSlaveSelect,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_SetSlaveSelect
$C$DW$44	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$44, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$44, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$44, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$44, DW_AT_location[DW_OP_reg12]

$C$DW$45	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$45, DW_AT_name("SlaveSelectPin")
	.dwattr $C$DW$45, DW_AT_TI_symbol_name("_SlaveSelectPin")
	.dwattr $C$DW$45, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$45, DW_AT_location[DW_OP_reg0]

$C$DW$46	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$46, DW_AT_name("ActiveLowSSPin")
	.dwattr $C$DW$46, DW_AT_TI_symbol_name("_ActiveLowSSPin")
	.dwattr $C$DW$46, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$46, DW_AT_location[DW_OP_reg14]

;----------------------------------------------------------------------
;  87 | MW_SPI_Status_Type MW_SPI_SetSlaveSelect(MW_Handle_Type SPIModuleHandle
;     | , uint32_T SlaveSelectPin, uint8_T ActiveLowSSPin)                     
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_SetSlaveSelect        FR SIZE:   6           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  5 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_SetSlaveSelect:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -8
$C$DW$47	.dwtag  DW_TAG_variable
	.dwattr $C$DW$47, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$47, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$47, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$47, DW_AT_location[DW_OP_breg20 -2]

$C$DW$48	.dwtag  DW_TAG_variable
	.dwattr $C$DW$48, DW_AT_name("SlaveSelectPin")
	.dwattr $C$DW$48, DW_AT_TI_symbol_name("_SlaveSelectPin")
	.dwattr $C$DW$48, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$48, DW_AT_location[DW_OP_breg20 -4]

$C$DW$49	.dwtag  DW_TAG_variable
	.dwattr $C$DW$49, DW_AT_name("ActiveLowSSPin")
	.dwattr $C$DW$49, DW_AT_TI_symbol_name("_ActiveLowSSPin")
	.dwattr $C$DW$49, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$49, DW_AT_location[DW_OP_breg20 -5]

;----------------------------------------------------------------------
;  89 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOV       *-SP[5],AR5           ; [CPU_ALU] |88| 
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |88| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |88| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 90,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  90 | return MW_SPI_SUCCESS;                                                 
;  91 | #else                                                                  
;  92 | return MW_SPI_SUCCESS;                                                 
;  93 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |90| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 94,column 1,is_stmt,isa 0
        SUBB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$50	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$50, DW_AT_low_pc(0x00)
	.dwattr $C$DW$50, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$43, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$43, DW_AT_TI_end_line(0x5e)
	.dwattr $C$DW$43, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$43

	.sect	".text"
	.clink
	.global	_MW_SPI_MasterWriteRead_8bits

$C$DW$51	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$51, DW_AT_name("MW_SPI_MasterWriteRead_8bits")
	.dwattr $C$DW$51, DW_AT_low_pc(_MW_SPI_MasterWriteRead_8bits)
	.dwattr $C$DW$51, DW_AT_high_pc(0x00)
	.dwattr $C$DW$51, DW_AT_TI_symbol_name("_MW_SPI_MasterWriteRead_8bits")
	.dwattr $C$DW$51, DW_AT_external
	.dwattr $C$DW$51, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$51, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$51, DW_AT_TI_begin_line(0x61)
	.dwattr $C$DW$51, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$51, DW_AT_TI_max_frame_size(-18)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 98,column 1,is_stmt,address _MW_SPI_MasterWriteRead_8bits,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_MasterWriteRead_8bits
$C$DW$52	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$52, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$52, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$52, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$52, DW_AT_location[DW_OP_reg12]

$C$DW$53	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$53, DW_AT_name("wrData")
	.dwattr $C$DW$53, DW_AT_TI_symbol_name("_wrData")
	.dwattr $C$DW$53, DW_AT_type(*$C$DW$T$63)
	.dwattr $C$DW$53, DW_AT_location[DW_OP_reg14]

$C$DW$54	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$54, DW_AT_name("rdData")
	.dwattr $C$DW$54, DW_AT_TI_symbol_name("_rdData")
	.dwattr $C$DW$54, DW_AT_type(*$C$DW$T$64)
	.dwattr $C$DW$54, DW_AT_location[DW_OP_breg20 -20]

$C$DW$55	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$55, DW_AT_name("datalength")
	.dwattr $C$DW$55, DW_AT_TI_symbol_name("_datalength")
	.dwattr $C$DW$55, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$55, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  97 | MW_SPI_Status_Type MW_SPI_MasterWriteRead_8bits(MW_Handle_Type SPIModul
;     | eHandle, const uint8_T * wrData, uint8_T * rdData, uint32_T datalength)
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_MasterWriteRead_8bits FR SIZE:  16           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter, 16 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_MasterWriteRead_8bits:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#16                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -18
$C$DW$56	.dwtag  DW_TAG_variable
	.dwattr $C$DW$56, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$56, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$56, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$56, DW_AT_location[DW_OP_breg20 -2]

$C$DW$57	.dwtag  DW_TAG_variable
	.dwattr $C$DW$57, DW_AT_name("wrData")
	.dwattr $C$DW$57, DW_AT_TI_symbol_name("_wrData")
	.dwattr $C$DW$57, DW_AT_type(*$C$DW$T$63)
	.dwattr $C$DW$57, DW_AT_location[DW_OP_breg20 -4]

$C$DW$58	.dwtag  DW_TAG_variable
	.dwattr $C$DW$58, DW_AT_name("datalength")
	.dwattr $C$DW$58, DW_AT_TI_symbol_name("_datalength")
	.dwattr $C$DW$58, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$58, DW_AT_location[DW_OP_breg20 -6]

$C$DW$59	.dwtag  DW_TAG_variable
	.dwattr $C$DW$59, DW_AT_name("mySpi")
	.dwattr $C$DW$59, DW_AT_TI_symbol_name("_mySpi")
	.dwattr $C$DW$59, DW_AT_type(*$C$DW$T$69)
	.dwattr $C$DW$59, DW_AT_location[DW_OP_breg20 -8]

$C$DW$60	.dwtag  DW_TAG_variable
	.dwattr $C$DW$60, DW_AT_name("SPI")
	.dwattr $C$DW$60, DW_AT_TI_symbol_name("_SPI")
	.dwattr $C$DW$60, DW_AT_type(*$C$DW$T$48)
	.dwattr $C$DW$60, DW_AT_location[DW_OP_breg20 -10]

$C$DW$61	.dwtag  DW_TAG_variable
	.dwattr $C$DW$61, DW_AT_name("localVar")
	.dwattr $C$DW$61, DW_AT_TI_symbol_name("_localVar")
	.dwattr $C$DW$61, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$61, DW_AT_location[DW_OP_breg20 -12]

$C$DW$62	.dwtag  DW_TAG_variable
	.dwattr $C$DW$62, DW_AT_name("readdata")
	.dwattr $C$DW$62, DW_AT_TI_symbol_name("_readdata")
	.dwattr $C$DW$62, DW_AT_type(*$C$DW$T$80)
	.dwattr $C$DW$62, DW_AT_location[DW_OP_breg20 -14]

$C$DW$63	.dwtag  DW_TAG_variable
	.dwattr $C$DW$63, DW_AT_name("writedata")
	.dwattr $C$DW$63, DW_AT_TI_symbol_name("_writedata")
	.dwattr $C$DW$63, DW_AT_type(*$C$DW$T$80)
	.dwattr $C$DW$63, DW_AT_location[DW_OP_breg20 -16]

;----------------------------------------------------------------------
;  99 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOVL      *-SP[6],ACC           ; [CPU_ALU] |98| 
        MOVL      *-SP[4],XAR5          ; [CPU_ALU] |98| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |98| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 100,column 24,is_stmt,isa 0
;----------------------------------------------------------------------
; 100 | MW_SpiHandle mySpi = (MW_SpiHandle)SPIModuleHandle;                    
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[2]           ; [CPU_ALU] |100| 
        MOVL      *-SP[8],ACC           ; [CPU_ALU] |100| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 101,column 35,is_stmt,isa 0
;----------------------------------------------------------------------
; 101 | volatile struct SPI_REGS *SPI = (struct SPI_REGS *)mySpi->spi_base_addr
;     | ess;                                                                   
; 102 | uint32_T localVar;                                                     
;----------------------------------------------------------------------
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |101| 
        MOVL      *-SP[10],ACC          ; [CPU_ALU] |101| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 103,column 24,is_stmt,isa 0
;----------------------------------------------------------------------
; 103 | uint16_T *readdata = (uint16_T*) rdData;                               
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[20]          ; [CPU_ALU] |103| 
        MOVL      *-SP[14],ACC          ; [CPU_ALU] |103| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 104,column 25,is_stmt,isa 0
;----------------------------------------------------------------------
; 104 | uint16_T *writedata = (uint16_T*) wrData;                              
;----------------------------------------------------------------------
        MOVL      ACC,*-SP[4]           ; [CPU_ALU] |104| 
        MOVL      *-SP[16],ACC          ; [CPU_ALU] |104| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 106,column 10,is_stmt,isa 0
;----------------------------------------------------------------------
; 106 | for (localVar = 0; localVar < datalength; localVar++)                  
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |106| 
        MOVL      *-SP[12],ACC          ; [CPU_ALU] |106| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 106,column 24,is_stmt,isa 0
        MOVL      ACC,*-SP[6]           ; [CPU_ALU] |106| 
        CMPL      ACC,*-SP[12]          ; [CPU_ALU] |106| 
        B         $C$L10,LOS            ; [CPU_ALU] |106| 
        ; branchcc occurs ; [] |106| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 108,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 108 | while ((*SPI).SPIFFTX.bit.TXFFST == mySpi->fifoLevel)                  
;----------------------------------------------------------------------
$C$L8:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 108,column 16,is_stmt,isa 0
        MOVL      XAR4,*-SP[8]          ; [CPU_ALU] |108| 
        MOVB      ACC,#10               ; [CPU_ALU] |108| 
        ADDL      ACC,*-SP[10]          ; [CPU_ALU] |108| 
        MOVZ      AR6,*+XAR4[4]         ; [CPU_FPU] |108| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |108| 
        AND       AL,*+XAR4[0],#0x1f00  ; [CPU_ALU] |108| 
        LSR       AL,8                  ; [CPU_ALU] |108| 
        MOVZ      AR7,AL                ; [CPU_ALU] |108| 
        MOVL      ACC,XAR6              ; [CPU_ALU] |108| 
        CMPL      ACC,XAR7              ; [CPU_ALU] |108| 
        B         $C$L8,EQ              ; [CPU_ALU] |108| 
        ; branchcc occurs ; [] |108| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 112,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 112 | (*SPI).SPITXBUF = writedata[localVar] << (16 - mySpi->charLength);     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[8]          ; [CPU_ALU] |112| 
        MOV       T,#16                 ; [CPU_ALU] |112| 
        MOV       AL,T                  ; [CPU_ALU] |112| 
        SUB       AL,*+XAR4[3]          ; [CPU_ALU] |112| 
        MOV       T,AL                  ; [CPU_ALU] |112| 
        MOVL      ACC,*-SP[12]          ; [CPU_ALU] |112| 
        ADDL      ACC,*-SP[16]          ; [CPU_ALU] |112| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |112| 
        MOV       AL,*+XAR4[0]          ; [CPU_ALU] |112| 
        LSL       AL,T                  ; [CPU_ALU] |112| 
        MOVZ      AR6,AL                ; [CPU_ALU] |112| 
        MOVB      ACC,#8                ; [CPU_ALU] |112| 
        ADDL      ACC,*-SP[10]          ; [CPU_ALU] |112| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |112| 
        MOV       *+XAR4[0],AR6         ; [CPU_ALU] |112| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 114,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 114 | while ((*SPI).SPIFFRX.bit.RXFFST == 0)                                 
;----------------------------------------------------------------------
$C$L9:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 114,column 16,is_stmt,isa 0
        MOVB      ACC,#11               ; [CPU_ALU] |114| 
        ADDL      ACC,*-SP[10]          ; [CPU_ALU] |114| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |114| 
        AND       AL,*+XAR4[0],#0x1f00  ; [CPU_ALU] |114| 
        LSR       AL,8                  ; [CPU_ALU] |114| 
        B         $C$L9,EQ              ; [CPU_ALU] |114| 
        ; branchcc occurs ; [] |114| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 118,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 118 | readdata[localVar] = (*SPI).SPIRXBUF & (((Uint32)1 << mySpi->charLength
;     | ) - 1);                                                                
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[8]          ; [CPU_ALU] |118| 
        MOV       T,*+XAR4[3]           ; [CPU_ALU] |118| 
        MOVL      XAR4,*-SP[10]         ; [CPU_ALU] |118| 
        MOVB      ACC,#1                ; [CPU_ALU] |118| 
        LSLL      ACC,T                 ; [CPU_ALU] |118| 
        ADDB      AL,#-1                ; [CPU_ALU] |118| 
        AND       AL,*+XAR4[7]          ; [CPU_ALU] |118| 
        MOVZ      AR6,AL                ; [CPU_ALU] |118| 
        MOVL      ACC,*-SP[12]          ; [CPU_ALU] |118| 
        ADDL      ACC,*-SP[14]          ; [CPU_ALU] |118| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |118| 
        MOV       *+XAR4[0],AR6         ; [CPU_ALU] |118| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 106,column 47,is_stmt,isa 0
        MOVB      ACC,#1                ; [CPU_ALU] |106| 
        ADDL      ACC,*-SP[12]          ; [CPU_ALU] |106| 
        MOVL      *-SP[12],ACC          ; [CPU_ALU] |106| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 106,column 24,is_stmt,isa 0
        MOVL      ACC,*-SP[6]           ; [CPU_ALU] |106| 
        CMPL      ACC,*-SP[12]          ; [CPU_ALU] |106| 
        B         $C$L8,HI              ; [CPU_ALU] |106| 
        ; branchcc occurs ; [] |106| 
$C$L10:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 121,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 121 | return MW_SPI_SUCCESS;                                                 
; 122 | #else                                                                  
; 123 | return MW_SPI_SUCCESS;                                                 
; 124 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |121| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 125,column 1,is_stmt,isa 0
        SUBB      SP,#16                ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$64	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$64, DW_AT_low_pc(0x00)
	.dwattr $C$DW$64, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$51, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$51, DW_AT_TI_end_line(0x7d)
	.dwattr $C$DW$51, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$51

	.sect	".text"
	.clink
	.global	_MW_SPI_SlaveWriteRead_8bits

$C$DW$65	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$65, DW_AT_name("MW_SPI_SlaveWriteRead_8bits")
	.dwattr $C$DW$65, DW_AT_low_pc(_MW_SPI_SlaveWriteRead_8bits)
	.dwattr $C$DW$65, DW_AT_high_pc(0x00)
	.dwattr $C$DW$65, DW_AT_TI_symbol_name("_MW_SPI_SlaveWriteRead_8bits")
	.dwattr $C$DW$65, DW_AT_external
	.dwattr $C$DW$65, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$65, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$65, DW_AT_TI_begin_line(0x80)
	.dwattr $C$DW$65, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$65, DW_AT_TI_max_frame_size(-8)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 129,column 1,is_stmt,address _MW_SPI_SlaveWriteRead_8bits,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_SlaveWriteRead_8bits
$C$DW$66	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$66, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$66, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$66, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$66, DW_AT_location[DW_OP_reg12]

$C$DW$67	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$67, DW_AT_name("wrData")
	.dwattr $C$DW$67, DW_AT_TI_symbol_name("_wrData")
	.dwattr $C$DW$67, DW_AT_type(*$C$DW$T$63)
	.dwattr $C$DW$67, DW_AT_location[DW_OP_reg14]

$C$DW$68	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$68, DW_AT_name("rdData")
	.dwattr $C$DW$68, DW_AT_TI_symbol_name("_rdData")
	.dwattr $C$DW$68, DW_AT_type(*$C$DW$T$64)
	.dwattr $C$DW$68, DW_AT_location[DW_OP_breg20 -10]

$C$DW$69	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$69, DW_AT_name("datalength")
	.dwattr $C$DW$69, DW_AT_TI_symbol_name("_datalength")
	.dwattr $C$DW$69, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$69, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
; 128 | MW_SPI_Status_Type MW_SPI_SlaveWriteRead_8bits(MW_Handle_Type SPIModule
;     | Handle, const uint8_T * wrData, uint8_T * rdData, uint32_T datalength) 
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_SlaveWriteRead_8bits  FR SIZE:   6           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  6 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_SlaveWriteRead_8bits:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -8
$C$DW$70	.dwtag  DW_TAG_variable
	.dwattr $C$DW$70, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$70, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$70, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$70, DW_AT_location[DW_OP_breg20 -2]

$C$DW$71	.dwtag  DW_TAG_variable
	.dwattr $C$DW$71, DW_AT_name("wrData")
	.dwattr $C$DW$71, DW_AT_TI_symbol_name("_wrData")
	.dwattr $C$DW$71, DW_AT_type(*$C$DW$T$63)
	.dwattr $C$DW$71, DW_AT_location[DW_OP_breg20 -4]

$C$DW$72	.dwtag  DW_TAG_variable
	.dwattr $C$DW$72, DW_AT_name("datalength")
	.dwattr $C$DW$72, DW_AT_TI_symbol_name("_datalength")
	.dwattr $C$DW$72, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$72, DW_AT_location[DW_OP_breg20 -6]

;----------------------------------------------------------------------
; 130 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOVL      *-SP[6],ACC           ; [CPU_ALU] |129| 
        MOVL      *-SP[4],XAR5          ; [CPU_ALU] |129| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |129| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 131,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 131 | return MW_SPI_SUCCESS;                                                 
; 132 | #else                                                                  
; 133 | return MW_SPI_SUCCESS;                                                 
; 134 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |131| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 135,column 1,is_stmt,isa 0
        SUBB      SP,#6                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$73	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$73, DW_AT_low_pc(0x00)
	.dwattr $C$DW$73, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$65, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$65, DW_AT_TI_end_line(0x87)
	.dwattr $C$DW$65, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$65

	.sect	".text"
	.clink
	.global	_MW_SPI_GetStatus

$C$DW$74	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$74, DW_AT_name("MW_SPI_GetStatus")
	.dwattr $C$DW$74, DW_AT_low_pc(_MW_SPI_GetStatus)
	.dwattr $C$DW$74, DW_AT_high_pc(0x00)
	.dwattr $C$DW$74, DW_AT_TI_symbol_name("_MW_SPI_GetStatus")
	.dwattr $C$DW$74, DW_AT_external
	.dwattr $C$DW$74, DW_AT_type(*$C$DW$T$55)
	.dwattr $C$DW$74, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$74, DW_AT_TI_begin_line(0x8a)
	.dwattr $C$DW$74, DW_AT_TI_begin_column(0x14)
	.dwattr $C$DW$74, DW_AT_TI_max_frame_size(-4)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 139,column 1,is_stmt,address _MW_SPI_GetStatus,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_GetStatus
$C$DW$75	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$75, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$75, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$75, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$75, DW_AT_location[DW_OP_reg12]

;----------------------------------------------------------------------
; 138 | MW_SPI_Status_Type MW_SPI_GetStatus(MW_Handle_Type SPIModuleHandle)    
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_GetStatus             FR SIZE:   2           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  2 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_GetStatus:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -4
$C$DW$76	.dwtag  DW_TAG_variable
	.dwattr $C$DW$76, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$76, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$76, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$76, DW_AT_location[DW_OP_breg20 -2]

;----------------------------------------------------------------------
; 140 | #ifndef MATLAB_MEX_FILE                                                
;----------------------------------------------------------------------
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |139| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 141,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 141 | return MW_SPI_SUCCESS;                                                 
; 142 | #else                                                                  
; 143 | return MW_SPI_SUCCESS;                                                 
; 144 | #endif //MATLAB_MEX_FILE                                               
;----------------------------------------------------------------------
        MOVB      AL,#0                 ; [CPU_ALU] |141| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 145,column 1,is_stmt,isa 0
        SUBB      SP,#2                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$77	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$77, DW_AT_low_pc(0x00)
	.dwattr $C$DW$77, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$74, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$74, DW_AT_TI_end_line(0x91)
	.dwattr $C$DW$74, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$74

	.sect	".text"
	.clink
	.global	_MW_SPI_Close

$C$DW$78	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$78, DW_AT_name("MW_SPI_Close")
	.dwattr $C$DW$78, DW_AT_low_pc(_MW_SPI_Close)
	.dwattr $C$DW$78, DW_AT_high_pc(0x00)
	.dwattr $C$DW$78, DW_AT_TI_symbol_name("_MW_SPI_Close")
	.dwattr $C$DW$78, DW_AT_external
	.dwattr $C$DW$78, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$78, DW_AT_TI_begin_line(0x94)
	.dwattr $C$DW$78, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$78, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 149,column 1,is_stmt,address _MW_SPI_Close,isa 0

	.dwfde $C$DW$CIE, _MW_SPI_Close
$C$DW$79	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$79, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$79, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$79, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$79, DW_AT_location[DW_OP_reg12]

$C$DW$80	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$80, DW_AT_name("MosiPin")
	.dwattr $C$DW$80, DW_AT_TI_symbol_name("_MosiPin")
	.dwattr $C$DW$80, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$80, DW_AT_location[DW_OP_reg0]

$C$DW$81	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$81, DW_AT_name("MisoPin")
	.dwattr $C$DW$81, DW_AT_TI_symbol_name("_MisoPin")
	.dwattr $C$DW$81, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$81, DW_AT_location[DW_OP_breg20 -8]

$C$DW$82	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$82, DW_AT_name("ClockPin")
	.dwattr $C$DW$82, DW_AT_TI_symbol_name("_ClockPin")
	.dwattr $C$DW$82, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$82, DW_AT_location[DW_OP_breg20 -10]

$C$DW$83	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$83, DW_AT_name("SlaveSelectPin")
	.dwattr $C$DW$83, DW_AT_TI_symbol_name("_SlaveSelectPin")
	.dwattr $C$DW$83, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$83, DW_AT_location[DW_OP_breg20 -12]

;----------------------------------------------------------------------
; 148 | void MW_SPI_Close(MW_Handle_Type SPIModuleHandle, uint32_T MosiPin, uin
;     | t32_T MisoPin, uint32_T ClockPin, uint32_T SlaveSelectPin)             
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _MW_SPI_Close                 FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_MW_SPI_Close:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$84	.dwtag  DW_TAG_variable
	.dwattr $C$DW$84, DW_AT_name("SPIModuleHandle")
	.dwattr $C$DW$84, DW_AT_TI_symbol_name("_SPIModuleHandle")
	.dwattr $C$DW$84, DW_AT_type(*$C$DW$T$56)
	.dwattr $C$DW$84, DW_AT_location[DW_OP_breg20 -2]

$C$DW$85	.dwtag  DW_TAG_variable
	.dwattr $C$DW$85, DW_AT_name("MosiPin")
	.dwattr $C$DW$85, DW_AT_TI_symbol_name("_MosiPin")
	.dwattr $C$DW$85, DW_AT_type(*$C$DW$T$59)
	.dwattr $C$DW$85, DW_AT_location[DW_OP_breg20 -4]

        MOVL      *-SP[4],ACC           ; [CPU_ALU] |149| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |149| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c",line 150,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$86	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$86, DW_AT_low_pc(0x00)
	.dwattr $C$DW$86, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$78, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_SPI.c")
	.dwattr $C$DW$78, DW_AT_TI_end_line(0x96)
	.dwattr $C$DW$78, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$78

;**************************************************************
;* UNDEFINED EXTERNAL REFERENCES                              *
;**************************************************************
	.global	_Set_GPIOPin
	.global	_SPI_init

;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************

$C$DW$T$20	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$20, DW_AT_name("SPICCR_BITS")
	.dwattr $C$DW$T$20, DW_AT_byte_size(0x01)
$C$DW$87	.dwtag  DW_TAG_member
	.dwattr $C$DW$87, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$87, DW_AT_name("SPICHAR")
	.dwattr $C$DW$87, DW_AT_TI_symbol_name("_SPICHAR")
	.dwattr $C$DW$87, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$87, DW_AT_bit_size(0x04)
	.dwattr $C$DW$87, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$87, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$88	.dwtag  DW_TAG_member
	.dwattr $C$DW$88, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$88, DW_AT_name("SPILBK")
	.dwattr $C$DW$88, DW_AT_TI_symbol_name("_SPILBK")
	.dwattr $C$DW$88, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$88, DW_AT_bit_size(0x01)
	.dwattr $C$DW$88, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$88, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$89	.dwtag  DW_TAG_member
	.dwattr $C$DW$89, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$89, DW_AT_name("rsvd1")
	.dwattr $C$DW$89, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$89, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$89, DW_AT_bit_size(0x01)
	.dwattr $C$DW$89, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$89, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$90	.dwtag  DW_TAG_member
	.dwattr $C$DW$90, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$90, DW_AT_name("CLKPOLARITY")
	.dwattr $C$DW$90, DW_AT_TI_symbol_name("_CLKPOLARITY")
	.dwattr $C$DW$90, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$90, DW_AT_bit_size(0x01)
	.dwattr $C$DW$90, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$90, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$91	.dwtag  DW_TAG_member
	.dwattr $C$DW$91, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$91, DW_AT_name("SPISWRESET")
	.dwattr $C$DW$91, DW_AT_TI_symbol_name("_SPISWRESET")
	.dwattr $C$DW$91, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$91, DW_AT_bit_size(0x01)
	.dwattr $C$DW$91, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$91, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$92	.dwtag  DW_TAG_member
	.dwattr $C$DW$92, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$92, DW_AT_name("rsvd2")
	.dwattr $C$DW$92, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$92, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$92, DW_AT_bit_size(0x08)
	.dwattr $C$DW$92, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$92, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$20


$C$DW$T$21	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$21, DW_AT_name("SPICCR_REG")
	.dwattr $C$DW$T$21, DW_AT_byte_size(0x01)
$C$DW$93	.dwtag  DW_TAG_member
	.dwattr $C$DW$93, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$93, DW_AT_name("all")
	.dwattr $C$DW$93, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$93, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$93, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$94	.dwtag  DW_TAG_member
	.dwattr $C$DW$94, DW_AT_type(*$C$DW$T$20)
	.dwattr $C$DW$94, DW_AT_name("bit")
	.dwattr $C$DW$94, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$94, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$94, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$21


$C$DW$T$22	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$22, DW_AT_name("SPICTL_BITS")
	.dwattr $C$DW$T$22, DW_AT_byte_size(0x01)
$C$DW$95	.dwtag  DW_TAG_member
	.dwattr $C$DW$95, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$95, DW_AT_name("SPIINTENA")
	.dwattr $C$DW$95, DW_AT_TI_symbol_name("_SPIINTENA")
	.dwattr $C$DW$95, DW_AT_bit_offset(0x0f)
	.dwattr $C$DW$95, DW_AT_bit_size(0x01)
	.dwattr $C$DW$95, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$95, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$96	.dwtag  DW_TAG_member
	.dwattr $C$DW$96, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$96, DW_AT_name("TALK")
	.dwattr $C$DW$96, DW_AT_TI_symbol_name("_TALK")
	.dwattr $C$DW$96, DW_AT_bit_offset(0x0e)
	.dwattr $C$DW$96, DW_AT_bit_size(0x01)
	.dwattr $C$DW$96, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$96, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$97	.dwtag  DW_TAG_member
	.dwattr $C$DW$97, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$97, DW_AT_name("MASTER_SLAVE")
	.dwattr $C$DW$97, DW_AT_TI_symbol_name("_MASTER_SLAVE")
	.dwattr $C$DW$97, DW_AT_bit_offset(0x0d)
	.dwattr $C$DW$97, DW_AT_bit_size(0x01)
	.dwattr $C$DW$97, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$97, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$98	.dwtag  DW_TAG_member
	.dwattr $C$DW$98, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$98, DW_AT_name("CLK_PHASE")
	.dwattr $C$DW$98, DW_AT_TI_symbol_name("_CLK_PHASE")
	.dwattr $C$DW$98, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$98, DW_AT_bit_size(0x01)
	.dwattr $C$DW$98, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$98, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$99	.dwtag  DW_TAG_member
	.dwattr $C$DW$99, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$99, DW_AT_name("OVERRUNINTENA")
	.dwattr $C$DW$99, DW_AT_TI_symbol_name("_OVERRUNINTENA")
	.dwattr $C$DW$99, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$99, DW_AT_bit_size(0x01)
	.dwattr $C$DW$99, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$99, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$100	.dwtag  DW_TAG_member
	.dwattr $C$DW$100, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$100, DW_AT_name("rsvd1")
	.dwattr $C$DW$100, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$100, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$100, DW_AT_bit_size(0x0b)
	.dwattr $C$DW$100, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$100, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$22


$C$DW$T$23	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$23, DW_AT_name("SPICTL_REG")
	.dwattr $C$DW$T$23, DW_AT_byte_size(0x01)
$C$DW$101	.dwtag  DW_TAG_member
	.dwattr $C$DW$101, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$101, DW_AT_name("all")
	.dwattr $C$DW$101, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$101, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$101, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$102	.dwtag  DW_TAG_member
	.dwattr $C$DW$102, DW_AT_type(*$C$DW$T$22)
	.dwattr $C$DW$102, DW_AT_name("bit")
	.dwattr $C$DW$102, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$102, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$102, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$23


$C$DW$T$24	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$24, DW_AT_name("SPIFFCT_BITS")
	.dwattr $C$DW$T$24, DW_AT_byte_size(0x01)
$C$DW$103	.dwtag  DW_TAG_member
	.dwattr $C$DW$103, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$103, DW_AT_name("TXDLY")
	.dwattr $C$DW$103, DW_AT_TI_symbol_name("_TXDLY")
	.dwattr $C$DW$103, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$103, DW_AT_bit_size(0x08)
	.dwattr $C$DW$103, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$103, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$104	.dwtag  DW_TAG_member
	.dwattr $C$DW$104, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$104, DW_AT_name("rsvd1")
	.dwattr $C$DW$104, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$104, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$104, DW_AT_bit_size(0x08)
	.dwattr $C$DW$104, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$104, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$24


$C$DW$T$25	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$25, DW_AT_name("SPIFFCT_REG")
	.dwattr $C$DW$T$25, DW_AT_byte_size(0x01)
$C$DW$105	.dwtag  DW_TAG_member
	.dwattr $C$DW$105, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$105, DW_AT_name("all")
	.dwattr $C$DW$105, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$105, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$105, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$106	.dwtag  DW_TAG_member
	.dwattr $C$DW$106, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$106, DW_AT_name("bit")
	.dwattr $C$DW$106, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$106, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$106, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$25


$C$DW$T$26	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$26, DW_AT_name("SPIFFRX_BITS")
	.dwattr $C$DW$T$26, DW_AT_byte_size(0x01)
$C$DW$107	.dwtag  DW_TAG_member
	.dwattr $C$DW$107, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$107, DW_AT_name("RXFFIL")
	.dwattr $C$DW$107, DW_AT_TI_symbol_name("_RXFFIL")
	.dwattr $C$DW$107, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$107, DW_AT_bit_size(0x05)
	.dwattr $C$DW$107, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$107, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$108	.dwtag  DW_TAG_member
	.dwattr $C$DW$108, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$108, DW_AT_name("RXFFIENA")
	.dwattr $C$DW$108, DW_AT_TI_symbol_name("_RXFFIENA")
	.dwattr $C$DW$108, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$108, DW_AT_bit_size(0x01)
	.dwattr $C$DW$108, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$108, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$109	.dwtag  DW_TAG_member
	.dwattr $C$DW$109, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$109, DW_AT_name("RXFFINTCLR")
	.dwattr $C$DW$109, DW_AT_TI_symbol_name("_RXFFINTCLR")
	.dwattr $C$DW$109, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$109, DW_AT_bit_size(0x01)
	.dwattr $C$DW$109, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$109, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$110	.dwtag  DW_TAG_member
	.dwattr $C$DW$110, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$110, DW_AT_name("RXFFINT")
	.dwattr $C$DW$110, DW_AT_TI_symbol_name("_RXFFINT")
	.dwattr $C$DW$110, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$110, DW_AT_bit_size(0x01)
	.dwattr $C$DW$110, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$110, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$111	.dwtag  DW_TAG_member
	.dwattr $C$DW$111, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$111, DW_AT_name("RXFFST")
	.dwattr $C$DW$111, DW_AT_TI_symbol_name("_RXFFST")
	.dwattr $C$DW$111, DW_AT_bit_offset(0x03)
	.dwattr $C$DW$111, DW_AT_bit_size(0x05)
	.dwattr $C$DW$111, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$111, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$112	.dwtag  DW_TAG_member
	.dwattr $C$DW$112, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$112, DW_AT_name("RXFIFORESET")
	.dwattr $C$DW$112, DW_AT_TI_symbol_name("_RXFIFORESET")
	.dwattr $C$DW$112, DW_AT_bit_offset(0x02)
	.dwattr $C$DW$112, DW_AT_bit_size(0x01)
	.dwattr $C$DW$112, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$112, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$113	.dwtag  DW_TAG_member
	.dwattr $C$DW$113, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$113, DW_AT_name("RXFFOVFCLR")
	.dwattr $C$DW$113, DW_AT_TI_symbol_name("_RXFFOVFCLR")
	.dwattr $C$DW$113, DW_AT_bit_offset(0x01)
	.dwattr $C$DW$113, DW_AT_bit_size(0x01)
	.dwattr $C$DW$113, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$113, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$114	.dwtag  DW_TAG_member
	.dwattr $C$DW$114, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$114, DW_AT_name("RXFFOVF")
	.dwattr $C$DW$114, DW_AT_TI_symbol_name("_RXFFOVF")
	.dwattr $C$DW$114, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$114, DW_AT_bit_size(0x01)
	.dwattr $C$DW$114, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$114, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$26


$C$DW$T$27	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$27, DW_AT_name("SPIFFRX_REG")
	.dwattr $C$DW$T$27, DW_AT_byte_size(0x01)
$C$DW$115	.dwtag  DW_TAG_member
	.dwattr $C$DW$115, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$115, DW_AT_name("all")
	.dwattr $C$DW$115, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$115, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$115, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$116	.dwtag  DW_TAG_member
	.dwattr $C$DW$116, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$116, DW_AT_name("bit")
	.dwattr $C$DW$116, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$116, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$116, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$27


$C$DW$T$28	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$28, DW_AT_name("SPIFFTX_BITS")
	.dwattr $C$DW$T$28, DW_AT_byte_size(0x01)
$C$DW$117	.dwtag  DW_TAG_member
	.dwattr $C$DW$117, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$117, DW_AT_name("TXFFIL")
	.dwattr $C$DW$117, DW_AT_TI_symbol_name("_TXFFIL")
	.dwattr $C$DW$117, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$117, DW_AT_bit_size(0x05)
	.dwattr $C$DW$117, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$117, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$118	.dwtag  DW_TAG_member
	.dwattr $C$DW$118, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$118, DW_AT_name("TXFFIENA")
	.dwattr $C$DW$118, DW_AT_TI_symbol_name("_TXFFIENA")
	.dwattr $C$DW$118, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$118, DW_AT_bit_size(0x01)
	.dwattr $C$DW$118, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$118, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$119	.dwtag  DW_TAG_member
	.dwattr $C$DW$119, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$119, DW_AT_name("TXFFINTCLR")
	.dwattr $C$DW$119, DW_AT_TI_symbol_name("_TXFFINTCLR")
	.dwattr $C$DW$119, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$119, DW_AT_bit_size(0x01)
	.dwattr $C$DW$119, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$119, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$120	.dwtag  DW_TAG_member
	.dwattr $C$DW$120, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$120, DW_AT_name("TXFFINT")
	.dwattr $C$DW$120, DW_AT_TI_symbol_name("_TXFFINT")
	.dwattr $C$DW$120, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$120, DW_AT_bit_size(0x01)
	.dwattr $C$DW$120, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$120, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$121	.dwtag  DW_TAG_member
	.dwattr $C$DW$121, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$121, DW_AT_name("TXFFST")
	.dwattr $C$DW$121, DW_AT_TI_symbol_name("_TXFFST")
	.dwattr $C$DW$121, DW_AT_bit_offset(0x03)
	.dwattr $C$DW$121, DW_AT_bit_size(0x05)
	.dwattr $C$DW$121, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$121, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$122	.dwtag  DW_TAG_member
	.dwattr $C$DW$122, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$122, DW_AT_name("TXFIFO")
	.dwattr $C$DW$122, DW_AT_TI_symbol_name("_TXFIFO")
	.dwattr $C$DW$122, DW_AT_bit_offset(0x02)
	.dwattr $C$DW$122, DW_AT_bit_size(0x01)
	.dwattr $C$DW$122, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$122, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$123	.dwtag  DW_TAG_member
	.dwattr $C$DW$123, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$123, DW_AT_name("SPIFFENA")
	.dwattr $C$DW$123, DW_AT_TI_symbol_name("_SPIFFENA")
	.dwattr $C$DW$123, DW_AT_bit_offset(0x01)
	.dwattr $C$DW$123, DW_AT_bit_size(0x01)
	.dwattr $C$DW$123, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$123, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$124	.dwtag  DW_TAG_member
	.dwattr $C$DW$124, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$124, DW_AT_name("SPIRST")
	.dwattr $C$DW$124, DW_AT_TI_symbol_name("_SPIRST")
	.dwattr $C$DW$124, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$124, DW_AT_bit_size(0x01)
	.dwattr $C$DW$124, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$124, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$28


$C$DW$T$29	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$29, DW_AT_name("SPIFFTX_REG")
	.dwattr $C$DW$T$29, DW_AT_byte_size(0x01)
$C$DW$125	.dwtag  DW_TAG_member
	.dwattr $C$DW$125, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$125, DW_AT_name("all")
	.dwattr $C$DW$125, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$125, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$125, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$126	.dwtag  DW_TAG_member
	.dwattr $C$DW$126, DW_AT_type(*$C$DW$T$28)
	.dwattr $C$DW$126, DW_AT_name("bit")
	.dwattr $C$DW$126, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$126, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$126, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$29


$C$DW$T$30	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$30, DW_AT_name("SPIPRI_BITS")
	.dwattr $C$DW$T$30, DW_AT_byte_size(0x01)
$C$DW$127	.dwtag  DW_TAG_member
	.dwattr $C$DW$127, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$127, DW_AT_name("TRIWIRE")
	.dwattr $C$DW$127, DW_AT_TI_symbol_name("_TRIWIRE")
	.dwattr $C$DW$127, DW_AT_bit_offset(0x0f)
	.dwattr $C$DW$127, DW_AT_bit_size(0x01)
	.dwattr $C$DW$127, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$127, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$128	.dwtag  DW_TAG_member
	.dwattr $C$DW$128, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$128, DW_AT_name("STEINV")
	.dwattr $C$DW$128, DW_AT_TI_symbol_name("_STEINV")
	.dwattr $C$DW$128, DW_AT_bit_offset(0x0e)
	.dwattr $C$DW$128, DW_AT_bit_size(0x01)
	.dwattr $C$DW$128, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$128, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$129	.dwtag  DW_TAG_member
	.dwattr $C$DW$129, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$129, DW_AT_name("rsvd1")
	.dwattr $C$DW$129, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$129, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$129, DW_AT_bit_size(0x02)
	.dwattr $C$DW$129, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$129, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$130	.dwtag  DW_TAG_member
	.dwattr $C$DW$130, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$130, DW_AT_name("FREE")
	.dwattr $C$DW$130, DW_AT_TI_symbol_name("_FREE")
	.dwattr $C$DW$130, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$130, DW_AT_bit_size(0x01)
	.dwattr $C$DW$130, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$130, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$131	.dwtag  DW_TAG_member
	.dwattr $C$DW$131, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$131, DW_AT_name("SOFT")
	.dwattr $C$DW$131, DW_AT_TI_symbol_name("_SOFT")
	.dwattr $C$DW$131, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$131, DW_AT_bit_size(0x01)
	.dwattr $C$DW$131, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$131, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$132	.dwtag  DW_TAG_member
	.dwattr $C$DW$132, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$132, DW_AT_name("PRIORITY")
	.dwattr $C$DW$132, DW_AT_TI_symbol_name("_PRIORITY")
	.dwattr $C$DW$132, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$132, DW_AT_bit_size(0x01)
	.dwattr $C$DW$132, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$132, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$133	.dwtag  DW_TAG_member
	.dwattr $C$DW$133, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$133, DW_AT_name("rsvd2")
	.dwattr $C$DW$133, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$133, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$133, DW_AT_bit_size(0x09)
	.dwattr $C$DW$133, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$133, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$30


$C$DW$T$31	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$31, DW_AT_name("SPIPRI_REG")
	.dwattr $C$DW$T$31, DW_AT_byte_size(0x01)
$C$DW$134	.dwtag  DW_TAG_member
	.dwattr $C$DW$134, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$134, DW_AT_name("all")
	.dwattr $C$DW$134, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$134, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$134, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$135	.dwtag  DW_TAG_member
	.dwattr $C$DW$135, DW_AT_type(*$C$DW$T$30)
	.dwattr $C$DW$135, DW_AT_name("bit")
	.dwattr $C$DW$135, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$135, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$135, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$31


$C$DW$T$32	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$32, DW_AT_name("SPISTS_BITS")
	.dwattr $C$DW$T$32, DW_AT_byte_size(0x01)
$C$DW$136	.dwtag  DW_TAG_member
	.dwattr $C$DW$136, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$136, DW_AT_name("rsvd1")
	.dwattr $C$DW$136, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$136, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$136, DW_AT_bit_size(0x05)
	.dwattr $C$DW$136, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$136, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$137	.dwtag  DW_TAG_member
	.dwattr $C$DW$137, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$137, DW_AT_name("BUFFULL_FLAG")
	.dwattr $C$DW$137, DW_AT_TI_symbol_name("_BUFFULL_FLAG")
	.dwattr $C$DW$137, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$137, DW_AT_bit_size(0x01)
	.dwattr $C$DW$137, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$137, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$138	.dwtag  DW_TAG_member
	.dwattr $C$DW$138, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$138, DW_AT_name("INT_FLAG")
	.dwattr $C$DW$138, DW_AT_TI_symbol_name("_INT_FLAG")
	.dwattr $C$DW$138, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$138, DW_AT_bit_size(0x01)
	.dwattr $C$DW$138, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$138, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$139	.dwtag  DW_TAG_member
	.dwattr $C$DW$139, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$139, DW_AT_name("OVERRUN_FLAG")
	.dwattr $C$DW$139, DW_AT_TI_symbol_name("_OVERRUN_FLAG")
	.dwattr $C$DW$139, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$139, DW_AT_bit_size(0x01)
	.dwattr $C$DW$139, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$139, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$140	.dwtag  DW_TAG_member
	.dwattr $C$DW$140, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$140, DW_AT_name("rsvd2")
	.dwattr $C$DW$140, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$140, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$140, DW_AT_bit_size(0x08)
	.dwattr $C$DW$140, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$140, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$32


$C$DW$T$33	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$33, DW_AT_name("SPISTS_REG")
	.dwattr $C$DW$T$33, DW_AT_byte_size(0x01)
$C$DW$141	.dwtag  DW_TAG_member
	.dwattr $C$DW$141, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$141, DW_AT_name("all")
	.dwattr $C$DW$141, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$141, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$141, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$142	.dwtag  DW_TAG_member
	.dwattr $C$DW$142, DW_AT_type(*$C$DW$T$32)
	.dwattr $C$DW$142, DW_AT_name("bit")
	.dwattr $C$DW$142, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$142, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$142, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$33


$C$DW$T$35	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$35, DW_AT_name("SPI_REGS")
	.dwattr $C$DW$T$35, DW_AT_byte_size(0x10)
$C$DW$143	.dwtag  DW_TAG_member
	.dwattr $C$DW$143, DW_AT_type(*$C$DW$T$21)
	.dwattr $C$DW$143, DW_AT_name("SPICCR")
	.dwattr $C$DW$143, DW_AT_TI_symbol_name("_SPICCR")
	.dwattr $C$DW$143, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$143, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$144	.dwtag  DW_TAG_member
	.dwattr $C$DW$144, DW_AT_type(*$C$DW$T$23)
	.dwattr $C$DW$144, DW_AT_name("SPICTL")
	.dwattr $C$DW$144, DW_AT_TI_symbol_name("_SPICTL")
	.dwattr $C$DW$144, DW_AT_data_member_location[DW_OP_plus_uconst 0x1]
	.dwattr $C$DW$144, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$145	.dwtag  DW_TAG_member
	.dwattr $C$DW$145, DW_AT_type(*$C$DW$T$33)
	.dwattr $C$DW$145, DW_AT_name("SPISTS")
	.dwattr $C$DW$145, DW_AT_TI_symbol_name("_SPISTS")
	.dwattr $C$DW$145, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$145, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$146	.dwtag  DW_TAG_member
	.dwattr $C$DW$146, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$146, DW_AT_name("rsvd1")
	.dwattr $C$DW$146, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$146, DW_AT_data_member_location[DW_OP_plus_uconst 0x3]
	.dwattr $C$DW$146, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$147	.dwtag  DW_TAG_member
	.dwattr $C$DW$147, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$147, DW_AT_name("SPIBRR")
	.dwattr $C$DW$147, DW_AT_TI_symbol_name("_SPIBRR")
	.dwattr $C$DW$147, DW_AT_data_member_location[DW_OP_plus_uconst 0x4]
	.dwattr $C$DW$147, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$148	.dwtag  DW_TAG_member
	.dwattr $C$DW$148, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$148, DW_AT_name("rsvd2")
	.dwattr $C$DW$148, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$148, DW_AT_data_member_location[DW_OP_plus_uconst 0x5]
	.dwattr $C$DW$148, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$149	.dwtag  DW_TAG_member
	.dwattr $C$DW$149, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$149, DW_AT_name("SPIRXEMU")
	.dwattr $C$DW$149, DW_AT_TI_symbol_name("_SPIRXEMU")
	.dwattr $C$DW$149, DW_AT_data_member_location[DW_OP_plus_uconst 0x6]
	.dwattr $C$DW$149, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$150	.dwtag  DW_TAG_member
	.dwattr $C$DW$150, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$150, DW_AT_name("SPIRXBUF")
	.dwattr $C$DW$150, DW_AT_TI_symbol_name("_SPIRXBUF")
	.dwattr $C$DW$150, DW_AT_data_member_location[DW_OP_plus_uconst 0x7]
	.dwattr $C$DW$150, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$151	.dwtag  DW_TAG_member
	.dwattr $C$DW$151, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$151, DW_AT_name("SPITXBUF")
	.dwattr $C$DW$151, DW_AT_TI_symbol_name("_SPITXBUF")
	.dwattr $C$DW$151, DW_AT_data_member_location[DW_OP_plus_uconst 0x8]
	.dwattr $C$DW$151, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$152	.dwtag  DW_TAG_member
	.dwattr $C$DW$152, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$152, DW_AT_name("SPIDAT")
	.dwattr $C$DW$152, DW_AT_TI_symbol_name("_SPIDAT")
	.dwattr $C$DW$152, DW_AT_data_member_location[DW_OP_plus_uconst 0x9]
	.dwattr $C$DW$152, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$153	.dwtag  DW_TAG_member
	.dwattr $C$DW$153, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$153, DW_AT_name("SPIFFTX")
	.dwattr $C$DW$153, DW_AT_TI_symbol_name("_SPIFFTX")
	.dwattr $C$DW$153, DW_AT_data_member_location[DW_OP_plus_uconst 0xa]
	.dwattr $C$DW$153, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$154	.dwtag  DW_TAG_member
	.dwattr $C$DW$154, DW_AT_type(*$C$DW$T$27)
	.dwattr $C$DW$154, DW_AT_name("SPIFFRX")
	.dwattr $C$DW$154, DW_AT_TI_symbol_name("_SPIFFRX")
	.dwattr $C$DW$154, DW_AT_data_member_location[DW_OP_plus_uconst 0xb]
	.dwattr $C$DW$154, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$155	.dwtag  DW_TAG_member
	.dwattr $C$DW$155, DW_AT_type(*$C$DW$T$25)
	.dwattr $C$DW$155, DW_AT_name("SPIFFCT")
	.dwattr $C$DW$155, DW_AT_TI_symbol_name("_SPIFFCT")
	.dwattr $C$DW$155, DW_AT_data_member_location[DW_OP_plus_uconst 0xc]
	.dwattr $C$DW$155, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$156	.dwtag  DW_TAG_member
	.dwattr $C$DW$156, DW_AT_type(*$C$DW$T$34)
	.dwattr $C$DW$156, DW_AT_name("rsvd3")
	.dwattr $C$DW$156, DW_AT_TI_symbol_name("_rsvd3")
	.dwattr $C$DW$156, DW_AT_data_member_location[DW_OP_plus_uconst 0xd]
	.dwattr $C$DW$156, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$157	.dwtag  DW_TAG_member
	.dwattr $C$DW$157, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$157, DW_AT_name("SPIPRI")
	.dwattr $C$DW$157, DW_AT_TI_symbol_name("_SPIPRI")
	.dwattr $C$DW$157, DW_AT_data_member_location[DW_OP_plus_uconst 0xf]
	.dwattr $C$DW$157, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$35

$C$DW$158	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$158, DW_AT_type(*$C$DW$T$35)

$C$DW$T$47	.dwtag  DW_TAG_volatile_type
	.dwattr $C$DW$T$47, DW_AT_type(*$C$DW$158)

$C$DW$T$48	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$48, DW_AT_type(*$C$DW$T$47)
	.dwattr $C$DW$T$48, DW_AT_address_class(0x20)


$C$DW$T$50	.dwtag  DW_TAG_enumeration_type
	.dwattr $C$DW$T$50, DW_AT_name("_MW_SPI_FirstBitTransfer_Type")
	.dwattr $C$DW$T$50, DW_AT_byte_size(0x01)
$C$DW$159	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$159, DW_AT_name("MW_SPI_LEAST_SIGNIFICANT_BIT_FIRST")
	.dwattr $C$DW$159, DW_AT_const_value(0x00)

$C$DW$160	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$160, DW_AT_name("MW_SPI_MOST_SIGNIFICANT_BIT_FIRST")
	.dwattr $C$DW$160, DW_AT_const_value(0x01)

	.dwendtag $C$DW$T$50

$C$DW$T$51	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$51, DW_AT_name("MW_SPI_FirstBitTransfer_Type")
	.dwattr $C$DW$T$51, DW_AT_type(*$C$DW$T$50)
	.dwattr $C$DW$T$51, DW_AT_language(DW_LANG_C)


$C$DW$T$52	.dwtag  DW_TAG_enumeration_type
	.dwattr $C$DW$T$52, DW_AT_name("_MW_SPI_Mode_type")
	.dwattr $C$DW$T$52, DW_AT_byte_size(0x01)
$C$DW$161	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$161, DW_AT_name("MW_SPI_MODE_0")
	.dwattr $C$DW$161, DW_AT_const_value(0x00)

$C$DW$162	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$162, DW_AT_name("MW_SPI_MODE_1")
	.dwattr $C$DW$162, DW_AT_const_value(0x01)

$C$DW$163	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$163, DW_AT_name("MW_SPI_MODE_2")
	.dwattr $C$DW$163, DW_AT_const_value(0x02)

$C$DW$164	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$164, DW_AT_name("MW_SPI_MODE_3")
	.dwattr $C$DW$164, DW_AT_const_value(0x03)

	.dwendtag $C$DW$T$52

$C$DW$T$53	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$53, DW_AT_name("MW_SPI_Mode_type")
	.dwattr $C$DW$T$53, DW_AT_type(*$C$DW$T$52)
	.dwattr $C$DW$T$53, DW_AT_language(DW_LANG_C)


$C$DW$T$54	.dwtag  DW_TAG_enumeration_type
	.dwattr $C$DW$T$54, DW_AT_name("_MW_SPI_Status_Type")
	.dwattr $C$DW$T$54, DW_AT_byte_size(0x01)
$C$DW$165	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$165, DW_AT_name("MW_SPI_SUCCESS")
	.dwattr $C$DW$165, DW_AT_const_value(0x00)

$C$DW$166	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$166, DW_AT_name("MW_SPI_BUSY")
	.dwattr $C$DW$166, DW_AT_const_value(0x01)

$C$DW$167	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$167, DW_AT_name("MW_SPI_BUS_ERROR")
	.dwattr $C$DW$167, DW_AT_const_value(0x02)

$C$DW$168	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$168, DW_AT_name("MW_SPI_BUS_NOT_IN_USE")
	.dwattr $C$DW$168, DW_AT_const_value(0x04)

$C$DW$169	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$169, DW_AT_name("MW_SPI_BUS_NOT_AVAILABLE")
	.dwattr $C$DW$169, DW_AT_const_value(0x08)

	.dwendtag $C$DW$T$54

$C$DW$T$55	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$55, DW_AT_name("MW_SPI_Status_Type")
	.dwattr $C$DW$T$55, DW_AT_type(*$C$DW$T$54)
	.dwattr $C$DW$T$55, DW_AT_language(DW_LANG_C)


$C$DW$T$38	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$38, DW_AT_name("_MW_SpiObj")
	.dwattr $C$DW$T$38, DW_AT_byte_size(0x06)
$C$DW$170	.dwtag  DW_TAG_member
	.dwattr $C$DW$170, DW_AT_type(*$C$DW$T$37)
	.dwattr $C$DW$170, DW_AT_name("spi_base_address")
	.dwattr $C$DW$170, DW_AT_TI_symbol_name("_spi_base_address")
	.dwattr $C$DW$170, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$170, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$171	.dwtag  DW_TAG_member
	.dwattr $C$DW$171, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$171, DW_AT_name("spi_clk_mode")
	.dwattr $C$DW$171, DW_AT_TI_symbol_name("_spi_clk_mode")
	.dwattr $C$DW$171, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$171, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$172	.dwtag  DW_TAG_member
	.dwattr $C$DW$172, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$172, DW_AT_name("charLength")
	.dwattr $C$DW$172, DW_AT_TI_symbol_name("_charLength")
	.dwattr $C$DW$172, DW_AT_data_member_location[DW_OP_plus_uconst 0x3]
	.dwattr $C$DW$172, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$173	.dwtag  DW_TAG_member
	.dwattr $C$DW$173, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$173, DW_AT_name("fifoLevel")
	.dwattr $C$DW$173, DW_AT_TI_symbol_name("_fifoLevel")
	.dwattr $C$DW$173, DW_AT_data_member_location[DW_OP_plus_uconst 0x4]
	.dwattr $C$DW$173, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$174	.dwtag  DW_TAG_member
	.dwattr $C$DW$174, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$174, DW_AT_name("txInterrupt")
	.dwattr $C$DW$174, DW_AT_TI_symbol_name("_txInterrupt")
	.dwattr $C$DW$174, DW_AT_data_member_location[DW_OP_plus_uconst 0x5]
	.dwattr $C$DW$174, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$38

$C$DW$T$67	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$67, DW_AT_name("MW_SpiObj")
	.dwattr $C$DW$T$67, DW_AT_type(*$C$DW$T$38)
	.dwattr $C$DW$T$67, DW_AT_language(DW_LANG_C)

$C$DW$T$68	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$68, DW_AT_type(*$C$DW$T$67)
	.dwattr $C$DW$T$68, DW_AT_address_class(0x20)

$C$DW$T$69	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$69, DW_AT_name("MW_SpiHandle")
	.dwattr $C$DW$T$69, DW_AT_type(*$C$DW$T$68)
	.dwattr $C$DW$T$69, DW_AT_language(DW_LANG_C)

$C$DW$T$2	.dwtag  DW_TAG_unspecified_type
	.dwattr $C$DW$T$2, DW_AT_name("void")

$C$DW$T$3	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$3, DW_AT_type(*$C$DW$T$2)
	.dwattr $C$DW$T$3, DW_AT_address_class(0x20)

$C$DW$T$56	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$56, DW_AT_name("MW_Handle_Type")
	.dwattr $C$DW$T$56, DW_AT_type(*$C$DW$T$3)
	.dwattr $C$DW$T$56, DW_AT_language(DW_LANG_C)

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


$C$DW$T$34	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$34, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$34, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$34, DW_AT_byte_size(0x02)
$C$DW$175	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$175, DW_AT_upper_bound(0x01)

	.dwendtag $C$DW$T$34

$C$DW$T$36	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$36, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$36, DW_AT_address_class(0x20)

$C$DW$T$37	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$37, DW_AT_name("SPI_REG_ADDRESS")
	.dwattr $C$DW$T$37, DW_AT_type(*$C$DW$T$36)
	.dwattr $C$DW$T$37, DW_AT_language(DW_LANG_C)

$C$DW$T$79	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$79, DW_AT_name("uint16_T")
	.dwattr $C$DW$T$79, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$79, DW_AT_language(DW_LANG_C)

$C$DW$T$80	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$80, DW_AT_type(*$C$DW$T$79)
	.dwattr $C$DW$T$80, DW_AT_address_class(0x20)

$C$DW$T$57	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$57, DW_AT_name("uint8_T")
	.dwattr $C$DW$T$57, DW_AT_type(*$C$DW$T$11)
	.dwattr $C$DW$T$57, DW_AT_language(DW_LANG_C)

$C$DW$T$64	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$64, DW_AT_type(*$C$DW$T$57)
	.dwattr $C$DW$T$64, DW_AT_address_class(0x20)

$C$DW$176	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$176, DW_AT_type(*$C$DW$T$57)

$C$DW$T$62	.dwtag  DW_TAG_const_type
	.dwattr $C$DW$T$62, DW_AT_type(*$C$DW$176)

$C$DW$T$63	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$63, DW_AT_type(*$C$DW$T$62)
	.dwattr $C$DW$T$63, DW_AT_address_class(0x20)

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

$C$DW$T$70	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$70, DW_AT_name("Uint32")
	.dwattr $C$DW$T$70, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$70, DW_AT_language(DW_LANG_C)

$C$DW$T$59	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$59, DW_AT_name("uint32_T")
	.dwattr $C$DW$T$59, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$59, DW_AT_language(DW_LANG_C)

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

$C$DW$177	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$177, DW_AT_name("AL")
	.dwattr $C$DW$177, DW_AT_location[DW_OP_reg0]

$C$DW$178	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$178, DW_AT_name("AH")
	.dwattr $C$DW$178, DW_AT_location[DW_OP_reg1]

$C$DW$179	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$179, DW_AT_name("PL")
	.dwattr $C$DW$179, DW_AT_location[DW_OP_reg2]

$C$DW$180	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$180, DW_AT_name("PH")
	.dwattr $C$DW$180, DW_AT_location[DW_OP_reg3]

$C$DW$181	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$181, DW_AT_name("SP")
	.dwattr $C$DW$181, DW_AT_location[DW_OP_reg20]

$C$DW$182	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$182, DW_AT_name("XT")
	.dwattr $C$DW$182, DW_AT_location[DW_OP_reg21]

$C$DW$183	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$183, DW_AT_name("T")
	.dwattr $C$DW$183, DW_AT_location[DW_OP_reg22]

$C$DW$184	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$184, DW_AT_name("ST0")
	.dwattr $C$DW$184, DW_AT_location[DW_OP_reg23]

$C$DW$185	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$185, DW_AT_name("ST1")
	.dwattr $C$DW$185, DW_AT_location[DW_OP_reg24]

$C$DW$186	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$186, DW_AT_name("PC")
	.dwattr $C$DW$186, DW_AT_location[DW_OP_reg25]

$C$DW$187	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$187, DW_AT_name("RPC")
	.dwattr $C$DW$187, DW_AT_location[DW_OP_reg26]

$C$DW$188	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$188, DW_AT_name("FP")
	.dwattr $C$DW$188, DW_AT_location[DW_OP_reg28]

$C$DW$189	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$189, DW_AT_name("DP")
	.dwattr $C$DW$189, DW_AT_location[DW_OP_reg29]

$C$DW$190	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$190, DW_AT_name("SXM")
	.dwattr $C$DW$190, DW_AT_location[DW_OP_reg30]

$C$DW$191	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$191, DW_AT_name("PM")
	.dwattr $C$DW$191, DW_AT_location[DW_OP_reg31]

$C$DW$192	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$192, DW_AT_name("OVM")
	.dwattr $C$DW$192, DW_AT_location[DW_OP_regx 0x20]

$C$DW$193	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$193, DW_AT_name("PAGE0")
	.dwattr $C$DW$193, DW_AT_location[DW_OP_regx 0x21]

$C$DW$194	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$194, DW_AT_name("AMODE")
	.dwattr $C$DW$194, DW_AT_location[DW_OP_regx 0x22]

$C$DW$195	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$195, DW_AT_name("EALLOW")
	.dwattr $C$DW$195, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$196	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$196, DW_AT_name("INTM")
	.dwattr $C$DW$196, DW_AT_location[DW_OP_regx 0x23]

$C$DW$197	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$197, DW_AT_name("IFR")
	.dwattr $C$DW$197, DW_AT_location[DW_OP_regx 0x24]

$C$DW$198	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$198, DW_AT_name("IER")
	.dwattr $C$DW$198, DW_AT_location[DW_OP_regx 0x25]

$C$DW$199	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$199, DW_AT_name("V")
	.dwattr $C$DW$199, DW_AT_location[DW_OP_regx 0x26]

$C$DW$200	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$200, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$200, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$201	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$201, DW_AT_name("VOL")
	.dwattr $C$DW$201, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$202	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$202, DW_AT_name("AR0")
	.dwattr $C$DW$202, DW_AT_location[DW_OP_reg4]

$C$DW$203	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$203, DW_AT_name("XAR0")
	.dwattr $C$DW$203, DW_AT_location[DW_OP_reg5]

$C$DW$204	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$204, DW_AT_name("AR1")
	.dwattr $C$DW$204, DW_AT_location[DW_OP_reg6]

$C$DW$205	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$205, DW_AT_name("XAR1")
	.dwattr $C$DW$205, DW_AT_location[DW_OP_reg7]

$C$DW$206	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$206, DW_AT_name("AR2")
	.dwattr $C$DW$206, DW_AT_location[DW_OP_reg8]

$C$DW$207	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$207, DW_AT_name("XAR2")
	.dwattr $C$DW$207, DW_AT_location[DW_OP_reg9]

$C$DW$208	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$208, DW_AT_name("AR3")
	.dwattr $C$DW$208, DW_AT_location[DW_OP_reg10]

$C$DW$209	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$209, DW_AT_name("XAR3")
	.dwattr $C$DW$209, DW_AT_location[DW_OP_reg11]

$C$DW$210	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$210, DW_AT_name("AR4")
	.dwattr $C$DW$210, DW_AT_location[DW_OP_reg12]

$C$DW$211	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$211, DW_AT_name("XAR4")
	.dwattr $C$DW$211, DW_AT_location[DW_OP_reg13]

$C$DW$212	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$212, DW_AT_name("AR5")
	.dwattr $C$DW$212, DW_AT_location[DW_OP_reg14]

$C$DW$213	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$213, DW_AT_name("XAR5")
	.dwattr $C$DW$213, DW_AT_location[DW_OP_reg15]

$C$DW$214	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$214, DW_AT_name("AR6")
	.dwattr $C$DW$214, DW_AT_location[DW_OP_reg16]

$C$DW$215	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$215, DW_AT_name("XAR6")
	.dwattr $C$DW$215, DW_AT_location[DW_OP_reg17]

$C$DW$216	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$216, DW_AT_name("AR7")
	.dwattr $C$DW$216, DW_AT_location[DW_OP_reg18]

$C$DW$217	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$217, DW_AT_name("XAR7")
	.dwattr $C$DW$217, DW_AT_location[DW_OP_reg19]

$C$DW$218	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$218, DW_AT_name("R0H")
	.dwattr $C$DW$218, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$219	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$219, DW_AT_name("R1H")
	.dwattr $C$DW$219, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$220	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$220, DW_AT_name("R2H")
	.dwattr $C$DW$220, DW_AT_location[DW_OP_regx 0x33]

$C$DW$221	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$221, DW_AT_name("R3H")
	.dwattr $C$DW$221, DW_AT_location[DW_OP_regx 0x37]

$C$DW$222	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$222, DW_AT_name("R4H")
	.dwattr $C$DW$222, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$223	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$223, DW_AT_name("R5H")
	.dwattr $C$DW$223, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$224	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$224, DW_AT_name("R6H")
	.dwattr $C$DW$224, DW_AT_location[DW_OP_regx 0x43]

$C$DW$225	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$225, DW_AT_name("R7H")
	.dwattr $C$DW$225, DW_AT_location[DW_OP_regx 0x47]

$C$DW$226	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$226, DW_AT_name("RB")
	.dwattr $C$DW$226, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$227	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$227, DW_AT_name("STF")
	.dwattr $C$DW$227, DW_AT_location[DW_OP_regx 0x28]

$C$DW$228	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$228, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$228, DW_AT_location[DW_OP_reg27]

$C$DW$229	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$229, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$229, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

