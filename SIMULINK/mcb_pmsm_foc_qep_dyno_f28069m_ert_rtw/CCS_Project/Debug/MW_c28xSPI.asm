;***************************************************************
;* TMS320C2000 G3 C/C++ Codegen                               PC v22.6.0.LTS *
;* Date/Time created: Wed Mar 12 10:08:16 2025                 *
;***************************************************************
	.compiler_opts --abi=coffabi --float_support=fpu32 --hll_source=on --mem_model:code=flat --mem_model:data=large --object_format=coff --silicon_errata_fpu1_workaround=on --silicon_version=28 --symdebug:dwarf --symdebug:dwarf_version=3 
	.asg	XAR2, FP

$C$DW$CU	.dwtag  DW_TAG_compile_unit
	.dwattr $C$DW$CU, DW_AT_name("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$CU, DW_AT_producer("TI TMS320C2000 G3 C/C++ Codegen PC v22.6.0.LTS Copyright (c) 1996-2018 Texas Instruments Incorporated")
	.dwattr $C$DW$CU, DW_AT_TI_version(0x01)
	.dwattr $C$DW$CU, DW_AT_comp_dir("E:\GiaotrinhDH\DATN\SIMULINK\mcb_pmsm_foc_qep_dyno_f28069m_ert_rtw\CCS_Project\Debug")
;**************************************************************
;* CINIT RECORDS                                              *
;**************************************************************
	.sect	".cinit:_SPI_oneTimeInit"
	.clink
	.align	1
	.field  	-$C$IR_1,16
	.field  	_SPI_oneTimeInit+0,32
	.bits		0,16
			; _SPI_oneTimeInit[0] @ 0
	.bits		0,16
			; _SPI_oneTimeInit[1] @ 16
	.bits		0,16
			; _SPI_oneTimeInit[2] @ 32
	.bits		0,16
			; _SPI_oneTimeInit[3] @ 48
$C$IR_1:	.set	4


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

	.global	_SPI_oneTimeInit
_SPI_oneTimeInit:	.usect	".ebss:_SPI_oneTimeInit",4,1,0
	.clink ".ebss:_SPI_oneTimeInit"
$C$DW$7	.dwtag  DW_TAG_variable
	.dwattr $C$DW$7, DW_AT_name("SPI_oneTimeInit")
	.dwattr $C$DW$7, DW_AT_TI_symbol_name("_SPI_oneTimeInit")
	.dwattr $C$DW$7, DW_AT_location[DW_OP_addr _SPI_oneTimeInit]
	.dwattr $C$DW$7, DW_AT_type(*$C$DW$T$53)
	.dwattr $C$DW$7, DW_AT_external

$C$DW$8	.dwtag  DW_TAG_variable
	.dwattr $C$DW$8, DW_AT_name("SpiaRegs")
	.dwattr $C$DW$8, DW_AT_TI_symbol_name("_SpiaRegs")
	.dwattr $C$DW$8, DW_AT_type(*$C$DW$T$41)
	.dwattr $C$DW$8, DW_AT_declaration
	.dwattr $C$DW$8, DW_AT_external

$C$DW$9	.dwtag  DW_TAG_variable
	.dwattr $C$DW$9, DW_AT_name("SpibRegs")
	.dwattr $C$DW$9, DW_AT_TI_symbol_name("_SpibRegs")
	.dwattr $C$DW$9, DW_AT_type(*$C$DW$T$41)
	.dwattr $C$DW$9, DW_AT_declaration
	.dwattr $C$DW$9, DW_AT_external

	.global	_mySpi
_mySpi:	.usect	".ebss:_mySpi",24,1,1
	.clink ".ebss:_mySpi"
$C$DW$10	.dwtag  DW_TAG_variable
	.dwattr $C$DW$10, DW_AT_name("mySpi")
	.dwattr $C$DW$10, DW_AT_TI_symbol_name("_mySpi")
	.dwattr $C$DW$10, DW_AT_location[DW_OP_addr _mySpi]
	.dwattr $C$DW$10, DW_AT_type(*$C$DW$T$48)
	.dwattr $C$DW$10, DW_AT_external

	.sblock	".ebss:_SPI_oneTimeInit"
	.sblock	".ebss:_mySpi"
;	D:\TiC2000_Install\CCS\ccs\tools\compiler\ti-cgt-c2000_22.6.0.LTS\bin\ac2000.exe -@C:\\Users\\21145\\AppData\\Local\\Temp\\{2F8648E2-B1D2-4A9C-8F89-B75486B3B4F8} 
	.sect	".text"
	.clink
	.global	_SPI_init

$C$DW$11	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$11, DW_AT_name("SPI_init")
	.dwattr $C$DW$11, DW_AT_low_pc(_SPI_init)
	.dwattr $C$DW$11, DW_AT_high_pc(0x00)
	.dwattr $C$DW$11, DW_AT_TI_symbol_name("_SPI_init")
	.dwattr $C$DW$11, DW_AT_external
	.dwattr $C$DW$11, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$11, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$11, DW_AT_TI_begin_line(0x19)
	.dwattr $C$DW$11, DW_AT_TI_begin_column(0x0e)
	.dwattr $C$DW$11, DW_AT_TI_max_frame_size(-10)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 26,column 1,is_stmt,address _SPI_init,isa 0

	.dwfde $C$DW$CIE, _SPI_init
$C$DW$12	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$12, DW_AT_name("SPIModule")
	.dwattr $C$DW$12, DW_AT_TI_symbol_name("_SPIModule")
	.dwattr $C$DW$12, DW_AT_type(*$C$DW$T$46)
	.dwattr $C$DW$12, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
;  25 | MW_SpiHandle SPI_init(Uint32 SPIModule)                                
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _SPI_init                     FR SIZE:   8           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            1 Parameter,  6 Auto,  0 SOE     *
;***************************************************************

_SPI_init:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -10
$C$DW$13	.dwtag  DW_TAG_variable
	.dwattr $C$DW$13, DW_AT_name("SPIModule")
	.dwattr $C$DW$13, DW_AT_TI_symbol_name("_SPIModule")
	.dwattr $C$DW$13, DW_AT_type(*$C$DW$T$46)
	.dwattr $C$DW$13, DW_AT_location[DW_OP_breg20 -4]

$C$DW$14	.dwtag  DW_TAG_variable
	.dwattr $C$DW$14, DW_AT_name("SPI_obj")
	.dwattr $C$DW$14, DW_AT_TI_symbol_name("_SPI_obj")
	.dwattr $C$DW$14, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$14, DW_AT_location[DW_OP_breg20 -6]

$C$DW$15	.dwtag  DW_TAG_variable
	.dwattr $C$DW$15, DW_AT_name("priority")
	.dwattr $C$DW$15, DW_AT_TI_symbol_name("_priority")
	.dwattr $C$DW$15, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$15, DW_AT_location[DW_OP_breg20 -7]

;----------------------------------------------------------------------
;  27 | Uint16 priority;                                                       
;----------------------------------------------------------------------
        MOVL      *-SP[4],ACC           ; [CPU_ALU] |26| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 28,column 26,is_stmt,isa 0
;----------------------------------------------------------------------
;  28 | MW_SpiHandle SPI_obj = (MW_SpiHandle)&mySpi[SPIModule];                
;  30 | #ifdef F2837X_REG_FORMAT                                               
;  31 | EALLOW;                                                                
;  32 | #ifdef MW_SPI_A                                                        
;  33 | CpuSysRegs.PCLKCR8.bit.SPI_A = 1;                                      
;  34 | #endif                                                                 
;  35 | #ifdef MW_SPI_B                                                        
;  36 | CpuSysRegs.PCLKCR8.bit.SPI_B = 1;                                      
;  37 | #endif                                                                 
;  38 | #ifdef MW_SPI_C                                                        
;  39 | CpuSysRegs.PCLKCR8.bit.SPI_C = 1;                                      
;  40 | #endif                                                                 
;  41 | #ifdef MW_SPI_D                                                        
;  42 | CpuSysRegs.PCLKCR8.bit.SPI_D = 1;                                      
;  43 | #endif                                                                 
;  44 | EDIS;                                                                  
;  45 | #endif                                                                 
;  47 | #ifdef MW_F281X                                                        
;  48 |         if (SPI_oneTimeInit[0] == 0)                                   
;  50 |             SPI_obj->spi_base_address = (SPI_REG_ADDRESS)&SpiaRegs;    
;  51 |             SPI_obj->spi_clk_mode = 0;                                 
;  52 |             SPI_obj->charLength = 0;                                   
;  53 |             SPI_obj->fifoLevel = MW_SPI_FIFO_LEVEL;                    
;  54 |             SPI_obj->txInterrupt = MW_SPI_TXINTERRUPTENABLE;           
;  55 |             if (MW_SPI_SUSPENSIONMODE == 0)                            
;  57 |                 priority = 0;                                          
;  59 |             else if (MW_SPI_SUSPENSIONMODE == 1)                       
;  61 |                 priority = 2;                                          
;  63 |             else                                                       
;  65 |                 priority = 1;                                          
;  68 |             EALLOW;                                                    
;  69 |             GpioMuxRegs.GPFMUX.all|=0x0007;      /* Select GPIOs to be
;     | SPI pins, Port F MUX - x000 0000 0000 0111*/                           
;  70 |             GpioMuxRegs.GPFMUX.all|=0x0008;      /* Select GPIOs to be
;     | SPISTE pin, Port F MUX - x000 0000 0000 1000*/                         
;  71 |             EDIS;                                                      
;  73 |             *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SP
;     | ICCR_SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT));                     
;  74 |             *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint
;     | 16)((MW_SPI_ENABLELOOPBACK & SPICCR_SPILBK_BITS) << SPICCR_SPILBK_SHIFT
;     | );                                                                     
;  75 |             *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint
;     | 16)(((~MW_SPI_MODE) & SPICTL_MASTER_SLAVE_BITS) << SPICTL_MASTER_SLAVE_
;     | SHIFT);                                                                
;  76 |             *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint
;     | 16)((SPICTL_TALK_BITS) << SPICTL_TALK_SHIFT);                          
;  77 |             *((SPI_obj->spi_base_address) + SPIBRR_REG_OFFSET) |= (Uint
;     | 16)(((Uint16)MW_SPI_BAUDRATEFACTOR & SPIBRR_SPI_BIT_RATE_BITS) << SPIBR
;     | R_SPI_BIT_RATE_SHIFT);                                                 
;  79 |             *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint
;     | 16)((priority & SPIPRI_SOFT_FREE_BITS) << SPIPRI_SOFT_FREE_SHIFT);     
;  80 |             *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((SP
;     | IFFTX_SPIFFENA_BITS) << SPIFFTX_SPIFFENA_SHIFT);                       
;  81 |             *((SPI_obj->spi_base_address) + SPIFFCT_REG_OFFSET) |= ((MW
;     | _SPI_FIFOTRANSMITDELAY & SPIFFCT_TXDLY_BITS) << SPIFFCT_TXDLY_SHIFT);  
;  84 |             *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((MW
;     | _SPI_FIFOINTERRUPTLEVEL_TX & SPIFFTX_TXFFIL_BITS) << SPIFFTX_TXFFIL_SHI
;     | FT);                                                                   
;  86 |             *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) &= (~(S
;     | PIFFRX_RXFFIL_BITS << SPIFFRX_RXFFIL_SHIFT));                          
;  87 |             *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW
;     | _SPI_FIFOINTERRUPTLEVEL_RX & SPIFFRX_RXFFIL_BITS) << SPIFFRX_RXFFIL_SHI
;     | FT);                                                                   
;  88 |             *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= (SPI
;     | FFRX_RXFFINTCLR_BITS << SPIFFRX_RXFFINTCLR_SHIFT);                     
;  89 |             *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW
;     | _SPI_RXINTERRUPTENABLE & SPIFFRX_RXFFIENA_BITS) << SPIFFRX_RXFFIENA_SHI
;     | FT);                                                                   
;  91 |             *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint
;     | 16)(SPICCR_SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT);                
;  92 |             SPI_oneTimeInit[0] = 1;                                    
;  94 | #else //Else of MW_F281X                                               
;----------------------------------------------------------------------
        MOVB      ACC,#6                ; [CPU_ALU] |28| 
        MOVL      XAR4,#_mySpi          ; [CPU_ARAU] |28| 
        MOVL      XT,ACC                ; [CPU_ALU] |28| 
        IMPYL     ACC,XT,*-SP[4]        ; [CPU_ALU] |28| 
        ADDL      XAR4,ACC              ; [CPU_ALU] |28| 
        MOVL      *-SP[6],XAR4          ; [CPU_ALU] |28| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 95,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
;  95 | switch(SPIModule)                                                      
;  97 |     case 0: //SPI Module A                                             
;  99 | #ifdef MW_SPI_A                                                        
;----------------------------------------------------------------------
        B         $C$L8,UNC             ; [CPU_ALU] |95| 
        ; branch occurs ; [] |95| 
$C$L1:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 100,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 100 | if (SPI_oneTimeInit[0] == 0)                                           
;----------------------------------------------------------------------
        MOVW      DP,#_SPI_oneTimeInit  ; [CPU_ARAU] 
        MOV       AL,@$BLOCKED(_SPI_oneTimeInit) ; [CPU_ALU] |100| 
        B         $C$L9,NEQ             ; [CPU_ALU] |100| 
        ; branchcc occurs ; [] |100| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 102,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 102 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)&SpiaRegs;                
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[6]          ; [CPU_ALU] |102| 
        MOVL      XAR4,#_SpiaRegs       ; [CPU_ARAU] |102| 
        MOVL      *+XAR5[0],XAR4        ; [CPU_ALU] |102| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 103,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 103 | SPI_obj->spi_clk_mode = 0;                                             
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |103| 
        MOV       *+XAR4[2],#0          ; [CPU_ALU] |103| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 104,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 104 | SPI_obj->charLength = 0;                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |104| 
        MOV       *+XAR4[3],#0          ; [CPU_ALU] |104| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 105,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 105 | SPI_obj->fifoLevel = MW_SPI_A_FIFO_LEVEL;                              
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |105| 
        MOVB      *+XAR4[4],#4,UNC      ; [CPU_ALU] |105| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 106,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 106 | SPI_obj->txInterrupt = MW_SPI_A_TXINTERRUPTENABLE;                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |106| 
        MOV       *+XAR4[5],#0          ; [CPU_ALU] |106| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 107,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 107 | if (MW_SPI_A_SUSPENSIONMODE == 0)                                      
; 109 |     priority = 0;                                                      
; 111 | else if (MW_SPI_A_SUSPENSIONMODE == 1)                                 
; 113 |     priority = 2;                                                      
; 115 | else                                                                   
;----------------------------------------------------------------------
        B         $C$L2,UNC             ; [CPU_ALU] |107| 
        ; branch occurs ; [] |107| 
$C$L2:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 117,column 21,is_stmt,isa 0
;----------------------------------------------------------------------
; 117 | priority = 1;                                                          
; 120 | #ifdef MW_SPI_A_ENABLETHREEWIRE                                        
; 121 | #if  MW_SPI_A_ENABLETHREEWIRE == 1                                     
; 122 | #if MW_SPI_A_MODE == 0                                                 
; 123 | Set_GPIOPin(MW_SPI_A_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 124 | #else //MW_SPI_A_MODE 1                                                
; 125 | Set_GPIOPin(MW_SPI_A_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 126 | #endif //MW_SPI_A_MODE                                                 
; 127 | #else // MW_SPI_A_ENABLETHREEWIRE 0                                    
; 128 | #if MW_SPI_A_MODE == 0                                                 
;----------------------------------------------------------------------
        MOVB      *-SP[7],#1,UNC        ; [CPU_ALU] |117| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 129,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 129 | Set_GPIOPin(MW_SPI_A_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
;----------------------------------------------------------------------
        MOVB      AL,#16                ; [CPU_ALU] |129| 
        MOVB      XAR4,#1               ; [CPU_ALU] |129| 
        MOVB      XAR5,#1               ; [CPU_ALU] |129| 
        MOVB      AH,#0                 ; [CPU_ALU] |129| 
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |129| 
$C$DW$16	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$16, DW_AT_low_pc(0x00)
	.dwattr $C$DW$16, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$16, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |129| 
        ; call occurs [#_Set_GPIOPin] ; [] |129| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 130,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 130 | Set_GPIOPin(MW_SPI_A_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 131 | #else //MW_SPI_A_MODE 1                                                
; 132 | Set_GPIOPin(MW_SPI_A_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SIMO
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 133 | Set_GPIOPin(MW_SPI_A_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SOMI
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 134 | #endif //MW_SPI_A_MODE                                                 
; 135 | #endif                                                                 
; 136 | #else //MW_SPI_A_ENABLETHREEWIRE not defined                           
; 137 | #if MW_SPI_A_MODE == 0                                                 
; 138 | Set_GPIOPin(MW_SPI_A_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 139 | Set_GPIOPin(MW_SPI_A_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 140 | #else //MW_SPI_A_MODE 1                                                
; 141 | Set_GPIOPin(MW_SPI_A_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SIMO
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 142 | Set_GPIOPin(MW_SPI_A_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_SOMI
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 143 | #endif //MW_SPI_A_MODE                                                 
; 144 | #endif // End of MW_SPI_A_ENABLETHREEWIRE                              
; 146 | #if MW_SPI_A_MODE == 0                                                 
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |130| 
        MOVB      AL,#17                ; [CPU_ALU] |130| 
        MOVB      XAR4,#1               ; [CPU_ALU] |130| 
        MOVB      XAR5,#0               ; [CPU_ALU] |130| 
        MOVB      AH,#0                 ; [CPU_ALU] |130| 
$C$DW$17	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$17, DW_AT_low_pc(0x00)
	.dwattr $C$DW$17, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$17, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |130| 
        ; call occurs [#_Set_GPIOPin] ; [] |130| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 147,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 147 | Set_GPIOPin(MW_SPI_A_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_CLK,
;     | GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                  
; 148 | #else //MW_SPI_A_MODE 1                                                
; 149 | Set_GPIOPin(MW_SPI_A_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_CLK,
;     | GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                   
; 150 | #endif //MW_SPI_A_MODE                                                 
; 152 | #ifdef MW_SPISTE_SELECT_SPI_A                                          
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |147| 
        MOVB      AL,#18                ; [CPU_ALU] |147| 
        MOVB      XAR4,#1               ; [CPU_ALU] |147| 
        MOVB      XAR5,#1               ; [CPU_ALU] |147| 
        MOVB      AH,#0                 ; [CPU_ALU] |147| 
$C$DW$18	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$18, DW_AT_low_pc(0x00)
	.dwattr $C$DW$18, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$18, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |147| 
        ; call occurs [#_Set_GPIOPin] ; [] |147| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 153,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 153 | if (MW_SPI_A_PINVALUE_STE >= 0)                                        
; 155 | #if MW_SPI_A_MODE == 0                                                 
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 156,column 20,is_stmt,isa 0
;----------------------------------------------------------------------
; 156 | Set_GPIOPin(MW_SPI_A_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_STE,
;     | GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                  
; 157 | #else //MW_SPI_A_MODE 1                                                
; 158 | Set_GPIOPin(MW_SPI_A_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_A_PINMUX_STE,
;     | GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                   
; 159 | #endif //MW_SPI_A_MODE                                                 
; 161 | #endif //End of MW_SPISTE_SELECT_SPI_A                                 
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |156| 
        MOVB      AL,#19                ; [CPU_ALU] |156| 
        MOVB      XAR4,#1               ; [CPU_ALU] |156| 
        MOVB      XAR5,#1               ; [CPU_ALU] |156| 
        MOVB      AH,#0                 ; [CPU_ALU] |156| 
$C$DW$19	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$19, DW_AT_low_pc(0x00)
	.dwattr $C$DW$19, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$19, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |156| 
        ; call occurs [#_Set_GPIOPin] ; [] |156| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 163,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 163 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SPICCR_SPISWRE
;     | SET_BITS << SPICCR_SPISWRESET_SHIFT));                                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |163| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |163| 
        AND       *+XAR4[0],#0xff7f     ; [CPU_ALU] |163| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 164,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 164 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | A_ENABLELOOPBACK & SPICCR_SPILBK_BITS) << SPICCR_SPILBK_SHIFT);        
; 165 |                 #ifdef MW_SPI_A_ENABLEHIGHSPEEDMODE                    
; 166 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | A_ENABLEHIGHSPEEDMODE & SPICCR_HS_MODE_BITS) << SPICCR_HS_MODE_SHIFT); 
; 167 |                 #endif                                                 
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 168,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 168 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(((~MW_SP
;     | I_A_MODE) & SPICTL_MASTER_SLAVE_BITS) << SPICTL_MASTER_SLAVE_SHIFT);   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |168| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |168| 
        OR        *+XAR4[1],#0x0004     ; [CPU_ALU] |168| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 169,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 169 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)((SPICTL_
;     | TALK_BITS) << SPICTL_TALK_SHIFT);                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |169| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |169| 
        OR        *+XAR4[1],#0x0002     ; [CPU_ALU] |169| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 170,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 170 | *((SPI_obj->spi_base_address) + SPIBRR_REG_OFFSET) |= (Uint16)(((Uint16
;     | )MW_SPI_A_BAUDRATEFACTOR & SPIBRR_SPI_BIT_RATE_BITS) << SPIBRR_SPI_BIT_
;     | RATE_SHIFT);                                                           
; 171 | #ifdef MW_SPI_A_ENABLETHREEWIRE                                        
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |170| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |170| 
        OR        *+XAR4[4],#0x0061     ; [CPU_ALU] |170| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 172,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 172 | *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | A_ENABLETHREEWIRE & SPIPRI_TRIWIRE_BITS) << SPIPRI_TRIWIRE_SHIFT);     
; 173 | #endif // End of MW_SPI_A_ENABLETHREEWIRE                              
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 174,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 174 | *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)((priorit
;     | y & SPIPRI_SOFT_FREE_BITS) << SPIPRI_SOFT_FREE_SHIFT);                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |174| 
        MOVB      ACC,#15               ; [CPU_ALU] |174| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |174| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |174| 
        MOV       AL,*-SP[7]            ; [CPU_ALU] |174| 
        ANDB      AL,#0x03              ; [CPU_ALU] |174| 
        LSL       AL,4                  ; [CPU_ALU] |174| 
        OR        *+XAR4[0],AL          ; [CPU_ALU] |174| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 175,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 175 | *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((SPIFFTX_SPIFFE
;     | NA_BITS) << SPIFFTX_SPIFFENA_SHIFT);                                   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |175| 
        MOVB      ACC,#10               ; [CPU_ALU] |175| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |175| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |175| 
        OR        *+XAR4[0],#0x4000     ; [CPU_ALU] |175| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 176,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 176 | *((SPI_obj->spi_base_address) + SPIFFCT_REG_OFFSET) |= ((MW_SPI_A_FIFOT
;     | RANSMITDELAY & SPIFFCT_TXDLY_BITS) << SPIFFCT_TXDLY_SHIFT);            
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 179,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 179 | *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((MW_SPI_A_FIFOI
;     | NTERRUPTLEVEL_TX & SPIFFTX_TXFFIL_BITS) << SPIFFTX_TXFFIL_SHIFT);      
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 181,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 181 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) &= (~(SPIFFRX_RXFFI
;     | L_BITS << SPIFFRX_RXFFIL_SHIFT));                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |181| 
        MOVB      ACC,#11               ; [CPU_ALU] |181| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |181| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |181| 
        AND       *+XAR4[0],#0xffe0     ; [CPU_ALU] |181| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 182,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 182 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI_A_FIFOI
;     | NTERRUPTLEVEL_RX & SPIFFRX_RXFFIL_BITS) << SPIFFRX_RXFFIL_SHIFT);      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |182| 
        MOVB      ACC,#11               ; [CPU_ALU] |182| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |182| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |182| 
        OR        *+XAR4[0],#0x0004     ; [CPU_ALU] |182| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 183,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 183 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= (SPIFFRX_RXFFINT
;     | CLR_BITS << SPIFFRX_RXFFINTCLR_SHIFT);                                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |183| 
        MOVB      ACC,#11               ; [CPU_ALU] |183| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |183| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |183| 
        OR        *+XAR4[0],#0x0040     ; [CPU_ALU] |183| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 184,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 184 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI_A_RXINT
;     | ERRUPTENABLE & SPIFFRX_RXFFIENA_BITS) << SPIFFRX_RXFFIENA_SHIFT);      
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 186,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 186 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(SPICCR_S
;     | PISWRESET_BITS << SPICCR_SPISWRESET_SHIFT);                            
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |186| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |186| 
        OR        *+XAR4[0],#0x0080     ; [CPU_ALU] |186| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 187,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 187 | SPI_oneTimeInit[0] = 1;                                                
; 189 | #else                                                                  
; 190 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)0;                        
; 191 | SPI_obj->spi_clk_mode = 0;                                             
; 192 | SPI_obj->charLength = 0;                                               
; 193 | SPI_obj->fifoLevel = 0;                                                
; 194 | SPI_obj->txInterrupt = 0;                                              
; 195 | #endif //End of MW_SPI_A                                               
;----------------------------------------------------------------------
        MOVW      DP,#_SPI_oneTimeInit  ; [CPU_ARAU] 
        MOVB      @$BLOCKED(_SPI_oneTimeInit),#1,UNC ; [CPU_ALU] |187| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 197,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 197 | break;                                                                 
; 199 | case 1: //SPI Module B                                                 
; 201 | #ifdef MW_SPI_B                                                        
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |197| 
        ; branch occurs ; [] |197| 
$C$L3:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 202,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 202 | if (SPI_oneTimeInit[1] == 0)                                           
;----------------------------------------------------------------------
        MOVW      DP,#_SPI_oneTimeInit+1 ; [CPU_ARAU] 
        MOV       AL,@$BLOCKED(_SPI_oneTimeInit)+1 ; [CPU_ALU] |202| 
        B         $C$L9,NEQ             ; [CPU_ALU] |202| 
        ; branchcc occurs ; [] |202| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 204,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 204 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)&SpibRegs;                
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[6]          ; [CPU_ALU] |204| 
        MOVL      XAR4,#_SpibRegs       ; [CPU_ARAU] |204| 
        MOVL      *+XAR5[0],XAR4        ; [CPU_ALU] |204| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 205,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 205 | SPI_obj->spi_clk_mode = 0;                                             
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |205| 
        MOV       *+XAR4[2],#0          ; [CPU_ALU] |205| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 206,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 206 | SPI_obj->charLength = 0;                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |206| 
        MOV       *+XAR4[3],#0          ; [CPU_ALU] |206| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 207,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 207 | SPI_obj->fifoLevel = MW_SPI_B_FIFO_LEVEL;                              
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |207| 
        MOVB      *+XAR4[4],#4,UNC      ; [CPU_ALU] |207| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 208,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 208 | SPI_obj->txInterrupt = MW_SPI_B_TXINTERRUPTENABLE;                     
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |208| 
        MOV       *+XAR4[5],#0          ; [CPU_ALU] |208| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 209,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 209 | if (MW_SPI_B_SUSPENSIONMODE == 0)                                      
; 211 |     priority = 0;                                                      
; 213 | else if (MW_SPI_B_SUSPENSIONMODE == 1)                                 
; 215 |     priority = 2;                                                      
; 217 | else                                                                   
;----------------------------------------------------------------------
        B         $C$L4,UNC             ; [CPU_ALU] |209| 
        ; branch occurs ; [] |209| 
$C$L4:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 219,column 21,is_stmt,isa 0
;----------------------------------------------------------------------
; 219 | priority = 1;                                                          
; 222 | #ifdef MW_SPI_B_ENABLETHREEWIRE                                        
; 223 | #if  MW_SPI_B_ENABLETHREEWIRE == 1                                     
; 224 | #if MW_SPI_B_MODE == 0                                                 
; 225 | Set_GPIOPin(MW_SPI_B_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 226 | #else //MW_SPI_B_MODE 1                                                
; 227 | Set_GPIOPin(MW_SPI_B_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 228 | #endif //MW_SPI_B_MODE                                                 
; 229 | #else // MW_SPI_B_ENABLETHREEWIRE 0                                    
; 230 | #if MW_SPI_B_MODE == 0                                                 
;----------------------------------------------------------------------
        MOVB      *-SP[7],#1,UNC        ; [CPU_ALU] |219| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 231,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 231 | Set_GPIOPin(MW_SPI_B_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
;----------------------------------------------------------------------
        MOVB      AL,#24                ; [CPU_ALU] |231| 
        MOVB      XAR4,#3               ; [CPU_ALU] |231| 
        MOVB      XAR5,#1               ; [CPU_ALU] |231| 
        MOVB      AH,#0                 ; [CPU_ALU] |231| 
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |231| 
$C$DW$20	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$20, DW_AT_low_pc(0x00)
	.dwattr $C$DW$20, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$20, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |231| 
        ; call occurs [#_Set_GPIOPin] ; [] |231| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 232,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 232 | Set_GPIOPin(MW_SPI_B_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 233 | #else //MW_SPI_B_MODE 1                                                
; 234 | Set_GPIOPin(MW_SPI_B_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SIMO
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 235 | Set_GPIOPin(MW_SPI_B_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SOMI
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 236 | #endif //MW_SPI_B_MODE                                                 
; 237 | #endif                                                                 
; 238 | #else //MW_SPI_B_ENABLETHREEWIRE not defined                           
; 239 | #if MW_SPI_B_MODE == 0                                                 
; 240 | Set_GPIOPin(MW_SPI_B_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SIMO
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 241 | Set_GPIOPin(MW_SPI_B_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SOMI
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 242 | #else //MW_SPI_B_MODE 1                                                
; 243 | Set_GPIOPin(MW_SPI_B_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SIMO
;     | , GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                 
; 244 | Set_GPIOPin(MW_SPI_B_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_SOMI
;     | , GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                
; 245 | #endif //MW_SPI_B_MODE                                                 
; 246 | #endif // End of MW_SPI_B_ENABLETHREEWIRE                              
; 248 | #if MW_SPI_B_MODE == 0                                                 
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |232| 
        MOVB      AL,#25                ; [CPU_ALU] |232| 
        MOVB      XAR4,#3               ; [CPU_ALU] |232| 
        MOVB      XAR5,#0               ; [CPU_ALU] |232| 
        MOVB      AH,#0                 ; [CPU_ALU] |232| 
$C$DW$21	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$21, DW_AT_low_pc(0x00)
	.dwattr $C$DW$21, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$21, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |232| 
        ; call occurs [#_Set_GPIOPin] ; [] |232| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 249,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 249 | Set_GPIOPin(MW_SPI_B_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_CLK,
;     | GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                  
; 250 | #else //MW_SPI_B_MODE 1                                                
; 251 | Set_GPIOPin(MW_SPI_B_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_CLK,
;     | GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                   
; 252 | #endif //MW_SPI_B_MODE                                                 
; 254 | #ifdef MW_SPISTE_SELECT_SPI_B                                          
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |249| 
        MOVB      AL,#14                ; [CPU_ALU] |249| 
        MOVB      XAR4,#3               ; [CPU_ALU] |249| 
        MOVB      XAR5,#1               ; [CPU_ALU] |249| 
        MOVB      AH,#0                 ; [CPU_ALU] |249| 
$C$DW$22	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$22, DW_AT_low_pc(0x00)
	.dwattr $C$DW$22, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$22, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |249| 
        ; call occurs [#_Set_GPIOPin] ; [] |249| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 255,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 255 | if (MW_SPI_B_PINVALUE_STE >= 0)                                        
; 257 | #if MW_SPI_B_MODE == 0                                                 
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 258,column 20,is_stmt,isa 0
;----------------------------------------------------------------------
; 258 | Set_GPIOPin(MW_SPI_B_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_STE,
;     | GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                                  
; 259 | #else //MW_SPI_B_MODE 1                                                
; 260 | Set_GPIOPin(MW_SPI_B_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_B_PINMUX_STE,
;     | GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                                   
; 261 | #endif //MW_SPI_B_MODE                                                 
; 263 | #endif //End of MW_SPISTE_SELECT_SPI_B                                 
;----------------------------------------------------------------------
        MOVB      *-SP[1],#49,UNC       ; [CPU_ALU] |258| 
        MOVB      AL,#27                ; [CPU_ALU] |258| 
        MOVB      XAR4,#3               ; [CPU_ALU] |258| 
        MOVB      XAR5,#1               ; [CPU_ALU] |258| 
        MOVB      AH,#0                 ; [CPU_ALU] |258| 
$C$DW$23	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$23, DW_AT_low_pc(0x00)
	.dwattr $C$DW$23, DW_AT_name("_Set_GPIOPin")
	.dwattr $C$DW$23, DW_AT_TI_call

        LCR       #_Set_GPIOPin         ; [CPU_ALU] |258| 
        ; call occurs [#_Set_GPIOPin] ; [] |258| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 265,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 265 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SPICCR_SPISWRE
;     | SET_BITS << SPICCR_SPISWRESET_SHIFT));                                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |265| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |265| 
        AND       *+XAR4[0],#0xff7f     ; [CPU_ALU] |265| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 266,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 266 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | B_ENABLELOOPBACK & SPICCR_SPILBK_BITS) << SPICCR_SPILBK_SHIFT);        
; 267 |                 #ifdef MW_SPI_B_ENABLEHIGHSPEEDMODE                    
; 268 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | B_ENABLEHIGHSPEEDMODE & SPICCR_HS_MODE_BITS) << SPICCR_HS_MODE_SHIFT); 
; 269 |                 #endif                                                 
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 270,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 270 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(((~MW_SP
;     | I_B_MODE) & SPICTL_MASTER_SLAVE_BITS) << SPICTL_MASTER_SLAVE_SHIFT);   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |270| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |270| 
        OR        *+XAR4[1],#0x0004     ; [CPU_ALU] |270| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 271,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 271 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)((SPICTL_
;     | TALK_BITS) << SPICTL_TALK_SHIFT);                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |271| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |271| 
        OR        *+XAR4[1],#0x0002     ; [CPU_ALU] |271| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 272,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 272 | *((SPI_obj->spi_base_address) + SPIBRR_REG_OFFSET) |= (Uint16)(((Uint16
;     | )MW_SPI_B_BAUDRATEFACTOR & SPIBRR_SPI_BIT_RATE_BITS) << SPIBRR_SPI_BIT_
;     | RATE_SHIFT);                                                           
; 273 | #ifdef MW_SPI_B_ENABLETHREEWIRE                                        
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |272| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |272| 
        OR        *+XAR4[4],#0x0061     ; [CPU_ALU] |272| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 274,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 274 | *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)((MW_SPI_
;     | B_ENABLETHREEWIRE & SPIPRI_TRIWIRE_BITS) << SPIPRI_TRIWIRE_SHIFT);     
; 275 | #endif // End of MW_SPI_B_ENABLETHREEWIRE                              
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 276,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 276 | *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)((priorit
;     | y & SPIPRI_SOFT_FREE_BITS) << SPIPRI_SOFT_FREE_SHIFT);                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |276| 
        MOVB      ACC,#15               ; [CPU_ALU] |276| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |276| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |276| 
        MOV       AL,*-SP[7]            ; [CPU_ALU] |276| 
        ANDB      AL,#0x03              ; [CPU_ALU] |276| 
        LSL       AL,4                  ; [CPU_ALU] |276| 
        OR        *+XAR4[0],AL          ; [CPU_ALU] |276| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 277,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 277 | *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((SPIFFTX_SPIFFE
;     | NA_BITS) << SPIFFTX_SPIFFENA_SHIFT);                                   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |277| 
        MOVB      ACC,#10               ; [CPU_ALU] |277| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |277| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |277| 
        OR        *+XAR4[0],#0x4000     ; [CPU_ALU] |277| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 278,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 278 | *((SPI_obj->spi_base_address) + SPIFFCT_REG_OFFSET) |= ((MW_SPI_B_FIFOT
;     | RANSMITDELAY & SPIFFCT_TXDLY_BITS) << SPIFFCT_TXDLY_SHIFT);            
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 281,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 281 | *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((MW_SPI_B_FIFOI
;     | NTERRUPTLEVEL_TX & SPIFFTX_TXFFIL_BITS) << SPIFFTX_TXFFIL_SHIFT);      
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 283,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 283 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) &= (~(SPIFFRX_RXFFI
;     | L_BITS << SPIFFRX_RXFFIL_SHIFT));                                      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |283| 
        MOVB      ACC,#11               ; [CPU_ALU] |283| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |283| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |283| 
        AND       *+XAR4[0],#0xffe0     ; [CPU_ALU] |283| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 284,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 284 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI_B_FIFOI
;     | NTERRUPTLEVEL_RX & SPIFFRX_RXFFIL_BITS) << SPIFFRX_RXFFIL_SHIFT);      
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |284| 
        MOVB      ACC,#11               ; [CPU_ALU] |284| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |284| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |284| 
        OR        *+XAR4[0],#0x0004     ; [CPU_ALU] |284| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 285,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 285 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= (SPIFFRX_RXFFINT
;     | CLR_BITS << SPIFFRX_RXFFINTCLR_SHIFT);                                 
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |285| 
        MOVB      ACC,#11               ; [CPU_ALU] |285| 
        ADDL      ACC,*+XAR4[0]         ; [CPU_ALU] |285| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |285| 
        OR        *+XAR4[0],#0x0040     ; [CPU_ALU] |285| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 286,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 286 | *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI_B_RXINT
;     | ERRUPTENABLE & SPIFFRX_RXFFIENA_BITS) << SPIFFRX_RXFFIENA_SHIFT);      
;----------------------------------------------------------------------
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 288,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 288 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(SPICCR_S
;     | PISWRESET_BITS << SPICCR_SPISWRESET_SHIFT);                            
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |288| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |288| 
        OR        *+XAR4[0],#0x0080     ; [CPU_ALU] |288| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 289,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 289 | SPI_oneTimeInit[1] = 1;                                                
; 291 | #else                                                                  
; 292 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)0;                        
; 293 | SPI_obj->spi_clk_mode = 0;                                             
; 294 | SPI_obj->charLength = 0;                                               
; 295 | SPI_obj->fifoLevel = 0;                                                
; 296 | SPI_obj->txInterrupt = 0;                                              
; 297 | #endif // End of MW_SPI_B                                              
;----------------------------------------------------------------------
        MOVW      DP,#_SPI_oneTimeInit+1 ; [CPU_ARAU] 
        MOVB      @$BLOCKED(_SPI_oneTimeInit)+1,#1,UNC ; [CPU_ALU] |289| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 299,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 299 | break;                                                                 
; 300 | case 2: //SPI Module C                                                 
; 302 | #ifdef MW_SPI_C                                                        
; 303 |     if (SPI_oneTimeInit[2] == 0)                                       
; 305 |         SPI_obj->spi_base_address = (SPI_REG_ADDRESS)&SpicRegs;        
; 306 |         SPI_obj->spi_clk_mode = 0;                                     
; 307 |         SPI_obj->charLength = 0;                                       
; 308 |         SPI_obj->fifoLevel = MW_SPI_C_FIFO_LEVEL;                      
; 309 |         SPI_obj->txInterrupt = MW_SPI_C_TXINTERRUPTENABLE;             
; 310 |         if (MW_SPI_C_SUSPENSIONMODE == 0)                              
; 312 |             priority = 0;                                              
; 314 |         else if (MW_SPI_C_SUSPENSIONMODE == 1)                         
; 316 |             priority = 2;                                              
; 318 |         else                                                           
; 320 |             priority = 1;                                              
; 323 | #ifdef MW_SPI_C_ENABLETHREEWIRE                                        
; 324 | #if  MW_SPI_C_ENABLETHREEWIRE == 1                                     
; 325 | #if MW_SPI_C_MODE == 0                                                 
; 326 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 327 | #else //MW_SPI_C_MODE 1                                                
; 328 |        Set_GPIOPin(MW_SPI_C_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_C_PINM
;     | UX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                          
; 329 | #endif //MW_SPI_C_MODE                                                 
; 330 | #else // MW_SPI_C_ENABLETHREEWIRE 0                                    
; 331 | #if MW_SPI_C_MODE == 0                                                 
; 332 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 333 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 334 | #else //MW_SPI_C_MODE 1                                                
; 335 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SIMO, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 336 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SOMI, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 337 | #endif //MW_SPI_C_MODE                                                 
; 338 | #endif                                                                 
; 339 | #else //MW_SPI_C_ENABLETHREEWIRE not defined                           
; 340 | #if MW_SPI_C_MODE == 0                                                 
; 341 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 342 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 343 | #else //MW_SPI_C_MODE 1                                                
; 344 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SIMO, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 345 |         Set_GPIOPin(MW_SPI_C_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_C_PIN
;     | MUX_SOMI, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 346 | #endif //MW_SPI_C_MODE                                                 
; 347 | #endif // End of MW_SPI_C_ENABLETHREEWIRE                              
; 349 | #if MW_SPI_C_MODE == 0                                                 
; 350 |         Set_GPIOPin(MW_SPI_C_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_C_PINM
;     | UX_CLK, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                          
; 351 | #else //MW_SPI_C_MODE 1                                                
; 352 |         Set_GPIOPin(MW_SPI_C_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_C_PINM
;     | UX_CLK, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                           
; 353 | #endif //MW_SPI_C_MODE                                                 
; 355 | #ifdef MW_SPISTE_SELECT_SPI_C                                          
; 356 |         if (MW_SPI_C_PINVALUE_STE >= 0)                                
; 358 | #if MW_SPI_C_MODE == 0                                                 
; 359 |            Set_GPIOPin(MW_SPI_C_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_C_P
;     | INMUX_STE, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                       
; 360 | #else //MW_SPI_C_MODE 1                                                
; 361 |            Set_GPIOPin(MW_SPI_C_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_C_P
;     | INMUX_STE, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 362 | #endif //MW_SPI_C_MODE                                                 
; 364 | #endif //End of MW_SPISTE_SELECT_SPI_C                                 
; 366 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SPICCR
;     | _SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT));                         
; 367 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_C_ENABLELOOPBACK & SPICCR_SPILBK_BITS) << SPICCR_SPILBK_SHIFT);
; 368 |                         #ifdef MW_SPI_C_ENABLEHIGHSPEEDMODE            
; 369 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_C_ENABLEHIGHSPEEDMODE & SPICCR_HS_MODE_BITS) << SPICCR_HS_MODE_
;     | SHIFT);                                                                
; 370 |                         #endif                                         
; 371 |         *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(
;     | ((~MW_SPI_C_MODE) & SPICTL_MASTER_SLAVE_BITS) << SPICTL_MASTER_SLAVE_SH
;     | IFT);                                                                  
; 372 |         *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(
;     | (SPICTL_TALK_BITS) << SPICTL_TALK_SHIFT);                              
; 373 |         *((SPI_obj->spi_base_address) + SPIBRR_REG_OFFSET) |= (Uint16)(
;     | ((Uint16)MW_SPI_C_BAUDRATEFACTOR & SPIBRR_SPI_BIT_RATE_BITS) << SPIBRR_
;     | SPI_BIT_RATE_SHIFT);                                                   
; 374 | #ifdef MW_SPI_C_ENABLETHREEWIRE                                        
; 375 |         *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_C_ENABLETHREEWIRE & SPIPRI_TRIWIRE_BITS) << SPIPRI_TRIWIRE_SHIF
;     | T);                                                                    
; 376 | #endif // End of MW_SPI_C_ENABLETHREEWIRE                              
; 377 |         *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)(
;     | (priority & SPIPRI_SOFT_FREE_BITS) << SPIPRI_SOFT_FREE_SHIFT);         
; 378 |         *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((SPIFFT
;     | X_SPIFFENA_BITS) << SPIFFTX_SPIFFENA_SHIFT);                           
; 379 |         *((SPI_obj->spi_base_address) + SPIFFCT_REG_OFFSET) |= ((MW_SPI
;     | _C_FIFOTRANSMITDELAY & SPIFFCT_TXDLY_BITS) << SPIFFCT_TXDLY_SHIFT);    
; 382 |         *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((MW_SPI
;     | _C_FIFOINTERRUPTLEVEL_TX & SPIFFTX_TXFFIL_BITS) << SPIFFTX_TXFFIL_SHIFT
;     | );                                                                     
; 384 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) &= (~(SPIFF
;     | RX_RXFFIL_BITS << SPIFFRX_RXFFIL_SHIFT));                              
; 385 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI
;     | _C_FIFOINTERRUPTLEVEL_RX & SPIFFRX_RXFFIL_BITS) << SPIFFRX_RXFFIL_SHIFT
;     | );                                                                     
; 386 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= (SPIFFRX
;     | _RXFFINTCLR_BITS << SPIFFRX_RXFFINTCLR_SHIFT);                         
; 387 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI
;     | _C_RXINTERRUPTENABLE & SPIFFRX_RXFFIENA_BITS) << SPIFFRX_RXFFIENA_SHIFT
;     | );                                                                     
; 389 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | SPICCR_SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT);                    
; 390 |         SPI_oneTimeInit[2] = 1;                                        
; 392 | #else                                                                  
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |299| 
        ; branch occurs ; [] |299| 
$C$L5:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 393,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 393 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)0;                        
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |393| 
        MOVL      *+XAR4[0],ACC         ; [CPU_ALU] |393| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 394,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 394 | SPI_obj->spi_clk_mode = 0;                                             
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |394| 
        MOV       *+XAR4[2],#0          ; [CPU_ALU] |394| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 395,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 395 | SPI_obj->charLength = 0;                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |395| 
        MOV       *+XAR4[3],#0          ; [CPU_ALU] |395| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 396,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 396 | SPI_obj->fifoLevel = 0;                                                
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |396| 
        MOV       *+XAR4[4],#0          ; [CPU_ALU] |396| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 397,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 397 | SPI_obj->txInterrupt = 0;                                              
; 398 | #endif // End of MW_SPI_C                                              
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |397| 
        MOV       *+XAR4[5],#0          ; [CPU_ALU] |397| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 400,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 400 | break;                                                                 
; 401 | case 3: //SPI Module D                                                 
; 403 | #ifdef MW_SPI_D                                                        
; 404 |     if (SPI_oneTimeInit[3] == 0)                                       
; 406 |         SPI_obj->spi_base_address = (SPI_REG_ADDRESS)&SpidRegs;        
; 407 |         SPI_obj->spi_clk_mode = 0;                                     
; 408 |         SPI_obj->charLength = 0;                                       
; 409 |         SPI_obj->fifoLevel = MW_SPI_D_FIFO_LEVEL;                      
; 410 |         SPI_obj->txInterrupt = MW_SPI_D_TXINTERRUPTENABLE;             
; 412 |         if (MW_SPI_D_SUSPENSIONMODE == 0)                              
; 414 |             priority = 0;                                              
; 416 |         else if (MW_SPI_D_SUSPENSIONMODE == 1)                         
; 418 |             priority = 2;                                              
; 420 |         else                                                           
; 422 |             priority = 1;                                              
; 425 | #ifdef MW_SPI_D_ENABLETHREEWIRE                                        
; 426 | #if  MW_SPI_D_ENABLETHREEWIRE == 1                                     
; 427 | #if MW_SPI_D_MODE == 0                                                 
; 428 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 429 | #else //MW_SPI_D_MODE 1                                                
; 430 |        Set_GPIOPin(MW_SPI_D_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_D_PINM
;     | UX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                          
; 431 | #endif //MW_SPI_D_MODE                                                 
; 432 | #else // MW_SPI_D_ENABLETHREEWIRE 0                                    
; 433 | #if MW_SPI_D_MODE == 0                                                 
; 434 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 435 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 436 | #else //MW_SPI_D_MODE 1                                                
; 437 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SIMO, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 438 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SOMI, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 439 | #endif //MW_SPI_D_MODE                                                 
; 440 | #endif                                                                 
; 441 | #else //MW_SPI_D_ENABLETHREEWIRE not defined                           
; 442 | #if MW_SPI_D_MODE == 0                                                 
; 443 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SIMO, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 444 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SOMI, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 445 | #else //MW_SPI_D_MODE 1                                                
; 446 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SIMO, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SIMO, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                         
; 447 |         Set_GPIOPin(MW_SPI_D_PINVALUE_SOMI, GPIO_MUX_CPU1, MW_SPI_D_PIN
;     | MUX_SOMI, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 448 | #endif //MW_SPI_D_MODE                                                 
; 449 | #endif // End of MW_SPI_D_ENABLETHREEWIRE                              
; 451 | #if MW_SPI_D_MODE == 0                                                 
; 452 |         Set_GPIOPin(MW_SPI_D_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_D_PINM
;     | UX_CLK, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                          
; 453 | #else //MW_SPI_D_MODE 1                                                
; 454 |         Set_GPIOPin(MW_SPI_D_PINVALUE_CLK, GPIO_MUX_CPU1, MW_SPI_D_PINM
;     | UX_CLK, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                           
; 455 | #endif //MW_SPI_D_MODE                                                 
; 457 | #ifdef MW_SPISTE_SELECT_SPI_D                                          
; 458 |         if (MW_SPI_D_PINVALUE_STE >= 0)                                
; 460 | #if MW_SPI_D_MODE == 0                                                 
; 461 |            Set_GPIOPin(MW_SPI_D_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_D_P
;     | INMUX_STE, GPIO_OUTPUT, GPIO_PULLUP|GPIO_ASYNC);                       
; 462 | #else //MW_SPI_D_MODE 1                                                
; 463 |            Set_GPIOPin(MW_SPI_D_PINVALUE_STE, GPIO_MUX_CPU1, MW_SPI_D_P
;     | INMUX_STE, GPIO_INPUT, GPIO_PULLUP|GPIO_ASYNC);                        
; 464 | #endif //MW_SPI_D_MODE                                                 
; 466 | #endif //End of MW_SPISTE_SELECT_SPI_D                                 
; 468 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SPICCR
;     | _SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT));                         
; 469 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_D_ENABLELOOPBACK & SPICCR_SPILBK_BITS) << SPICCR_SPILBK_SHIFT);
; 470 |                         #ifdef MW_SPI_D_ENABLEHIGHSPEEDMODE            
; 471 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_D_ENABLEHIGHSPEEDMODE & SPICCR_HS_MODE_BITS) << SPICCR_HS_MODE_
;     | SHIFT);                                                                
; 472 |                         #endif                                         
; 473 |         *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(
;     | ((~MW_SPI_D_MODE) & SPICTL_MASTER_SLAVE_BITS) << SPICTL_MASTER_SLAVE_SH
;     | IFT);                                                                  
; 474 |         *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= (Uint16)(
;     | (SPICTL_TALK_BITS) << SPICTL_TALK_SHIFT);                              
; 475 |         *((SPI_obj->spi_base_address) + SPIBRR_REG_OFFSET) |= (Uint16)(
;     | ((Uint16)MW_SPI_D_BAUDRATEFACTOR & SPIBRR_SPI_BIT_RATE_BITS) << SPIBRR_
;     | SPI_BIT_RATE_SHIFT);                                                   
; 476 | #ifdef MW_SPI_D_ENABLETHREEWIRE                                        
; 477 |         *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)(
;     | (MW_SPI_D_ENABLETHREEWIRE & SPIPRI_TRIWIRE_BITS) << SPIPRI_TRIWIRE_SHIF
;     | T);                                                                    
; 478 | #endif // End of MW_SPI_D_ENABLETHREEWIRE                              
; 479 |         *((SPI_obj->spi_base_address) + SPIPRI_REG_OFFSET) |= (Uint16)(
;     | (priority & SPIPRI_SOFT_FREE_BITS) << SPIPRI_SOFT_FREE_SHIFT);         
; 480 |         *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((SPIFFT
;     | X_SPIFFENA_BITS) << SPIFFTX_SPIFFENA_SHIFT);                           
; 481 |         *((SPI_obj->spi_base_address) + SPIFFCT_REG_OFFSET) |= ((MW_SPI
;     | _D_FIFOTRANSMITDELAY & SPIFFCT_TXDLY_BITS) << SPIFFCT_TXDLY_SHIFT);    
; 484 |         *((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) |= ((MW_SPI
;     | _D_FIFOINTERRUPTLEVEL_TX & SPIFFTX_TXFFIL_BITS) << SPIFFTX_TXFFIL_SHIFT
;     | );                                                                     
; 486 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) &= (~(SPIFF
;     | RX_RXFFIL_BITS << SPIFFRX_RXFFIL_SHIFT));                              
; 487 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI
;     | _D_FIFOINTERRUPTLEVEL_RX & SPIFFRX_RXFFIL_BITS) << SPIFFRX_RXFFIL_SHIFT
;     | );                                                                     
; 488 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= (SPIFFRX
;     | _RXFFINTCLR_BITS << SPIFFRX_RXFFINTCLR_SHIFT);                         
; 489 |         *((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) |= ((MW_SPI
;     | _D_RXINTERRUPTENABLE & SPIFFRX_RXFFIENA_BITS) << SPIFFRX_RXFFIENA_SHIFT
;     | );                                                                     
; 491 |         *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= (Uint16)(
;     | SPICCR_SPISWRESET_BITS << SPICCR_SPISWRESET_SHIFT);                    
; 492 |         SPI_oneTimeInit[3] = 1;                                        
; 494 | #else                                                                  
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |400| 
        ; branch occurs ; [] |400| 
$C$L6:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 495,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 495 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)0;                        
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |495| 
        MOVL      *+XAR4[0],ACC         ; [CPU_ALU] |495| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 496,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 496 | SPI_obj->spi_clk_mode = 0;                                             
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |496| 
        MOV       *+XAR4[2],#0          ; [CPU_ALU] |496| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 497,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 497 | SPI_obj->charLength = 0;                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |497| 
        MOV       *+XAR4[3],#0          ; [CPU_ALU] |497| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 498,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 498 | SPI_obj->fifoLevel = 0;                                                
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |498| 
        MOV       *+XAR4[4],#0          ; [CPU_ALU] |498| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 499,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 499 | SPI_obj->txInterrupt = 0;                                              
; 500 | #endif //End of MW_SPI_D                                               
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[6]          ; [CPU_ALU] |499| 
        MOV       *+XAR4[5],#0          ; [CPU_ALU] |499| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 502,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 502 | break;                                                                 
; 503 | default:                                                               
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |502| 
        ; branch occurs ; [] |502| 
$C$L7:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 504,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 504 | SPI_obj->spi_base_address = (SPI_REG_ADDRESS)0;                        
;----------------------------------------------------------------------
        MOVB      ACC,#0                ; [CPU_ALU] |504| 
        MOVL      *+XAR4[0],ACC         ; [CPU_ALU] |504| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 505,column 13,is_stmt,isa 0
;----------------------------------------------------------------------
; 505 | break;                                                                 
; 507 | #endif //End of MW_F281X                                               
;----------------------------------------------------------------------
        B         $C$L9,UNC             ; [CPU_ALU] |505| 
        ; branch occurs ; [] |505| 
$C$L8:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 95,column 5,is_stmt,isa 0
        MOVL      XAR6,*-SP[4]          ; [CPU_ALU] |95| 
        MOVL      ACC,XAR6              ; [CPU_ALU] |95| 
        B         $C$L1,EQ              ; [CPU_ALU] |95| 
        ; branchcc occurs ; [] |95| 
        MOVB      ACC,#1                ; [CPU_ALU] |95| 
        CMPL      ACC,XAR6              ; [CPU_ALU] |95| 
        B         $C$L3,EQ              ; [CPU_ALU] |95| 
        ; branchcc occurs ; [] |95| 
        MOVB      ACC,#2                ; [CPU_ALU] |95| 
        CMPL      ACC,XAR6              ; [CPU_ALU] |95| 
        B         $C$L5,EQ              ; [CPU_ALU] |95| 
        ; branchcc occurs ; [] |95| 
        MOVB      ACC,#3                ; [CPU_ALU] |95| 
        CMPL      ACC,XAR6              ; [CPU_ALU] |95| 
        B         $C$L6,EQ              ; [CPU_ALU] |95| 
        ; branchcc occurs ; [] |95| 
        B         $C$L7,UNC             ; [CPU_ALU] |95| 
        ; branch occurs ; [] |95| 
$C$L9:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 509,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 509 | return &mySpi[SPIModule];                                              
;----------------------------------------------------------------------
        MOVB      ACC,#6                ; [CPU_ALU] |509| 
        MOVL      XT,ACC                ; [CPU_ALU] |509| 
        IMPYL     ACC,XT,*-SP[4]        ; [CPU_ALU] |509| 
        MOVL      XAR4,#_mySpi          ; [CPU_ARAU] |509| 
        ADDL      XAR4,ACC              ; [CPU_ALU] |509| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 510,column 1,is_stmt,isa 0
        SUBB      SP,#8                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$24	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$24, DW_AT_low_pc(0x00)
	.dwattr $C$DW$24, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$11, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$11, DW_AT_TI_end_line(0x1fe)
	.dwattr $C$DW$11, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$11

	.sect	".text"
	.clink
	.global	_SPI_clockFormat

$C$DW$25	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$25, DW_AT_name("SPI_clockFormat")
	.dwattr $C$DW$25, DW_AT_low_pc(_SPI_clockFormat)
	.dwattr $C$DW$25, DW_AT_high_pc(0x00)
	.dwattr $C$DW$25, DW_AT_TI_symbol_name("_SPI_clockFormat")
	.dwattr $C$DW$25, DW_AT_external
	.dwattr $C$DW$25, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$25, DW_AT_TI_begin_line(0x201)
	.dwattr $C$DW$25, DW_AT_TI_begin_column(0x06)
	.dwattr $C$DW$25, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 514,column 1,is_stmt,address _SPI_clockFormat,isa 0

	.dwfde $C$DW$CIE, _SPI_clockFormat
$C$DW$26	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$26, DW_AT_name("SPI_obj")
	.dwattr $C$DW$26, DW_AT_TI_symbol_name("_SPI_obj")
	.dwattr $C$DW$26, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$26, DW_AT_location[DW_OP_reg12]

$C$DW$27	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$27, DW_AT_name("clockPolarity")
	.dwattr $C$DW$27, DW_AT_TI_symbol_name("_clockPolarity")
	.dwattr $C$DW$27, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$27, DW_AT_location[DW_OP_reg0]

$C$DW$28	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$28, DW_AT_name("clockPhase")
	.dwattr $C$DW$28, DW_AT_TI_symbol_name("_clockPhase")
	.dwattr $C$DW$28, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$28, DW_AT_location[DW_OP_reg1]

;----------------------------------------------------------------------
; 513 | void SPI_clockFormat(MW_SpiHandle SPI_obj, Uint16 clockPolarity, Uint16
;     |  clockPhase)                                                           
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _SPI_clockFormat              FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_SPI_clockFormat:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$29	.dwtag  DW_TAG_variable
	.dwattr $C$DW$29, DW_AT_name("SPI_obj")
	.dwattr $C$DW$29, DW_AT_TI_symbol_name("_SPI_obj")
	.dwattr $C$DW$29, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$29, DW_AT_location[DW_OP_breg20 -2]

$C$DW$30	.dwtag  DW_TAG_variable
	.dwattr $C$DW$30, DW_AT_name("clockPolarity")
	.dwattr $C$DW$30, DW_AT_TI_symbol_name("_clockPolarity")
	.dwattr $C$DW$30, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$30, DW_AT_location[DW_OP_breg20 -3]

$C$DW$31	.dwtag  DW_TAG_variable
	.dwattr $C$DW$31, DW_AT_name("clockPhase")
	.dwattr $C$DW$31, DW_AT_TI_symbol_name("_clockPhase")
	.dwattr $C$DW$31, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$31, DW_AT_location[DW_OP_breg20 -4]

        MOV       *-SP[4],AH            ; [CPU_ALU] |514| 
        MOV       *-SP[3],AL            ; [CPU_ALU] |514| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |514| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 515,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 515 | if(SPI_obj->spi_base_address != 0)                                     
;----------------------------------------------------------------------
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |515| 
        B         $C$L10,EQ             ; [CPU_ALU] |515| 
        ; branchcc occurs ; [] |515| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 517,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 517 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) &= (~(SPICCR_CLKPOLA
;     | RITY_BITS << SPICCR_CLKPOLARITY_SHIFT));                               
;----------------------------------------------------------------------
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |517| 
        AND       *+XAR4[0],#0xffbf     ; [CPU_ALU] |517| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 518,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 518 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) &= (~(SPICTL_CLK_PHA
;     | SE_BITS << SPICTL_CLK_PHASE_SHIFT));                                   
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[2]          ; [CPU_ALU] |518| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |518| 
        AND       *+XAR4[1],#0xfff7     ; [CPU_ALU] |518| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 519,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 519 | *((SPI_obj->spi_base_address) + SPICCR_REG_OFFSET) |= ((clockPolarity &
;     |  SPICCR_CLKPOLARITY_BITS) << SPICCR_CLKPOLARITY_SHIFT);                
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[2]          ; [CPU_ALU] |519| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |519| 
        MOV       AL,*-SP[3]            ; [CPU_ALU] |519| 
        ANDB      AL,#0x01              ; [CPU_ALU] |519| 
        LSL       AL,6                  ; [CPU_ALU] |519| 
        OR        *+XAR4[0],AL          ; [CPU_ALU] |519| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 520,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 520 | *((SPI_obj->spi_base_address) + SPICTL_REG_OFFSET) |= ((clockPhase & SP
;     | ICTL_CLK_PHASE_BITS) << SPICTL_CLK_PHASE_SHIFT);                       
;----------------------------------------------------------------------
        MOVL      XAR4,*-SP[2]          ; [CPU_ALU] |520| 
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |520| 
        MOV       AL,*-SP[4]            ; [CPU_ALU] |520| 
        ANDB      AL,#0x01              ; [CPU_ALU] |520| 
        LSL       AL,3                  ; [CPU_ALU] |520| 
        OR        *+XAR4[1],AL          ; [CPU_ALU] |520| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 522,column 1,is_stmt,isa 0
$C$L10:    
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$32	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$32, DW_AT_low_pc(0x00)
	.dwattr $C$DW$32, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$25, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$25, DW_AT_TI_end_line(0x20a)
	.dwattr $C$DW$25, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$25

	.sect	".text"
	.clink
	.global	_SPI_status

$C$DW$33	.dwtag  DW_TAG_subprogram
	.dwattr $C$DW$33, DW_AT_name("SPI_status")
	.dwattr $C$DW$33, DW_AT_low_pc(_SPI_status)
	.dwattr $C$DW$33, DW_AT_high_pc(0x00)
	.dwattr $C$DW$33, DW_AT_TI_symbol_name("_SPI_status")
	.dwattr $C$DW$33, DW_AT_external
	.dwattr $C$DW$33, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$33, DW_AT_TI_begin_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$33, DW_AT_TI_begin_line(0x20d)
	.dwattr $C$DW$33, DW_AT_TI_begin_column(0x08)
	.dwattr $C$DW$33, DW_AT_TI_max_frame_size(-6)
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 526,column 1,is_stmt,address _SPI_status,isa 0

	.dwfde $C$DW$CIE, _SPI_status
$C$DW$34	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$34, DW_AT_name("SPI_obj")
	.dwattr $C$DW$34, DW_AT_TI_symbol_name("_SPI_obj")
	.dwattr $C$DW$34, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$34, DW_AT_location[DW_OP_reg12]

$C$DW$35	.dwtag  DW_TAG_formal_parameter
	.dwattr $C$DW$35, DW_AT_name("type")
	.dwattr $C$DW$35, DW_AT_TI_symbol_name("_type")
	.dwattr $C$DW$35, DW_AT_type(*$C$DW$T$40)
	.dwattr $C$DW$35, DW_AT_location[DW_OP_reg0]

;----------------------------------------------------------------------
; 525 | Uint16 SPI_status(MW_SpiHandle SPI_obj, SPI_statusVal type)            
;----------------------------------------------------------------------

;***************************************************************
;* FNAME: _SPI_status                   FR SIZE:   4           *
;*                                                             *
;* FUNCTION ENVIRONMENT                                        *
;*                                                             *
;* FUNCTION PROPERTIES                                         *
;*                            0 Parameter,  4 Auto,  0 SOE     *
;***************************************************************

_SPI_status:
	.dwcfi	cfa_offset, -2
	.dwcfi	save_reg_to_mem, 26, 0
        ADDB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -6
$C$DW$36	.dwtag  DW_TAG_variable
	.dwattr $C$DW$36, DW_AT_name("SPI_obj")
	.dwattr $C$DW$36, DW_AT_TI_symbol_name("_SPI_obj")
	.dwattr $C$DW$36, DW_AT_type(*$C$DW$T$45)
	.dwattr $C$DW$36, DW_AT_location[DW_OP_breg20 -2]

$C$DW$37	.dwtag  DW_TAG_variable
	.dwattr $C$DW$37, DW_AT_name("type")
	.dwattr $C$DW$37, DW_AT_TI_symbol_name("_type")
	.dwattr $C$DW$37, DW_AT_type(*$C$DW$T$40)
	.dwattr $C$DW$37, DW_AT_location[DW_OP_breg20 -3]

$C$DW$38	.dwtag  DW_TAG_variable
	.dwattr $C$DW$38, DW_AT_name("ret")
	.dwattr $C$DW$38, DW_AT_TI_symbol_name("_ret")
	.dwattr $C$DW$38, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$38, DW_AT_location[DW_OP_breg20 -4]

        MOV       *-SP[3],AL            ; [CPU_ALU] |526| 
        MOVL      *-SP[2],XAR4          ; [CPU_ALU] |526| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 527,column 16,is_stmt,isa 0
;----------------------------------------------------------------------
; 527 | Uint16 ret = 0;                                                        
;----------------------------------------------------------------------
        MOV       *-SP[4],#0            ; [CPU_ALU] |527| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 528,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 528 | if(SPI_obj->spi_base_address != 0)                                     
;----------------------------------------------------------------------
        MOVL      ACC,*+XAR4[0]         ; [CPU_ALU] |528| 
        B         $C$L20,EQ             ; [CPU_ALU] |528| 
        ; branchcc occurs ; [] |528| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 530,column 9,is_stmt,isa 0
;----------------------------------------------------------------------
; 530 | switch(type)                                                           
; 532 |     case SPI_OVERRUN_FLAG:                                             
;----------------------------------------------------------------------
        B         $C$L18,UNC            ; [CPU_ALU] |530| 
        ; branch occurs ; [] |530| 
$C$L11:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 533,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 533 | ret = (*((SPI_obj->spi_base_address) + SPISTS_REG_OFFSET) >> SPISTS_OVE
;     | RRUN_FLAG_SHIFT)& SPISTS_OVERRUN_FLAG_BITS;                            
;----------------------------------------------------------------------
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |533| 
        AND       AL,*+XAR4[2],#0x0080  ; [CPU_ALU] |533| 
        LSR       AL,7                  ; [CPU_ALU] |533| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |533| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 534,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 534 | break;                                                                 
; 535 | case SPI_INT_FLAG:                                                     
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |534| 
        ; branch occurs ; [] |534| 
$C$L12:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 536,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 536 | ret = (*((SPI_obj->spi_base_address) + SPISTS_REG_OFFSET) >> SPISTS_INT
;     | _FLAG_SHIFT) & SPISTS_INT_FLAG_BITS;                                   
;----------------------------------------------------------------------
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |536| 
        AND       AL,*+XAR4[2],#0x0040  ; [CPU_ALU] |536| 
        LSR       AL,6                  ; [CPU_ALU] |536| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |536| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 537,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 537 | break;                                                                 
; 538 | case SPI_BUFFULL_FLAG:                                                 
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |537| 
        ; branch occurs ; [] |537| 
$C$L13:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 539,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 539 | ret = (*((SPI_obj->spi_base_address) + SPISTS_REG_OFFSET) >> SPISTS_BUF
;     | FULL_FLAG_SHIFT) & SPISTS_BUFFULL_FLAG_BITS;                           
;----------------------------------------------------------------------
        MOVL      XAR4,*+XAR4[0]        ; [CPU_ALU] |539| 
        AND       AL,*+XAR4[2],#0x0020  ; [CPU_ALU] |539| 
        LSR       AL,5                  ; [CPU_ALU] |539| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |539| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 540,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 540 | break;                                                                 
; 541 | case SPI_TXFFST_FLAG:                                                  
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |540| 
        ; branch occurs ; [] |540| 
$C$L14:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 542,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 542 | ret = (*((SPI_obj->spi_base_address) + SPIFFTX_REG_OFFSET) >> SPIFFTX_T
;     | XFFST_SHIFT) & SPIFFTX_TXFFST_BITS ;                                   
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[2]          ; [CPU_ALU] |542| 
        MOVB      ACC,#10               ; [CPU_ALU] |542| 
        ADDL      ACC,*+XAR5[0]         ; [CPU_ALU] |542| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |542| 
        AND       AL,*+XAR4[0],#0x1f00  ; [CPU_ALU] |542| 
        LSR       AL,8                  ; [CPU_ALU] |542| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |542| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 543,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 543 | break;                                                                 
; 544 | case SPI_RXFFST_FLAG:                                                  
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |543| 
        ; branch occurs ; [] |543| 
$C$L15:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 545,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 545 | ret = (*((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) >> SPIFFRX_R
;     | XFFST_SHIFT) & SPIFFRX_RXFFST_BITS;                                    
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[2]          ; [CPU_ALU] |545| 
        MOVB      ACC,#11               ; [CPU_ALU] |545| 
        ADDL      ACC,*+XAR5[0]         ; [CPU_ALU] |545| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |545| 
        AND       AL,*+XAR4[0],#0x1f00  ; [CPU_ALU] |545| 
        LSR       AL,8                  ; [CPU_ALU] |545| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |545| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 546,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 546 | break;                                                                 
; 547 | case SPI_RXFFOVF_FLAG:                                                 
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |546| 
        ; branch occurs ; [] |546| 
$C$L16:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 548,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 548 | ret = (*((SPI_obj->spi_base_address) + SPIFFRX_REG_OFFSET) >> SPIFFRX_R
;     | XFFOVF_SHIFT) & SPIFFRX_RXFFOVF_BITS;                                  
;----------------------------------------------------------------------
        MOVL      XAR5,*-SP[2]          ; [CPU_ALU] |548| 
        MOVB      ACC,#11               ; [CPU_ALU] |548| 
        ADDL      ACC,*+XAR5[0]         ; [CPU_ALU] |548| 
        MOVL      XAR4,ACC              ; [CPU_ALU] |548| 
        AND       AL,*+XAR4[0],#0x8000  ; [CPU_ALU] |548| 
        LSR       AL,15                 ; [CPU_ALU] |548| 
        MOV       *-SP[4],AL            ; [CPU_ALU] |548| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 549,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 549 | break;                                                                 
; 550 | default :                                                              
;----------------------------------------------------------------------
        B         $C$L20,UNC            ; [CPU_ALU] |549| 
        ; branch occurs ; [] |549| 
$C$L17:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 551,column 17,is_stmt,isa 0
;----------------------------------------------------------------------
; 551 | ret = 0;                                                               
;----------------------------------------------------------------------
        MOV       *-SP[4],#0            ; [CPU_ALU] |551| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 552,column 9,is_stmt,isa 0
        B         $C$L20,UNC            ; [CPU_ALU] |552| 
        ; branch occurs ; [] |552| 
$C$L18:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 530,column 9,is_stmt,isa 0
        MOV       AL,*-SP[3]            ; [CPU_ALU] |530| 
        CMPB      AL,#3                 ; [CPU_ALU] |530| 
        B         $C$L19,GT             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        CMPB      AL,#3                 ; [CPU_ALU] |530| 
        B         $C$L14,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        CMPB      AL,#0                 ; [CPU_ALU] |530| 
        B         $C$L11,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        CMPB      AL,#1                 ; [CPU_ALU] |530| 
        B         $C$L12,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        CMPB      AL,#2                 ; [CPU_ALU] |530| 
        B         $C$L13,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        B         $C$L17,UNC            ; [CPU_ALU] |530| 
        ; branch occurs ; [] |530| 
$C$L19:    
        CMPB      AL,#4                 ; [CPU_ALU] |530| 
        B         $C$L15,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        CMPB      AL,#5                 ; [CPU_ALU] |530| 
        B         $C$L16,EQ             ; [CPU_ALU] |530| 
        ; branchcc occurs ; [] |530| 
        B         $C$L17,UNC            ; [CPU_ALU] |530| 
        ; branch occurs ; [] |530| 
$C$L20:    
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 554,column 5,is_stmt,isa 0
;----------------------------------------------------------------------
; 554 | return ret;                                                            
;----------------------------------------------------------------------
        MOV       AL,*-SP[4]            ; [CPU_ALU] |554| 
	.dwpsn	file "C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c",line 555,column 1,is_stmt,isa 0
        SUBB      SP,#4                 ; [CPU_ARAU] 
	.dwcfi	cfa_offset, -2
$C$DW$39	.dwtag  DW_TAG_TI_branch
	.dwattr $C$DW$39, DW_AT_low_pc(0x00)
	.dwattr $C$DW$39, DW_AT_TI_return

        LRETR     ; [CPU_ALU] 
        ; return occurs ; [] 
	.dwattr $C$DW$33, DW_AT_TI_end_file("C:/Program Files/MATLAB/R2023b/toolbox/c2b/tic2000/src/MW_c28xSPI.c")
	.dwattr $C$DW$33, DW_AT_TI_end_line(0x22b)
	.dwattr $C$DW$33, DW_AT_TI_end_column(0x01)
	.dwendentry
	.dwendtag $C$DW$33

;**************************************************************
;* UNDEFINED EXTERNAL REFERENCES                              *
;**************************************************************
	.global	_Set_GPIOPin
	.global	_SpiaRegs
	.global	_SpibRegs

;***************************************************************
;* TYPE INFORMATION                                            *
;***************************************************************

$C$DW$T$39	.dwtag  DW_TAG_enumeration_type
	.dwattr $C$DW$T$39, DW_AT_byte_size(0x01)
$C$DW$40	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$40, DW_AT_name("SPI_OVERRUN_FLAG")
	.dwattr $C$DW$40, DW_AT_const_value(0x00)

$C$DW$41	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$41, DW_AT_name("SPI_INT_FLAG")
	.dwattr $C$DW$41, DW_AT_const_value(0x01)

$C$DW$42	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$42, DW_AT_name("SPI_BUFFULL_FLAG")
	.dwattr $C$DW$42, DW_AT_const_value(0x02)

$C$DW$43	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$43, DW_AT_name("SPI_TXFFST_FLAG")
	.dwattr $C$DW$43, DW_AT_const_value(0x03)

$C$DW$44	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$44, DW_AT_name("SPI_RXFFST_FLAG")
	.dwattr $C$DW$44, DW_AT_const_value(0x04)

$C$DW$45	.dwtag  DW_TAG_enumerator
	.dwattr $C$DW$45, DW_AT_name("SPI_RXFFOVF_FLAG")
	.dwattr $C$DW$45, DW_AT_const_value(0x05)

	.dwendtag $C$DW$T$39

$C$DW$T$40	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$40, DW_AT_name("SPI_statusVal")
	.dwattr $C$DW$T$40, DW_AT_type(*$C$DW$T$39)
	.dwattr $C$DW$T$40, DW_AT_language(DW_LANG_C)


$C$DW$T$20	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$20, DW_AT_name("SPICCR_BITS")
	.dwattr $C$DW$T$20, DW_AT_byte_size(0x01)
$C$DW$46	.dwtag  DW_TAG_member
	.dwattr $C$DW$46, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$46, DW_AT_name("SPICHAR")
	.dwattr $C$DW$46, DW_AT_TI_symbol_name("_SPICHAR")
	.dwattr $C$DW$46, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$46, DW_AT_bit_size(0x04)
	.dwattr $C$DW$46, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$46, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$47	.dwtag  DW_TAG_member
	.dwattr $C$DW$47, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$47, DW_AT_name("SPILBK")
	.dwattr $C$DW$47, DW_AT_TI_symbol_name("_SPILBK")
	.dwattr $C$DW$47, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$47, DW_AT_bit_size(0x01)
	.dwattr $C$DW$47, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$47, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$48	.dwtag  DW_TAG_member
	.dwattr $C$DW$48, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$48, DW_AT_name("rsvd1")
	.dwattr $C$DW$48, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$48, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$48, DW_AT_bit_size(0x01)
	.dwattr $C$DW$48, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$48, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$49	.dwtag  DW_TAG_member
	.dwattr $C$DW$49, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$49, DW_AT_name("CLKPOLARITY")
	.dwattr $C$DW$49, DW_AT_TI_symbol_name("_CLKPOLARITY")
	.dwattr $C$DW$49, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$49, DW_AT_bit_size(0x01)
	.dwattr $C$DW$49, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$49, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$50	.dwtag  DW_TAG_member
	.dwattr $C$DW$50, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$50, DW_AT_name("SPISWRESET")
	.dwattr $C$DW$50, DW_AT_TI_symbol_name("_SPISWRESET")
	.dwattr $C$DW$50, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$50, DW_AT_bit_size(0x01)
	.dwattr $C$DW$50, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$50, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$51	.dwtag  DW_TAG_member
	.dwattr $C$DW$51, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$51, DW_AT_name("rsvd2")
	.dwattr $C$DW$51, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$51, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$51, DW_AT_bit_size(0x08)
	.dwattr $C$DW$51, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$51, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$20


$C$DW$T$21	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$21, DW_AT_name("SPICCR_REG")
	.dwattr $C$DW$T$21, DW_AT_byte_size(0x01)
$C$DW$52	.dwtag  DW_TAG_member
	.dwattr $C$DW$52, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$52, DW_AT_name("all")
	.dwattr $C$DW$52, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$52, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$52, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$53	.dwtag  DW_TAG_member
	.dwattr $C$DW$53, DW_AT_type(*$C$DW$T$20)
	.dwattr $C$DW$53, DW_AT_name("bit")
	.dwattr $C$DW$53, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$53, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$53, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$21


$C$DW$T$22	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$22, DW_AT_name("SPICTL_BITS")
	.dwattr $C$DW$T$22, DW_AT_byte_size(0x01)
$C$DW$54	.dwtag  DW_TAG_member
	.dwattr $C$DW$54, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$54, DW_AT_name("SPIINTENA")
	.dwattr $C$DW$54, DW_AT_TI_symbol_name("_SPIINTENA")
	.dwattr $C$DW$54, DW_AT_bit_offset(0x0f)
	.dwattr $C$DW$54, DW_AT_bit_size(0x01)
	.dwattr $C$DW$54, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$54, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$55	.dwtag  DW_TAG_member
	.dwattr $C$DW$55, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$55, DW_AT_name("TALK")
	.dwattr $C$DW$55, DW_AT_TI_symbol_name("_TALK")
	.dwattr $C$DW$55, DW_AT_bit_offset(0x0e)
	.dwattr $C$DW$55, DW_AT_bit_size(0x01)
	.dwattr $C$DW$55, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$55, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$56	.dwtag  DW_TAG_member
	.dwattr $C$DW$56, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$56, DW_AT_name("MASTER_SLAVE")
	.dwattr $C$DW$56, DW_AT_TI_symbol_name("_MASTER_SLAVE")
	.dwattr $C$DW$56, DW_AT_bit_offset(0x0d)
	.dwattr $C$DW$56, DW_AT_bit_size(0x01)
	.dwattr $C$DW$56, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$56, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$57	.dwtag  DW_TAG_member
	.dwattr $C$DW$57, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$57, DW_AT_name("CLK_PHASE")
	.dwattr $C$DW$57, DW_AT_TI_symbol_name("_CLK_PHASE")
	.dwattr $C$DW$57, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$57, DW_AT_bit_size(0x01)
	.dwattr $C$DW$57, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$57, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$58	.dwtag  DW_TAG_member
	.dwattr $C$DW$58, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$58, DW_AT_name("OVERRUNINTENA")
	.dwattr $C$DW$58, DW_AT_TI_symbol_name("_OVERRUNINTENA")
	.dwattr $C$DW$58, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$58, DW_AT_bit_size(0x01)
	.dwattr $C$DW$58, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$58, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$59	.dwtag  DW_TAG_member
	.dwattr $C$DW$59, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$59, DW_AT_name("rsvd1")
	.dwattr $C$DW$59, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$59, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$59, DW_AT_bit_size(0x0b)
	.dwattr $C$DW$59, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$59, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$22


$C$DW$T$23	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$23, DW_AT_name("SPICTL_REG")
	.dwattr $C$DW$T$23, DW_AT_byte_size(0x01)
$C$DW$60	.dwtag  DW_TAG_member
	.dwattr $C$DW$60, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$60, DW_AT_name("all")
	.dwattr $C$DW$60, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$60, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$60, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$61	.dwtag  DW_TAG_member
	.dwattr $C$DW$61, DW_AT_type(*$C$DW$T$22)
	.dwattr $C$DW$61, DW_AT_name("bit")
	.dwattr $C$DW$61, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$61, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$61, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$23


$C$DW$T$24	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$24, DW_AT_name("SPIFFCT_BITS")
	.dwattr $C$DW$T$24, DW_AT_byte_size(0x01)
$C$DW$62	.dwtag  DW_TAG_member
	.dwattr $C$DW$62, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$62, DW_AT_name("TXDLY")
	.dwattr $C$DW$62, DW_AT_TI_symbol_name("_TXDLY")
	.dwattr $C$DW$62, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$62, DW_AT_bit_size(0x08)
	.dwattr $C$DW$62, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$62, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$63	.dwtag  DW_TAG_member
	.dwattr $C$DW$63, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$63, DW_AT_name("rsvd1")
	.dwattr $C$DW$63, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$63, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$63, DW_AT_bit_size(0x08)
	.dwattr $C$DW$63, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$63, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$24


$C$DW$T$25	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$25, DW_AT_name("SPIFFCT_REG")
	.dwattr $C$DW$T$25, DW_AT_byte_size(0x01)
$C$DW$64	.dwtag  DW_TAG_member
	.dwattr $C$DW$64, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$64, DW_AT_name("all")
	.dwattr $C$DW$64, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$64, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$64, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$65	.dwtag  DW_TAG_member
	.dwattr $C$DW$65, DW_AT_type(*$C$DW$T$24)
	.dwattr $C$DW$65, DW_AT_name("bit")
	.dwattr $C$DW$65, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$65, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$65, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$25


$C$DW$T$26	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$26, DW_AT_name("SPIFFRX_BITS")
	.dwattr $C$DW$T$26, DW_AT_byte_size(0x01)
$C$DW$66	.dwtag  DW_TAG_member
	.dwattr $C$DW$66, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$66, DW_AT_name("RXFFIL")
	.dwattr $C$DW$66, DW_AT_TI_symbol_name("_RXFFIL")
	.dwattr $C$DW$66, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$66, DW_AT_bit_size(0x05)
	.dwattr $C$DW$66, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$66, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$67	.dwtag  DW_TAG_member
	.dwattr $C$DW$67, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$67, DW_AT_name("RXFFIENA")
	.dwattr $C$DW$67, DW_AT_TI_symbol_name("_RXFFIENA")
	.dwattr $C$DW$67, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$67, DW_AT_bit_size(0x01)
	.dwattr $C$DW$67, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$67, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$68	.dwtag  DW_TAG_member
	.dwattr $C$DW$68, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$68, DW_AT_name("RXFFINTCLR")
	.dwattr $C$DW$68, DW_AT_TI_symbol_name("_RXFFINTCLR")
	.dwattr $C$DW$68, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$68, DW_AT_bit_size(0x01)
	.dwattr $C$DW$68, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$68, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$69	.dwtag  DW_TAG_member
	.dwattr $C$DW$69, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$69, DW_AT_name("RXFFINT")
	.dwattr $C$DW$69, DW_AT_TI_symbol_name("_RXFFINT")
	.dwattr $C$DW$69, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$69, DW_AT_bit_size(0x01)
	.dwattr $C$DW$69, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$69, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$70	.dwtag  DW_TAG_member
	.dwattr $C$DW$70, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$70, DW_AT_name("RXFFST")
	.dwattr $C$DW$70, DW_AT_TI_symbol_name("_RXFFST")
	.dwattr $C$DW$70, DW_AT_bit_offset(0x03)
	.dwattr $C$DW$70, DW_AT_bit_size(0x05)
	.dwattr $C$DW$70, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$70, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$71	.dwtag  DW_TAG_member
	.dwattr $C$DW$71, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$71, DW_AT_name("RXFIFORESET")
	.dwattr $C$DW$71, DW_AT_TI_symbol_name("_RXFIFORESET")
	.dwattr $C$DW$71, DW_AT_bit_offset(0x02)
	.dwattr $C$DW$71, DW_AT_bit_size(0x01)
	.dwattr $C$DW$71, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$71, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$72	.dwtag  DW_TAG_member
	.dwattr $C$DW$72, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$72, DW_AT_name("RXFFOVFCLR")
	.dwattr $C$DW$72, DW_AT_TI_symbol_name("_RXFFOVFCLR")
	.dwattr $C$DW$72, DW_AT_bit_offset(0x01)
	.dwattr $C$DW$72, DW_AT_bit_size(0x01)
	.dwattr $C$DW$72, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$72, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$73	.dwtag  DW_TAG_member
	.dwattr $C$DW$73, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$73, DW_AT_name("RXFFOVF")
	.dwattr $C$DW$73, DW_AT_TI_symbol_name("_RXFFOVF")
	.dwattr $C$DW$73, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$73, DW_AT_bit_size(0x01)
	.dwattr $C$DW$73, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$73, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$26


$C$DW$T$27	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$27, DW_AT_name("SPIFFRX_REG")
	.dwattr $C$DW$T$27, DW_AT_byte_size(0x01)
$C$DW$74	.dwtag  DW_TAG_member
	.dwattr $C$DW$74, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$74, DW_AT_name("all")
	.dwattr $C$DW$74, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$74, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$74, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$75	.dwtag  DW_TAG_member
	.dwattr $C$DW$75, DW_AT_type(*$C$DW$T$26)
	.dwattr $C$DW$75, DW_AT_name("bit")
	.dwattr $C$DW$75, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$75, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$75, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$27


$C$DW$T$28	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$28, DW_AT_name("SPIFFTX_BITS")
	.dwattr $C$DW$T$28, DW_AT_byte_size(0x01)
$C$DW$76	.dwtag  DW_TAG_member
	.dwattr $C$DW$76, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$76, DW_AT_name("TXFFIL")
	.dwattr $C$DW$76, DW_AT_TI_symbol_name("_TXFFIL")
	.dwattr $C$DW$76, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$76, DW_AT_bit_size(0x05)
	.dwattr $C$DW$76, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$76, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$77	.dwtag  DW_TAG_member
	.dwattr $C$DW$77, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$77, DW_AT_name("TXFFIENA")
	.dwattr $C$DW$77, DW_AT_TI_symbol_name("_TXFFIENA")
	.dwattr $C$DW$77, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$77, DW_AT_bit_size(0x01)
	.dwattr $C$DW$77, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$77, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$78	.dwtag  DW_TAG_member
	.dwattr $C$DW$78, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$78, DW_AT_name("TXFFINTCLR")
	.dwattr $C$DW$78, DW_AT_TI_symbol_name("_TXFFINTCLR")
	.dwattr $C$DW$78, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$78, DW_AT_bit_size(0x01)
	.dwattr $C$DW$78, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$78, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$79	.dwtag  DW_TAG_member
	.dwattr $C$DW$79, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$79, DW_AT_name("TXFFINT")
	.dwattr $C$DW$79, DW_AT_TI_symbol_name("_TXFFINT")
	.dwattr $C$DW$79, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$79, DW_AT_bit_size(0x01)
	.dwattr $C$DW$79, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$79, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$80	.dwtag  DW_TAG_member
	.dwattr $C$DW$80, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$80, DW_AT_name("TXFFST")
	.dwattr $C$DW$80, DW_AT_TI_symbol_name("_TXFFST")
	.dwattr $C$DW$80, DW_AT_bit_offset(0x03)
	.dwattr $C$DW$80, DW_AT_bit_size(0x05)
	.dwattr $C$DW$80, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$80, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$81	.dwtag  DW_TAG_member
	.dwattr $C$DW$81, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$81, DW_AT_name("TXFIFO")
	.dwattr $C$DW$81, DW_AT_TI_symbol_name("_TXFIFO")
	.dwattr $C$DW$81, DW_AT_bit_offset(0x02)
	.dwattr $C$DW$81, DW_AT_bit_size(0x01)
	.dwattr $C$DW$81, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$81, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$82	.dwtag  DW_TAG_member
	.dwattr $C$DW$82, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$82, DW_AT_name("SPIFFENA")
	.dwattr $C$DW$82, DW_AT_TI_symbol_name("_SPIFFENA")
	.dwattr $C$DW$82, DW_AT_bit_offset(0x01)
	.dwattr $C$DW$82, DW_AT_bit_size(0x01)
	.dwattr $C$DW$82, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$82, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$83	.dwtag  DW_TAG_member
	.dwattr $C$DW$83, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$83, DW_AT_name("SPIRST")
	.dwattr $C$DW$83, DW_AT_TI_symbol_name("_SPIRST")
	.dwattr $C$DW$83, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$83, DW_AT_bit_size(0x01)
	.dwattr $C$DW$83, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$83, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$28


$C$DW$T$29	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$29, DW_AT_name("SPIFFTX_REG")
	.dwattr $C$DW$T$29, DW_AT_byte_size(0x01)
$C$DW$84	.dwtag  DW_TAG_member
	.dwattr $C$DW$84, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$84, DW_AT_name("all")
	.dwattr $C$DW$84, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$84, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$84, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$85	.dwtag  DW_TAG_member
	.dwattr $C$DW$85, DW_AT_type(*$C$DW$T$28)
	.dwattr $C$DW$85, DW_AT_name("bit")
	.dwattr $C$DW$85, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$85, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$85, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$29


$C$DW$T$30	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$30, DW_AT_name("SPIPRI_BITS")
	.dwattr $C$DW$T$30, DW_AT_byte_size(0x01)
$C$DW$86	.dwtag  DW_TAG_member
	.dwattr $C$DW$86, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$86, DW_AT_name("TRIWIRE")
	.dwattr $C$DW$86, DW_AT_TI_symbol_name("_TRIWIRE")
	.dwattr $C$DW$86, DW_AT_bit_offset(0x0f)
	.dwattr $C$DW$86, DW_AT_bit_size(0x01)
	.dwattr $C$DW$86, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$86, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$87	.dwtag  DW_TAG_member
	.dwattr $C$DW$87, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$87, DW_AT_name("STEINV")
	.dwattr $C$DW$87, DW_AT_TI_symbol_name("_STEINV")
	.dwattr $C$DW$87, DW_AT_bit_offset(0x0e)
	.dwattr $C$DW$87, DW_AT_bit_size(0x01)
	.dwattr $C$DW$87, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$87, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$88	.dwtag  DW_TAG_member
	.dwattr $C$DW$88, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$88, DW_AT_name("rsvd1")
	.dwattr $C$DW$88, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$88, DW_AT_bit_offset(0x0c)
	.dwattr $C$DW$88, DW_AT_bit_size(0x02)
	.dwattr $C$DW$88, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$88, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$89	.dwtag  DW_TAG_member
	.dwattr $C$DW$89, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$89, DW_AT_name("FREE")
	.dwattr $C$DW$89, DW_AT_TI_symbol_name("_FREE")
	.dwattr $C$DW$89, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$89, DW_AT_bit_size(0x01)
	.dwattr $C$DW$89, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$89, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$90	.dwtag  DW_TAG_member
	.dwattr $C$DW$90, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$90, DW_AT_name("SOFT")
	.dwattr $C$DW$90, DW_AT_TI_symbol_name("_SOFT")
	.dwattr $C$DW$90, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$90, DW_AT_bit_size(0x01)
	.dwattr $C$DW$90, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$90, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$91	.dwtag  DW_TAG_member
	.dwattr $C$DW$91, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$91, DW_AT_name("PRIORITY")
	.dwattr $C$DW$91, DW_AT_TI_symbol_name("_PRIORITY")
	.dwattr $C$DW$91, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$91, DW_AT_bit_size(0x01)
	.dwattr $C$DW$91, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$91, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$92	.dwtag  DW_TAG_member
	.dwattr $C$DW$92, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$92, DW_AT_name("rsvd2")
	.dwattr $C$DW$92, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$92, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$92, DW_AT_bit_size(0x09)
	.dwattr $C$DW$92, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$92, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$30


$C$DW$T$31	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$31, DW_AT_name("SPIPRI_REG")
	.dwattr $C$DW$T$31, DW_AT_byte_size(0x01)
$C$DW$93	.dwtag  DW_TAG_member
	.dwattr $C$DW$93, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$93, DW_AT_name("all")
	.dwattr $C$DW$93, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$93, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$93, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$94	.dwtag  DW_TAG_member
	.dwattr $C$DW$94, DW_AT_type(*$C$DW$T$30)
	.dwattr $C$DW$94, DW_AT_name("bit")
	.dwattr $C$DW$94, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$94, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$94, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$31


$C$DW$T$32	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$32, DW_AT_name("SPISTS_BITS")
	.dwattr $C$DW$T$32, DW_AT_byte_size(0x01)
$C$DW$95	.dwtag  DW_TAG_member
	.dwattr $C$DW$95, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$95, DW_AT_name("rsvd1")
	.dwattr $C$DW$95, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$95, DW_AT_bit_offset(0x0b)
	.dwattr $C$DW$95, DW_AT_bit_size(0x05)
	.dwattr $C$DW$95, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$95, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$96	.dwtag  DW_TAG_member
	.dwattr $C$DW$96, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$96, DW_AT_name("BUFFULL_FLAG")
	.dwattr $C$DW$96, DW_AT_TI_symbol_name("_BUFFULL_FLAG")
	.dwattr $C$DW$96, DW_AT_bit_offset(0x0a)
	.dwattr $C$DW$96, DW_AT_bit_size(0x01)
	.dwattr $C$DW$96, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$96, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$97	.dwtag  DW_TAG_member
	.dwattr $C$DW$97, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$97, DW_AT_name("INT_FLAG")
	.dwattr $C$DW$97, DW_AT_TI_symbol_name("_INT_FLAG")
	.dwattr $C$DW$97, DW_AT_bit_offset(0x09)
	.dwattr $C$DW$97, DW_AT_bit_size(0x01)
	.dwattr $C$DW$97, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$97, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$98	.dwtag  DW_TAG_member
	.dwattr $C$DW$98, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$98, DW_AT_name("OVERRUN_FLAG")
	.dwattr $C$DW$98, DW_AT_TI_symbol_name("_OVERRUN_FLAG")
	.dwattr $C$DW$98, DW_AT_bit_offset(0x08)
	.dwattr $C$DW$98, DW_AT_bit_size(0x01)
	.dwattr $C$DW$98, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$98, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$99	.dwtag  DW_TAG_member
	.dwattr $C$DW$99, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$99, DW_AT_name("rsvd2")
	.dwattr $C$DW$99, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$99, DW_AT_bit_offset(0x00)
	.dwattr $C$DW$99, DW_AT_bit_size(0x08)
	.dwattr $C$DW$99, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$99, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$32


$C$DW$T$33	.dwtag  DW_TAG_union_type
	.dwattr $C$DW$T$33, DW_AT_name("SPISTS_REG")
	.dwattr $C$DW$T$33, DW_AT_byte_size(0x01)
$C$DW$100	.dwtag  DW_TAG_member
	.dwattr $C$DW$100, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$100, DW_AT_name("all")
	.dwattr $C$DW$100, DW_AT_TI_symbol_name("_all")
	.dwattr $C$DW$100, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$100, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$101	.dwtag  DW_TAG_member
	.dwattr $C$DW$101, DW_AT_type(*$C$DW$T$32)
	.dwattr $C$DW$101, DW_AT_name("bit")
	.dwattr $C$DW$101, DW_AT_TI_symbol_name("_bit")
	.dwattr $C$DW$101, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$101, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$33


$C$DW$T$35	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$35, DW_AT_name("SPI_REGS")
	.dwattr $C$DW$T$35, DW_AT_byte_size(0x10)
$C$DW$102	.dwtag  DW_TAG_member
	.dwattr $C$DW$102, DW_AT_type(*$C$DW$T$21)
	.dwattr $C$DW$102, DW_AT_name("SPICCR")
	.dwattr $C$DW$102, DW_AT_TI_symbol_name("_SPICCR")
	.dwattr $C$DW$102, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$102, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$103	.dwtag  DW_TAG_member
	.dwattr $C$DW$103, DW_AT_type(*$C$DW$T$23)
	.dwattr $C$DW$103, DW_AT_name("SPICTL")
	.dwattr $C$DW$103, DW_AT_TI_symbol_name("_SPICTL")
	.dwattr $C$DW$103, DW_AT_data_member_location[DW_OP_plus_uconst 0x1]
	.dwattr $C$DW$103, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$104	.dwtag  DW_TAG_member
	.dwattr $C$DW$104, DW_AT_type(*$C$DW$T$33)
	.dwattr $C$DW$104, DW_AT_name("SPISTS")
	.dwattr $C$DW$104, DW_AT_TI_symbol_name("_SPISTS")
	.dwattr $C$DW$104, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$104, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$105	.dwtag  DW_TAG_member
	.dwattr $C$DW$105, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$105, DW_AT_name("rsvd1")
	.dwattr $C$DW$105, DW_AT_TI_symbol_name("_rsvd1")
	.dwattr $C$DW$105, DW_AT_data_member_location[DW_OP_plus_uconst 0x3]
	.dwattr $C$DW$105, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$106	.dwtag  DW_TAG_member
	.dwattr $C$DW$106, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$106, DW_AT_name("SPIBRR")
	.dwattr $C$DW$106, DW_AT_TI_symbol_name("_SPIBRR")
	.dwattr $C$DW$106, DW_AT_data_member_location[DW_OP_plus_uconst 0x4]
	.dwattr $C$DW$106, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$107	.dwtag  DW_TAG_member
	.dwattr $C$DW$107, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$107, DW_AT_name("rsvd2")
	.dwattr $C$DW$107, DW_AT_TI_symbol_name("_rsvd2")
	.dwattr $C$DW$107, DW_AT_data_member_location[DW_OP_plus_uconst 0x5]
	.dwattr $C$DW$107, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$108	.dwtag  DW_TAG_member
	.dwattr $C$DW$108, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$108, DW_AT_name("SPIRXEMU")
	.dwattr $C$DW$108, DW_AT_TI_symbol_name("_SPIRXEMU")
	.dwattr $C$DW$108, DW_AT_data_member_location[DW_OP_plus_uconst 0x6]
	.dwattr $C$DW$108, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$109	.dwtag  DW_TAG_member
	.dwattr $C$DW$109, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$109, DW_AT_name("SPIRXBUF")
	.dwattr $C$DW$109, DW_AT_TI_symbol_name("_SPIRXBUF")
	.dwattr $C$DW$109, DW_AT_data_member_location[DW_OP_plus_uconst 0x7]
	.dwattr $C$DW$109, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$110	.dwtag  DW_TAG_member
	.dwattr $C$DW$110, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$110, DW_AT_name("SPITXBUF")
	.dwattr $C$DW$110, DW_AT_TI_symbol_name("_SPITXBUF")
	.dwattr $C$DW$110, DW_AT_data_member_location[DW_OP_plus_uconst 0x8]
	.dwattr $C$DW$110, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$111	.dwtag  DW_TAG_member
	.dwattr $C$DW$111, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$111, DW_AT_name("SPIDAT")
	.dwattr $C$DW$111, DW_AT_TI_symbol_name("_SPIDAT")
	.dwattr $C$DW$111, DW_AT_data_member_location[DW_OP_plus_uconst 0x9]
	.dwattr $C$DW$111, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$112	.dwtag  DW_TAG_member
	.dwattr $C$DW$112, DW_AT_type(*$C$DW$T$29)
	.dwattr $C$DW$112, DW_AT_name("SPIFFTX")
	.dwattr $C$DW$112, DW_AT_TI_symbol_name("_SPIFFTX")
	.dwattr $C$DW$112, DW_AT_data_member_location[DW_OP_plus_uconst 0xa]
	.dwattr $C$DW$112, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$113	.dwtag  DW_TAG_member
	.dwattr $C$DW$113, DW_AT_type(*$C$DW$T$27)
	.dwattr $C$DW$113, DW_AT_name("SPIFFRX")
	.dwattr $C$DW$113, DW_AT_TI_symbol_name("_SPIFFRX")
	.dwattr $C$DW$113, DW_AT_data_member_location[DW_OP_plus_uconst 0xb]
	.dwattr $C$DW$113, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$114	.dwtag  DW_TAG_member
	.dwattr $C$DW$114, DW_AT_type(*$C$DW$T$25)
	.dwattr $C$DW$114, DW_AT_name("SPIFFCT")
	.dwattr $C$DW$114, DW_AT_TI_symbol_name("_SPIFFCT")
	.dwattr $C$DW$114, DW_AT_data_member_location[DW_OP_plus_uconst 0xc]
	.dwattr $C$DW$114, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$115	.dwtag  DW_TAG_member
	.dwattr $C$DW$115, DW_AT_type(*$C$DW$T$34)
	.dwattr $C$DW$115, DW_AT_name("rsvd3")
	.dwattr $C$DW$115, DW_AT_TI_symbol_name("_rsvd3")
	.dwattr $C$DW$115, DW_AT_data_member_location[DW_OP_plus_uconst 0xd]
	.dwattr $C$DW$115, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$116	.dwtag  DW_TAG_member
	.dwattr $C$DW$116, DW_AT_type(*$C$DW$T$31)
	.dwattr $C$DW$116, DW_AT_name("SPIPRI")
	.dwattr $C$DW$116, DW_AT_TI_symbol_name("_SPIPRI")
	.dwattr $C$DW$116, DW_AT_data_member_location[DW_OP_plus_uconst 0xf]
	.dwattr $C$DW$116, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$35

$C$DW$117	.dwtag  DW_TAG_TI_far_type
	.dwattr $C$DW$117, DW_AT_type(*$C$DW$T$35)

$C$DW$T$41	.dwtag  DW_TAG_volatile_type
	.dwattr $C$DW$T$41, DW_AT_type(*$C$DW$117)


$C$DW$T$38	.dwtag  DW_TAG_structure_type
	.dwattr $C$DW$T$38, DW_AT_name("_MW_SpiObj")
	.dwattr $C$DW$T$38, DW_AT_byte_size(0x06)
$C$DW$118	.dwtag  DW_TAG_member
	.dwattr $C$DW$118, DW_AT_type(*$C$DW$T$37)
	.dwattr $C$DW$118, DW_AT_name("spi_base_address")
	.dwattr $C$DW$118, DW_AT_TI_symbol_name("_spi_base_address")
	.dwattr $C$DW$118, DW_AT_data_member_location[DW_OP_plus_uconst 0x0]
	.dwattr $C$DW$118, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$119	.dwtag  DW_TAG_member
	.dwattr $C$DW$119, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$119, DW_AT_name("spi_clk_mode")
	.dwattr $C$DW$119, DW_AT_TI_symbol_name("_spi_clk_mode")
	.dwattr $C$DW$119, DW_AT_data_member_location[DW_OP_plus_uconst 0x2]
	.dwattr $C$DW$119, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$120	.dwtag  DW_TAG_member
	.dwattr $C$DW$120, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$120, DW_AT_name("charLength")
	.dwattr $C$DW$120, DW_AT_TI_symbol_name("_charLength")
	.dwattr $C$DW$120, DW_AT_data_member_location[DW_OP_plus_uconst 0x3]
	.dwattr $C$DW$120, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$121	.dwtag  DW_TAG_member
	.dwattr $C$DW$121, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$121, DW_AT_name("fifoLevel")
	.dwattr $C$DW$121, DW_AT_TI_symbol_name("_fifoLevel")
	.dwattr $C$DW$121, DW_AT_data_member_location[DW_OP_plus_uconst 0x4]
	.dwattr $C$DW$121, DW_AT_accessibility(DW_ACCESS_public)

$C$DW$122	.dwtag  DW_TAG_member
	.dwattr $C$DW$122, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$122, DW_AT_name("txInterrupt")
	.dwattr $C$DW$122, DW_AT_TI_symbol_name("_txInterrupt")
	.dwattr $C$DW$122, DW_AT_data_member_location[DW_OP_plus_uconst 0x5]
	.dwattr $C$DW$122, DW_AT_accessibility(DW_ACCESS_public)

	.dwendtag $C$DW$T$38

$C$DW$T$43	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$43, DW_AT_name("MW_SpiObj")
	.dwattr $C$DW$T$43, DW_AT_type(*$C$DW$T$38)
	.dwattr $C$DW$T$43, DW_AT_language(DW_LANG_C)

$C$DW$T$44	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$44, DW_AT_type(*$C$DW$T$43)
	.dwattr $C$DW$T$44, DW_AT_address_class(0x20)

$C$DW$T$45	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$45, DW_AT_name("MW_SpiHandle")
	.dwattr $C$DW$T$45, DW_AT_type(*$C$DW$T$44)
	.dwattr $C$DW$T$45, DW_AT_language(DW_LANG_C)


$C$DW$T$48	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$48, DW_AT_type(*$C$DW$T$43)
	.dwattr $C$DW$T$48, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$48, DW_AT_byte_size(0x18)
$C$DW$123	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$123, DW_AT_upper_bound(0x03)

	.dwendtag $C$DW$T$48

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


$C$DW$T$34	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$34, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$34, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$34, DW_AT_byte_size(0x02)
$C$DW$124	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$124, DW_AT_upper_bound(0x01)

	.dwendtag $C$DW$T$34

$C$DW$T$36	.dwtag  DW_TAG_pointer_type
	.dwattr $C$DW$T$36, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$36, DW_AT_address_class(0x20)

$C$DW$T$37	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$37, DW_AT_name("SPI_REG_ADDRESS")
	.dwattr $C$DW$T$37, DW_AT_type(*$C$DW$T$36)
	.dwattr $C$DW$T$37, DW_AT_language(DW_LANG_C)


$C$DW$T$53	.dwtag  DW_TAG_array_type
	.dwattr $C$DW$T$53, DW_AT_type(*$C$DW$T$19)
	.dwattr $C$DW$T$53, DW_AT_language(DW_LANG_C)
	.dwattr $C$DW$T$53, DW_AT_byte_size(0x04)
$C$DW$125	.dwtag  DW_TAG_subrange_type
	.dwattr $C$DW$125, DW_AT_upper_bound(0x03)

	.dwendtag $C$DW$T$53

$C$DW$T$12	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$12, DW_AT_encoding(DW_ATE_signed)
	.dwattr $C$DW$T$12, DW_AT_name("long")
	.dwattr $C$DW$T$12, DW_AT_byte_size(0x02)

$C$DW$T$13	.dwtag  DW_TAG_base_type
	.dwattr $C$DW$T$13, DW_AT_encoding(DW_ATE_unsigned)
	.dwattr $C$DW$T$13, DW_AT_name("unsigned long")
	.dwattr $C$DW$T$13, DW_AT_byte_size(0x02)

$C$DW$T$46	.dwtag  DW_TAG_typedef
	.dwattr $C$DW$T$46, DW_AT_name("Uint32")
	.dwattr $C$DW$T$46, DW_AT_type(*$C$DW$T$13)
	.dwattr $C$DW$T$46, DW_AT_language(DW_LANG_C)

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

$C$DW$126	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$126, DW_AT_name("AL")
	.dwattr $C$DW$126, DW_AT_location[DW_OP_reg0]

$C$DW$127	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$127, DW_AT_name("AH")
	.dwattr $C$DW$127, DW_AT_location[DW_OP_reg1]

$C$DW$128	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$128, DW_AT_name("PL")
	.dwattr $C$DW$128, DW_AT_location[DW_OP_reg2]

$C$DW$129	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$129, DW_AT_name("PH")
	.dwattr $C$DW$129, DW_AT_location[DW_OP_reg3]

$C$DW$130	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$130, DW_AT_name("SP")
	.dwattr $C$DW$130, DW_AT_location[DW_OP_reg20]

$C$DW$131	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$131, DW_AT_name("XT")
	.dwattr $C$DW$131, DW_AT_location[DW_OP_reg21]

$C$DW$132	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$132, DW_AT_name("T")
	.dwattr $C$DW$132, DW_AT_location[DW_OP_reg22]

$C$DW$133	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$133, DW_AT_name("ST0")
	.dwattr $C$DW$133, DW_AT_location[DW_OP_reg23]

$C$DW$134	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$134, DW_AT_name("ST1")
	.dwattr $C$DW$134, DW_AT_location[DW_OP_reg24]

$C$DW$135	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$135, DW_AT_name("PC")
	.dwattr $C$DW$135, DW_AT_location[DW_OP_reg25]

$C$DW$136	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$136, DW_AT_name("RPC")
	.dwattr $C$DW$136, DW_AT_location[DW_OP_reg26]

$C$DW$137	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$137, DW_AT_name("FP")
	.dwattr $C$DW$137, DW_AT_location[DW_OP_reg28]

$C$DW$138	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$138, DW_AT_name("DP")
	.dwattr $C$DW$138, DW_AT_location[DW_OP_reg29]

$C$DW$139	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$139, DW_AT_name("SXM")
	.dwattr $C$DW$139, DW_AT_location[DW_OP_reg30]

$C$DW$140	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$140, DW_AT_name("PM")
	.dwattr $C$DW$140, DW_AT_location[DW_OP_reg31]

$C$DW$141	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$141, DW_AT_name("OVM")
	.dwattr $C$DW$141, DW_AT_location[DW_OP_regx 0x20]

$C$DW$142	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$142, DW_AT_name("PAGE0")
	.dwattr $C$DW$142, DW_AT_location[DW_OP_regx 0x21]

$C$DW$143	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$143, DW_AT_name("AMODE")
	.dwattr $C$DW$143, DW_AT_location[DW_OP_regx 0x22]

$C$DW$144	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$144, DW_AT_name("EALLOW")
	.dwattr $C$DW$144, DW_AT_location[DW_OP_regx 0x4e]

$C$DW$145	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$145, DW_AT_name("INTM")
	.dwattr $C$DW$145, DW_AT_location[DW_OP_regx 0x23]

$C$DW$146	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$146, DW_AT_name("IFR")
	.dwattr $C$DW$146, DW_AT_location[DW_OP_regx 0x24]

$C$DW$147	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$147, DW_AT_name("IER")
	.dwattr $C$DW$147, DW_AT_location[DW_OP_regx 0x25]

$C$DW$148	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$148, DW_AT_name("V")
	.dwattr $C$DW$148, DW_AT_location[DW_OP_regx 0x26]

$C$DW$149	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$149, DW_AT_name("PSEUDOH")
	.dwattr $C$DW$149, DW_AT_location[DW_OP_regx 0x4c]

$C$DW$150	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$150, DW_AT_name("VOL")
	.dwattr $C$DW$150, DW_AT_location[DW_OP_regx 0x4d]

$C$DW$151	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$151, DW_AT_name("AR0")
	.dwattr $C$DW$151, DW_AT_location[DW_OP_reg4]

$C$DW$152	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$152, DW_AT_name("XAR0")
	.dwattr $C$DW$152, DW_AT_location[DW_OP_reg5]

$C$DW$153	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$153, DW_AT_name("AR1")
	.dwattr $C$DW$153, DW_AT_location[DW_OP_reg6]

$C$DW$154	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$154, DW_AT_name("XAR1")
	.dwattr $C$DW$154, DW_AT_location[DW_OP_reg7]

$C$DW$155	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$155, DW_AT_name("AR2")
	.dwattr $C$DW$155, DW_AT_location[DW_OP_reg8]

$C$DW$156	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$156, DW_AT_name("XAR2")
	.dwattr $C$DW$156, DW_AT_location[DW_OP_reg9]

$C$DW$157	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$157, DW_AT_name("AR3")
	.dwattr $C$DW$157, DW_AT_location[DW_OP_reg10]

$C$DW$158	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$158, DW_AT_name("XAR3")
	.dwattr $C$DW$158, DW_AT_location[DW_OP_reg11]

$C$DW$159	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$159, DW_AT_name("AR4")
	.dwattr $C$DW$159, DW_AT_location[DW_OP_reg12]

$C$DW$160	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$160, DW_AT_name("XAR4")
	.dwattr $C$DW$160, DW_AT_location[DW_OP_reg13]

$C$DW$161	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$161, DW_AT_name("AR5")
	.dwattr $C$DW$161, DW_AT_location[DW_OP_reg14]

$C$DW$162	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$162, DW_AT_name("XAR5")
	.dwattr $C$DW$162, DW_AT_location[DW_OP_reg15]

$C$DW$163	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$163, DW_AT_name("AR6")
	.dwattr $C$DW$163, DW_AT_location[DW_OP_reg16]

$C$DW$164	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$164, DW_AT_name("XAR6")
	.dwattr $C$DW$164, DW_AT_location[DW_OP_reg17]

$C$DW$165	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$165, DW_AT_name("AR7")
	.dwattr $C$DW$165, DW_AT_location[DW_OP_reg18]

$C$DW$166	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$166, DW_AT_name("XAR7")
	.dwattr $C$DW$166, DW_AT_location[DW_OP_reg19]

$C$DW$167	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$167, DW_AT_name("R0H")
	.dwattr $C$DW$167, DW_AT_location[DW_OP_regx 0x2b]

$C$DW$168	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$168, DW_AT_name("R1H")
	.dwattr $C$DW$168, DW_AT_location[DW_OP_regx 0x2f]

$C$DW$169	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$169, DW_AT_name("R2H")
	.dwattr $C$DW$169, DW_AT_location[DW_OP_regx 0x33]

$C$DW$170	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$170, DW_AT_name("R3H")
	.dwattr $C$DW$170, DW_AT_location[DW_OP_regx 0x37]

$C$DW$171	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$171, DW_AT_name("R4H")
	.dwattr $C$DW$171, DW_AT_location[DW_OP_regx 0x3b]

$C$DW$172	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$172, DW_AT_name("R5H")
	.dwattr $C$DW$172, DW_AT_location[DW_OP_regx 0x3f]

$C$DW$173	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$173, DW_AT_name("R6H")
	.dwattr $C$DW$173, DW_AT_location[DW_OP_regx 0x43]

$C$DW$174	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$174, DW_AT_name("R7H")
	.dwattr $C$DW$174, DW_AT_location[DW_OP_regx 0x47]

$C$DW$175	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$175, DW_AT_name("RB")
	.dwattr $C$DW$175, DW_AT_location[DW_OP_regx 0x4a]

$C$DW$176	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$176, DW_AT_name("STF")
	.dwattr $C$DW$176, DW_AT_location[DW_OP_regx 0x28]

$C$DW$177	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$177, DW_AT_name("FPUHAZ")
	.dwattr $C$DW$177, DW_AT_location[DW_OP_reg27]

$C$DW$178	.dwtag  DW_TAG_TI_assign_register
	.dwattr $C$DW$178, DW_AT_name("STF_HWDIV")
	.dwattr $C$DW$178, DW_AT_location[DW_OP_regx 0x4f]

	.dwendtag $C$DW$CU

