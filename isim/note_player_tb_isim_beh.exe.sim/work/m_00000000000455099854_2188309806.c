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
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/note_player_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {10U, 0U};



static void Initial_32_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4660);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 4660);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2172);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(35, ng0);
    t10 = (t0 + 2172);
    xsi_process_wait(t10, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(35, ng0);
    t12 = (t0 + 1196);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 1196);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 4660);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

LAB16:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1196);
    t8 = (t3 + 36U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t16 = (t6 & t5);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t11 + 4);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB21:    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t15 = (t0 + 1196);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    goto LAB15;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t20 | t24);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB21;

LAB23:    goto LAB1;

}

static void Initial_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2900);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(44, ng0);

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2316);
    xsi_process_wait(t2, 600000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2908);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2916);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB6;

LAB11:    goto LAB1;

}

static void Initial_54_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 2560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2924);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2460);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2932);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2940);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);

LAB9:    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;

LAB13:    t11 = (t4 + 4);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    *((unsigned int *)t4) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB15;

LAB14:    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2460);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB15:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB14;

LAB16:    xsi_set_current_line(65, ng0);
    t27 = (t0 + 2948);
    *((int *)t27) = 1;
    t28 = (t0 + 2588);
    *((char **)t28) = t27;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    goto LAB9;

LAB19:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2956);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2964);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2972);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2980);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2460);
    xsi_process_wait(t2, 32000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2988);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2460);
    xsi_process_wait(t2, 16000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2996);
    *((int *)t2) = 1;
    t3 = (t0 + 2588);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2460);
    xsi_process_wait(t2, 300000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    goto LAB1;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 3040);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000000455099854_2188309806_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Initial_40_1,(void *)Initial_54_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000455099854_2188309806", "isim/note_player_tb_isim_beh.exe.sim/work/m_00000000000455099854_2188309806.didat");
	xsi_register_executes(pe);
}
