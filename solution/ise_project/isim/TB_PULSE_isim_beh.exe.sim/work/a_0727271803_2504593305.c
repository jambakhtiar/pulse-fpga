/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/jam/Downloads/pulse_project/vhdl_additional/pulse.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_1205625289178583237_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_4508456675110171612_3536714472(char *, char *, char *, int );


static void work_a_0727271803_2504593305_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(22, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4736);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 4608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0727271803_2504593305_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4624);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0727271803_2504593305_p_2(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 4040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB6:    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4640);
    *((int *)t5) = 0;
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7328U);
    t5 = ieee_p_3499444699_sub_1205625289178583237_3536714472(IEEE_P_3499444699, t10, t3, t2, 1);
    t11 = (8 - 1);
    t4 = ieee_p_3499444699_sub_4508456675110171612_3536714472(IEEE_P_3499444699, t5, t10, t11);
    if (t4 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4864);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4864);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 4864);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0727271803_2504593305_p_3(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);

LAB6:    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4656);
    *((int *)t5) = 0;
    xsi_set_current_line(43, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t3 = t2;
    memset(t3, (unsigned char)2, 3U);
    t5 = (t0 + 4992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 7328U);
    t7 = ieee_p_3499444699_sub_1205625289178583237_3536714472(IEEE_P_3499444699, t14, t6, t2, 1);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t17 = (3U != t16);
    if (t17 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 4992);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 3U);
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

LAB11:    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t4 = t13;
    goto LAB13;

LAB14:    xsi_size_not_matching(3U, t16, 0);
    goto LAB15;

}


extern void work_a_0727271803_2504593305_init()
{
	static char *pe[] = {(void *)work_a_0727271803_2504593305_p_0,(void *)work_a_0727271803_2504593305_p_1,(void *)work_a_0727271803_2504593305_p_2,(void *)work_a_0727271803_2504593305_p_3};
	xsi_register_didat("work_a_0727271803_2504593305", "isim/TB_PULSE_isim_beh.exe.sim/work/a_0727271803_2504593305.didat");
	xsi_register_executes(pe);
}
