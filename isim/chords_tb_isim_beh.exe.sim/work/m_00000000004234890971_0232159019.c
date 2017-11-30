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
static const char *ng0 = "//afs/ir/class/ee108/groups/01/Final_Project/chords.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};



static void Cont_21_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t9[8];
    char t13[8];
    char t14[8];
    char t16[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1520U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t4, 18, 18, 2U, t6, 16, t2, 2);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_arith_rshift(t7, 18, t4, 18, t5, 32);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1612U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t9, 18, 18, 2U, t12, 16, t10, 2);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_arith_rshift(t13, 18, t9, 18, t11, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 18, t7, 18, t13, 18);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 1704U);
    t19 = *((char **)t18);
    xsi_vlogtype_concat(t16, 18, 18, 2U, t19, 16, t17, 2);
    t18 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_arith_rshift(t20, 18, t16, 18, t18, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 18, t14, 18, t20, 18);
    t22 = (t0 + 3704);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 262143U;
    t28 = t27;
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 17);
    t35 = (t0 + 3636);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Always_26_1(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3644);
    *((int *)t2) = 1;
    t3 = (t0 + 3180);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1796U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1060U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t11, 3, 3, 3U, t15, 1, t13, 1, t12, 1);
    t14 = (t0 + 2484);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 3);
    goto LAB8;

LAB9:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1060U);
    t12 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 3, 3, 3U, t5, 1, t12, 1, t4, 1);
    t13 = (t0 + 2484);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 3);
    goto LAB11;

LAB12:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 3, 3, 3U, t12, 1, t4, 1, t5, 1);
    t13 = (t0 + 2484);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 3);
    goto LAB14;

}

static void Always_33_2(char *t0)
{
    char t4[8];
    char t8[8];
    char t41[8];
    char t95[8];
    char t108[8];
    char t133[8];
    char t184[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    int t106;
    int t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3652);
    *((int *)t2) = 1;
    t3 = (t0 + 3324);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t5 = (t0 + 1796U);
    t6 = *((char **)t5);
    t5 = (t0 + 1888U);
    t7 = *((char **)t5);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t5 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB6;

LAB7:
LAB8:    t39 = (t0 + 1980U);
    t40 = *((char **)t39);
    t42 = *((unsigned int *)t8);
    t43 = *((unsigned int *)t40);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t39 = (t8 + 4);
    t45 = (t40 + 4);
    t46 = (t41 + 4);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB9;

LAB10:
LAB11:    memset(t4, 0, 8);
    t72 = (t41 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t41);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t72) == 0)
        goto LAB12;

LAB14:    t78 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t78) = 1;

LAB15:    t79 = (t4 + 4);
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t82 = (~(t81));
    *((unsigned int *)t4) = t82;
    *((unsigned int *)t79) = 0;
    if (*((unsigned int *)t80) != 0)
        goto LAB17;

LAB16:    t87 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t87 & 1U);
    t88 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t88 & 1U);
    t89 = (t4 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t4);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1796U);
    t3 = *((char **)t2);
    t2 = (t0 + 1888U);
    t5 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB21;

LAB22:
LAB23:    t21 = (t0 + 1888U);
    t22 = *((char **)t21);
    t21 = (t0 + 1980U);
    t39 = *((char **)t21);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t39);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t21 = (t22 + 4);
    t40 = (t39 + 4);
    t45 = (t41 + 4);
    t47 = *((unsigned int *)t21);
    t48 = *((unsigned int *)t40);
    t49 = (t47 | t48);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB24;

LAB25:
LAB26:    t73 = *((unsigned int *)t8);
    t74 = *((unsigned int *)t41);
    t75 = (t73 | t74);
    *((unsigned int *)t95) = t75;
    t55 = (t8 + 4);
    t72 = (t41 + 4);
    t78 = (t95 + 4);
    t76 = *((unsigned int *)t55);
    t77 = *((unsigned int *)t72);
    t81 = (t76 | t77);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB27;

LAB28:
LAB29:    t89 = (t0 + 1796U);
    t96 = *((char **)t89);
    t89 = (t0 + 1980U);
    t97 = *((char **)t89);
    t101 = *((unsigned int *)t96);
    t102 = *((unsigned int *)t97);
    t103 = (t101 & t102);
    *((unsigned int *)t108) = t103;
    t89 = (t96 + 4);
    t98 = (t97 + 4);
    t105 = (t108 + 4);
    t104 = *((unsigned int *)t89);
    t109 = *((unsigned int *)t98);
    t110 = (t104 | t109);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t105);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB30;

LAB31:
LAB32:    t134 = *((unsigned int *)t95);
    t135 = *((unsigned int *)t108);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = (t95 + 4);
    t138 = (t108 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t4, 0, 8);
    t161 = (t133 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t133);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t161) == 0)
        goto LAB36;

LAB38:    t167 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t167) = 1;

LAB39:    t168 = (t4 + 4);
    t169 = (t133 + 4);
    t170 = *((unsigned int *)t133);
    t171 = (~(t170));
    *((unsigned int *)t4) = t171;
    *((unsigned int *)t168) = 0;
    if (*((unsigned int *)t169) != 0)
        goto LAB41;

LAB40:    t176 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t176 & 1U);
    t177 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t177 & 1U);
    t178 = (t4 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (~(t179));
    t181 = *((unsigned int *)t4);
    t182 = (t181 & t180);
    t183 = (t182 != 0);
    if (t183 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2164U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t14 = (t11 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 65535U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 65535U);
    t6 = (t0 + 2392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 16);

LAB44:
LAB20:    goto LAB2;

LAB6:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t6 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB8;

LAB9:    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t41) = (t52 | t53);
    t54 = (t8 + 4);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t8);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t66);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    goto LAB11;

LAB12:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB17:    t83 = *((unsigned int *)t4);
    t84 = *((unsigned int *)t80);
    *((unsigned int *)t4) = (t83 | t84);
    t85 = *((unsigned int *)t79);
    t86 = *((unsigned int *)t80);
    *((unsigned int *)t79) = (t85 | t86);
    goto LAB16;

LAB18:    xsi_set_current_line(35, ng0);
    t96 = (t0 + 2164U);
    t97 = *((char **)t96);
    memset(t95, 0, 8);
    t96 = (t95 + 4);
    t98 = (t97 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (t99 >> 2);
    *((unsigned int *)t95) = t100;
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 2);
    *((unsigned int *)t96) = t102;
    t103 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t103 & 65535U);
    t104 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t104 & 65535U);
    t105 = (t0 + 2392);
    xsi_vlogvar_assign_value(t105, t95, 0, 0, 16);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t12 = (t3 + 4);
    t13 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB23;

LAB24:    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t52 | t53);
    t46 = (t22 + 4);
    t54 = (t39 + 4);
    t56 = *((unsigned int *)t22);
    t57 = (~(t56));
    t58 = *((unsigned int *)t46);
    t59 = (~(t58));
    t60 = *((unsigned int *)t39);
    t61 = (~(t60));
    t62 = *((unsigned int *)t54);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t66);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    goto LAB26;

LAB27:    t84 = *((unsigned int *)t95);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t95) = (t84 | t85);
    t79 = (t8 + 4);
    t80 = (t41 + 4);
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = *((unsigned int *)t8);
    t106 = (t88 & t87);
    t90 = *((unsigned int *)t80);
    t91 = (~(t90));
    t92 = *((unsigned int *)t41);
    t107 = (t92 & t91);
    t93 = (~(t106));
    t94 = (~(t107));
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t93);
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t94);
    goto LAB29;

LAB30:    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t105);
    *((unsigned int *)t108) = (t113 | t114);
    t115 = (t96 + 4);
    t116 = (t97 + 4);
    t117 = *((unsigned int *)t96);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t97);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t129 & t127);
    t130 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t127);
    t132 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t132 & t128);
    goto LAB32;

LAB33:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t95 + 4);
    t148 = (t108 + 4);
    t149 = *((unsigned int *)t147);
    t150 = (~(t149));
    t151 = *((unsigned int *)t95);
    t152 = (t151 & t150);
    t153 = *((unsigned int *)t148);
    t154 = (~(t153));
    t155 = *((unsigned int *)t108);
    t156 = (t155 & t154);
    t157 = (~(t152));
    t158 = (~(t156));
    t159 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t159 & t157);
    t160 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t160 & t158);
    goto LAB35;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB41:    t172 = *((unsigned int *)t4);
    t173 = *((unsigned int *)t169);
    *((unsigned int *)t4) = (t172 | t173);
    t174 = *((unsigned int *)t168);
    t175 = *((unsigned int *)t169);
    *((unsigned int *)t168) = (t174 | t175);
    goto LAB40;

LAB42:    xsi_set_current_line(37, ng0);
    t185 = (t0 + 2164U);
    t186 = *((char **)t185);
    memset(t184, 0, 8);
    t185 = (t184 + 4);
    t187 = (t186 + 4);
    t188 = *((unsigned int *)t186);
    t189 = (t188 >> 1);
    *((unsigned int *)t184) = t189;
    t190 = *((unsigned int *)t187);
    t191 = (t190 >> 1);
    *((unsigned int *)t185) = t191;
    t192 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t192 & 65535U);
    t193 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t193 & 65535U);
    t194 = (t0 + 2392);
    xsi_vlogvar_assign_value(t194, t184, 0, 0, 16);
    goto LAB44;

}

static void Cont_83_3(char *t0)
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

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1796U);
    t3 = *((char **)t2);
    t2 = (t0 + 1888U);
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
LAB6:    t32 = (t0 + 1980U);
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
LAB9:    t61 = (t0 + 3740);
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
    t74 = (t0 + 3660);
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


extern void work_m_00000000004234890971_0232159019_init()
{
	static char *pe[] = {(void *)Cont_21_0,(void *)Always_26_1,(void *)Always_33_2,(void *)Cont_83_3};
	xsi_register_didat("work_m_00000000004234890971_0232159019", "isim/chords_tb_isim_beh.exe.sim/work/m_00000000004234890971_0232159019.didat");
	xsi_register_executes(pe);
}
