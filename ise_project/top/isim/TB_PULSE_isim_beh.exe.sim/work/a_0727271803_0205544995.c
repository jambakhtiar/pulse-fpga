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
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_1205625289178583237_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_4508456675110171612_3536714472(char *, char *, char *, int );


static void work_a_0727271803_0205544995_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(60, ng0);

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

static void work_a_0727271803_0205544995_p_1(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t7;
    char *t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t2 = (t0 + 7328U);
    t8 = ieee_p_3499444699_sub_1205625289178583237_3536714472(IEEE_P_3499444699, t6, t7, t2, 1);
    t9 = (8 - 1);
    t10 = ieee_p_3499444699_sub_4508456675110171612_3536714472(IEEE_P_3499444699, t8, t6, t9);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t16 = (t0 + 4800);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 4624);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 4800);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0727271803_0205544995_p_2(char *t0)
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

LAB2:    xsi_set_current_line(67, ng0);

LAB6:    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4640);
    *((int *)t5) = 0;
    xsi_set_current_line(68, ng0);
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

LAB8:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4864);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4864);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 4864);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0727271803_0205544995_p_3(char *t0)
{
    char t15[16];
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);

LAB6:    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4656);
    *((int *)t5) = 0;
    xsi_set_current_line(83, ng0);
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
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t10 = (t4 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t10 = *((unsigned char *)t3);
    t12 = (t10 == (unsigned char)3);
    if (t12 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7370);
    t6 = (t0 + 4992);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB9;

LAB11:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 7328U);
    t7 = ieee_p_3499444699_sub_1205625289178583237_3536714472(IEEE_P_3499444699, t15, t6, t2, 1);
    t8 = (t15 + 12U);
    t16 = *((unsigned int *)t8);
    t17 = (1U * t16);
    t18 = (3U != t17);
    if (t18 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 4992);
    t11 = (t9 + 56U);
    t19 = *((char **)t11);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 3U);
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

LAB13:    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)2);
    t4 = t14;
    goto LAB15;

LAB16:    xsi_size_not_matching(3U, t17, 0);
    goto LAB17;

}


extern void work_a_0727271803_0205544995_init()
{
	static char *pe[] = {(void *)work_a_0727271803_0205544995_p_0,(void *)work_a_0727271803_0205544995_p_1,(void *)work_a_0727271803_0205544995_p_2,(void *)work_a_0727271803_0205544995_p_3};
	xsi_register_didat("work_a_0727271803_0205544995", "isim/TB_PULSE_isim_beh.exe.sim/work/a_0727271803_0205544995.didat");
	xsi_register_executes(pe);
}
