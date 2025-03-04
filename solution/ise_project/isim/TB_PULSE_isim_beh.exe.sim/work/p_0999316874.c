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
extern char *STD_STANDARD;



int work_p_0999316874_sub_15737221678923798844_1303411769(char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = xsi_vhdl_pow(2, t2);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t12;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t0 = t12;

LAB1:    return t0;
LAB2:;
}

int work_p_0999316874_sub_489564917175431425_1303411769(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t9[8];
    char t15[8];
    int t0;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    int t24;
    int t25;
    char *t26;

LAB0:    t5 = (-(1));
    t6 = (t3 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = t5;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t3 + 124U);
    t13 = ((STD_STANDARD) + 0);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    *((unsigned char *)t15) = (unsigned char)0;
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 1U;
    t18 = (t4 + 4U);
    *((int *)t18) = t2;

LAB2:    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = (!(t21));
    if (t22 != 0)
        goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t5 = *((int *)t8);
    t0 = t5;

LAB1:    return t0;
LAB3:    t19 = (t6 + 56U);
    t23 = *((char **)t19);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t19 = (t6 + 56U);
    t26 = *((char **)t19);
    t19 = (t26 + 0);
    *((int *)t19) = t25;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t5 = *((int *)t8);
    t24 = xsi_vhdl_pow(2, t5);
    t21 = (t24 >= t2);
    if (t21 != 0)
        goto LAB6;

LAB8:
LAB7:    goto LAB2;

LAB4:;
LAB6:    t7 = (t12 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((unsigned char *)t7) = (unsigned char)1;
    goto LAB7;

LAB9:;
}


extern void work_p_0999316874_init()
{
	static char *se[] = {(void *)work_p_0999316874_sub_15737221678923798844_1303411769,(void *)work_p_0999316874_sub_489564917175431425_1303411769};
	xsi_register_didat("work_p_0999316874", "isim/TB_PULSE_isim_beh.exe.sim/work/p_0999316874.didat");
	xsi_register_subprogram_executes(se);
}
