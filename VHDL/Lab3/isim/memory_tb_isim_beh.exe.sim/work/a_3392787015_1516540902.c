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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/PC/Documents/Obsidian Vault/University Courses/Year 3/Semester 1/EEE40002/Labs/Lab 3/VHDL/Lab3/Part_1.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3392787015_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    int t49;
    char *t50;
    int t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    t6 = (t0 + 7030);
    t8 = (4U != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 3712);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (32U / 4U);
    xsi_mem_set_data(t5, t6, 4U, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t8 = (t4 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 6880U);
    t15 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t16 = (t15 - 0);
    t9 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, t15);
    t17 = (4U * t9);
    t18 = (0 + t17);
    t6 = (t2 + t18);
    t7 = (t0 + 3840);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7041);
    t15 = xsi_mem_cmp(t1, t2, 4U);
    if (t15 == 1)
        goto LAB13;

LAB29:    t6 = (t0 + 7045);
    t16 = xsi_mem_cmp(t6, t2, 4U);
    if (t16 == 1)
        goto LAB14;

LAB30:    t10 = (t0 + 7049);
    t19 = xsi_mem_cmp(t10, t2, 4U);
    if (t19 == 1)
        goto LAB15;

LAB31:    t12 = (t0 + 7053);
    t20 = xsi_mem_cmp(t12, t2, 4U);
    if (t20 == 1)
        goto LAB16;

LAB32:    t14 = (t0 + 7057);
    t22 = xsi_mem_cmp(t14, t2, 4U);
    if (t22 == 1)
        goto LAB17;

LAB33:    t23 = (t0 + 7061);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB18;

LAB34:    t26 = (t0 + 7065);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB19;

LAB35:    t29 = (t0 + 7069);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB20;

LAB36:    t32 = (t0 + 7073);
    t34 = xsi_mem_cmp(t32, t2, 4U);
    if (t34 == 1)
        goto LAB21;

LAB37:    t35 = (t0 + 7077);
    t37 = xsi_mem_cmp(t35, t2, 4U);
    if (t37 == 1)
        goto LAB22;

LAB38:    t38 = (t0 + 7081);
    t40 = xsi_mem_cmp(t38, t2, 4U);
    if (t40 == 1)
        goto LAB23;

LAB39:    t41 = (t0 + 7085);
    t43 = xsi_mem_cmp(t41, t2, 4U);
    if (t43 == 1)
        goto LAB24;

LAB40:    t44 = (t0 + 7089);
    t46 = xsi_mem_cmp(t44, t2, 4U);
    if (t46 == 1)
        goto LAB25;

LAB41:    t47 = (t0 + 7093);
    t49 = xsi_mem_cmp(t47, t2, 4U);
    if (t49 == 1)
        goto LAB26;

LAB42:    t50 = (t0 + 7097);
    t52 = xsi_mem_cmp(t50, t2, 4U);
    if (t52 == 1)
        goto LAB27;

LAB43:
LAB28:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 7206);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB12:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t2 = (t0 + 6880U);
    t15 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t2);
    t16 = (t15 - 0);
    t9 = (t16 * 1);
    t17 = (4U * t9);
    t18 = (0U + t17);
    t10 = (t0 + 3712);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 4U);
    xsi_driver_first_trans_delta(t10, t18, 4U, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 7034);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB10;

LAB13:    xsi_set_current_line(32, ng0);
    t53 = (t0 + 7101);
    t55 = (t0 + 3776);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t59, t53, 7U);
    xsi_driver_first_trans_fast_port(t55);
    goto LAB12;

LAB14:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 7108);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB15:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 7115);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB16:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 7122);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB17:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 7129);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB18:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 7136);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB19:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 7143);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB20:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 7150);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB21:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 7157);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB22:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 7164);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB23:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 7171);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB24:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7178);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB25:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 7185);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB26:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 7192);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB27:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 7199);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB12;

LAB44:;
}


extern void work_a_3392787015_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3392787015_1516540902_p_0};
	xsi_register_didat("work_a_3392787015_1516540902", "isim/memory_tb_isim_beh.exe.sim/work/a_3392787015_1516540902.didat");
	xsi_register_executes(pe);
}
