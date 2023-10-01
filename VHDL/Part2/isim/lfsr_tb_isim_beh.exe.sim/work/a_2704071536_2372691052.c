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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/PC/Documents/Obsidian Vault/University Courses/Year 3/Semester 1/EEE40002/Labs/Lab 3/VHDL/Part2/Part2_final.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_2704071536_2372691052_p_0(char *t0)
{
    char t43[16];
    char t45[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned char t40;
    unsigned char t41;
    char *t42;
    char *t44;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    unsigned char t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 1960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)3, 16U);
    t6 = (t0 + 2012);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 960U);
    t6 = *((char **)t2);
    t12 = (15 - 14);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t6 + t14);
    t7 = (t0 + 960U);
    t8 = *((char **)t7);
    t15 = (15 - 15);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t7 = (t8 + t18);
    t19 = *((unsigned char *)t7);
    t9 = (t0 + 960U);
    t10 = *((char **)t9);
    t20 = (13 - 15);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t9 = (t10 + t23);
    t24 = *((unsigned char *)t9);
    t25 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t19, t24);
    t26 = (t0 + 960U);
    t27 = *((char **)t26);
    t28 = (12 - 15);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t26 = (t27 + t31);
    t32 = *((unsigned char *)t26);
    t33 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t25, t32);
    t34 = (t0 + 960U);
    t35 = *((char **)t34);
    t36 = (4 - 15);
    t37 = (t36 * -1);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t34 = (t35 + t39);
    t40 = *((unsigned char *)t34);
    t41 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t33, t40);
    t44 = ((IEEE_P_2592010699) + 2332);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 14;
    t47 = (t46 + 4U);
    *((int *)t47) = 0;
    t47 = (t46 + 8U);
    *((int *)t47) = -1;
    t48 = (0 - 14);
    t49 = (t48 * -1);
    t49 = (t49 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t49;
    t42 = xsi_base_array_concat(t42, t43, t44, (char)97, t2, t45, (char)99, t41, (char)101);
    t49 = (15U + 1U);
    t50 = (16U != t49);
    if (t50 == 1)
        goto LAB10;

LAB11:    t47 = (t0 + 2012);
    t51 = (t47 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memcpy(t54, t42, 16U);
    xsi_driver_first_trans_fast(t47);
    goto LAB8;

LAB10:    xsi_size_not_matching(16U, t49, 0);
    goto LAB11;

}

static void work_a_2704071536_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 2048);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 1968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2704071536_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2704071536_2372691052_p_0,(void *)work_a_2704071536_2372691052_p_1};
	xsi_register_didat("work_a_2704071536_2372691052", "isim/lfsr_tb_isim_beh.exe.sim/work/a_2704071536_2372691052.didat");
	xsi_register_executes(pe);
}
