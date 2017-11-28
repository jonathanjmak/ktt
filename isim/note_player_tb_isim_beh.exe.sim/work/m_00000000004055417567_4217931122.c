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
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/note_timer.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};



static void Always_16_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
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

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2336);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
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

LAB7:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);

LAB34:
LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(17, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1472);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    goto LAB8;

LAB9:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 6);
    goto LAB11;

LAB12:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t4);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB18:    memset(t14, 0, 8);
    t29 = (t15 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t29) != 0)
        goto LAB21;

LAB22:    t36 = (t14 + 4);
    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t36) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t14) > 0)
        goto LAB29;

LAB30:    memcpy(t13, t47, 8);

LAB31:    t48 = (t0 + 1472);
    xsi_vlogvar_assign_value(t48, t13, 0, 0, 6);
    goto LAB14;

LAB17:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB21:    t35 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB23:    t40 = ((char*)((ng2)));
    goto LAB24;

LAB25:    t45 = (t0 + 1244U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t46, 6, t45, 32);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t13, 32, t40, 32, t47, 32);
    goto LAB31;

LAB29:    memcpy(t13, t40, 8);
    goto LAB31;

LAB32:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 6);
    goto LAB34;

}

static void Cont_24_1(char *t0)
{
    char t4[8];
    char t20[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t21 = (t0 + 784U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t22 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t21) == 0)
        goto LAB8;

LAB10:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;

LAB11:    t29 = (t20 + 4);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB13;

LAB12:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 1U);
    t40 = *((unsigned int *)t4);
    t41 = *((unsigned int *)t20);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t4 + 4);
    t44 = (t20 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB14;

LAB15:
LAB16:    t71 = (t0 + 2388);
    t72 = (t71 + 32U);
    t73 = *((char **)t72);
    t74 = (t73 + 40U);
    t75 = *((char **)t74);
    memset(t75, 0, 8);
    t76 = 1U;
    t77 = t76;
    t78 = (t39 + 4);
    t79 = *((unsigned int *)t39);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t78);
    t77 = (t77 & t80);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 | t76);
    t83 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t83 | t77);
    xsi_driver_vfirst_trans(t71, 0, 0);
    t84 = (t0 + 2344);
    *((int *)t84) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB13:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB12;

LAB14:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t4 + 4);
    t54 = (t20 + 4);
    t55 = *((unsigned int *)t4);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t20);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB16;

}


extern void work_m_00000000004055417567_4217931122_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Cont_24_1};
	xsi_register_didat("work_m_00000000004055417567_4217931122", "isim/note_player_tb_isim_beh.exe.sim/work/m_00000000004055417567_4217931122.didat");
	xsi_register_executes(pe);
}
