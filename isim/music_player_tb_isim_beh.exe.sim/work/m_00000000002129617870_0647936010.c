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
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/ff_lib.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 1708U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1904);
    *((int *)t2) = 1;
    t3 = (t0 + 1736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1184);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 956U);
    t5 = *((char **)t4);
    t4 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 10, 0LL);
    goto LAB10;

}


extern void work_m_00000000002129617870_0647936010_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000002129617870_0647936010", "isim/music_player_tb_isim_beh.exe.sim/work/m_00000000002129617870_0647936010.didat");
	xsi_register_executes(pe);
}
