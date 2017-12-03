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
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/mcu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Cont_15_0(char *t0)
{
    char t5[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 1244U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t5 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB7;

LAB8:
LAB9:    t61 = (t0 + 2480);
    t62 = (t61 + 32U);
    t63 = *((char **)t62);
    t64 = (t63 + 40U);
    t65 = *((char **)t64);
    memset(t65, 0, 8);
    t66 = 1U;
    t67 = t66;
    t68 = (t34 + 4);
    t69 = *((unsigned int *)t34);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 | t66);
    t73 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t73 | t67);
    xsi_driver_vfirst_trans(t61, 0, 0);
    t74 = (t0 + 2428);
    *((int *)t74) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t5 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t5);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB9;

}

static void Always_20_1(char *t0)
{
    char t13[8];
    char t29[8];
    char t30[8];
    char t47[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t48;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2436);
    *((int *)t2) = 1;
    t3 = (t0 + 2260);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(37, ng0);

LAB62:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);

LAB43:
LAB22:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(21, ng0);

LAB9:    xsi_set_current_line(22, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB8;

LAB10:    xsi_set_current_line(25, ng0);

LAB13:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t4) == 0)
        goto LAB14;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB17:    t12 = (t13 + 4);
    t19 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    *((unsigned int *)t13) = t21;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB19;

LAB18:    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 1U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1U);
    t28 = (t0 + 1564);
    xsi_vlogvar_assign_value(t28, t13, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB12;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB19:    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t22 | t23);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t12) = (t24 | t25);
    goto LAB18;

LAB20:    xsi_set_current_line(29, ng0);

LAB23:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB27;

LAB24:    if (t24 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t30) = 1;

LAB27:    memset(t29, 0, 8);
    t28 = (t30 + 4);
    t27 = *((unsigned int *)t28);
    t31 = (~(t27));
    t32 = *((unsigned int *)t30);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t28) != 0)
        goto LAB30;

LAB31:    t36 = (t29 + 4);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB32;

LAB33:    t41 = *((unsigned int *)t29);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t36) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t29) > 0)
        goto LAB38;

LAB39:    memcpy(t13, t47, 8);

LAB40:    t48 = (t0 + 1472);
    xsi_vlogvar_assign_value(t48, t13, 0, 0, 2);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB26:    t19 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t29) = 1;
    goto LAB31;

LAB30:    t35 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB32:    t40 = ((char*)((ng3)));
    goto LAB33;

LAB34:    t45 = (t0 + 1152U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng4)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 2, t46, 2, t45, 2);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t13, 2, t40, 2, t47, 2);
    goto LAB40;

LAB38:    memcpy(t13, t40, 8);
    goto LAB40;

LAB41:    xsi_set_current_line(33, ng0);

LAB44:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t20 = (t17 ^ t18);
    t21 = (t16 | t20);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB48;

LAB45:    if (t24 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t30) = 1;

LAB48:    memset(t29, 0, 8);
    t28 = (t30 + 4);
    t27 = *((unsigned int *)t28);
    t31 = (~(t27));
    t32 = *((unsigned int *)t30);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t28) != 0)
        goto LAB51;

LAB52:    t36 = (t29 + 4);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB53;

LAB54:    t41 = *((unsigned int *)t29);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t36) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t29) > 0)
        goto LAB59;

LAB60:    memcpy(t13, t47, 8);

LAB61:    t48 = (t0 + 1472);
    xsi_vlogvar_assign_value(t48, t13, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB43;

LAB47:    t19 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t29) = 1;
    goto LAB52;

LAB51:    t35 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB53:    t40 = ((char*)((ng3)));
    goto LAB54;

LAB55:    t45 = (t0 + 1152U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng4)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 2, t46, 2, t45, 2);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t13, 2, t40, 2, t47, 2);
    goto LAB61;

LAB59:    memcpy(t13, t40, 8);
    goto LAB61;

}


extern void work_m_00000000002629785510_0754342909_init()
{
	static char *pe[] = {(void *)Cont_15_0,(void *)Always_20_1};
	xsi_register_didat("work_m_00000000002629785510_0754342909", "isim/music_player_tb_isim_beh.exe.sim/work/m_00000000002629785510_0754342909.didat");
	xsi_register_executes(pe);
}
