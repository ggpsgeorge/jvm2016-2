//#################################################################################################
/*! \file opcodes.h
 *
 *  \brief Biblioteca de servicos de Opcodes
 *
 *  Biblioteca responsavel por prover as definicoes e metodos relacionados aos opcodes de uma JVM
 */
//##################################################################################################

#ifndef OPCODES_h
#define OPCODES_h

#ifdef OPCODES_SERV
#define EXTO
#else
#define EXTO extern
#endif

#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"


//--------------------------------------------------------------------------------------------------
// Definicoes de opcodes

#define OP_aaload 0x32
#define OP_aastore 0x53
#define OP_aconst_null 0x1
#define OP_aload 0x19
#define OP_aload_0 0x2a
#define OP_aload_1 0x2b
#define OP_aload_2 0x2c
#define OP_aload_3 0x2d
#define OP_anewarray 0xbd
#define OP_areturn 0xb0
#define OP_arraylength 0xbe
#define OP_astore 0x3a
#define OP_astore_0 0x4b
#define OP_astore_1 0x4c
#define OP_astore_2 0x4d
#define OP_astore_3 0x4e
#define OP_athrow 0xbf
#define OP_baload 0x33
#define OP_bastore 0x54
#define OP_bipush 0x10
#define OP_breakpoint 0xca
#define OP_caload 0x34
#define OP_castore 0x55
#define OP_checkcast 0xc0
#define OP_d2f 0x90
#define OP_d2i 0x8e
#define OP_d2l 0x8f
#define OP_dadd 0x63
#define OP_daload 0x31
#define OP_dastore 0x52
#define OP_dcmpg 0x98
#define OP_dcmpl 0x97
#define OP_dconst_0 0x0e
#define OP_dconst_1 0x0f
#define OP_ddiv 0x6f
#define OP_dload 0x18
#define OP_dload_0 0x26
#define OP_dload_1 0x27
#define OP_dload_2 0x28
#define OP_dload_3 0x29
#define OP_dmul 0x6b
#define OP_dneg 0x77
#define OP_drem 0x73
#define OP_dreturn 0xaf
#define OP_dstore 0x39
#define OP_dstore_0 0x47
#define OP_dstore_1 0x48
#define OP_dstore_2 0x49
#define OP_dstore_3 0x4a
#define OP_dsub 0x67
#define OP_dup 0x59
#define OP_dup_x1 0x5a
#define OP_dup_x2 0x5b
#define OP_dup2 0x5c
#define OP_dup2_x1 0x5d
#define OP_dup2_x2 0x5e
#define OP_f2d 0x8d
#define OP_f2i 0x8b
#define OP_f2l 0x8c
#define OP_fadd 0x62
#define OP_faload 0x30
#define OP_fastore 0x51
#define OP_fcmpg 0x96
#define OP_fcmpl 0x95
#define OP_fconst_0 0x0b
#define OP_fconst_1 0x0c
#define OP_fconst_2 0x0d
#define OP_fdiv 0x6e
#define OP_fload 0x17
#define OP_fload_0 0x22
#define OP_fload_1 0x23
#define OP_fload_2 0x24
#define OP_fload_3 0x25
#define OP_fmul 0x6a
#define OP_fneg 0x76
#define OP_frem 0x72
#define OP_freturn 0xae
#define OP_fstore 0x38
#define OP_fstore_0 0x43
#define OP_fstore_1 0x44
#define OP_fstore_2 0x45
#define OP_fstore_3 0x46
#define OP_fsub 0x66
#define OP_getfield 0xb4
#define OP_getstatic 0xb2
#define OP_goto 0xa7
#define OP_goto_w 0xc8
#define OP_i2b 0x91
#define OP_i2c 0x92
#define OP_i2d 0x87
#define OP_i2f 0x86
#define OP_i2l 0x85
#define OP_i2s 0x93
#define OP_iadd 0x60
#define OP_iaload 0x2e
#define OP_iand 0x7e
#define OP_iastore 0x4f
#define OP_iconst_m1 0x2
#define OP_iconst_0 0x3
#define OP_iconst_1 0x4
#define OP_iconst_2 0x5
#define OP_iconst_3 0x6
#define OP_iconst_4 0x7
#define OP_iconst_5 0x8
#define OP_idiv 0x6c
#define OP_if_acmpeq 0xa5
#define OP_if_acmpne 0xa6
#define OP_if_icmpeq 0x9f
#define OP_if_icmpge 0xa2
#define OP_if_icmpgt 0xa3
#define OP_if_icmple 0xa4
#define OP_if_icmplt 0xa1
#define OP_if_icmpne 0xa0
#define OP_ifeq 0x99
#define OP_ifge 0x9c
#define OP_ifgt 0x9d
#define OP_ifle 0x9e
#define OP_iflt 0x9b
#define OP_ifne 0x9a
#define OP_ifnonnull 0xc7
#define OP_ifnull 0xc6
#define OP_iinc 0x84
#define OP_iload 0x15
#define OP_iload_0 0x1a
#define OP_iload_1 0x1b
#define OP_iload_2 0x1c
#define OP_iload_3 0x1d
#define OP_impdep1 0xfe
#define OP_impdep2 0xff
#define OP_imul 0x68
#define OP_ineg 0x74
#define OP_instanceof 0xc1
#define OP_invokedynamic 0xba
#define OP_invokeinterface 0xb9
#define OP_invokespecial 0xb7
#define OP_invokestatic 0xb8
#define OP_invokevirtual 0xb6
#define OP_ior 0x80
#define OP_irem 0x70
#define OP_ireturn 0xac
#define OP_ishl 0x78
#define OP_ishr 0x7a
#define OP_istore 0x36
#define OP_istore_0 0x3b
#define OP_istore_1 0x3c
#define OP_istore_2 0x3d
#define OP_istore_3 0x3e
#define OP_isub 0x64
#define OP_iushr 0x7c
#define OP_ixor 0x82
#define OP_jsr 0xa8
#define OP_jsr_w 0xc9
#define OP_l2d 0x8a
#define OP_l2f 0x89
#define OP_l2i 0x88
#define OP_ladd 0x61
#define OP_laload 0x2f
#define OP_land 0x7f
#define OP_lastore 0x50
#define OP_lcmp 0x94
#define OP_lconst_0 0x9
#define OP_lconst_1 0x0a
#define OP_ldc 0x12
#define OP_ldc_w 0x13
#define OP_ldc2_w 0x14
#define OP_ldiv 0x6d
#define OP_lload 0x16
#define OP_lload_0 0x1e
#define OP_lload_1 0x1f
#define OP_lload_2 0x20
#define OP_lload_3 0x21
#define OP_lmul 0x69
#define OP_lneg 0x75
#define OP_lookupswitch 0xab
#define OP_lor 0x81
#define OP_lrem 0x71
#define OP_lreturn 0xad
#define OP_lshl 0x79
#define OP_lshr 0x7b
#define OP_lstore 0x37
#define OP_lstore_0 0x3f
#define OP_lstore_1 0x40
#define OP_lstore_2 0x41
#define OP_lstore_3 0x42
#define OP_lsub 0x65
#define OP_lushr 0x7d
#define OP_lxor 0x83
#define OP_monitorenter 0xc2
#define OP_monitorexit 0xc3
#define OP_multianewarray 0xc5
#define OP_new 0xbb
#define OP_newarray 0xbc
#define OP_nop 0x0
#define OP_pop 0x57
#define OP_pop2 0x58
#define OP_putfield 0xb5
#define OP_putstatic 0xb3
#define OP_ret 0xa9
#define OP_return 0xb1
#define OP_saload 0x35
#define OP_sastore 0x56
#define OP_sipush 0x11
#define OP_swap 0x5f
#define OP_tableswitch 0xaa
#define OP_wide 0xc4


//--------------------------------------------------------------------------------------------------
/*!
 * Metodo que retorna uma string com o nome do opcode
 *
 * \param u1 opcode Codigo do opcode.
 * \return String contendo o nome do opcode.
 */
EXTO char* getOpcodeName(u1 opcode);

//--------------------------------------------------------------------------------------------------
/*!
 * Metodo que retorna um short com a quantidade de atributos (bytes adicionais) do opcode
 *
 * \param u1 opcode Codigo do opcode.
 * \param arguments Referencia para os argumentos da instrucao.
 * \param codeBegin Referencia o inicio do vetor de instrucoes.
 * \return Quantidade de bytes adicionais exigidos pelo opcode (-1 significa tamanho variavel).
 */
EXTO short getOpcodeAttributesNumber(u1 opcode, u1* arguments, u1* codeBegin);

#endif